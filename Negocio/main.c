#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   int negocio;
   int typep;
   int types;
   int localization;
   float comprimento;
   float largura;
   float area;
   float moradia = 550;
   float terreno = 300;
   float quinta = 200;
   float armazem = 600;
   float PDLP=0.04;
   float LagoaP=0.03;
   float NordesteP=0.30;
   float PDLS=0.05;
   float LagoaS=0.02;
   float NordesteS=0.01;
   float subtotal;
   float total;


   printf("Bem-vindo a Imobiliaria ENTA!\n\nSelecione o tipo de Negocio:\n1- Compra\n2- Venda\n3- Arrendamento\n->");
   scanf("%d", &negocio);

   switch(negocio){
   case 1:
       printf("Selecione o tipo de venda:\n1- Moradia (550 euros)\n2- Terreno (300 euros)\n3- Quinta (200 euros)\n4- Armazem (600 euros)\n\tNota: Todos os precos sao por cada metro quadrado.\n->");
        scanf("%d", &typep);
        switch(typep){
            case 1:
            printf("Selecione a localizacao da Moradia:\n1- PDL\n2- Lagoa\n3- Nordeste\n->");
                scanf("%d", &localization);
                if(localization>=1 && localization<=3){
                 if (localization==1){
                    subtotal=moradia*PDLP;
                        printf("Introduza o comprimento da Moradia\n->");
                            scanf("%f", &comprimento);
                        printf("Introduza a largura da Moradia\n->");
                            scanf("%f", &largura);
                    area=comprimento*largura;
                        printf("A Area total da moradia e de %0.2f metros quadrados\n", area);
                    total=area*subtotal;
                        printf("O total da moradia ira custar um total de %0.2f euros.\n", total);
                 }
                 if (localization==2){
                      subtotal=moradia*LagoaP;
                        printf("Introduza o comprimento da Moradia\n->");
                            scanf("%f", &comprimento);
                        printf("Introduza a largura da Moradia\n->");
                            scanf("%f", &largura);
                    area=comprimento*largura;
                        printf("A Area total da moradia e de %0.2f metros quadrados\n", area);
                    total=area*subtotal;
                        printf("O total da moradia ira custar um total de %0.2f euros.\n", total);
                 }
                 if (localization==3){
                      subtotal=moradia*NordesteP;
                        printf("Introduza o comprimento da Moradia\n->");
                            scanf("%f", &comprimento);
                        printf("Introduza a largura da Moradia\n->");
                            scanf("%f", &largura);
                    area=comprimento*largura;
                        printf("A Area total da moradia e de %0.2f metros quadrados\n", area);
                    total=area*subtotal;
                        printf("O total da moradia ira custar um total de %0.2f euros.\n", total);
                 }
                }
                else{
                    printf("Opcao nao disponivel");
                }
            break;
            case 2:
            printf("Selecione a localizacao do Terreno:\n1- PDL\n2- Lagoa\n3- Nordeste\n->");
                scanf("%d", &localization);
                if(localization>=1 && localization<=3){
                    if(localization==1){
              subtotal=terreno*PDLP;
                        printf("Introduza o comprimento do Terreno\n->");
                            scanf("%f", &comprimento);
                        printf("Introduza a largura do Terreno\n->");
                            scanf("%f", &largura);
                    area=comprimento*largura;
                        printf("A Area total do Terreno e de %0.2f metros quadrados\n", area);
                    total=area*subtotal;
                        printf("O total do Terreno ira custar um total de %0.2f euros.\n", total);
                    }
                     if (localization==2){
                     subtotal=terreno*LagoaP;
                        printf("Introduza o comprimento do Terreno\n->");
                            scanf("%f", &comprimento);
                        printf("Introduza a largura do Terreno\n->");
                            scanf("%f", &largura);
                    area=comprimento*largura;
                        printf("A Area total do Terreno e de %0.2f metros quadrados\n", area);
                    total=area*subtotal;
                        printf("O total do Terreno ira custar um total de %0.2f euros.\n", total);
                    }
                    if (localization==3){
                     subtotal=terreno*NordesteP;
                        printf("Introduza o comprimento do Terreno\n->");
                            scanf("%f", &comprimento);
                        printf("Introduza a largura do Terreno\n->");
                            scanf("%f", &largura);
                    area=comprimento*largura;
                        printf("A Area total do Terreno e de %0.2f metros quadrados\n", area);
                    total=area*subtotal;
                        printf("O total do Terreno ira custar um total de %0.2f euros.\n", total);
                    }
                }
                else{
                    printf("Opcao nao disponivel");
                }
            break;
            case 3:
            printf("Selecione a localizacao da Quinta:\n1- PDL\n2- Lagoa\n3- Nordeste\n->");
                scanf("%d", &localization);
                if(localization>=1 && localization<=3){
                    if (localization==1){
                     subtotal=quinta*PDLP;
                        printf("Introduza o comprimento da Quinta\n->");
                            scanf("%f", &comprimento);
                        printf("Introduza a largura da Quinta\n->");
                            scanf("%f", &largura);
                    area=comprimento*largura;
                        printf("A Area total da Quinta e de %0.2f metros quadrados\n", area);
                    total=area*subtotal;
                        printf("O total da Quinta ira custar um total de %0.2f euros.\n", total);
                    }
                    if (localization==2){
                     subtotal=quinta*LagoaP;
                        printf("Introduza o comprimento da Quinta\n->");
                            scanf("%f", &comprimento);
                        printf("Introduza a largura da Quinta\n->");
                            scanf("%f", &largura);
                    area=comprimento*largura;
                        printf("A Area total da Quinta e de %0.2f metros quadrados\n", area);
                    total=area*subtotal;
                        printf("O total da Quinta ira custar um total de %0.2f euros.\n", total);
                    }
                    if (localization==3){
                     subtotal=quinta*NordesteP;
                        printf("Introduza o comprimento da Quinta\n->");
                            scanf("%f", &comprimento);
                        printf("Introduza a largura da Quinta\n->");
                            scanf("%f", &largura);
                    area=comprimento*largura;
                        printf("A Area total da Quinta e de %0.2f metros quadrados\n", area);
                    total=area*subtotal;
                        printf("O total da Quinta ira custar um total de %0.2f euros.\n", total);
                    }
                }
                else{
                    printf("Opcao nao disponivel");
                }
            break;
            case 4:
            printf("Selecione a localizacao do Armazem:\n1- PDL\n2- Lagoa\n3- Nordeste\n->");
                scanf("%d", &localization);
                if(localization>=1 && localization<=3){
                    if (localization==1){
                     subtotal=armazem*PDLP;
                        printf("Introduza o comprimento do Armazem\n->");
                            scanf("%f", &comprimento);
                        printf("Introduza a largura do Armazem\n->");
                            scanf("%f", &largura);
                    area=comprimento*largura;
                        printf("A Area total do Armazem e de %0.2f metros quadrados\n", area);
                    total=area*subtotal;
                        printf("O total do Armazem ira custar um total de %0.2f euros.\n", total);
                    } if (localization==2){
                     subtotal=armazem*LagoaP;
                        printf("Introduza o comprimento do Armazem\n->");
                            scanf("%f", &comprimento);
                        printf("Introduza a largura do Armazem\n->");
                            scanf("%f", &largura);
                    area=comprimento*largura;
                        printf("A Area total do Armazem e de %0.2f metros quadrados\n", area);
                    total=area*subtotal;
                        printf("O total do Armazem ira custar um total de %0.2f euros.\n", total);
                    } if (localization==1){
                     subtotal=armazem*NordesteP;
                        printf("Introduza o comprimento do Armazem\n->");
                            scanf("%f", &comprimento);
                        printf("Introduza a largura do Armazem\n->");
                            scanf("%f", &largura);
                    area=comprimento*largura;
                        printf("A Area total do Armazem e de %0.2f metros quadrados\n", area);
                    total=area*subtotal;
                        printf("O total do Armazem ira custar um total de %0.2f euros.\n", total);
                    }
                }
                else{
                    printf("Opcao nao disponivel");
                }
            break;
    }
   break;
   case 2:
       printf("Selecione o tipo de venda:\n1- Moradia (550 euros)\n2- Terreno (300 euros)\n3- Quinta (200 euros)\n4- Armazem (600 euros)\n\tNota: Todos os precos sao por cada metro quadrado.\n->");
        scanf("%d", &types);
            switch(types){
          case 1:
            printf("Selecione a localizacao da Moradia:\n1- PDL\n2- Lagoa\n3- Nordeste\n->");
                scanf("%d", &localization);
                if(localization>=1 && localization<=3){
                 if (localization==1){
                    subtotal=moradia*PDLS;
                        printf("Introduza o comprimento da Moradia\n->");
                            scanf("%f", &comprimento);
                        printf("Introduza a largura da Moradia\n->");
                            scanf("%f", &largura);
                    area=comprimento*largura;
                        printf("A Area total da moradia e de %0.2f metros quadrados\n", area);
                    total=area*subtotal;
                        printf("O total da moradia ira custar um total de %0.2f euros.\n", total);
                 }
                 if (localization==2){
                      subtotal=moradia*LagoaS;
                        printf("Introduza o comprimento da Moradia\n->");
                            scanf("%f", &comprimento);
                        printf("Introduza a largura da Moradia\n->");
                            scanf("%f", &largura);
                    area=comprimento*largura;
                        printf("A Area total da moradia e de %0.2f metros quadrados\n", area);
                    total=area*subtotal;
                        printf("O total da moradia ira custar um total de %0.2f euros.\n", total);
                 }
                 if (localization==3){
                      subtotal=moradia*NordesteS;
                        printf("Introduza o comprimento da Moradia\n->");
                            scanf("%f", &comprimento);
                        printf("Introduza a largura da Moradia\n->");
                            scanf("%f", &largura);
                    area=comprimento*largura;
                        printf("A Area total da moradia e de %0.2f metros quadrados\n", area);
                    total=area*subtotal;
                        printf("O total da moradia ira custar um total de %0.2f euros.\n", total);
                 }
                }
                else{
                    printf("Opcao nao disponivel");
                }
            break;
          case 2:
              printf("Selecione a localizacao do Terreno:\n1- PDL\n2- Lagoa\n3- Nordeste\n->");
                scanf("%d", &localization);
                if(localization>=1 && localization<=3){
                    if(localization==1){
              subtotal=terreno*PDLS;
                        printf("Introduza o comprimento do Terreno\n->");
                            scanf("%f", &comprimento);
                        printf("Introduza a largura do Terreno\n->");
                            scanf("%f", &largura);
                    area=comprimento*largura;
                        printf("A Area total do Terreno e de %0.2f metros quadrados\n", area);
                    total=area*subtotal;
                        printf("O total do Terreno ira custar um total de %0.2f euros.\n", total);
                    }
                     if (localization==2){
                     subtotal=terreno*LagoaS;
                        printf("Introduza o comprimento do Terreno\n->");
                            scanf("%f", &comprimento);
                        printf("Introduza a largura do Terreno\n->");
                            scanf("%f", &largura);
                    area=comprimento*largura;
                        printf("A Area total do Terreno e de %0.2f metros quadrados\n", area);
                    total=area*subtotal;
                        printf("O total do Terreno ira custar um total de %0.2f euros.\n", total);
                    }
                    if (localization==3){
                     subtotal=terreno*NordesteS;
                        printf("Introduza o comprimento do Terreno\n->");
                            scanf("%f", &comprimento);
                        printf("Introduza a largura do Terreno\n->");
                            scanf("%f", &largura);
                    area=comprimento*largura;
                        printf("A Area total do Terreno e de %0.2f metros quadrados\n", area);
                    total=area*subtotal;
                        printf("O total do Terreno ira custar um total de %0.2f euros.\n", total);
                    }
                }
                else{
                    printf("Opcao nao disponivel");
                }
            break;
          case 3:
              printf("Selecione a localizacao da Quinta:\n1- PDL\n2- Lagoa\n3- Nordeste\n->");
                scanf("%d", &localization);
                if(localization>=1 && localization<=3){
                    if (localization==1){
                     subtotal=quinta*PDLS;
                        printf("Introduza o comprimento da Quinta\n->");
                            scanf("%f", &comprimento);
                        printf("Introduza a largura da Quinta\n->");
                            scanf("%f", &largura);
                    area=comprimento*largura;
                        printf("A Area total da Quinta e de %0.2f metros quadrados\n", area);
                    total=area*subtotal;
                        printf("O total da Quinta ira custar um total de %0.2f euros.\n", total);
                    }
                    if (localization==2){
                     subtotal=quinta*LagoaS;
                        printf("Introduza o comprimento da Quinta\n->");
                            scanf("%f", &comprimento);
                        printf("Introduza a largura da Quinta\n->");
                            scanf("%f", &largura);
                    area=comprimento*largura;
                        printf("A Area total da Quinta e de %0.2f metros quadrados\n", area);
                    total=area*subtotal;
                        printf("O total da Quinta ira custar um total de %0.2f euros.\n", total);
                    }
                    if (localization==3){
                     subtotal=quinta*NordesteS;
                        printf("Introduza o comprimento da Quinta\n->");
                            scanf("%f", &comprimento);
                        printf("Introduza a largura da Quinta\n->");
                            scanf("%f", &largura);
                    area=comprimento*largura;
                        printf("A Area total da Quinta e de %0.2f metros quadrados\n", area);
                    total=area*subtotal;
                        printf("O total da Quinta ira custar um total de %0.2f euros.\n", total);
                    }
                }
                else{
                    printf("Opcao nao disponivel");
                }
            break;
           case 4:
            printf("Selecione a localizacao do Armazem:\n1- PDL\n2- Lagoa\n3- Nordeste\n->");
                scanf("%d", &localization);
                if(localization>=1 && localization<=3){
                    if (localization==1){
                     subtotal=armazem*PDLS;
                        printf("Introduza o comprimento do Armazem\n->");
                            scanf("%f", &comprimento);
                        printf("Introduza a largura do Armazem\n->");
                            scanf("%f", &largura);
                    area=comprimento*largura;
                        printf("A Area total do Armazem e de %0.2f metros quadrados\n", area);
                    total=area*subtotal;
                        printf("O total do Armazem ira custar um total de %0.2f euros.\n", total);
                    } if (localization==2){
                     subtotal=armazem*LagoaS;
                        printf("Introduza o comprimento do Armazem\n->");
                            scanf("%f", &comprimento);
                        printf("Introduza a largura do Armazem\n->");
                            scanf("%f", &largura);
                    area=comprimento*largura;
                        printf("A Area total do Armazem e de %0.2f metros quadrados\n", area);
                    total=area*subtotal;
                        printf("O total do Armazem ira custar um total de %0.2f euros.\n", total);
                    } if (localization==1){
                     subtotal=armazem*NordesteS;
                        printf("Introduza o comprimento do Armazem\n->");
                            scanf("%f", &comprimento);
                        printf("Introduza a largura do Armazem\n->");
                            scanf("%f", &largura);
                    area=comprimento*largura;
                        printf("A Area total do Armazem e de %0.2f metros quadrados\n", area);
                    total=area*subtotal;
                        printf("O total do Armazem ira custar um total de %0.2f euros.\n", total);
                    }
                }
                else{
                    printf("Opcao nao disponivel");
                }
            break;
            }
   break;
   case 3:
       printf("Nao disponivel");
    break;
   }
}
