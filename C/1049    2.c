#include <stdio.h>
int main()
{
    char a[15];
    char b[15];
    char c[15];
    scanf("%s",a);
    scanf("%s",b);
    scanf("%s",c);

    if (a == 'vertebrado' && b == 'ave' && c == 'carnivoro')printf("aguia\n");
    if (a == 'vertebrado' && b == 'ave' && c == 'onivoro')printf("pomba\n");
    if (a == 'vertebrado' && b == 'mamifero' && c == 'onivoro')printf("homem\n");
    if (a == 'vertebrado' && b == 'mamifero' && c == 'herbivoro')printf("vaca\n");
    if (a == 'invertebrado' && b == 'inseto' && c == 'hematofago')printf("pulga\n");
    if (a == 'invertebrado' && b == 'inseto' && c == 'herbivoro')printf("lagarta\n");
    if (a == 'invertebrado' && b == 'anelideo' && c == 'hematofago')printf("sanguessuga\n");
    if (a == 'invertebrado' && b == 'anelideo' && c == 'onivoro')printf("minhoca\n");

    return 0;
}
