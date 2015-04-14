#include "bubble_sort.h"
#include <stdio.h>

int main(){
    int vetor[10] = {3,2,5,12,1,23,4,8,2,19};
    bubble_sort(vetor,10);
    int i;
    for(i = 0; i < 10; i++){
        printf("%d ",vetor[i]);
    }
}
