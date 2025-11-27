#include <stdio.h>
#include <stdlib.h>

int nqx(int r[], int s){
    if(s == 0) {
        return 0;
    }
    if (r[s]%2==0){
        return 1 + nqx(r, s-1);
    }
    return nqx(r, s-1);
}

int main() {
    int j[6] = {3, 2, 4, 8, 6, 7};

    printf("%d\n", nqx(j, 5));
    return 0;
}