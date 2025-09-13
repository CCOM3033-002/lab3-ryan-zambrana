/*
Asignacion 2: Tres Numeros Aleatorios
Nombre: Ryan Zambrana Morales
Num. Estudiante: 801-24-9581
 */

#include <cstdlib>
#include<iostream>
using namespace std;

int main()
{

    srand(time(0));
        int numeroAleatorio1 = rand() % (100 - 0 + 1) + 0;   //srand toma un numero del tiempo de la computadora para generar un seed.  
        int numeroAleatorio2 = rand() % (100 - 0 + 1) + 0;   //Esta ecuacion utiliza ese seed para genera un numero aleatorio desde el 0 y 100
        int numeroAleatorio3 = rand() % (100 - 0 + 1) + 0;


    /* El siguiente grupo de if y else ifs representan cada permutacion de los numeros generados aleatoriamente.
    Cuando los numeros son generados, el codigo verifica cual de todas estas instancias concuerda con los numeros y los desplega en el orden correcto.*/ 

        cout << "Numeros aleatorios generados:"<< numeroAleatorio1 << ","<< numeroAleatorio2 <<"," << numeroAleatorio3 <<"\n";

    if (numeroAleatorio1>= numeroAleatorio2 && numeroAleatorio2>= numeroAleatorio3) {


        cout << "Orden decendiente:" << numeroAleatorio1<<" >= " << numeroAleatorio2<<" >= " << numeroAleatorio3<<"\n";
    }   

     else if (numeroAleatorio3>= numeroAleatorio2 && numeroAleatorio2 >= numeroAleatorio1){

        
        cout << "Orden descendiente:" << numeroAleatorio1<<" >= " << numeroAleatorio2<<" >= " << numeroAleatorio3<<"\n";
    }

     else if (numeroAleatorio2>= numeroAleatorio1 && numeroAleatorio1 >= numeroAleatorio3){
    

        cout << "Orden descendiente:" << numeroAleatorio3<<" >= " << numeroAleatorio2<<" >= " << numeroAleatorio1<<"\n";
    
    }
     else if (numeroAleatorio2 >= numeroAleatorio3 && numeroAleatorio3 >= numeroAleatorio1){


        cout << "Orden descendiente:" << numeroAleatorio2<<" >= " << numeroAleatorio3<<" >= " << numeroAleatorio1<<"\n";

    }    
     else if (numeroAleatorio3>= numeroAleatorio1 && numeroAleatorio1 >= numeroAleatorio2) {


        cout << "Orden descendiente:" << numeroAleatorio3<<" >= " << numeroAleatorio1<<" >= " << numeroAleatorio2<<"\n";
    }
     else if (numeroAleatorio1 >= numeroAleatorio3 && numeroAleatorio3 >= numeroAleatorio2) {


        cout << "Orden descendiente:" << numeroAleatorio1<<" >= " << numeroAleatorio3<<" >= " << numeroAleatorio2<<"\n";

    }
 return 0;



}