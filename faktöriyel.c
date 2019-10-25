//for ve while ile faktöriyel hesapý
#include<stdio.h>
int main()
{ 
  //deðiþkenleri tanýmlayalým
  int n,s,f=1;
  //n deðerini okuyalým
  printf("n:"); scanf("%d",&n);
  
  //for ile
  for(s=1;s<=n;s++)
  f=f*s;
  //sonucu yazalým
  printf("for ile %d!=%d \n",n,f);
  
  //while ile
  s=1; f=1;
  while(s<=n)
  {  
    f=f*s;
    s++;
  }
  //sonucu yazalým
  printf("while ile %d!=%d",n,f);
  
  return 0;
}

  
