#include <iostream>
#include <sstream>
#include <string>
#include <map>
#include <cctype>

using namespace std;

// globals
// token values accepted by the calculator
enum class Token_value {
	name,	number,	end,
	plus='+',	minus='-',	mul='*',	div='/',
	print=';',	assign='=',	lp='(',	rp=')'
};
Token_value curr_tok = Token_value::print;

// function declarations for the calculator
double expr(bool); // add and subtract
double term(bool); // multiply and divide
double prim(bool); // handle primaries
Token_value get_token();
double error(const string&);

// the symbol table
map<string, double> table;

// function definitions
double expr(bool get) // add and subtract
{
	double left = term(get);

	for (;;) {
		switch (curr_tok) {
			case Token_value::plus:
				left += term(true);
				break;
			case Token_value::minus:
				left -= term(true);
				break;
			default:
				return left;
		}
	}
}

double term(bool get) // multiply and divide
{
	double left = prim(get);

	for (;;) {
		switch (curr_tok) {
			case Token_value::mul:
				left *= prim(true);
				break;
			case Token_value::div:
				if (double d = prim(true)) {
					left /= d;
					break;
				}
				return error("divide by 0");
			default:
				return left;
		}
	}
}

// used by 'prim()' and 'get_token()'
double number_value;
string string_value;
double prim(bool get) // handle primaries
{
	if (get) get_token();

	switch (curr_tok) {
		case Token_value::number: // floating point constant
			{  double v = number_value;
				get_token();
				return v;
			}
		case Token_value::name:
			{  double& v = table[string_value];
				if (get_token() == Token_value::assign) v = expr(true);
				return v;
			}
		case Token_value::minus: // unary minus
			return -prim(true);
		case Token_value::lp:
			{  double e = expr(true);
				if (curr_tok != Token_value::rp)
					return error("')' expected");
				get_token(); // eat ')'
				return e;
			}
		default:
			return error("primary expected");
	}
}

Token_value get_token(istream& is)
{
	char ch = 0;

	//is >> ch;
	do { // skip whitespace except '\n'
		if (!is.get(ch)) return curr_tok = Token_value::end;
	} while (ch != '\n' && isspace(ch));

	switch (ch) {
		case 0:
			return curr_tok = Token_value::end; // assign and return
		case ';':
		case '*':
		case '/':
		case '+':
		case '-':
		case '(':
		case ')':
		case '=':
			return curr_tok = Token_value(ch);
		case '0': case '1': case '2': case '3': case '4':
		case '5': case '6': case '7': case '8': case '9':
		case '.':
			is.putback(ch);
			is >> number_value;
			return curr_tok = Token_value::number;
		default: // name, name =, or error
			if (isalpha(ch)) {
				is.putback(ch);
				is >> string_value;
				return curr_tok = Token_value::name;
			}
			error("bad token");
			return curr_tok = Token_value::print;
	}
}

// used by 'error'
int no_of_errors;
double error(const string& s)
{
	++no_of_errors;
	cerr << "error: " << s << '\n';
	return 1.0;
}

int main(int argc, char* argv[])
{
	istream* input; // pointer to input stream
	switch (argc) {
		case 1: // read from standard input
			input = &cin;
			break;
		case 2: // read argument string
			input = new istringstream(argv[1]);
			break;
		default:
			error("too many arguments");
			return 1;
	}

	// insert predefined names
	table["pi"] = 3.1415926535897932385;
	table["e"]  = 2.7182818284590452454;

	while (*input) {
		get_token();
		if (curr_tok == Token_value::end) break;
		if (curr_tok == Token_value::print) continue;
		cout << expr(false) << '\n';
	}

	if (input != &cin) delete input;
	return no_of_errors;
}

