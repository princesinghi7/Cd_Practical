// take input to the user
#include <stdio.h>
int main(){
    int num1, num2;
    printf("Enter a num1:");
    scanf("%d", &num1);
    printf("Enter a num2:");
    scanf("%d", &num2);
    int sum = num1 + num2;
    printf("The sum is: %d\n", sum);
    return 0;
}
