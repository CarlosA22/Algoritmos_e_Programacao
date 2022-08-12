/**
  ALUNOS: Candido Fachini Neto, Carlos Augusto Mallmann Serena e Cauã Domingos
*/

#include <iostream>
#include <locale.h>
#include <time.h>
#define TAM 4

using namespace std;

int main()
{
  srand(time(NULL));
  int matP[TAM][TAM]{1, 4, 5, 2, 7, 2, 8, 7, 3, 6, 1, 4, 6, 5, 3, 8}, matT[TAM][TAM]{1, 7, 3, 6, 4, 2, 6, 5, 5, 8, 1, 3, 2, 7, 4, 8}, matIL[TAM][TAM]{6, 5, 3, 8, 3, 6, 1, 4, 7, 2, 8, 7, 1, 4, 5, 2}, matIC[TAM][TAM]{2, 5, 4, 1, 7, 8, 2, 7, 4, 1, 6, 3, 8, 3, 5, 6}, matJ[TAM][TAM]{}, lin, col, lin1, col1, lin2, col2, numero_rand, rodadas = 24, rodadasJ = 0, val1 = 0, val2 = 0, cont = 0, pares = 8;

  numero_rand = rand() % 4 + 1; // Gera um numero aleatorio que será usado para estabelecer qual será a matriz gabarito
  cout << "--------------------------------------------------------" << endl;
  cout << "--------------------------------------------------------" << endl;
  cout << endl;
  cout << endl;
  cout << "                  JOGO DA MEMÓRIA" << endl;
  cout << "        Pressione Qualquer Tecla para Iniciar" << endl;
  cout << endl;
  cout << endl;
  cout << "--------------------------------------------------------" << endl;
  cout << "--------------------------------------------------------" << endl;
  system("read 0 -p");
  system("clear");

  switch (numero_rand)
  { // Será selecionado qual será a matriz gabarito de acordo com o numero gerado aleatoriamente

  case 1: // No caso 1, a matriz gabarito será uma copia da matriz principal

    do
    {
      cout << "Rodadas Restantes: " << rodadas << endl;
      for (lin = 0; lin < TAM; lin++)
      { // Demonstra na tela a Matriz Jogo, que começa zerada (Se repete para os outros "cases")
        for (col = 0; col < TAM; col++)
        {
          cout << matJ[lin][col] << "\t";
        }

        cout << endl;
      }

      cout << endl;

      cout << "Digite a posição da linha e da coluna, respectivamente, do primeiro valor:" << endl;
      cin >> lin1 >> col1;
      if (matJ[lin1 - 1][col1 - 1] != 0 || ((lin1 > 4 || lin1 < 1) || (col1 > 4 || col1 < 1)))
      { // Caso o jogador escolha uma posição já descoberta, ou um valor que não condiz com a matriz 4x4, o programa irá pedir para digitar uma posição não descoberta (Se repete para os outros "cases" e para a posição 2)
        while (matJ[lin1 - 1][col1 - 1] != 0 || ((lin1 > 4 || lin1 < 1) || (col1 > 4 || col1 < 1)))
        { // A mensagem irá aparecer até que o jogador escolha uma posição não descoberta (Se repete para os outros "cases" e para a posição 2)
          cout << "Digite uma posição diferente:" << endl;
          cin >> lin1 >> col1;
        }
      }
      val1 = matP[lin1 - 1][col1 - 1];
      matJ[lin1 - 1][col1 - 1] = matP[lin1 - 1][col1 - 1];

      cout << endl;

      system("clear");
      cout << "Rodadas Restantes: " << rodadas << endl;
      for (lin = 0; lin < TAM; lin++)
      { // Demonstra a Matriz Jogo novamente, porém com a primeira posição revelada (Se repete para os outros "cases" e para a posição 2)
        for (col = 0; col < TAM; col++)
        {
          cout << matJ[lin][col] << "\t";
        }

        cout << endl;
      }

      cout << endl;

      cout << "Digite a posição da linha e da coluna, respectivamente, do segundo valor:" << endl;
      cin >> lin2 >> col2;
      if (matJ[lin2 - 1][col2 - 1] != 0 || ((lin2 > 4 || lin2 < 1) || (col2 > 4 || col2 < 1)))
      {
        while (matJ[lin2 - 1][col2 - 1] != 0 || ((lin2 > 4 || lin2 < 1) || (col2 > 4 || col2 < 1)))
        {
          cout << "Digite uma posição diferente:" << endl;
          cin >> lin2 >> col2;
        }
      }
      if (lin2 == lin1 && col2 == col1)
      { // O programa irá solicitar uma posição diferente caso ele tenha digitado a mesma da primeira posição (Se repete para os outros "cases")
        while (lin2 == lin1 && col2 == col1)
        {
          fo
                  cout
              << "Digite uma posição diferente:" << endl;
          cin >> lin2 >> col2;
        }
      }
      val2 = matP[lin2 - 1][col2 - 1];
      matJ[lin2 - 1][col2 - 1] = matP[lin2 - 1][col2 - 1];

      system("clear");
      cout << "Rodadas Restantes: " << rodadas << endl;
      for (lin = 0; lin < TAM; lin++)
      {
        for (col = 0; col < TAM; col++)
        {
          cout << matJ[lin][col] << "\t";
        }

        cout << endl;
      }

      cout << endl;

      if (val1 == val2)
      { // Se um par for encontrado ele será inserido na Matriz Jogo (Se repete para os outros "cases")
        cout << "Jogada OK" << endl;
        matJ[lin1 - 1][col1 - 1] = matP[lin1 - 1][col1 - 1];
        matJ[lin2 - 1][col2 - 1] = matP[lin2 - 1][col2 - 1];
        pares--;
        if (pares == 0)
        { // Caso todos os pares forem encontrados o jogo será encerrado (Se repete para os outros "cases")
          rodadasJ = 24 - rodadas;
          rodadas = 0;
        }
      }
      else
      { // Se não for encontrado um par os valores que estavam sendo demonstrados para o jogador serão zerados novamentes (Se repete para os outros "cases")
        cout << "Jogada NOK" << endl;
        matJ[lin1 - 1][col1 - 1] = 0;
        matJ[lin2 - 1][col2 - 1] = 0;
        lin1 = 0;
        lin2 = 0;
        col1 = 0;
        col2 = 0;
      }

      rodadas--;
      cout << "Pressione Qualquer Tecla para Continuar" << endl;
      system("read 0 -p");
      system("clear");
    } while (rodadas >= 0); // O processo acima irá se encerrar até o jogador não ter mais nenhuma rodada ou ter encontrado todos os pares (Se repete para os outros "cases")

    if (rodadasJ != 24)
    {
      cout << "Parabéns, Você Venceu!" << endl;
    }
    else
    {
      cout << "Você Perdeu, Tente Novamente" << endl;
    }
    break;

  case 2: // No caso 2, a matriz gabarito será uma matriz transposta

    do
    {
      cout << "Rodadas Restantes: " << rodadas << endl;
      for (lin = 0; lin < TAM; lin++)
      {
        for (col = 0; col < TAM; col++)
        {
          cout << matJ[lin][col] << "\t";
        }

        cout << endl;
      }

      cout << endl;

      cout << "Digite a posição da linha e da coluna, respectivamente, do primeiro valor:" << endl;
      cin >> lin1 >> col1;
      if (matJ[lin1 - 1][col1 - 1] != 0 || ((lin1 > 4 || lin1 < 1) || (col1 > 4 || col1 < 1)))
      {
        while (matJ[lin1 - 1][col1 - 1] != 0 || ((lin1 > 4 || lin1 < 1) || (col1 > 4 || col1 < 1)))
        {
          cout << "Digite uma posição diferente:" << endl;
          cin >> lin1 >> col1;
        }
      }
      val1 = matT[lin1 - 1][col1 - 1];
      matJ[lin1 - 1][col1 - 1] = matT[lin1 - 1][col1 - 1];

      cout << endl;

      system("clear");
      cout << "Rodadas Restantes: " << rodadas << endl;
      for (lin = 0; lin < TAM; lin++)
      {
        for (col = 0; col < TAM; col++)
        {
          cout << matJ[lin][col] << "\t";
        }

        cout << endl;
      }

      cout << endl;

      cout << "Digite a posição da linha e da coluna, respectivamente, do segundo valor:" << endl;
      cin >> lin2 >> col2;
      if (matJ[lin2 - 1][col2 - 1] != 0 || ((lin2 > 4 || lin2 < 1) || (col2 > 4 || col2 < 1)))
      {
        while (matJ[lin2 - 1][col2 - 1] != 0 || ((lin2 > 4 || lin2 < 1) || (col2 > 4 || col2 < 1)))
        {
          cout << "Digite uma posição diferente:" << endl;
          cin >> lin2 >> col2;
        }
      }
      if (lin2 == lin1 && col2 == col1)
      {
        while (lin2 == lin1 && col2 == col1)
        {
          cout << "Digite uma posição diferente:" << endl;
          cin >> lin2 >> col2;
        }
      }
      val2 = matT[lin2 - 1][col2 - 1];
      matJ[lin2 - 1][col2 - 1] = matT[lin2 - 1][col2 - 1];

      system("clear");
      cout << "Rodadas Restantes: " << rodadas << endl;
      for (lin = 0; lin < TAM; lin++)
      {
        for (col = 0; col < TAM; col++)
        {
          cout << matJ[lin][col] << "\t";
        }

        cout << endl;
      }

      cout << endl;

      if (val1 == val2)
      {
        cout << "Jogada OK" << endl;
        matJ[lin1 - 1][col1 - 1] = matT[lin1 - 1][col1 - 1];
        matJ[lin2 - 1][col2 - 1] = matT[lin2 - 1][col2 - 1];
        pares--;
        if (pares == 0)
        {
          rodadasJ = 24 - rodadas;
          rodadas = 0;
        }
      }
      else
      {
        cout << "Jogada NOK" << endl;
        matJ[lin1 - 1][col1 - 1] = 0;
        matJ[lin2 - 1][col2 - 1] = 0;
        lin1 = 0;
        lin2 = 0;
        col1 = 0;
        col2 = 0;
      }

      rodadas--;
      cout << "Pressione Qualquer Tecla para Continuar" << endl;
      system("read 0 -p");
      system("clear");
    } while (rodadas >= 0);

    if (rodadasJ != 24)
    {
      cout << "Parabéns, Você Venceu!" << endl;
    }
    else
    {
      cout << "Você Perdeu, Tente Novamente" << endl;
    }
    break;

  case 3: // No caso 3, a matriz gabarito será uma matriz inversa por linha

    do
    {
      cout << "Rodadas Restantes: " << rodadas << endl;
      for (lin = 0; lin < TAM; lin++)
      {
        for (col = 0; col < TAM; col++)
        {
          cout << matJ[lin][col] << "\t";
        }

        cout << endl;
      }

      cout << endl;

      cout << "Digite a posição da linha e da coluna, respectivamente, do primeiro valor:" << endl;
      cin >> lin1 >> col1;
      if (matJ[lin1 - 1][col1 - 1] != 0 || ((lin1 > 4 || lin1 < 1) || (col1 > 4 || col1 < 1)))
      {
        while (matJ[lin1 - 1][col1 - 1] != 0 || ((lin1 > 4 || lin1 < 1) || (col1 > 4 || col1 < 1)))
        {
          cout << "Digite uma posição diferente:" << endl;
          cin >> lin1 >> col1;
        }
      }
      val1 = matIL[lin1 - 1][col1 - 1];
      matJ[lin1 - 1][col1 - 1] = matIL[lin1 - 1][col1 - 1];

      cout << endl;

      system("clear");
      cout << "Rodadas Restantes: " << rodadas << endl;
      for (lin = 0; lin < TAM; lin++)
      {
        for (col = 0; col < TAM; col++)
        {
          cout << matJ[lin][col] << "\t";
        }

        cout << endl;
      }

      cout << endl;

      cout << "Digite a posição da linha e da coluna, respectivamente, do segundo valor:" << endl;
      cin >> lin2 >> col2;
      if (matJ[lin2 - 1][col2 - 1] != 0 || ((lin2 > 4 || lin2 < 1) || (col2 > 4 || col2 < 1)))
      {
        while (matJ[lin2 - 1][col2 - 1] != 0 || ((lin2 > 4 || lin2 < 1) || (col2 > 4 || col2 < 1)))
        {
          cout << "Digite uma posição diferente:" << endl;
          cin >> lin2 >> col2;
        }
      }
      if (lin2 == lin1 && col2 == col1)
      {
        while (lin2 == lin1 && col2 == col1)
        {
          cout << "Digite uma posição diferente:" << endl;
          cin >> lin2 >> col2;
        }
      }
      val2 = matIL[lin2 - 1][col2 - 1];
      matJ[lin2 - 1][col2 - 1] = matIL[lin2 - 1][col2 - 1];

      system("clear");
      cout << "Rodadas Restantes: " << rodadas << endl;
      for (lin = 0; lin < TAM; lin++)
      {
        for (col = 0; col < TAM; col++)
        {
          cout << matJ[lin][col] << "\t";
        }

        cout << endl;
      }

      cout << endl;

      if (val1 == val2)
      {
        cout << "Jogada OK" << endl;
        matJ[lin1 - 1][col1 - 1] = matIL[lin1 - 1][col1 - 1];
        matJ[lin2 - 1][col2 - 1] = matIL[lin2 - 1][col2 - 1];
        pares--;
        if (pares == 0)
        {
          rodadasJ = 24 - rodadas;
          rodadas = 0;
        }
      }
      else
      {
        cout << "Jogada NOK" << endl;
        matJ[lin1 - 1][col1 - 1] = 0;
        matJ[lin2 - 1][col2 - 1] = 0;
        lin1 = 0;
        lin2 = 0;
        col1 = 0;
        col2 = 0;
      }

      rodadas--;
      cout << "Pressione Qualquer Tecla para Continuar" << endl;
      system("read 0 -p");
      system("clear");
    } while (rodadas >= 0);

    if (rodadasJ != 24)
    {
      cout << "Parabéns, Você Venceu!" << endl;
    }
    else
    {
      cout << "Você Perdeu, Tente Novamente" << endl;
    }
    break;

  case 4: // No caso 4, a matriz gabarito será uma matriz inversa por coluna

    do
    {
      cout << "Rodadas Restantes: " << rodadas << endl;
      for (lin = 0; lin < TAM; lin++)
      {
        for (col = 0; col < TAM; col++)
        {
          cout << matJ[lin][col] << "\t";
        }

        cout << endl;
      }

      cout << endl;

      cout << "Digite a posição da linha e da coluna, respectivamente, do primeiro valor:" << endl;
      cin >> lin1 >> col1;
      if (matJ[lin1 - 1][col1 - 1] != 0 || ((lin1 > 4 || lin1 < 1) || (col1 > 4 || col1 < 1)))
      {
        while (matJ[lin1 - 1][col1 - 1] != 0 || ((lin1 > 4 || lin1 < 1) || (col1 > 4 || col1 < 1)))
        {
          cout << "Digite uma posição diferente:" << endl;
          cin >> lin1 >> col1;
        }
      }
      val1 = matIC[lin1 - 1][col1 - 1];
      matJ[lin1 - 1][col1 - 1] = matIC[lin1 - 1][col1 - 1];

      cout << endl;

      system("clear");
      cout << "Rodadas Restantes: " << rodadas << endl;
      for (lin = 0; lin < TAM; lin++)
      {
        for (col = 0; col < TAM; col++)
        {
          cout << matJ[lin][col] << "\t";
        }

        cout << endl;
      }

      cout << endl;

      cout << "Digite a posição da linha e da coluna, respectivamente, do segundo valor:" << endl;
      cin >> lin2 >> col2;
      if (matJ[lin2 - 1][col2 - 1] != 0 || ((lin2 > 4 || lin2 < 1) || (col2 > 4 || col2 < 1)))
      {
        while (matJ[lin2 - 1][col2 - 1] != 0 || ((lin2 > 4 || lin2 < 1) || (col2 > 4 || col2 < 1)))
        {
          cout << "Digite uma posição diferente:" << endl;
          cin >> lin2 >> col2;
        }
      }
      if (lin2 == lin1 && col2 == col1)
      {
        while (lin2 == lin1 && col2 == col1)
        {
          cout << "Digite uma posição diferente:" << endl;
          cin >> lin2 >> col2;
        }
      }
      val2 = matIC[lin2 - 1][col2 - 1];
      matJ[lin2 - 1][col2 - 1] = matIC[lin2 - 1][col2 - 1];

      system("clear");
      cout << "Rodadas Restantes: " << rodadas << endl;
      for (lin = 0; lin < TAM; lin++)
      {
        for (col = 0; col < TAM; col++)
        {
          cout << matJ[lin][col] << "\t";
        }

        cout << endl;
      }

      cout << endl;

      if (val1 == val2)
      {
        cout << "Jogada OK" << endl;
        matJ[lin1 - 1][col1 - 1] = matIC[lin1 - 1][col1 - 1];
        matJ[lin2 - 1][col2 - 1] = matIC[lin2 - 1][col2 - 1];
        pares--;
        if (pares == 0)
        {
          rodadasJ = 24 - rodadas;
          rodadas = 0;
        }
      }
      else
      {
        cout << "Jogada NOK" << endl;
        matJ[lin1 - 1][col1 - 1] = 0;
        matJ[lin2 - 1][col2 - 1] = 0;
        lin1 = 0;
        lin2 = 0;
        col1 = 0;
        col2 = 0;
      }

      rodadas--;
      cout << "Pressione Qualquer Tecla para Continuar" << endl;
      system("read 0 -p");
      system("clear");
    } while (rodadas >= 0);

    if (rodadasJ != 24)
    {
      cout << "Parabéns, Você Venceu!" << endl;
    }
    else
    {
      cout << "Você Perdeu, Tente Novamente" << endl;
    }
    break;
  }
  return 0;
}