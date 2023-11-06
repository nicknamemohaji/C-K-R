/*
Q. In the dweight2.c program, which spaces are essential?

A. 다음 다섯 개의 공백이 필수적이다.
- #define INCHES_PER_POUND 165
- int main
- int height,
- return 0 
추가로, 개행까지 포함해서 본다면 전처리기 구문이 두 개 있으므로 두 개의 개행문자가 추가로 필요
*/

#include<stdio.h>
#define INCHES_PER_POUND 165
int main(void){int height,length,width,volume,weight;printf("Enter height of the box: ");scanf("%d",&height);printf("Enter length of the box: ");scanf("%d", &length);printf("Enter width of the box: ");scanf("%d",&width);volume=height*length*width;weight=(volume+(INCHES_PER_POUND-1))/INCHES_PER_POUND;printf("Volume (cubic inches): %d\n",volume);printf("Dimenional weight (pounds): %d\n",weight);return 0;}
