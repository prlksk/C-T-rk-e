//for ve whle ile 1den n'e kadar olan sayýlar
#include<stdio.h>

int main()
{  
  //deðiþken tanýma
  int n,s,top=0;
  
  //n deðerini okuyalým
  printf("n:"); scanf("%d",&n);
  
  //for ile
  for(s=1;s<=n;s++) 
   top=top+s;
   //toplamý yazdýralým
   printf("for toplam=%d\n",top);
   
   //while ile
   while(s<=n)
   { 
     top=top+s;
     s++;
   }
   
   //toplamý yazdýralým
   printf("while toplam=%d",top);
   
   return 0;
}
