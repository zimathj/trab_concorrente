#include <stdio.h>
#include <pthread.h>

#define MAX_THREADS 100
int index;
bucket baldes[];

int* thread()
{
    
	int a;
    
    while (index < nbuckets) {
        // pthread
        a = index;
        index++;
        // pthread
	bubble_sort(baldes[a].valores, tamvet);
    }
}

int main(int argc, char **argv) {
    return 0;
}
