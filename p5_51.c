#include<stdio.h>
#include <math.h>

int main()
{int i, j, k, l, m, n;
    FILE * fp;
    fp = fopen("datos.txt", "w");
        for (i=0;i<= 3;i++ );
            for (j=0;j<= 3;j++ );
                for (k=0;k<= 3;k++ );
                    for (l=0;l<= 3;l++ );
                        for (m=0;m<= 3;m++ );
                            for (n=0;n<= 3;n++ );
                                fprintf(fp, "%d %d %d %d %d %d",i,j,k,l,m,n);
                                return 0;
                            return 0;
                        return 0;
                    return 0;
                return 0;
            return 0;
        return 0;
    
    fclose(fp);
    return 0;
}