#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
typedef struct 
{
	int gift;
	char n[20];
	
}g;
void sp(g array[], int l, int h)
{
    int last, i, j; g t;
    if (l < h)
    {
        last = l;
        i = l;
        j = h;
        while (i < j) 
        {
            while (array[i].gift <= array[last].gift && i <= h)
            {
                i++;
            }
            while (array[j].gift > array[last].gift && j >= l)
            {
                j--;
            }
            if (i < j)
            {
                t = array[i];
                array[i] = array[j];
                array[j] = t;
            }
        }
        t = array[j];
        array[j] = array[last];
        array[last]= t;
        sp(array, l, j - 1);
        sp(array, j + 1, h);
 
}
}

int main()
{ g k[10] ;
	int i ;
 for(i=0;i<10;i++)
 { 
 printf("enter name ");
 scanf("%s",&k[i].n);
 printf("enter no of gift for student %s:-",k[i].n);
 scanf("%d",&k[i].gift);
 
 }

  sp(k, 0, 10);	 
    printf("After applying after arranging \n");
    for (i=10; i>0; i--)
    { printf("\nstudent %s:-",k[i].n);
        printf("%d ", k[i].gift);
    }
    printf("\n");
    return 0;
 }
