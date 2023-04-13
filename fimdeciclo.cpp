#include <time.h>
#include <locale.h>
#include <iostream>

using namespace std;

class Contato : public Data{
	
	private :
		 string email;
		 string nome;
		 string telefone;
		 Data dtnasc;
		 
	public :
	
	Contato(string email, string nome, string telefone, Data &dtnasc){
		this ->email = email;
		this->nome = nome;
		this->telefone = telefone;
		this->dtnasc = dtnasc;
		
	}	
	Contato() {
        this->email = " ";
        this->nome = " ";
        this->telefone = " ";
        this->dtnasc = NULL;
     }

       void setEmail(string email){
		  this->email = email;
	  }
	  void setNome(string nome){
		  this->nome = nome;
	  }
	  void setEmail(string telefone){
	    this->telefone = telefone;
	  }
	  void setDtNasc(Data dtnasc){
        this->dtnasc = dtnasc;
    }
      string getEmail(){
            return this->email;
   }
     string getNome(){
            return this->nome;
   }
     string getTelefone(){
            return this->telefone;
   }

     Data getDtnasc(){
          return this->dtnasc
   }
   
   int idade( ){
       string idade;
       this->dtnasc = idade;
       idade.rease(0,6);
       stoi(idade);
             return idade - 2023;
   }

   void mostraCadastro(){

     cout << getEmail() <<
             getNome()<<
             getTelefone()<<
             idade() << endl;
   }
   
   void adcDados(Contato *d[]){
   	 cout << " Digite nome email telefone " << endl;
	  cin >> d->setNome() << endl;
	  cin >> d->setTelefone() << endl;
	  cin >> d->setEmail() << endl;
	 
   }
   void filtra(){
	   
	   
   }

};

class Data
{
	private:
		int dia;
		int mes;
		int ano;
    public:
    	Data(int dia, int mes, int ano) {
			this->dia = dia;
            this->mes = mes;
			this->ano = ano;			
		}
    	Data() {
			this->dia = 0;
            this->mes = 0;
			this->ano = 0;			
		}
		void setDia(int dia) {
			this->dia = dia;
		}
		void setMes(int mes) {
			this->mes = mes;
		}
		void setAno(int ano) {
			this->ano = ano;
		}
		int getDia() {
			return this->dia;
		}
		int getMes() {
			return this->dia;
		}
		int getAno() {
			return this->dia;
		}
		string getData()
        {
            return to_string(this->dia) + "/" +
                   to_string(this->mes) + "/" +
           		   to_string(this->ano);	  
        }
        
        Data* dia_seguinte()
		{
			Data *d1;
			int diasNoMes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
			d1 = new Data(this->dia, this->mes, this->ano);
			if (d1->ano%4==0)
			{
				diasNoMes[1]++;
			}
			d1->dia++;
			if(d1->dia > diasNoMes[d1->mes-1])
			{
				d1->dia = 1;
				if (++d1->mes > 12)
				{
					d1->mes = 1;
					d1->ano++;
				}
			}
			return d1;
		}
		 	
};

int main( int argc, char** argv){
      
   Contato *pessoa = new Contato();
       
      contato *lista[10];
      
      for (int i=0; i<10; ++i){
      	
		  lista[i] = new Contato();
		  adcDados(lista);
	  }
	  	  	 	  
    return 0;
}
