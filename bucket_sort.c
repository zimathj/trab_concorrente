#include <stdio.h>
#include <pthread.h>
#include "bucket_sort.h"

const int tamvet = 10;
const int nbuckets = 3;
const int nthreads = 2;

typedef struct {
    int bucket_id;
    int min_value;
    int max_value;
    int * values;
}bucket;

int main(int argc, char** argv){


}
