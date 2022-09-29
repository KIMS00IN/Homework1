#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
	
	int rand_num;
	int num;

	srand(time(NULL)); /* 입력을 seed라고 함, srand를 안 쓰면 항상 똑같은 seed가 들어감 즉, 시드가 바뀌면 됨 시간은 항상 바뀌니깐 time을 시드로*/
	rand_num = rand() % 10 + 1; /* 왜 1에서 10이 됨, 나머지니깐 ㅇㅇ 10의 배수면 1임*/

	printf("Generater a random number(1~10). \n"); /*쓸 때마다 독립시행 x*/

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
