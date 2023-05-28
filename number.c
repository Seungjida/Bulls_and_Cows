#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
        int input_num;
        int random_num;
	int random_digits[3];
	int input_digits[3];

	do{
		srand(time(NULL));
		random_num = rand() % 1000;
        	random_digits[0] = random_num / 100;
        	random_digits[1] = random_num % 100 / 10;
        	random_digits[2] = random_num % 10;
	} while((random_digits[0] == random_digits[1]) || (random_digits[1] == random_digits[2]) || (random_digits[0] == random_digits[2]));

        do{
		printf("Input 3 digits number : ");
		scanf("%d", &input_num);
		input_digits[0] = input_num / 100;
		input_digits[1] = input_num % 100 / 10;
		input_digits[2] = input_num % 10;
        } while((input_digits[0] == input_digits[1]) || (input_digits[1] == input_digits[2]) || (input_digits[0] == input_digits[2]));
	
	int ball = 0, strike = 0;
	for(int i = 0; i < 3; ++i){
		if(random_digits[i] == input_digits[i]){
			 ++strike;
		}
		else{
			for(int j = 0; j < 3; ++j){
				 if(random_digits[i] == input_digits[j]){
					 ++ball;
					 break;
				}
			}
		}
	}
        printf("Your number is %d\n", input_num);
	printf("Random number is %d\n", random_num);
	printf("strike: %d, ball: %d\n", strike, ball);
        return 0;
}
