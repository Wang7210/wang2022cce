  #include <stdio.h>
  #include <stdlib.h>///qsort()
  int compare(const void*p1,const void*p2)
  {
      return*(int*)p1-*(int*)p2;
  }
  int main()
  {
      int a[10]={9,5,1,7,6,2,4,8,3,0};
      qsort(a,10,sizeof(int),compare);
      for(int i=0;i<10;i++) printf("%d",a[i]);
  }


