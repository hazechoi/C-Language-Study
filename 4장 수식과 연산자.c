/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// 1

int main() {
	int a;
	int TTHO, THO, HUN, TEN, ONE;

	scanf("%d", &a);

	TTHO = a / 10000;
	THO = (a / 1000) % 10;
	HUN = (a / 100) % 10;
	TEN = (a / 10) % 10;
	ONE = a % 10;

	printf("%dTTHO %dTHO %dHUN %dTEN %d", TTHO, THO, HUN, TEN, ONE);


	return 0;
}


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// 2

int main() {
	int a;
	int hour, min, sec;

	scanf("%d", &a);

	hour = a / 3600;
	min = ( a / 60 ) % 60;
	sec = a % 60;

	printf("%d:%02d:%02d", hour, min, sec);

	return 0;
}


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// 3

int main() {
	int a, hun;

	scanf("%d", &a);

	hun = (a / 100) % 10;

	printf("%d\n", hun);

	return 0;
}




#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// 4

int main() {
	int a, rounded;

	scanf("%d", &a);

	rounded = ((a + 500) / 1000) * 1000;

	printf("%d\n",rounded );

	return 0;
}



#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// 5

int main() {
	double N, r, S;

	scanf("%lf", &N);

	
	r = N / (2 * 3.14);

	S = 3.14 * r * r;

	printf("%.0f", S);

	return 0;
}




#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// 6

int main() {
	int N;
	scanf("%d", &N);

	printf("%d", 20 <= N && N <= 30);

	return 0;
}




#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// 6

int main() {
	int N;
	scanf("%d", &N);

	printf("%d", 20 <= N && N <= 30);

	return 0;
}



#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// 7

int main() {
	char N;
	scanf("%c", &N);

	printf("%d", ('a' <= N && N <= 'z')|| ('A' <= N && N <= 'Z'));

	return 0;
}





#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// 8

int main() {
	int N;
	scanf("%d", &N);

	printf("%s\n",(N % 2 == 0) ? ("even") : ("odd"));

	return 0;
}





#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// 9

int main() {
	int N, M;
	scanf("%d %d", &N, &M);

	printf("%d\n", N > M ? (N) : (M));

	return 0;
}




#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// 10

int main() {
	int N, M, big, small, q, r;
	scanf("%d %d", &N, &M);

	big = (N > M) ? N : M;
	small = (N > M) ? M : N;

	q = big / small;
	r = big % small;

	printf("%d\n%d", q, r);
	return 0;
}




*/
