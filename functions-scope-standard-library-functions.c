#include <stdio.h>
#include <math.h>
#include <ctype.h> // for character handling such as toupper(), tolower()
// math header includes all math standard functions sqrt(), cbrt()

//Void retrurns nothing
void returnsNothing() {
    printf("I am called");
}
void squared(int numb1) {
    int result = numb1*numb1;
    printf("\nResult is %d", result);
}
void sum(int num1, int num2) {
    int sum = num1 + num2;
    printf("\n The sum of %d and %d is %d", num1, num2, sum);
}

//returns something
int ages (int age1, int age2) {
    int sum = age1 + age2;
    return sum;
}

//standard libraries are defined in the function or inbuilt

int main () {
    returnsNothing();
    squared(3);
    sum(1,4);
    int totals = ages(4,5);
    printf("\n the ages add to %d ", totals);
    return 0;
}