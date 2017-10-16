#include <stdio.h>
#include <math.h>


float Diretor(int faltas, int horas_extras){
  float salario = 10000.0;
  float acrescimo, desc, salariofinal;
  desc = (salario / 20) * faltas;
  acrescimo = ((salario / 20) / 8) * horas_extras + 40 * horas_extras;
  salariofinal = salario + acrescimo - desc;
  return salariofinal;
}

float Gerente(int faltas, int horas_extras){
  float salario = 8000.0;
  float acrescimo, desc, salariofinal;
  desc = (salario / 20) * faltas;
  acrescimo = ((salario / 20) / 8) * horas_extras + 40 * horas_extras;
  salariofinal = salario + acrescimo - desc;
  return salariofinal;
}

float Engenheiro(int faltas, int horas_extras){
  float salario = 5000.0;
  float acrescimo, desc, salariofinal;
  desc = (salario / 20) * faltas;
  acrescimo = ((salario / 20) / 8) * horas_extras + 40 * horas_extras;
  salariofinal = salario + acrescimo - desc;
  return salariofinal;
}

float Tecnico(int faltas, int horas_extras){
  float salario = 3000.0;
  float acrescimo, desc, salariofinal;
  desc = (salario / 20) * faltas;
  acrescimo = ((salario / 20) / 8) * horas_extras + 40 * horas_extras;
  salariofinal = salario + acrescimo - desc;
  return salariofinal;
}

float Operador(int faltas, int horas_extras){
  float salario = 2000.0;
  float acrescimo, desc, salariofinal;
  desc = (salario / 20) * faltas;
  acrescimo = ((salario / 20) / 8) * horas_extras + 40 * horas_extras;
  salariofinal = salario + acrescimo - desc;
  return salariofinal;
}

int main(){
  
  int cargo, faltas, horas_extras;
  scanf("%d%d%d", &cargo, &faltas, &horas_extras);
  if(cargo == 1){
    printf("%f", Diretor(faltas, horas_extras));
  }
  if(cargo == 2){
    printf("%f", Gerente(faltas, horas_extras));
  }
  if(cargo == 3){
    printf("%f", Engenheiro(faltas, horas_extras));
  }
  if(cargo == 4){
    printf("%f", Tecnico(faltas, horas_extras));
  }
  if(cargo == 5){
    printf("%f", Operador(faltas, horas_extras));
  }
}
