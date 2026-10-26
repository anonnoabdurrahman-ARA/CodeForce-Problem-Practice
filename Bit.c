#include<stdio.h>
#include<string.h>
    int main(){
        int n,x=0;
        char arr[10];
        scanf("%d",&n);
            for (int i = 0; i < n; i++)
            {
                scanf("%s",arr);
                if (strcmp(arr, "X++") == 0) x++;
                else if (strcmp(arr, "++X") == 0) ++x;
                else if (strcmp(arr, "X--") == 0) x--;
                else if (strcmp(arr, "--X") == 0) --x;
            }
            printf("%d",x);
return 0;
}
