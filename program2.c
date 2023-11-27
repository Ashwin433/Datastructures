#include<stdio.h>
#include<stdlib.h>
int main()
{
  
  int a1[10],a2[20],a3[30],n,m,j,i,k;
  printf("Enter the size of first array:");
  scanf("%d",&n);
  printf("Enter the elements of first array:");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a1[i]);
  }
   printf("Enter the size of second array:");
   scanf("%d",&m);
   printf ("Enter the elements of second array:");
   for(j=0;j<m;j++)
   {
     scanf("%d",&a2[j]);
    }
     printf("Merged array is :");
     i=j=0;
     for(k=0;k<m+n;k++)
     {
       if((i<n)&&(j<m))
       {
         if(a1[i]<a2[j])
          {
            a3[k]=a1[i];
            i++;
            }
             else
             {
               a3[k]=a2[j];
               j++;
               }
              }
               else if (i<n)
               {
                a3[k]=a1[i];
                i++;
                }
                 else
                 {
                 a3[k]=a2[j];
                 j++;
                 }
                }
                 for(k=0;k<m+n;k++)
                 {
                   printf("%d\t",a3[k]);
                   }
                   return 0;
                   }
                
               
             
            

