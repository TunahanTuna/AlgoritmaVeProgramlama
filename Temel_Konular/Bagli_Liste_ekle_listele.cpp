#include <stdio.h>
#include <stdlib.h>
typedef struct liste{
	int veri;
	struct liste * sonraki;
}BListe;
BListe *ilk = NULL, * son = NULL;

void ekle(int data){
	BListe * dugum = (BListe * )malloc(sizeof(BListe));
	dugum->veri = data;
	dugum->sonraki = NULL;
	if(ilk == NULL){
		ilk = dugum;
		son = dugum;
	}
	else{
		son->sonraki = dugum;
		son = dugum;
	}
}

void listele(){
	BListe *gecici = ilk;
	
	
	while(gecici!=NULL){
		printf("%d\n",gecici->veri);
		gecici = gecici->sonraki;
		
	}
}
int main(){
	ekle(5);
	ekle(10);
	ekle(15);
	
	listele();
	
	return 0;
}
