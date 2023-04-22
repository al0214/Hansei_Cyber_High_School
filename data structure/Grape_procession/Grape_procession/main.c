//
//  main.c
//  Grape_procession
//

#include <stdio.h>
#include <stdlib.h>
#define MAX_VERTEX 30

typedef struct graphType{                  // 그래프를 인접행렬로 표현하기 위한 구조체 정의
    int n;                                 // 그래프의 정점의 개수
    int adjMatrix[MAX_VERTEX][MAX_VERTEX]; // 그래프에 대한 30 x 30의 2차원 배열
}graphType;

void createGraph(graphType *g){            // 공백 그래프 생성 연산
    int i, j;
    g->n = 0;                              // 정점의 개수를 0으로 초기화
    for(i=0; i<MAX_VERTEX; i++)
        for(j=0; j<MAX_VERTEX; j++)
            g->adjMatrix[i][j] = 0;        // 그래프 g에 대한 2차원 배열의 값을 0으로 초기화
}

void insertVertex(graphType *g, int v){    // 그래프 g에 정정 v를 삽입하는 연산
    if(((g->n)+1)>MAX_VERTEX){
        printf("\n 그래프 정점의 개수를 초과하였습니다!");
        return;
    }
    g->n++;
}

void insertEdge(graphType *g, int u, int v){// 그래프 g에 간선(u, v)를 삽입하는 연산
    if(u >= g->n || v >= g->n){
        printf("\n 그래프에 없는 정점입니다!");
        return;
    }
    g -> adjMatrix[u][v] = 1;               // 삽입한 간선에 대한 2차원 배열 값을 1로 설정
}
                                            // 그래프 g의 2차원 배열 값을 순서대로 출력하는 연산
void print_adjMatrix(graphType* g){
    int i,j;
    for(i=0; i<(g->n); i++){
        printf("\n\t\t");
        for(j=0;j<(g->n);j++){
            printf("%2d", g->adjMatrix[i][j]);
        }
    }
    printf("\n");
}

int main(void){
    graphType *G1, *G2, *G3, *G4;
    G1 = (graphType *)malloc(sizeof(graphType));
    G2 = (graphType *)malloc(sizeof(graphType));
    G3 = (graphType *)malloc(sizeof(graphType));
    G4 = (graphType *)malloc(sizeof(graphType));
    
    createGraph(G1);
    for(int i=0; i<4; i++)
        insertVertex(G1, i);
    
    
    insertEdge(G1, 0, 1);
    insertEdge(G1, 0, 3);
    insertEdge(G1, 1, 0);
    insertEdge(G1, 1, 2);
    insertEdge(G1, 1, 3);
    insertEdge(G1, 2, 1);
    insertEdge(G1, 2, 3);
    insertEdge(G1, 3, 0);
    insertEdge(G1, 3, 1);

//    printf("\n G1의 인접 행렬");
//    print_adjMatrix(G1);
    
    createGraph(G2);
    for(int i=0; i<3; i++)
        insertVertex(G2, i);
    
    insertEdge(G2, 1, 1);
    insertEdge(G2, 0, 3);
    insertEdge(G2, 1, 0);
    insertEdge(G2, 1, 2);
    insertEdge(G2, 1, 3);
    insertEdge(G2, 2, 1);
    
}
