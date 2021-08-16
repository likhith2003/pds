// print all numbers with digits 1 and 2 and sum of digits n

#include <stdio.h>

int tot; //global variable: tot = total number of numbers

void printNum(int a[], int i){
    int j;
    for (j=0; j<i; j++)
        printf("%d",a[j]);
    printf("\n");
}

void makeNum(int a[], int n, int i){
    if(n==1){
        a[i++]=1; printNum(a, i); tot++;
    }
    else if(n==2){
        a[i++]=2; printNum(a, i); tot++;
        i--;
        a[i++]=1; a[i++]=1; printNum(a, i); tot++;
    }
    else if(n>2){
        a[i++]=2; makeNum(a, n-2, i);
        i--;
        a[i++]=1; makeNum(a, n-1, i);
    }
}

int main(){
    //n is input = sum of the digits '1' and '2'
    int a[20], n;
    tot=0; 
    printf("Enter n: ");
    scanf("%d", &n);
    makeNum(a,n,0); 
    printf("-----------\n");
    printf("Total = %d\n", tot);
    printf("-----------\n");
    
    return 0;
}

