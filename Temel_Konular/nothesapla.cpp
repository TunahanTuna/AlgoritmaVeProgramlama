#include <stdio.h>

int main(){
	
	/*
	
	Not Hesaplama Uygulamasý
	
	Bir öðrencinin okul numarasý, vize ve final notu bilgileri klavyeden girilecektir.
	vize ve final notlarýna göre geçme notu hesaplanacaktýr. Geçme notunun harf karþýlýðý da hesaplanacaktýr. 
	Bu bilgi ekrana yazdýrýlacaktýr.
	
	--------------------------------------------------------------------------------------
	1 okul numarasý +
	2 vize +
	3 final +
	
	4 geçme notu = vize 0.4 final 0.6 +
	5 koþul durumu Harf notlarý
	6 Ekran çýktýsý
	
	*/
	
	int numara, vize, final;
	float gecme_notu;
	printf("okul numarasi: ");
	scanf("%d",&numara);
	printf("vize: ");
	scanf("%d",&vize);
	printf("final: ");
	scanf("%d",&final);
	
	gecme_notu = vize*0.4 + final*0.6;
	
	if(gecme_notu >70 && gecme_notu<100){
		printf("%.2f Notu AA derecisi ile geciti",gecme_notu);
	}
	else if (gecme_notu>50 && gecme_notu<70 ){
		printf("%.2f Notu BB derecisi ile geciti",gecme_notu);
	}
	else if(gecme_notu>0 && gecme_notu<50){
		printf("%.2f Notu FF derecisi ile geciti",gecme_notu);
	}
	else {
		printf("hatali");
	}
	
	
	return 0;
}
