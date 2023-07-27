#include <stdio.h>
int arrange(int num[], int count){
    int i, j, k, temp;
    
    for (i = 0; i < count; ++i){
        for (j = i + 1; j < count; ++j){
            if (num[i] > num[j]){
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }
    printf("Numbers in ascending order: \n");
    for (k = 0; k < count; ++k){
        printf("%d\n", num[k]);
    }
}
int main(){
    int i, count, num[25];
    
    
    printf("Enter total no. of elements: ");
    scanf("%d", &count);
    printf("Enter elements one by one: \n");
    
    for (i = 0; i < count; ++i){
        scanf("%d", &num[i]);
    }
    arrange(num, count);
    
    return 0;
}
