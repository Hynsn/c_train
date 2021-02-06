//
// Created by housaibang on 2021-02-05.
//
#include <stdio.h>
#include <stdbool.h>

// 偏移方向
struct Offset
{
    int dx;
    int dy;
};

bool valid(int (*m)[4],int x,int y,int n) {
    bool ret = true;
    ret = ret && ((0<=x) && (x<n));
    ret = ret && ((0<=y) && (y<n));
    ret = ret && (m[x][y] == 0);
    return ret;
}
/* 构造椭圆矩阵，需要注意二维数据的另外一种访问形式 形参int **m，访问m[i*j+j] */
void ScrewMatrix(int (*m)[4],int n) {
    const struct Offset OFFSET[] = { {0,1},{1,0},{0,-1},{-1,0} }; // 四个偏移方向
    const int OSLEN = sizeof(OFFSET) / sizeof(struct Offset); // 偏移方向总数

    int cx = 0, cy = 0, cd = 0; //偏移坐标(x,y)，偏移方向d
    int i = 1;
    do
    {
        m[cx][cy] = i;
        // 检查下一个坐标位置是否符合偏移，如不符合则切换偏移方向
        if (!valid(m, cx+OFFSET[cd].dx, cy+OFFSET[cd].dy,n)) {
            cd = (cd + 1) % OSLEN;
        }
        // 偏移
        cx += OFFSET[cd].dx;
        cy += OFFSET[cd].dy;

        i++;
    } while (i <= (n*n));
}

void PrintMatrix(int(*m)[4], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("\t%d\t", m[i][j]);
        }
        printf("\n");
    }
}
// need to solve
void testMatrix(int **m, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("\t%d\t", m[i*j+j]);
        }
        printf("\n");
    }
}

/* 打印n*n的螺旋矩阵 */
void screw_matrix_test() {
    int matrix[4][4] = { 0 };
    ScrewMatrix(matrix, 4);
    PrintMatrix(matrix, 4);
    /*int m[4][4] = {0};
    testMatrix(m, 4);*/
}