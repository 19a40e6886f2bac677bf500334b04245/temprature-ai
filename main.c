#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

float sum;

float weight1 = 0.8;
float input = 0.5; // temprature

float weight2 = 0.4;
float weight3 = 0.4;
float weight4 = 0.4;
float i1;
float i2;
float i3;

float weight5 = 0.4;
float weight6 = 0.4;
float weight7 = 0.4;
float i4;
float i5;
float i6;

float tmpp;

float weight8 = 0.2;

void tmp() {
    printf("chose temp");
    scanf("%f", &input);
}

void ai() {
    sum = input * weight1;

    i1 = sum * weight2;
    i2 = sum * weight3;
    i3 = sum * weight4;

    //hidden
    i4 = i1 + i2 + i3;
    i4 *= weight5;

    i5 = i1 + i2 + i3;
    i5 *= weight6;

    i6 = i1 + i2 + i3;
    i6 *= weight7;

    //output
    sum = i4 + i5 + i6;
    sum *= weight8;
    printf("temprature: ");
    printf("%f", tmpp);
    printf(" ");
    printf("pain: ");
    printf("%f", sum);

    if (sum > 0.2) {
        printf("                      [ hand burnt ] \n");
    }
    else if (sum > 0.12) {
        printf("                      [ hand hurts ] \n");
    }
    else if (sum < 0.12) {
        printf("                      [ no damage  ] \n");
    }
}

void msleep(int milliseconds)
{
    usleep(milliseconds * 1000);
}

int main() {
    tmp();
    while (1) {
        input += 0.03;
        tmpp = input;
        ai();
        msleep(500);
    }
}