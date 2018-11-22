int main()
{
	//char c = 'z';
	//char* cp = &c;
	//int ia[10] = {1, 2, 3};
	//int (&ir)[10] = ia;
	//char** cpp = &cp;
	char c1[] = "abc";
	char c2[] = "def";
	char c3[] = "ghj";
	char* cstr[] = {c1, c2, c3};
	char* (*cstrp)[3] = &cstr;
	//const int n = 0;
	//const int* np = &n;
	//int i = 1;
	//int *const icp = &i;
}

