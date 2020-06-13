//Insertion sort
#include <stdio.h>
void main()
{
    int A[11]= {-2, 20,10,2,30,40,15,35,25,55,60},n=10;
    int i,k,temp,ptr;
    for(k=2; k<=n; k++)
    {
        temp=A[k];
        ptr=k-1;
        while(temp<A[ptr])
        {
            A[ptr+1]=A[ptr];
            ptr=ptr-1;
        }
        A[ptr+1]=temp;
    }

    for(i=1; i<=n; i++)
        printf(" %d ",A[i]);
}

// #include <stdio.h>
//int main()
//int n, array[1000], c, d, t;
//printf("Enter number of elements\n");
//scanf("%d", &n);
//printf("Enter %d integers\n", n);
//for (c = 0; c < n; c++) {
//  scanf("%d", &array[c]);
//for (c = 1 ; c <= n - 1; c++) {
//    d = c;

//    while ( d > 0 && array[d-1] > array[d]) {
//      t          = array[d];
//      array[d]   = array[d-1];
//    array[d-1] = t;
//
//      d--;
//  printf("Sorted list in ascending order:\n");
//  for (c = 0; c <= n - 1; c++) {
//    printf("%d\n", array[c]);
// }
