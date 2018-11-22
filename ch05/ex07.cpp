const char* months[] = {
	"jan", "feb", "mar", "apr", "mai", "jun",
	"jul", "aug", "sep", "oct", "nov", "dez"
};

int days_per_month[] = {
	31, 28, 31, 30, 31, 30, 
	31, 31, 30, 31, 30, 31
};

struct {
	const char* name_of_month;
	int day_per_month;
}
months_and_days_per_month[] = {
	{"jan", 31}, {"feb", 28}, {"mar", 31}, {"apr", 30},
	{"mai", 31}, {"jun", 30}, {"jul", 31}, {"aug", 31},
	{"sep", 30}, {"oct", 31}, {"nov", 30}, {"dez", 31}
};

int main () {}
