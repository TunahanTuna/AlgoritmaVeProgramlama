#include <stdio.h>

int main(){
	
	/*
	
	Not Hesaplama Uygulamas�
	
	Bir ��rencinin okul numaras�, vize ve final notu bilgileri klavyeden girilecektir.
	vize ve final notlar�na g�re ge�me notu hesaplanacakt�r. Ge�me notunun harf kar��l��� da hesaplanacakt�r. 
	Bu bilgi ekrana yazd�r�lacakt�r.
	
	--------------------------------------------------------------------------------------
	1 okul numaras� +
	2 vize +
	3 final +
	
	4 ge�me notu = vize 0.4 final 0.6 +
	5 ko�ul durumu Harf notlar�
	6 Ekran ��kt�s�
	
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
