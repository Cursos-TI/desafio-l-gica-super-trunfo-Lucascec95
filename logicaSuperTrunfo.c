#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int resultado1, resultado2;
  char Brasil, Argentina;
  int ataque1, ataque2, defesa1, defesa2, recuo1, recuo2;

  // gerar numero aleatorio
  srand(time(0));
  ataque1 =1;//rand() % 100 + 1; // numero entre 1 e 100
  ataque2 =0;//rand() % 100 + 1; // numero entre 1 e 100
  defesa1 =1;//rand() % 100 + 1; // numero entre 1 e 100
  defesa2 =0;//rand() % 100 + 1; // numero entre 1 e 100
  recuo1 =0;//rand() % 100 + 1; // numero entre 1 e 100
  recuo2 =1;//rand() % 100 + 1; // numero entre 1 e 100

  // Inicio de jogo

  printf ("Bem vindo ao jogo\n");
  printf ("Escolha o Brasil\n");
  printf("A. ataque\n");
  printf("D. Defesa\n");
  printf("R. recuo\n");

  printf("Escolha a comparação: ");
  scanf("%c", &Brasil);

  switch (Brasil)
  {
  case 'A':
  printf("voce escolheu a opção ataque\n");
  resultado1 = ataque1 > ataque2 ? 1 : 0; 
  break;
  case 'D':
    printf("voce escolheu a opção defesa\n");
  resultado1 = defesa1 > defesa2 ? 1 : 0;
  break;
  case 'R':
    printf("voce escolheu a opção recuo\n");
  resultado1 = recuo1 > recuo2 ? 1 : 0; 
  break;
 default:
 printf("opção de jogo invalida\n");
 break;
  
}

  printf ("escolha a argentina\n");
  printf ("atenção você deve escolher um atributo diferente do primeiro\n");
  printf("A. ataque\n");
  printf("D. Defesa\n");
  printf("R. recuo\n");

  printf("escolha a comparaçã:");
  scanf("%c", &Argentina);

  if (Brasil == Argentina)
  {
  printf("você escolheu o mesmo atributo");
  }else{
       switch (Argentina)
       {
       case 'A':
        printf ("você escolheu a opção ataque\n");
        resultado2 = ataque1 > ataque2 ? 1 : 0;
        break;
       
        case 'D':
       printf ("você escolheu a opção defesa\n");
       resultado2= defesa1 > defesa2 ? 1 : 0;
        break;
      
        case 'R':
      printf("você escolheu a opção recuo\n");
      resultado2= recuo1 > recuo2 ? 1 : 0;
      break;
      default:
        printf ("opção de jogo invalida\n");
        break;     

       }

if (resultado1 && resultado2)
{
 printf("parabens você venceu\n");

}else if (resultado1 != resultado2){
 printf("empatou\n");
}else {
  printf("infelizmente você perdeu\n");  
   
} 

}

}