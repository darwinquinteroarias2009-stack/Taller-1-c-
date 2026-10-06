 #include<iostream>
 #include<string>
 using namespace std;

 int main(){
    cout<<" 1. Declarando variables de diferentes tipos: \n ";
    
    //variables entero
    int edad = 25;
    int añoNacimiento = 1998;
    
    //variables punto flotante
    float altura = 1.75;
    double peso = 70.5;
    
    //variables de caracteres
    char inicial = 'D';
    char genero = 'M';
    
    //variables booleanas
    bool esEstudiante = true;
    bool tieneExperencia = false;
    
    //variables de tipo cadena
    string nombre = " Elver";
    string apellido = " Gomez";
    
    //===== PARTE 2: MOSTRAR VALORES =====
    cout <<" -Edad: " << edad << "años\n";
    cout <<" -Año de Nacimiento: " << añoNacimiento << "\n";
    cout <<" -Altura: " << altura << "metros\n";
    cout <<" -Peso: " << peso << "Kg\n";
    cout <<" -Inicial: " << inicial << "\n";
    cout <<" -Genero: " << genero << "\n";
    cout <<" -¿Es Estudiante?: " << (esEstudiante ? "si" : "no" ) << "\n";
    cout <<" -¿Tiene experencia?: " << (tieneExperencia ? "si" : "no" ) << "\n";
    cout <<" -Nombre Completo: " << nombre + apellido << "\n";
    
 

  //======Parte3: ENTRADA DEL USUARIO====
  string nombreUsuario;
  int edadUsuario;
  float alturaUsuario;
  
  cout<<" por favor ingresa nombre de usuario";
  cin>> nombreUsuario;
  
  cout<<" por favor ingresa edad de usuario";
  cin>> edadUsuario;
  
  cout<<" por favor ingresa altura de usuario";
  cin>> alturaUsuario;
  
  //===Parte4: MOSTRAR DATOS INGRESADOS===
    cout << "-nombre: " << nombreUsuario << "\n";
    cout <<" -Edad: " << edad << "años\n";
    cout <<" -Altura: " << altura << "metros\n";
  
  //===Parte 5: Operaciones con variables====
  int añosJubilacion = 65 - edadUsuario;
  float alturaEncentimetros= alturaUsuario *100;
  
  cout <<"  -años de jubilacion: "<< añosJubilacion<<"\n";
  cout <<"  -Altura en centimentros:"<< alturaEncentimetros<<"\n\n";
  return 0;
  }