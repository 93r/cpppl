/* What's wrong with these macro definitions? */

// uses '='
#define PI = 3.141593;

// macro text should be parentheses
// parameters a and b should be parentheses
// MAX(a, b) should be an inline function (maybe a template)
#define MAX(a, b) a>b?a:b

// macros don't allow recursion
#define fac(a) (a)*fac((a)-1)

