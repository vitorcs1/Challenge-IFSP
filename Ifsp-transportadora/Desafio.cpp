#include <locale.h>
#include <stdio.h>

///Feito por Daniel Alves Freitas (SoliDan.it) e Vitor Cardoso Silva (vitorcs1)

int procurar_distancia(int cidades[5][5], int linha, int coluna) {

  int soma_s = 0;

  for (int x = 0; x < 5; ++x)
    for (int y = 0; y < 5; ++y) {
      if (x == linha && y == coluna)
        soma_s = soma_s + cidades[x][y];
    }

  return soma_s;
}

double custo_combustivel(double km, double consumo, double valor_combustivel) {

  double custo = 0;

  custo = (km / consumo) * valor_combustivel;

  return custo;
}

int main(void) {
  setlocale(LC_ALL, "pt-BR");

  int qtd_cidades, x, y, soma_distancia, ord = 1, ask;
  double consumo, val_combustivel, soma_combustivel;

  int num_cidades[20];

  int cidades[5][5] = {0,  106, 79, 90, 98, 
                       106, 0, 187, 79, 98, 
                       79,  187, 0, 153, 171, 
                       90, 79, 153, 0, 147,
                       98, 98, 171, 147, 0};

  do {

    printf("\n- Digite por quantas cidades o trajeto será feito (Contando com "
           "a de partida): ");
    scanf("%d", &qtd_cidades);

    printf("\n- Digite o Itinerário completo:\n");
    for (int count = 0; count < qtd_cidades; ++count) {
      scanf("%d", &num_cidades[count]);
    }

    printf("\n- Digite o consumo do veículo (distância em Km que o veículo "
           "percorre com 1 litro de combustível): ");
    scanf("%lf", &consumo);
    printf("\n- Digite o valor do litro(l) do combustível a ser utilizado: ");
    scanf("%lf", &val_combustivel);

    x = num_cidades[0];
    y = num_cidades[1];

    soma_distancia = procurar_distancia(cidades, x, y);
    soma_combustivel =
        custo_combustivel(soma_distancia, consumo, val_combustivel);

    for (int count2 = 1; count2 < qtd_cidades; ++count2) {
      x = num_cidades[count2];
      y = num_cidades[count2 + 1];
      soma_distancia += procurar_distancia(cidades, x, y);
      soma_combustivel = custo_combustivel(soma_distancia, consumo, val_combustivel);
    }

    printf("\n[########- RESULTADOS -#########]\n"
             "|- Distância: %d Km            |\n"
             "|- Custo Combustível: R$ %.2lf  |\n",
           soma_distancia, soma_combustivel);

    printf("\n- Deseja realizar outro processo? [1] SIM / [2] NÃO: ");
      scanf("%d", &ask);
    
  }
  while (ask == 1);

  return 0;
}
