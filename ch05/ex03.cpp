/*
typedef unsigned char uc_t;
typedef const unsigned char cuc_t;
typedef int* pi_t;
typedef char** ppc_t;
typedef char (*pac_t)[];
typedef int* a7pi_t[7];
typedef int* (*pa7pi_t)[7];
typedef int* a8a7pi_t[8][7];
*/

using uc_t = unsigned char;
using cuc_t = const unsigned char;
using pi_t = int*;
using ppc_t = char**;
using pac_t = char (*)[];
using a7pi_t = int* [7];
using pa7pi_t = int* (*)[7];
using a8a7pi_t = int* [8][7];

int main()
{
}

