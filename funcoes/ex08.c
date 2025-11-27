/*Função recursiva para saner quantos números  ímpares tem no vetor*/

#include <stdio.h>
#include <stdlib.h>

int yx(int r[], int s){
    if(s == 0){
        if(r[s]%2 == 0){
            return 1;
        }
        return 0;
    }
    if(r[s]%2){
        return 1 + yx(r, s-1);
    }
    return yx(r, s-1);

}

int main(){
    int j[5] = {1,3,5,6,4};
    printf("\n\t%d", yx(j, 4));
    return 0;
}