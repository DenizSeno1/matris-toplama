#include <stdio.h>
int matris_toplam(int i,int j,int a[3][3],int b[3][3]){
    int c[3][3];
    for (int o=0; o <3; ++o) {
        for (int u=0; u < 3; ++u) {
            c[o][u]=b[o][u]+a[o][u];
        }
    }
    return c[i][j];
}
int main() {
    int p[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, q[3][3] = {{12, 13, 45}, {78, 32, 42}, {11, 21, 17}};
    for (int i = 0; i <3; ++i) {
        for (int j = 0; j < 3; ++j) {
            p[i][j]=matris_toplam(i,j, p, q);
        }
    }

    for (int i = 0; i <3 ; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%d ",p[i][j]);
        }
        printf("\n");
    }
    return 0;
}