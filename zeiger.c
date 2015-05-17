/* Zeiger auf Zeiger MRT, LUR (c) 2005-2007 */
#include <stdio.h> // printf
int main() {
    int   x   = 1;	// Ganzzahl
    int*  px  = &x;	// Zeiger auf die Ganzzahl
    int** ppx = &px; // Zeiger auf den Zeiger ...
    int*  py[4] = {&x}; // Ein Feld von Zeigern
    int** ppy = py;	// Zeiger aintuf einen Zeiger
    
    printf("%d %d %d\n", x++, x++, x++);
    
    printf("-+x = %d\n", -+x);
    printf("+-x = %d\n", +-x);
    printf("++x = %d\n", ++x);
    printf("x++ = %d\n", x++);
    printf("  x = %d\n", x);
    
    printf("  x = %8x\t  &x = %p\n", x, &x);
    printf(" px = %p\t &px = %p\n", px, &px);
    printf("ppx = %p\t&ppx = %p\n", ppx, &ppx);
    printf(" py = %p\t &py = %p\n", py, &py);
    printf("ppy = %p\t&ppy = %p\n", ppy, &ppy);    
    
    /* Achtung Falle - sieht fast gleich aus, ist es aber nicht */
    ppy = py;   // py = Adresse des ersten Elements (int **) 
    printf("\nnach ppy= py: ppy=%p\tpy=%p\n", ppy, py);
    
    ppy = &py;  // &py = Adresse des Arrays (int*(*)[4])
    printf("nach ppy=&py: ppy=%p\tpy=%p\n", ppy, py);
    
    /* Unterschied fällt auf bei Zeigerarithmetik */
    ppy = py+1;   // py +1 = Adresse des ersten Elements + sizeof(int **) 
    printf("nach ppy= py+1: ppy=%p\tpy=%p\n", ppy, py);
    
    ppy = &py+1;  // &py+1 = Adresse des Arrays + sizeof(int **[4])
    printf("nach ppy=&py+1: ppy=%p\tpy=%p\n", ppy, py);
    
    ppy = py;
    
    printf("sizeof(py) = %d\n", sizeof(py));
    printf("sizeof(&py) = %d\n", sizeof(&py));

    return 0;
}
