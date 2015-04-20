#include <stdio.h>
#include <pthread.h>
#include "bucket_sort.h"
#include <time.h>

const int tamvet = 10;
const int nbuckets = 3;
const int nthreads = 2;

typedef struct {
    int bucket_id;  // Acho que é desnecessário, pq podemos usar o indice do array de buckets como ID
    int min_value;
    int max_value;
    int * values;
}bucket;

int main(int argc, char** argv){

	srand((unsigned)time(NULL));
	int origin[tamvet];
	for (int i = 0; i < tamvet; i++)
		origin[i] = rand() % tamvet;
	for (int i = 0; i < tamvet; i++)
		printf("origin[%d] = %d \n", i, origin[i]);	

	bucket buckets[nbuckets];
	int resto = tamvet%nbuckets;
	int qtdBucket = tamvet/nbuckets;
	if (resto != 0) {
		buckets[0]->values = malloc(sizeof(int) * (qtdBucket+1));
		buckets[0]->min_value = qtdBucket * 0;
		buckets[0]->max_value = qtdBucket * 1);
		for (int i = 1; i < resto; i++) {
				buckets[i]->values = malloc(sizeof(int) * (qtdBucket+1));
				buckets[i]->min_value = (qtdBucket * i)+(i*1);
				buckets[i]->max_value = min_value+qtdBucket;
			}		
		}
		for (int i = resto; i < nbuckets; i++) {
			buckets[i]->values = malloc(sizeof(int) * (qtdBucket));
			buckets[i]->min_value = qtdBucket * i;
			buckets[i]->max_value = min_value + qtdBucket;
		} 
	} else {
		for (int i = 0; i < nbuckets; i++) {
			buckets[i]->values = malloc(sizeof(int) * (qtdBucket));
			buckets[i]->min_value = qtdBucket * i;
			buckets[i]->max_value = min_value + qtdBucket;
		}
	}
}
