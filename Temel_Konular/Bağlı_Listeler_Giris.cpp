#include <stdio.h>
#include <stdlib.h>

struct liste{
	int veri;
	struct liste *sonraki;
};
typedef liste BListe;

int main(){
	/*
	
	--------------BA�LI L�STELER G�R��------------------------
	
	-Temel Yap�
		Struct yap�s� kullan�larak ba�l� liste tan�mlas� yap�lacak.(Tek y�nl�)
	
	- Pointerlar
		Ba�l� listenin ilk eleman�n� pointerlar yard�m�yla bellekte tut.
		Ba�l� listenin son eleman�n� da pointerlaer yard�m� ile bellekte tut
		
	- Dinamik Bellek Y�netimi
		Olu�turulan struct yap�s�n� dinamik bellek y�netimi ile y�net	
		
	
	
	
	*/
	BListe * kok = (BListe *) malloc(sizeof(BListe));
	
	kok->veri = 10;
	kok->sonraki = NULL;
	
	BListe * ikinci = (BListe *) malloc(sizeof(BListe));
	ikinci->veri = 20;
	kok->sonraki = ikinci;
	
	
	BListe * ucuncu = (BListe *) malloc(sizeof(BListe));
	ucuncu->veri = 30;
	ikinci->sonraki = ucuncu;
	
	printf("%d %d %d", kok->veri, kok->sonraki->veri, kok->sonraki->sonraki->veri);
	
	
	return 0;
}
