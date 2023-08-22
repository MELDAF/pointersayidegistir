#include <stdio.h>





	void yerdegistir(int *sayi1,int *sayi2)
	{
		int gecici;
		gecici=*sayi1;
		*sayi1=*sayi2;
		*sayi2=gecici;	
		
			
	printf("sayilarim yer degistirdikten  sonra\n");
	printf("ýlk sayim =  %d\n",*sayi1);
	printf("ikinci sayim = %d\n",*sayi2);
		
	}
	





int main()
{
   	/*int a=10;
	int b=20;
	int *pa;
	int *pb;
	int gecici;
	
	pa=&a;
	pb=&b;
	
	printf("sayilarin yerleri degistirilmeden once = %d,%d\n",*pa,*pb);
	
	gecici=*pa;
	*pa=*pb;
	*pb=gecici;
	
	printf("yerleri degistirildikten sonra = %d,%d",*pa,*pb);*/

	int sayi1,sayi2;
	
	printf("lutfen 2 adet sayi giriniz\n");
	scanf("%d%d",&sayi1,&sayi2);
	
	printf("sayilarim yer degistirmeden once\n");
	printf("ýlk sayim =  %d\n",sayi1);
	printf("ikinci sayim = %d\n",sayi2);
	
	
	yerdegistir(&sayi1,&sayi2);
	
}
