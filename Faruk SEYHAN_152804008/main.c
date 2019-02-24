#include <stdio.h>
#include <stdlib.h>

int main()
{
    int odev1,odev2,odev3,quiz1,quiz2,quiz3,arasinav1,arasinav2,fnal;
	float odev,quiz,arasinav,ort;
	printf("3 Odev noutunuzu giriniz :\n");
	scanf("%d %d %d",&odev1,&odev2,&odev3);
	printf("3 Quiz noutunuzu giriniz :\n");
	scanf("%d %d %d",&quiz1,&quiz2,&quiz3);
	printf("2 Ara Sinav noutunuzu giriniz :\n");
	scanf("%d %d",&arasinav1,&arasinav2);
	printf("Final notunuzu giriniz :\n");
	scanf("%d",&fnal);
	odev=((odev1+odev2+odev3)/3)*0.09;
	quiz=((quiz1+quiz2+quiz3)/3)*0.21;
	arasinav=((arasinav1+arasinav2)/2)*0.30;
	ort=((odev+quiz+arasinav+(fnal*0.40)));
	printf("Ortalamaniz : %.2f",ort);
	return 0;

}
