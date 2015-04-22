#include <stdio.h>
#include <pthread.h>
#include "bucket_sort.h"
#include <time.h>

#define tamvet 10;
#define nbuckets 3;
#define nthreads 2;
int index;
bucket buckets[nbuckets];

typedef struct {
    int bucket_id;  // Acho que é desnecessário, pq podemos usar o indice do array de buckets como ID
    int tam;
    int min_value;
    int max_value;
    int *values;
}bucket;





void bubble_sort(int *v, int tam){
    int i,j,temp,trocou;
    for(j=0; j<tam-1; j++){
	trocou = 0;
	for(i = 0; i < tam -1; i++){
	    if(v[i+1] < v[i]){
		temp = v[i];
		v[i] = v[i + 1];
		v[i + 1] = temp;
		trocou = 1;
	    }
	}
	if(!trocou) break;
    }
}





int* thread(int iThread)
{   
    int a;
    
    while (index < nbuckets) {
        // pthread
        a = index;
        index++;
        // pthread
	printf("A thread[%d] vai ordenar o bucket[%d]", iThread, a)
	bubble_sort(buckets[a].valores, buckets[a].tam);
    }
}





int main(int argc, char** argv){

	srand((unsigned)time(NULL));
	int origin[tamvet];
	for (int i = 0; i < tamvet; i++)
		origin[i] = int(rand() % tamvet);
	for (int i = 0; i < tamvet; i++)
		printf("origin[%d] = %d \n", i, origin[i]);

		

	bucket buckets[nbuckets];
	int resto = tamvet%nbuckets;
	int qtdBucket = tamvet/nbuckets;



	if (resto != 0) {
		//buckets[0]->values = malloc(sizeof(int) * (qtdBucket+1));
		buckets[0]->min_value = qtdBucket * 0;
		buckets[0]->max_value = qtdBucket * 1);
		for (int i = 1; i < resto; i++) {
				//buckets[i]->values = malloc(sizeof(int) * (qtdBucket+1));
				buckets[i]->min_value = (qtdBucket * i)+(i*1);
				buckets[i]->max_value = min_value+qtdBucket;
			}		
		}
		for (int i = resto; i < nbuckets; i++) {
			//buckets[i]->values = malloc(sizeof(int) * (qtdBucket));
			buckets[i]->min_value = qtdBucket * i;
			buckets[i]->max_value = min_value + qtdBucket;
		} 
	} else {
		for (int i = 0; i < nbuckets; i++) {
			//buckets[i]->values = malloc(sizeof(int) * (qtdBucket));
			buckets[i]->min_value = qtdBucket * i;
			buckets[i]->max_value = min_value + qtdBucket;threads
		}
	}

	for (int a = 0; a < nbuckets; a++) {
		for (int i = 0; i < tamvet; i++) {
			if (origin[i] >= bucket[a]->min_value && origin[i] <= bucket[a]->max_value)
				cont++;
		}
		buckets[a]->values = new int[cont];
		buckets[a].tam = cont;
		cont = 0;
	}


	pthread_t threads[nthreads];
	for (int i = 0; i < nthreads; i++)
		pthread_create(&threads[i],NULL, thread, i);

	for (int i = 0; i < nthreads; i++)
		pthread_join(&threads[i], NULL);
	
	int b = 0;
	for (int a = 0; a < nbuckets; a++) {
		for (int i = 0; i < buckets[a].tam; i++) {
			origin[b++] = buckets[a].values[i];
		}
	}

	for (int i = 0; i < tamvet; i++)
		printf("origin[%d] = %d \n", i, origin[i]);
	
}
