#include <iostream>

using namespace std;

void EsperaEnter(){
	int tecla;
	printf("Pressione ENTER\n");
	do{
		tecla = getchar();
		if (tecla !=13){
			printf("Digite ENTER\n");
		}
	}while(tecla != 13);
}

int main(int argc, char** argv){
	EsperaEnter();
	EsperaEnter ();
	EsperaEnter();
}