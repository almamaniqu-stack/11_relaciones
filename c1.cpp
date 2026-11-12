#include <iostream>
using namespace std;

class Display{
	protected:
		string tipo = "Digital";
	public:
		string DisplayTipo(string);
		string getTipo();	
};

string Display :: getTipo(){
	return tipo;
}

class Hora{
	private:
		int horas, minutos, segundos;
	public:
		Hora(int h, int m, int s);
		int getHoras();
		int getMinutos();
		int getSegundos();
};


class Reloj{
	protected:
		Display *pDisplay;
		Hora *pHora; 
	public:
		Reloj(int h, int m, int s){
			
			pDisplay = NULL;
			pHora = NULL; 
		}
		int AsignarDisplay(Display *pD){
			pDisplay = pD;
		}
		void mostrarReloj();
};


void Reloj :: mostrarReloj(){
	cout << "Horas: " << cout << pHora << endl;
	cout << "Tipo: " << cout << pDisplay << endl;
	
}



int main(){
	Reloj Reloj1(10, 15, 55, "Digital");
	Reloj Reloj2(10, 15, 55, "Analogico");
	Reloj1.mostrarReloj();
	return 0;
}
