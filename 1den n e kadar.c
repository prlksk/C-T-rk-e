//for ve whle ile 1den n'e kadar olan say�lar
#include<stdio.h>

int main()
{  
  //de�i�ken tan�ma
  int n,s,top=0;
  
  //n de�erini okuyal�m
  printf("n:"); scanf("%d",&n);
  
  //for ile
  for(s=1;s<=n;s++) 
   top=top+s;
   //toplam� yazd�ral�m
   printf("for toplam=%d\n",top);
   
   //while ile
   while(s<=n)
   { 
     top=top+s;
     s++;
   }
   
   //toplam� yazd�ral�m
   printf("while toplam=%d",top);
   
   return 0;
}
