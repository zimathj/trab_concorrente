#ifndef BUBBLE_SORT_H
#define BUBBLE_SORT_H

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

#endif
