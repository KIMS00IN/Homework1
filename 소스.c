#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
	
	int rand_num;
	int num;

	srand(time(NULL)); /* �Է��� seed��� ��, srand�� �� ���� �׻� �Ȱ��� seed�� �� ��, �õ尡 �ٲ�� �� �ð��� �׻� �ٲ�ϱ� time�� �õ��*/
	rand_num = rand() % 10 + 1; /* �� 1���� 10�� ��, �������ϱ� ���� 10�� ����� 1��*/

	printf("Generater a random number(1~10). \n"); /*�� ������ �������� x*/

	for (int cnt = 1;; cnt++) {
		printf("Try -> ");
		scanf_s("%d", &num);	

		if (num == rand_num) {
			printf("congratulations! you guessed the number in %d times.\n", cnt);
			break;
		}
	}
	






	return 0;
}
