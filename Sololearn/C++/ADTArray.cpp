#include <stdio.h>
#include <stdlib.h>
struct my_Array {
    int total_Size;
    int used_Size;
    int* ptr;
};
void create(struct my_Array *a ,int tSize ,int uSize){
  //  (*a).total_Size = tSize ;
       a->total_Size = tSize ;
  //  (*a).total_Size = tSize ;  
       a->used_Size  = uSize ;
       a->ptr = (int *)malloc(tSize *sizeof(int));
    }
    
void add(struct my_Array  *a){
int n;
    for(int i = 0 ; i < a->used_Size ; i++){
        printf("Enter the %d element :- \n",i);
        scanf("%d",&n);
        (a->ptr)[i] = n;
    }
}

void show(struct my_Array *a){
    for(int i = 0 ; i < a->used_Size ;i++){
        printf ("%d\n",(a->ptr)[i]);
    }
}
int sum(struct my_Array *a){
    int temp,sum = 0;
    for(int i = 0 ; i < a->used_Size ;i++){
        sum = sum + (a->ptr)[i];
        temp = sum;
    }
    return temp;
}
int main() {
struct my_Array arr1;
create (&arr1,10,2);
add(&arr1);
show(&arr1);
int sum1 = sum(&arr1);
printf("%d",sum1);
    return 0;
}