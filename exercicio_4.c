#include <stdio.h>
int main()
{
   int senha, cargo;
   printf("Digite a senha: ");
   scanf("%d", & senha);
   
   if(senha== 1234){
       printf("Acesso permitido\n");
       printf("Digite seu cargo (1-Admin, 2-Gerente, 3-Funcionario):");
       scanf ( "%d", &cargo);
       
       switch (cargo){
       case 1:
       printf("Acesso total ao sistema");
       break;
       case 2:
       printf("Acesso parcial (relatorios e estoque)");
       break;
       case 3:
       printf("Acesso basico (apenas consultas)");
       break;
       default:
       printf("Cargo invalido");
       break;
   }
}else{
    printf("Acesso negado");
}

    return 0;
}