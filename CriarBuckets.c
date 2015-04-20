#include <stdio.h>
#include <pthread.h>
#include "bucket_sort.h"
#include "bucket_sort.c"

// ACHO Q Ñ PRECISA DE UM INT PARA A ID DO BUCKET EM BUCKET_SORT.C
// PODEMOS USAR O INDICE DO ARRAY DE BUCKETS 

bucket[] CriarBuckets(int tamvet, int nbuckets){

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
			buckets[i]->min_value = (qtdBucket * i)+(i*1);  // correcao
			buckets[i]->max_value = (min_value + qtdBucket)-1;  // correcao
		} 
	} else {
		for (int i = 0; i < nbuckets; i++) {
			buckets[i]->values = malloc(sizeof(int) * (qtdBucket));
			buckets[i]->min_value = qtdBucket * i;
			buckets[i]->max_value = (min_value + qtdBucket)-1;  // correcao
		}
	}
	return buckets[];
}
