#include <stdio.h>
#include <stdlib.h>

struct liste{
	int veri;
	struct liste *sonraki;
};
typedef liste BListe;

int main(){
	/*
	
	--------------BAÐLI LÝSTELER GÝRÝÞ------------------------
	
	-Temel Yapý
		Struct yapýsý kullanýlarak baðlý liste tanýmlasý yapýlacak.(Tek yönlü)
	
	- Pointerlar
		Baðlý listenin ilk elemanýný pointerlar yardýmýyla bellekte tut.
		Baðlý listenin son elemanýný da pointerlaer yardýmý ile bellekte tut
		
	- Dinamik Bellek Yönetimi
		Oluþturulan struct yapýsýný dinamik bellek yönetimi ile yönet	
		
	
	
	
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
