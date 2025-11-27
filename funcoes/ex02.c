#include <stdio.h>
#include <stdlib.h>


int teste (int num, int tr) {
    int  a = num%10;
    num = num/10;
    if(num==0){
        return a + tr;
    }
    tr = (tr+a) *10;

    return (teste(num,tr));
}

/*#include <stdio.h>
#include <stdlib.h>

int teste(int num, int tr) {
    while(num != 0) {
        int a = num % 10;    
        num = num / 10;     
        
        if(num == 0) {
            return a + tr;  
        }
        
        tr = (tr + a) * 10; 
    }
    return tr;
}

int main() {
    int num = 3459;
    printf("Resultado: %d\n", teste(num, 0));
    return 0;
}*/