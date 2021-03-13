/*Задача 4.
Алгоритъмът на Флойд-Уоршал се използва за намиране на най-къс път, както в ориентиран така и в
неориентиран граф, от всеки връх до който и да е друг връх. Работи коректно както с положителни, така и с
отрицателни тегла на дъгите (ребрата). Алгоритъмът извежда минималните дължини на всяка двойка върхове на
графа.
Приемаме,че имаме претеглен граф G=(V,E) V - брой върхове, Е – брой ребра от тип.
За съхранение на стойностите се използва квадратна матрица на съседство а[N][N]. Ако съществува връзка
(ребро), се пише теглото на връзката (разстоянието). Например връзка 1-->2=7 (първи ред, втора колона), 1-->3=9,
1-->6=14, 2-->1=7 (втори ред, първа колона). Ако не съществува ребро, се присвоява максимално допустимата
стойност за с++ (INT_MAX) или стойност по-голяма от максималното разстояние в матрицата(за примера
използвам INF=9999). На главния диагонал се присвояват стойности 0, защото разстоянието от т.1 до т.1, от т. 2
до т.2 е равно на 0.
int A[N][N] = {
{0, 7, 9, INF, INF,14},
{7, 0, 10, 15,INF,INF},
{9, 10, 0,11,INF, 2},
{INF,15,11,0,6,INF},
{INF,INF,INF,6,0,9},
{14,INF,2,INF,9,0}
};

Принцип на действие:
Основната идея на алгоритъмa се състои в това, че ние вече имаме даден път от определен врьх i до
друг j (може да съществува разстояние (ребро) за директно свързване от i до j) и ние се опитваме да го
намалим, като включваме друг връх k и проверяваме дали това разстояние е по-малко от вече
съществуващото (i до j). Ако е по-малко, съответно го приемаме за минимално.
Ето я и обобщената формула на Флойд:
Ak
[i,j]=min(Ak-1
[i,j], Ak-1
[i,k]+Ak-1
[k,j])
Това е пример от къде се взимат стойностите
A1
[i,j]=min(A0
[i,j], A0
[i,1]+A0
[1,j])
Oт тази формула произлиза и основното неравенство:
if (A[i][k] + A[k][j] < A[i][j]) A[i][j] = A[i][k] + A[k][j];
Алгоритъмът е много приятен и лесен за запомняне, три последователни (вложени) цикъла, сложност О(N3
) и
по-горе описаното условие:
for (k = 0; k < N; k++)
for (i = 0; i < N; i++)
for (j = 0; j < N; j++)
if (A[i][k] + A[k][j] < A[i][j])
A[i][j] = A[i][k] + A[k][j];
Индексът на Ak показва колко пъти ще се пренарежда мартрицата до намиране на минималните разстояния.
Колко са върховете, толкова цикълът ще трябва да направи променливата к , 
която трябва да бъде найвъншният цикъл, защото “върти” цялата матрица, а i – редове, j – колоните.*/

#include <stdio.h>
#define N 6
#define INF 9999
int main(void){
    int i,j,k;
    int A[N][N] = {
        {0, 7, 9, INF, INF,14},
        {7, 0, 10, 15,INF,INF},
        {9, 10, 0,11,INF, 2},
        {INF,15,11,0,6,INF},
        {INF,INF,INF,6,0,9},
        {14,INF,2,INF,9,0}
    };
    for (k = 0; k < N; k++){
        for (i = 0; i < N; i++){
            for (j = 0; j < N; j++){
                if (A[i][k] + A[k][j] < A[i][j]){
                    A[i][j] = A[i][k] + A[k][j];
                    printf("A[%d][%d] = A[%d][%d] + A[%d][%d] = %d\n", i, j, i, k, k, j, A[i][j]);
                }
            }
        }
    }
    for(i=0;i< N;i++){
        for(j=0;j< N;j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}