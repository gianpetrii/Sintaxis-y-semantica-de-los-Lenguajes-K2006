/*
   Utilizando VSC:

    - Seleccionar Terminal > Run Build Task y si uso MinGW, luego seleccionar opcion 'C/C++: g++.exe build active file'
    - Esto anterior crea el archivo '.exe'
    - Ir a la terminal y pararse la carpeta del proyecto
    - Correr el '.exe' desde la terminal, deberia decir 'Hello, World!'
    - Una vez verificado esto, se escribe por terminar el comando './hello.exe > output.txt'
    que deberia generar un archivo 'output.txt' con el texto 'Hello, World!'

   EL REPOSITORIO DE ESTE PROYECTO SE ENCUENTRA EN
    <https://github.com/gianpetrii/Sintaxis-y-semantica-de-los-Lenguajes-K2006/tree/main/00-CHelloWorld>
*/

#include <stdio.h>

int main(void)
{
   printf("Hello, World!\n");
}