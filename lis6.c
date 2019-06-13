#include<stdlib.h>


int main()
{
 int andar = 0;
        int aux[50],i,f,g,a;
        andar = 8;

        for (i = 1; i <= andar; i++) {

            int pascal[i];

            for (g = andar; g > i; g--) {
                printf("\n");
            }

            for (f = 0; f < i; f++) {

                if (f == 0 || f == (i - 1)) {
                    pascal[f] = 1;
                } else {
                    pascal[f] = aux[f] + aux[f - 1];
                }

                printf("%d  ",pascal[f] );
            }
             for (a = 0; a < f; a++) {
                 aux[a] = pascal[a];

             }



            printf("\n");
        }
}

