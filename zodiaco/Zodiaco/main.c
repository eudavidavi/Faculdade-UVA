#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int menu();
int criarArquivo ();
int signos ();
int frases ();
int sair ();
int main() {
menu ();
} int menu () {
int escolha;
setlocale(LC_ALL, "Portuguese");
system ("cls");
printf("\n\n ----------- SIGNOS DO ZOD�ACO -----------\n\n");
printf("0 - Cria arquivo com frases motivacionais \n");
printf("1 - Saber qual � o signo \n");
printf("2 - Frase motivacional do signo \n");
printf("3 - Sair \n");
printf("\n*** Entre com uma das op��es acima: ");
scanf("%d", &escolha);
switch (escolha) {
case 0:
criarArquivo();
break;
case 1:
signos();
break;
case 2:
frases();
break;
case 3:
sair();
break;
default:
printf("---");
system("pause");
menu();
}
return 0;
} int frases(){
system ("cls");
system ("cls");
printf ("\n! *** FRASE MOTIVACIONAL DO SIGNO *** ");
printf ("\n*-----------------------------------------------------------------*");
printf ("\n! Signos do Zod�aco !");
printf ("\n! !");
printf ("\n! (1) Capric�rnio (4) �ries (7) Cancer (10) Libra !");
printf ("\n! (2) Aqu�rio (5) Touro (8) Le�o (11) Escorpi�o !");
printf ("\n! (3) Peixes (6) G�meos (9) Virgem (12) Sagit�rio !");
printf ("\n! !");
printf ("\n*-----------------------------------------------------------------*");
printf ("\n");
printf ("\n");
printf ("\n Digite o n�mero que representa o seu signo: ");
system("pause");
menu();
return 0;
} int signos() {
int mesdia;
system ("cls");
printf ("\n ***INFORMA O SIGNO***\n\n");
printf ("\nInforme o dia e o m�s que voc� nasceu (MMDD): ");
scanf ("%d", &mesdia);
switch (mesdia) {
case 1
if ((mesdia >= 1222 && mesdia <= 1231) || (mesdia >= 0101 && mesdia < 0120))
{
printf ("Voce � do signo de Capric�rnio\n");
}
break;
case 2
if ((mesdia >= 0120 && mesdia <= 0131) || (mesdia >= 0201 && mesdia < 0219))
{
printf ("Voce � do signo de Aqu�rio\n");
}
break;
case 3
if ((mesdia >= 0219 && mesdia <= 0228) || (mesdia >= 0301 && mesdia < 0321))
{
printf ("Voce � do signo de Peixes\n");
}
break;
case 4
if ((mesdia >= 0321 && mesdia <= 0331) || (mesdia >= 0401 && mesdia < 0420))
{
printf ("Voce � do signo de �ries\n");
}
break;
case 5
if ((mesdia >= 0420 && mesdia <= 0430) || (mesdia >= 0501 && mesdia < 0521))
{
printf ("Voce � do signo de Touro\n");
}
break;
case 6
if ((mesdia >= 0521 && mesdia <= 0531) || (mesdia >= 0601 && mesdia < 0622))
{
printf ("Voce � do signo de G�meos\n");
}
case 7
if ((mesdia >= 0622 && mesdia <= 0630) || (mesdia >= 0701 && mesdia < 0723))
{
printf ("Voce � do signo de C�ncer\n");
}
break;
case 8
if ((mesdia >= 0723 && mesdia <= 0731) || (mesdia >= 0801 && mesdia < 0823))
{
printf ("Voce � do signo de Le�o\n");
}
break;
case 9
if ((mesdia >= 0823 && mesdia <= 0831) || (mesdia >= 0901 && mesdia < 0923))
{
printf ("Voce � do signo de Virgem\n");
}
case 10
if ((mesdia >= 0923 && mesdia <= 0930) || (mesdia >= 1001 && mesdia < 1023))
{
printf ("Voce � do signo de Libra\n");
}
break;
case 11
if ((mesdia >= 1023 && mesdia <= 1031) || (mesdia >= 1101 && mesdia < 1122))
{
printf ("Voce � do signo de Escorpi�o\n");
}
break;
case 12
if ((mesdia >= 1222 && mesdia <= 1130) || (mesdia >= 1201 && mesdia < 1222))
{
printf ("Voce � do signo de Sagit�rio\n");
}
break;
default:
printf("Data inv�lida.\n");
}
system("pause");
menu();
return 0;*/
} int criarArquivo() {
int qualsigno;
FILE *ponteiro;
struct frasesDoSigno {
int numSigno[12] = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22};
char textoSigno[100];
};
struct frasesDoSigno fraseSigno
ponteiro = &frasesDoSigno
char
system ("cls");
system ("cls");
printf ("\n! *** CRIA ARQUIVO COM FRASES MOTIVACIONAIS *** ");
printf ("\n\n");
printf ("Entre com a frase motivacional para o signo de 'vetor' ");
printf ("\n\n[---------------------------------Tamanho m�ximo de 100 posi��es------------------------- ------------]");
printf ("\n");
scanf ("%d", ponteiro);
ponteiro = fopen("horoscopo.txt", "w")
system("pause");
menu();
return 0;
} int sair() {
system ("cls");
printf("Voc� saiu do programa.");
return 0;

