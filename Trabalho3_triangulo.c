#include <stdio.h>

typedef struct ponto {
    int x, y;
} ponto;

int det (ponto A, ponto B, ponto C)
{
    int diagonal_a, diagonal_b, determinante;
    diagonal_a = ((A.x*B.y)+(A.y*C.x)+(B.x*C.y));
    diagonal_b = ((C.x*B.y)+(C.y*A.x)+(B.x*A.y));
    determinante = diagonal_a - diagonal_b;

    if(determinante < 0)
        return -1*(determinante);
    else 
        return determinante;
}

int main()
{
    ponto A, B, C, D;
    int ABC, ABD, ACD, BCD;
    
    printf("pontos do triangulo: 'x,y'\n");
    scanf("%d,%d", &A.x, &A.y);
    scanf("%d,%d", &B.x, &B.y);
    scanf("%d,%d", &C.x, &C.y);
    
    printf("ponto\n");
    scanf("%d,%d", &D.x, &D.y);
    ABC = det(A, B, C);
    ABD = det(A, B, P);
    ACD = det(A, C, P);
    BCD = det(B, C, P);
    
    (ABC) == (ABD+ACD+BCD) ? printf("ponto está dentro do triangulo!\n"):
    printf("ponto não está no triangulo!\n");
    
    return 0;
}
