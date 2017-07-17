#include <iostream>
#include <fstream>
#include <ostream>
#include<stdio.h>


using namespace std;




int main(void) {
    int w = 1;
        while (w <= 100) {
            if ((w % 2) == 0) {
                printf( "%d", w);
                printf("\n");

            }
            if((w%3)==0){
                printf("fuzz");
                printf("\n");
            }
            w++;
        }


    }
