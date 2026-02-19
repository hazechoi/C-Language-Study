#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*
// 1

int main() {
	int N;
	scanf("%d", &N);

	if (N < 0) {
		printf("cold, indoor");
	}
	else if (0 <= N && N < 40) {
		printf("moderate, outdoor");
	}
	else {
		printf("hot, indoor");
	}


	return 0;
}





// 2

int main() {
	int N, M;
	scanf("%d %d", &N, &M);

	if (N * N == M) {
		printf("%d*%d=%d", N, N, M);
	}
	else if (M * M == N) {
		printf("%d*%d=%d", M, M, N);
	}
	else {
		printf("none");
	}



	return 0;
}


// 3

int main() {
	int a, b, c, d, e, result;
	result = 0;
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

	if (a > 0) {
		result += a;
	}
	if (b > 0) {
		result += b;
	}
	if (c > 0) {
		result += c;
	}
	if (d > 0) {
		result += d;
	}
	if (e > 0) {
		result += e;
	}

	printf("%d", result);

	return 0;



// 4

int main() {
	char ch;
	scanf("%c", &ch);

	if ('a' <= ch && ch <= 'z') {
		printf("%c", ch - 'a' + 'A');
	}
	else if ('A' <= ch && ch <= 'Z') {
		printf("%c", ch - 'A' + 'a');
	}

	else {
		printf("none");
	}

	return 0;
}



// 5

int main() {
	int N;
	scanf("%d", &N);

	if ((N % 2 == 0) && (N % 3 == 0) && (N % 5 == 0)) {
		printf("A");
	}
	else if ((N % 2 == 0) && (N % 3 == 0)) {
		printf("B");
	}
	else if ((N % 2 == 0) && (N % 5 == 0)) {
		printf("C");
	}
	else if ((N % 3 == 0) && (N % 5 == 0)) {
		printf("D");
	}
	else if ((N % 2 == 0) || (N % 3 == 0) || (N % 5 == 0)) {
		printf("E");
	}
	else if ((N % 2 != 0) && (N % 3 != 0) && (N % 5 != 0)) {
		printf("N");
	}

	return 0;
}




// 6

int main() {
	int a, b, c, max, min;
	scanf("%d %d %d", &a, &b, &c);

	max = a;
	if (b > a)max = b;
	if (c > b)max = c;

	min = a;
	if (a > b)min = b;
	if (b > c)min = c;

	printf("%d %d", max, min);


	return 0;
}



// 7

int main() {
	int N, M;
	scanf("%d", &N);
	scanf("%d", &M);


if(N==M){
	printf("RIGHT");
	return 1;
}

else {
	if (N < M) {
		printf("DOWN\n");
	}

	else if(N > M){
	printf("UP\n");
	}

	scanf("%d", &M);
	
	if (N == M) {
		printf("RIGHT");
		return 1;
	}

	else {
		if (N < M) {
			printf("DOWN\n");
		}

		else if (N > M) {
			printf("UP\n");
		}
	}
}

	return 0;
}


// 8

int main() {
	int N;
	scanf("%d", &N);

	if (N % 4 == 0) {
		if (N % 100 == 0) {
			if (N % 400 == 0) {
				printf("leap year");
			
			}
			else {
				printf("common year");
			}
		}
		else {
			printf("leap year");
		}
	}
	else {
	
		printf("common year");
	}

	return 0;
}

*/

// 8-1
// 단일 if-else문은 논리 연산자 사용해도 됌
int main() {
	int N;
	scanf("%d", &N);


	return 0;
}