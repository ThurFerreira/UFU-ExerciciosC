#include <stdio.h>
#include <stdlib.h>

int main() {
        int i, n;
        float x, y, div;
        
        scanf("%d",&n);
        for(i=0; i < n; i++){
            scanf("%f",&x);
            scanf("%f",&y);

            div = x/y;
            
            if(y == 0){
                printf("divisao impossivel\n");
            }else {
                printf("%.1f\n", div);
        }


        }
return 0;
}