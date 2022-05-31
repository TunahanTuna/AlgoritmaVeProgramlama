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
		printf("\t%d --->",gecici->veri);
		gecici = gecici->sonraki;
		
	}
}

void sil(int data){
	BListe *gecici = ilk, *bironceki = NULL;
	while(gecici != NULL){
		if(gecici->veri == data) break;
		bironceki = gecici;
		gecici = gecici->sonraki;
	}
		if(gecici!=NULL){
			if(gecici==ilk){
				if(ilk == son){
					ilk = NULL;
					son = NULL;
				}
				else{
					ilk = ilk->sonraki;
				}
			}
			else{
				if(gecici == son){
					bironceki->sonraki = NULL;
					son = bironceki;
				}
				else{
					bironceki->sonraki = gecici->sonraki;
				}
			}
			free(gecici);
		}
}

int main(){
	ekle(1);
	sil(1);
	listele();
	return 0;
}
