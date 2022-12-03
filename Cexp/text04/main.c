#include <stdio.h>


#define MAX 100

void dfs(int cur[]);
int CanMov(int cur[], int nxt[], int i);

int mov[4][2] = {{0, -1}, {1, 0}, {0, 1}, {-1, 0}};

int ans[MAX][MAX];
int map[MAX][MAX];
int ext[2];
int cnt;

int main(void)
{
    int m, n;
    int cur[2];
    int i, j;

    scanf("%d %d", &m, &n);

    for (i=0; i<m; i++) {
        for (j=0; j<n; j++) {
            scanf("%d", &map[i][j]);
        }
    }

    cur[0] = 0;
    cur[1] = 0;
    ext[0] = m - 1;
    ext[1] = n - 1;
    ans[0][0] = 1;

    dfs(cur);

    return 0;
}

void dfs(int cur[])
{
    int i, j;
    int nxt[2];

    if (cur[0]==ext[0] && cur[1]==ext[1]) {
        printf("%d\n", ++cnt);
        for (i=0; i<=ext[0]; i++) {
            for (j=0; j<=ext[1]; j++) {
                printf("%d", ans[i][j]);
                putchar(j<ext[1] ? ' ' : '\n');
            }
        }
        return;
    }
    for (i=0; i<4; i++) {
        if (CanMov(cur, nxt, i)) {
            ans[nxt[0]][nxt[1]] = 1;
            dfs(nxt);
            ans[nxt[0]][nxt[1]] = 0;
        }
    }
}

int CanMov(int cur[], int nxt[], int i)
{
    nxt[0] = cur[0] + mov[i][0];
    nxt[1] = cur[1] + mov[i][1];

    if (nxt[0]<0 || nxt[0] > ext[0])
        return 0;

    if (nxt[1]<0 || nxt[1] > ext[1])
        return 0;

    if (ans[nxt[0]][nxt[1]]==1)
        return 0;

    return map[nxt[0]][nxt[1]];
}