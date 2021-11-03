#include <iostream>
// Librerias ocupadas para ese rand()
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    int res, resp, Htrabajadas, bolita, edadEmeses, nivelDehemo, sexo, finn = 0, carta, num, suma = 0, numPc, pc, c;
    double Phora, Cdinero, dob, trip, impo, descuento, Cpagar, rangoMenor = 0, n1, n2, n3;
    do {
        cout<<"==========Menu de ejercicios==========\n";
        cout<<"1. Determinar el salario de un trabajador.\n";
        cout<<"2. Descuento de la tienda.\n";
        cout<<"3. Determinar si una persona tiene anemia o no.\n";
        cout<<"4. Determinar el numero medio de tres numeros diferentes.\n";
        cout<<"5. BlackJack.\n";
        cout<<"Elige: ";
        cin>>res;

        switch (res){
        case 1:
            cout<<"- - - - - - - - - - - - - - - - - - - - - - - - - - - -\n"; 
            cout<<"Eligiste el primer ejercicio\n";
            cout<<"Determinar la cantidad de dinero que recibira \nun trabajador por concepto de las horas extras \ntrabajadas en una empresa.\n";
            //Pedir las horas trabajadas
            cout<<"Ingresa las horas trabajadas: ";
            cin>>Htrabajadas;
            //Pedir la paga por hora
            cout<<"Ingresa el pago por hora: ";
            cin>>Phora;
            //Si se cumple esta expresion significa que se trabajaron horas extras y estas horas extras se pagan al triple
            if (Htrabajadas > 48) {
                // El resultado de esta expresion va a dar las horas que se van a pagar al triple
		        trip = Htrabajadas - 48;
		        Cdinero = 40 * Phora + (8 * Phora * 2) + (trip * Phora * 3);
            }
            else {
                // Significa que se trabajaron horas extras y estas horas se pagan al doble
		        if (Htrabajadas > 40) {
                    // El resultado de esta expresion va a dar las horas que se van a pagar al doble
			        dob = Htrabajadas - 40;
			        Cdinero = 40 * Phora + (dob * Phora * 2);
                }
                else {
                //Significa que no hay horas extras y solo se paga lo normal
                Cdinero = Htrabajadas * Phora;
                }
            }
            cout<<"- - - - - - - - - - - - - - - - - - - - - - - - - - - -\n"; 
            cout<<"Horas trabajadas: " <<Htrabajadas<<"\n";
            cout<<"Cantidad de dinero: $"<<Cdinero<<"\n";
            cout<<"- - - - - - - - - - - - - - - - - - - - - - - - - - - -\n"; 
            break;
        case 2:
            // Herramienta para generar numero random al ejecutar un programa
            srand(time(NULL));
            cout<<"- - - - - - - - - - - - - - - - - - - - - - - - - - - -\n";
            cout<<"Eligiste el segundo ejercicio\n";
            cout<<"En una tienda de descuento, hay una promocion sobre el \nvalor de la compra total segun el numero de bolita que el cliente saque al pagar.\n";
            //Pedir el importe de la compra, el dinero a pagar sobre la compra que se realizo.
            cout<<"Ingresa el importe de la compra: ";
            cin>>impo;
            //Hacer numero aleatorios del 1 al 5
            bolita = (rand()%5)+1;
            //Si el valor aleatorio dio 1, cumple esta función.
            if (bolita == 1) {
                //Imprimir el numero de la bolita y no hay descuento.
                descuento = 0;
                cout<<"- - - - - - - - - - - - - - - - - - - - - - - - - - - -\n";
                cout<<"Su numero de bolita es: 1\n";
                cout<<"Lo siento no tiene descuento.\n";
                
            }
            //Si el valor aleatorio dio 2, cumple esta función
            if (bolita == 2) {
                //Imprimir el numero de la bolita y el descuento es de 10%
                descuento = impo*0.1;
                cout<<"- - - - - - - - - - - - - - - - - - - - - - - - - - - -\n";
		        cout<<"Su numero de bolita es: 2\n";
                cout<<"Felicidades tiene un 10% de descuento.\n";
            }
            //Si el valor aleatorio dio 3, cumple esta función
            if (bolita == 3) {
                //Imprimir el numero de la bolita y el descuento es de 25%
                descuento = impo*0.25;
                cout<<"- - - - - - - - - - - - - - - - - - - - - - - - - - - -\n";
		        cout<<"Su numero de bolita es: 3\n";
                cout<<"Felicidades tiene un 25% de descuento.\n";
            }
            //Si el valor aleatorio dio 4, cumple esta función
            if (bolita == 4) {
                //Imprimir el numero de la bolita y el descuento es de 50%
                descuento = impo*0.5;
                cout<<"- - - - - - - - - - - - - - - - - - - - - - - - - - - -\n";
		        cout<<"Su numero de bolita es: 4\n";
                cout<<"Felicidades tiene un 50% de descuento.\n";
            }
            //Si el valor aleatorio dio 5, cumple esta función
            if (bolita == 5) {
                //Imprimir el numero de la bolita y el descuento es igual al importe
                descuento = impo;
                cout<<"- - - - - - - - - - - - - - - - - - - - - - - - - - - -\n";
		        cout<<"Su numero de bolita es: 5\n";
                cout<<"Felicidades saco el premio mayor con 100% de descuento, no paga nada.\n";
            }
            //Cantidad a pagar es igual a la reducion de el importe menos el descuento ya calculado
            Cpagar = impo - descuento;
            //Mostrar el total a pagar
            cout<<"Cantidad total a pagar es: $"<<Cpagar<<"\n";
            cout<<"- - - - - - - - - - - - - - - - - - - - - - - - - - - -\n";
            break;
        case 3:
            cout<<"- - - - - - - - - - - - - - - - - - - - - - - - - - - -\n"; 
            cout<<"Eligiste el tercer ejercicio\n";
            cout<<"Con resultados de un laboratorio de analisis clinicos, un medico determina si una persona tiene anemia o no\ndepende de su nivel de hemoglobina en la sangre, edad y sexo.\n";
            cout<<"Tabla\n";
            cout<<"- - - - - - - - - - - - - - - - - - - - - - - \n";
            cout<<"|       Edad         |    Nivel hemoglobina  |\n";
            cout<<"| 0 - 1 mes          |       13 - 26 g%      |\n";
            cout<<"| > 1 y <= 6 meses   |       10 - 18 g%      |\n";
            cout<<"| > 6 y <= 12 meses  |       11 - 15 g%      |\n";
            cout<<"| > 1 y <= 5 años    |      11.5 - 15 g%     |\n";
            cout<<"| > 5 y <= 10 años   |      12.6 - 15 g%     |\n";
            cout<<"| > 10 y <= 15 años  |      13 - 15.5 g%     |\n";
            cout<<"|Mujeres > 15 años   |       12 - 16 g%      |\n";
            cout<<"|Hombres > 15 años   |       14 - 18 g%      |\n";
            cout<<"- - - - - - - - - - - - - - - - - - - - - - - \n";
            //Pedir la edad en meses
            cout<<"Ingresa el valor de edad en meses: ";
            cin>>edadEmeses;
            //Pedir el nivel de hemo de la persona
            cout<<"Ingresa el valor de nivel de hemoglobina: ";
            cin>>nivelDehemo;
            //Si la edad es menor que un mes entonces se cumple esta condición
            if (edadEmeses <= 1) {
                //entonces el rango de nivel de hemo es de 13
                rangoMenor = 13;
            }
            //Si la edad es mayor que un mes y menor igual que 6 meses entonces se cumple esta condición
            if (edadEmeses > 1 && edadEmeses <= 6) {
                //Entonces el rango de nivel de hemo es de 10
                rangoMenor = 10;
            }
            //Si la edad es mayor que 6 meses y menor igual que 12 meses entonces se cumple esta condición
            if (edadEmeses > 6 && edadEmeses <= 12) {
                //Se le asigna el nivel de hemo que es de 11
                rangoMenor = 11;
            }
            // Si la edad es mayor que 12 y menor igual que 60 meses (5 años) entonces se cumple esta condición
            if (edadEmeses > 12 && edadEmeses <= 60) {
                //Se le asigna el nivel de hemo que es de 11.5
                rangoMenor = 11.5;
            }
            //Si la edad es mayor que 30 meses y menor igual a 120 meses(10 anos) entonces se cumple esta condición
            if (edadEmeses > 30 && edadEmeses <= 120) {
                //Se le asigna el nivel de hemo que es de 12.6
                rangoMenor = 12.6;
            }
            //Si la edad es mayor que 120 meses (10 años) y menor igual que 180 (15 anos) entonces se cumple esta condición
            if (edadEmeses > 120 && edadEmeses <= 180) {
                //Se le asigna el nivel de hemo que es de 13
                rangoMenor = 13;
            }
            //Si edad es mayor que 180 meses (15 anos) entonces pedimos el sexo de la persona
            if (edadEmeses > 180) {
                cout<<"Ingresa tu sexo: (1) Mujer / (2) Hombre: ";
                cin>>sexo;
                //Si el sexo es igual a 1 o 2
                if (sexo == 1 || sexo == 2) {
                    //Si es mujer se hace esto
                    if (sexo == 1) {
                        //Se le asigna el nivel de hemo que es de 12
                        rangoMenor = 12;
                    }
                    //Si no, entonces es hombre
                    else {
                        //Se le asigna el nivel de hemo que es de 12
                        rangoMenor = 14;
                    }
                }
            }
            /*Aqui se comprueba si el nivel de hemo de una persona es menor que el rango que le corresponde es positivo, 
            Si el nivel de hemo es menor que el rango */
            if (nivelDehemo < rangoMenor) {
                cout<<"- - - - - - - - - - - - - - - - - - - - - - - - - - - -\n";
                cout<<"Positivo en anemia\n";
            }
            //Si no entonces el nivel es mayor que el rango
            else{
                cout<<"- - - - - - - - - - - - - - - - - - - - - - - - - - - -\n";
                cout<<"Negativo en anemia\n";
            }
            //Mostrar el rango
            cout<<"Valor de rango menor: "<<rangoMenor<<"\n";
            cout<<"- - - - - - - - - - - - - - - - - - - - - - - - - - - -\n";
            break;
        case 4:   
            cout<<"- - - - - - - - - - - - - - - - - - - - - - - - - - - -\n"; 
            cout<<"Eligiste el cuarto ejercicio\n";
            cout<<"Determinar el numero medio de tres numero diferentes.\n";
            //Pedir el 1 numero
            cout<<"Ingresa el primer numero: ";
            cin>>n1;
            //Pedir el 2 numero
            cout<<"Ingresa el segundo numero: ";
            cin>>n2;
            //Pedir el 3 numero
            cout<<"Ingresa el tercer numero: ";
            cin>>n3;
            //Se comprueba que todos los numeros sean distintos 
            if (n1 != n2 && n1 != n3 && n2 != n3) {
                //Si el numero 1 es mayor que el 2 y menor que el 3 O n1 menor que el 2 y mayor que el 3, el n1 es el del en medio
                if ((n1 > n2 && n1 < n3) || (n1 < n2 && n1 > n3)) {
                    cout<<"- - - - - - - - - - - - - - - - - - - - - - - - - - - -\n";
			        cout<<"El numero medio es: "<<n1<<"\n";
                    cout<<"- - - - - - - - - - - - - - - - - - - - - - - - - - - -\n";
                }
                else {
                    if ((n2 > n1 && n2 < n3) || (n2 < n1 && n2 > n3)) {
                        cout<<"- - - - - - - - - - - - - - - - - - - - - - - - - - - -\n";
                        cout<<"El numero medio es: "<<n2<<"\n";
                        cout<<"- - - - - - - - - - - - - - - - - - - - - - - - - - - -\n";
                    }
                    else {
                        if ((n3 > n1 && n3 < n2) || (n3 < n1 && n3 > n2)) {
                            cout<<"- - - - - - - - - - - - - - - - - - - - - - - - - - - -\n";
					        cout<<"El número medio es: "<<n3<<"\n";
                            cout<<"- - - - - - - - - - - - - - - - - - - - - - - - - - - -\n";
                        }
                    }
                    
                }   
            }
            else {
                cout<<"- - - - - - - - - - - - - - - - - - - - - - - - - - - -\n";
                cout<<"Los numeros deben ser diferentes\n";
                cout<<"- - - - - - - - - - - - - - - - - - - - - - - - - - - -\n";
            }
            break;
        case 5:
            cout<<"- - - - - - - - - - - - - - - - - - - - - - - - - - - -\n"; 
            cout<<"Eligiste el quinto ejercicio\n";
            cout<<"BlackJack\n";
            //Inicializar valores
            suma = 0;
            numPc = 0;
            finn = 0;
            num = 0;
            carta = 0;
            pc=0;
            // Herramienta para generar numero random al ejecutar un programa
            srand(time(NULL));
            //Repetir mientras la respuesta sea 1 si es 2 se para el bucle
            while (finn != 2){
                //Numero aleatorio del 1 - 10 para saber el numero de la carta
                num = rand()%10+1;
                //Numero aleatoria del 1 - 7 para las 7 cartas
                carta = (rand()%7)+1;
                //Si en las cartas salio 1
                if (carta == 1){
                    cout<<num<<" de Pica\n";
                }
                //Si salio 1
                if (carta == 1 && num == 1){
                    //Si el num es menor que 21 entonces esa carta vale 11
                    if (num < 21 ) {
                        num = 11;
                        //Si no vale 1
                    } else {
                        num = 1;
                    } 
                }
                if (carta == 2) {
                    cout<<num<<" de Corazon\n";
                }
                if(carta == 2 && num == 1) {
                    if (num < 21){
                        num = 11;
                    } else {
                        num = 1;
                    }
                }
                if (carta == 3) {
                    cout<<num<<" de Rombo\n";
                }
                if(carta == 3 && num == 1) {
                    if (num < 21){
                        num = 11;
                    } else {
                        num = 1;
                    }
                }
                if (carta == 4) {
                    cout<<num<<" de Trebol\n";
                }
                if(carta == 4 && num == 1) {
                    if (num < 21){
                        num = 11;
                    } else {
                        num = 1;
                    }
                }
                if (carta == 5) {
                    num = 10;
                    cout<<"1 de J\n";
                }
                if (carta == 6) {
                    num = 10;
                    cout<<"1 de Q\n";
                }
                if (carta == 7) {
                    num = 10;
                    cout<<"1 de K\n";
                }
                suma = suma + num;
                cout<<"La suma es de: "<<suma<<"\n";
                if (suma > 21){
                    cout<<"Ha perdido el juego\n";
                    cout<<"La suma excede los 21\n";
                    break;
                }
                cout<<"Desea pedir otra carta? Si presione 1, No presione 2\n";
                cin>>finn;
                if(finn == 2) {
                    finn = 2;
                }
            }

            pc = (rand()%7)+1;
            numPc = pc + 15;
            // Comprobamos si el jugador tiene menos de 21
	        if (numPc > 21) {
		        cout<<"Su puntaje es de: "<<suma<<"\n";
		        cout<<"Puntaje pc: "<<numPc<<"\n";
		        cout<<"¡Yupi! Ha ganado el juego!\n";
                break;
            }
            if (suma <= 21) {		
		        if (suma > numPc) {
			        cout<<"Su puntaje es de: "<<suma<<"\n";
			        cout<<"Puntaje pc: "<<numPc<<"\n";
			        cout<<"¡Yupi! Ha ganado el juego!\n";
                }
		        if (suma == numPc) {
			        cout<<"Su puntaje es de: "<<suma<<"\n";
			        cout<<"Puntaje pc: "<<numPc<<"\n";
			        cout<<"Juego empatado\n";
                }
		        if (suma < numPc) {
			        cout<<"Su puntaje es de: "<<suma<<"\n";
			        cout<<"Puntaje pc: "<<numPc<<"\n";
			        cout<<"Ha perdido el juego :(\n";
                }      
            }
            break;
        default:
            cout<<"Oups! No se ha encontrado ese ejercicio\n";
            break;
        }
        cout<<"Quieres usar otro ejercicio? (1) Si / (2) No \n";
        cin>>resp;
    } while (resp != 2);
    cout<<"Copyright by Angel Gabriel Lopez Hernandez and Keila Joanna Torres Merida";
    return 0;
}   