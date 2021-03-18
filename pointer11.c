
#include <stdio.h>
#include <stdlib.h>

// ++ ve -- isleclerinin pointerlar ile birlikte kullanimi

int main() {
     
     int sayilar[]={1,2,3,4,5};
     int i;
     int *ptr;
     ptr=sayilar;   //sayilar dizisinin ilk elemanini ptr degiskenine atadik..
     
     *++ptr=10;    // 1.indexe 10 degeri atandi.
	 //burada ++*ptr ile *++ptr farkini anlamamiz gerekecek.
	 //++*ptr= degeri 1 arttirir.           *++ptr=indexi 1 arttirir.
	  *ptr=20;    // *ptr= 1.indexi temsil ediyor.
	  
	  for(i=0;i<5;i++)
	  {
	  	printf("%d ",sayilar[i]);          // *(ptr+i) yazarsak hatali cikti verecektir.
	//   1,20,3,4,5   1.index 20 oldu..
	  }
	  
     
    
	return 0;
}

