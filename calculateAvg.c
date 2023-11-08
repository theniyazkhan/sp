#include<stdio.h>

float calculateAverage(float x, float y){
    float avg = (x+y)/2;
    return avg;
}

int main(){
    float x, y;
    scanf("%f%f", &x,&y);
    printf("%f", calculateAverage(x, y));
    return 0;
}