#include <stdio.h>

int main() {
    int marks = 1000;
    if(marks>= 90){
        printf(" grade A+");
    }
    else if(marks>=85){
        printf("grade A");
    }
    else if(marks>= 60){
        printf(" grade B");
    }
    else if(marks>=33){
        printf("C");
    }
    else{
        printf("fail");
    }
    return 0;
}