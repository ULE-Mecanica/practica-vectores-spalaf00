#include <stdio.h>
#include <stdlib.h>
void inicializa (int m [9][9]);
void pinta (int m [9][9]);
int main(){
	int identidad [9][9];
	inicializa (identidad);
	pinta (identidad);
	return 0;
}

void inicializa (int m [9][9]){
	for(int i=0; i<9; i++){
		for(int j=0; j<9; j++){
			if(i==j){
			m[i][j]=1;
			}else{
				m[i][j]=0;
				}
			}
		}
}

void pinta(int m[9][9]){
	for(int i=0; i<9; i++){
		for(int j=0; j<9; j++){
			printf("%d\t", m[i][j]);
		}
	printf("\n");
	}
}
