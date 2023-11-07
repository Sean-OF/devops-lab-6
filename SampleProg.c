#include <stdio.h>

#define SIZE 100

int addition(int[]);

int main() {

    printf("Sample program - Calculator\n");
    int menu = 1;

    while(menu != 0) {
        
        printf("\nSelect type of calculation:\n1)Addition\n0)Exit\n:");
        scanf("%d", &menu);

        switch (menu) {
            case 0: {
                break;
            }
            case 1 : {
                int user = 1;
                int i = 0;
                int nums[SIZE] = {0};
                printf("\nEnter any amount of numbers(0 to calculate): ");
                while (user != 0) {
                    scanf("%d", &user);
                    nums[i] = user;
                    i++;
                }
                
                printf("\nResult: %d", addition(nums));
                break; 
            }
            
        }
    }
    return 0;
}

int addition(int nums[]) {
    int i = 0;
    int result = 0;
    while (nums[i] != 0){
        result += nums[i];
        i++;
    }
    return result;
}
