#include <stdio.h>

int main() {

	int n1, n2, res;
	char op;

	printf("Enter your opration: ");
	scanf("%d %c %d", &n1 ,&op ,&n2);

	switch(op) {
		case '+':
			res = n1 + n2;
			break;
		case '-':
			res = n1 - n2;
			break;
		case '*':
			res = n1 * n2;
			break;
		case '/':
			res = n1 / n2;
			break;
	}

	printf("Result = %d\n", res);
	
	return 0;
}