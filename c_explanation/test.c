#include <stdio.h>

int f(int x){
    int y;

    scanf("%d", &x);
    y = 3*x + 10;
    return y;
}


int main(){

    int i;
    for(i=10; i<=13; ++i){
        printf("%d\n", f(i));
        // i++
    }

// ==================================
    int input;
    input = 100000;

    if(input == 10){
        scanf("%d", &input);
        printf("aiueo");
    }
    else if (input == 20)
    {
        /* code */
    }
    else
    {
        printf("kakikukeko");
    }
    

    return 0;
}
