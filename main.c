#include <locale.h> 
#include <stdio.h>
#include <stdlib.h>
#define ex1

#ifdef ex1
// função

main() { // principais do main  
  setlocale(LC_ALL, "Portuguese ");
    int cont;

  // entrada      
  int vetorprin[10], vetposimp[5], vetpospar[5], pospar, posimp;

  // para o usuário escolher sair   
  do {
    // inicio projeto       
    system("cls");

    // alimentação
    for (int i = 0; i < 10; i++) {
      printf("VetorPrincipal [%d]: ", i);
      scanf("%d", &vetorprin[i]);
    }
    pospar = 0;
    posimp = 0;
    // função
    for (int k = 0; k < 10; k++) {

      // resta 0 = false e 1 = true
      if (vetorprin[k] % 2) {
        vetposimp[posimp] = vetorprin[k];
        posimp++;
      } else {
        vetpospar[pospar] = vetorprin[k];
        pospar++;
      }
    }

    // saída
    for (int k = 0; k < 5; k++) {
      printf("\nVetorPrincipal [%d]: %d \tVetorPosiçãoImpar [%d]: %d "
             "\tVetorPosiçãoPar [%d]: %d",
             k, vetorprin[k], k, vetposimp[k], k, vetpospar[k]);
    }
    for (int j = 5; j < 10; j++) {
      printf("\nVetorPrincipal [%d]: %d ", j, vetorprin[j]);
    }

    // perguntar se o usuário quer finalizar  
    printf("\n \n deseja finalizar? (1-Sim / 2-Não)");
    scanf("%d", &cont);
    if (cont == 1)
      break;

  } while (1 == 1);
}
#endif

#ifdef ex2
// funções

main() { // principais do main  
  setlocale(LC_ALL, "Portuguese ");
    int cont;

  // entrada      
  int vetorprin[10], pospar, posimp, aki = 0;

  // para o usuário escolher sair   
  do {
    // inicio projeto       
    system("cls");
    int par = 0, impar = 0;
    // alimentação
    for (int i = 0; i < 10; i++) {
      printf("VetorPrincipal [%d]: ", i);
      scanf("%d", &vetorprin[i]);

      if (vetorprin[i] % 2) {
        impar++;
      } else {

        par++;
      }
    }
    // criação vetor tamanho certo
    int vetimp[impar], vetpar[par];
    // posiçao certa
    pospar = 0;
    posimp = 0;
    // função
    for (int k = 0; k < 10; k++) {

      // resta 0 = false e 1 = true
      if (vetorprin[k] % 2) {
        vetimp[posimp] = vetorprin[k];
        posimp++;
      } else {
        vetpar[pospar] = vetorprin[k];
        pospar++;
      }
    }

    // saída
    for (int k = 0; k < 10; k++) {
      // visual
      aki = 0;
      printf("\nVetorPrincipal [%d]: %d ", k, vetorprin[k]);
      // imprimir ainhado
      if (k < impar) {
        printf("\tVetorImpar [%d]: %d", k, vetimp[k]);
        aki = 1;
      }
      if (aki == 0) {
        // verificar se passou por impar
        printf("\033[19C");
      }

      if (k < par) {
        printf("\033[5CVetorPar [%d]: %d", k, vetpar[k]);
      }
    }

    // perguntar se o usuário quer finalizar  
    printf("\n \n deseja finalizar? (1-Sim / 2-Não)");
    scanf("%d", &cont);
    if (cont == 1)
      break;

  } while (1 == 1);
}
#endif

#ifdef ex3

main() { // principais do main  
  setlocale(LC_ALL, "Portuguese ");
    int cont;

  // entrada      
  int vet1[2][3], vet2[2][3], resvet[2][3];
  // para o usuário escolher sair   
  do {
    // inicio projeto       
    system("cls");

    // alimentação
    for (int ken = 0; ken < 2; ken++) {
      for (int ji = 0; ji < 3; ji++) {
        printf("\nDigite o valor do Vetor1 [%d] [%d]: ", ken, ji);
        scanf("%d", &vet1[ken][ji]);

        printf("\nDigite o valor do Vetor2 [%d] [%d]: ", ken, ji);
        scanf("%d", &vet2[ken][ji]);
      }
    }

    // função
    for (int ken = 0; ken < 2; ken++) {
      for (int ji = 0; ji < 3; ji++) {
        resvet[ken][ji] = vet1[ken][ji] + vet2[ken][ji];
      }
    }

    // saída
    for (int ken = 0; ken < 2; ken++) {
      for (int ji = 0; ji < 3; ji++) {
        printf("\nVetor1[%d][%d]: %d + ", ken, ji, vet1[ken][ji]);
        printf("Vetor2[%d][%d]: %d = ", ken, ji, vet2[ken][ji]);
        printf("VetorResultado[%d][%d]: %d", ken, ji, resvet[ken][ji]);
      }
    }

    // perguntar se o usuário quer finalizar  
    printf("\n \n deseja finalizar? (1-Sim / 2-Não)");
    scanf("%d", &cont);
    if (cont == 1)
      break;

  } while (1 == 1);
}
#endif

#ifdef ex4

main() {
  do {
    system("cls");
    // linguagem do sitema
    setlocale(LC_ALL, "Portuguese");
    // criação variaveis
    int va1[3];
    float va2[3];
    long int va3[3];
    double va4[3];
    unsigned int va5[3];

    // entrada
    for (int k = 0; k < 3; k++) {
      printf("|Digite o valor do int[%d]: \n", k);
      scanf("%d", &va1[k]);
    }
    for (int e = 0; e < 3; e++) {
      printf("|Digite o valor do float[%d]: \n", e);
      scanf("%f", &va2[e]);
    }
    for (int n = 0; n < 3; n++) {
      printf("|Digite o valor do long[%d]: \n", n);
      scanf("%ld", &va3[n]);
    }
    for (int j = 0; j < 3; j++) {

      printf("|Digite o valor do double[%d]: \n", j);
      scanf("%lf", &va4[j]);
    }
    for (int i = 0; i < 3; i++) {
      printf("|Digite o valor do usingner int[%d]: \n", i);
      scanf("%d", &va5[i]);
    }

    system("cls");
    // saída
    printf(
        "        10        20        30        40        50        60    \n");
    printf(
        "12345678901234567890123456789012345678901234567890123456789012345\n");
    for (int kenji = 0; kenji < 3; kenji++) {

      printf("%3d %19ld %19d\n", va1[kenji], va3[kenji], va5[kenji]);
      printf("%13.2f %19.2lf\n", va2[kenji], va4[kenji]);
    }
    // perguntar se o usuário quer finalizar  
    printf("\n \n deseja finalizar? (1-Sim / 2-Não)");
    scanf("%d", &cont);
    if (cont == 1)
      break;

  } while (1 == 1);
}
#endif

#ifdef ex5

main() {
  int cont;
  do {
    system("cls");
    // linguagem do sitema
    setlocale(LC_ALL, "Portuguese");
    // criação variaveis
    int vet[10];

    // entrada


    for (int i = 0; i < 10; i++) {
      printf("\nDigite o %d° valor: ",i);
      scanf("%d", &vet[i]);
      
    }

    // função
    //variavel para fazer troca
    int tempo;
    //sort
    for (int kaue = 0; kaue < 10; kaue++) {
     
      for (int kenji = 0; kenji < 10; kenji++) {

        //verificar se o vetor[0] é menor de vetor[0-10]
        // depois vetor[1] é menor de vetor[0-10]
        //.
        //.
        //.
        if (vet[kaue] < vet[kenji] ) {
          //faz a troca
           tempo = vet[kaue];
          vet[kaue] = vet[kenji];
          vet[kenji] = tempo;
          
        }
       
      }
       
    }

    system("cls");
    // saída
    for (int kku = 0; kku < 10; kku++) {
      printf("\nVetor[%d] = %d", kku, vet[kku]);
    }

    // perguntar se o usuário quer finalizar  
    printf("\n \n deseja finalizar? (1-Sim / 2-Não)");
    scanf("%d", &cont);
    if (cont == 1)
      break;

  } while (1 == 1);
}
#endif
