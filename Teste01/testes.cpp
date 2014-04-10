#include "engine.cpp"
#include "aluno.cpp"

Tester t;

void test_valor_maximo4()
{
    t.open("valor_maximo4", 2);
    t.add(valor_maximo4(1,6,5,3) == 6);
    t.add(valor_maximo4(-1,6,8,2) == 8);
    t.add(valor_maximo4(1,9,15,0) == 15);
    t.add(valor_maximo4(-6,-5,-4,-3) == -3);
    t.add(valor_maximo4(500,-100,300,200) == 500);
    t.close();
}

void test_modulo()
{
    t.open("modulo", 1);
    t.add(modulo(-5) == 5);
    t.add(modulo(3) == 3);
    t.add(modulo(-100) == 100);
    t.add(modulo(15) == 15);
    t.close();
}

void test_ambos_3_ou_ambos_5()
{
    t.open("ambos_3_ou_ambos_5",2);
    t.add(ambos_3_ou_ambos_5(9,27) == true);
    t.add(ambos_3_ou_ambos_5(100,20) == true);
    t.add(ambos_3_ou_ambos_5(35,10) == true);
    t.add(ambos_3_ou_ambos_5(18,5) == false);
    t.add(ambos_3_ou_ambos_5(21,29) == false);
    t.close();
}

void testa_impares_3_500()
{
	t.open("impares_3_500",2);
	t.add(impares_3_500() == 83);
	t.close();
}

void testa_potencia()
{
	t.open("potencia",2);
	t.add(potencia(0,1) == 0);
	t.add(potencia(1,2) == 1);
	t.add(potencia(2,1) == 2);
	t.add(potencia(2,2) == 4);
	t.add(potencia(2,3) == 8);
	t.add(potencia(12,4) == 20736);
	t.close();
}

int main(){
    test_valor_maximo4();
    test_modulo();
    test_ambos_3_ou_ambos_5();
	testa_impares_3_500();
	testa_potencia();
	t.total();
	return 0;
}
