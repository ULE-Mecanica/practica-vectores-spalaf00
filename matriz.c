#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void inicializa (int m [5][5]);
int main(){
	srand(time(NULL));
	int matriz [5][5];
	inicializa (matriz);
	for (int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			printf("%d\t", matriz[i][j]);
		}
	printf("\n");
	}
	return 0;
}
void inicializa (int m [5][5]){
	for (int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			m[i][j]= 3+rand()%(15+1-3);
		}
	}
}
