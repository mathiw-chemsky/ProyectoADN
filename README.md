# ProyectoADN
Programa para hacer cosillas con el ADN

PROBLEMA A RESOLVER: Simular algunos procesos en los que están involucrados el ADN, el ARN y las proteinas.

1.- Análisis de requisitos
  1.1.- R. de los usuarios
     a) Completar la cadena del ADN, es decir que genere el par correspondiente.
     3'  -P-------------------------------------- 5'
     5' (--------------------------------------P-) 3'
        - Se va a ingresar una cadena de n caracteres.
        - Se tiene que imprimir el par correspondiente.
             
     b)  identificar la dirección de la polimerasa en cada cadena, mencionar si las cadenas se pueden     
        trasncribir, y si lo anterior es verdadero, indicar donde se encuentra la caja TATAAT
        - se va a ingresar los números de las direcciones de la primera cadena.
        - con la información anterior se indicará si la direccion es de izq-der o de der-izq tomando como 
          referencia la primera cadena de ADN.
        - A partir de un par de ADN dado, (o tomando el del punto anterior), se debe mencionar si las dos 
          cadenas pueden ser transcritas.
        - Si se identifica la posibilidad de transcripción, se indicará en que posición de la cadena se 
          encuentra la caja TATAAT (tal ve con parentesis), y se indicará en que número de nucleotido inicia 
          y termina.
        
     c) Generar la cadena de ARNm (mensajero)
        - Indicar en que número de nucleotido inicia la cadena de ARNm
        - con la información del paso b), generar e imprimir la cadena de ARNm.
     d) Separar el ARNm en codones e indicar a que cadena de aminoácidos corresponde.
       - LUEGO LO VEMOS.
    
  1.2.- R. del sistema
     a) Completar la cadena del ADN, es decir que genere el par correspondiente.
     3'  -P-------------------------------------- 5'
     5' (--------------------------------------P-) 3'
        - Se va a ingresar una cadena de n caracteres. (INPUT)
          - Solicitar al usuario que solo ingrese letras mayusculas.
          - Para lo anterior, generar el mecanismo para que, aunque el usuario ingrese números no se genere 
            un error de ejecución (ESTO SE HARA MUCHO DESPUES).         
          - Almacenar el ADN en una cadena de caracteres, que en este caso de prueba sera de máximo 30 
            caracteres.
        - Se tiene que imprimir el par correspondiente. (OUTPUT)
          - imprimir en pantalla la cadena resultante (unicamente)
          - (opcional) se puede crear un menu para elegir entre, solo cadena resultante, solo par resultante,              o cadena resultante y en conclusión el par resultante.
             
     b)  identificar la dirección de la polimerasa en cada cadena, mencionar si las cadenas se pueden     
        trasncribir, y si lo anterior es verdadero, indicar donde se encuentra la caja TATAAT
        - se va a ingresar los números de las direcciones de la primera cadena.
        - con la información anterior se indicará si la direccion es de izq-der o de der-izq tomando como 
          referencia la primera cadena de ADN.
        - A partir de un par de ADN dado, (o tomando el del punto anterior), se debe mencionar si las dos 
          cadenas pueden ser transcritas.
        - Si se identifica la posibilidad de transcripción, se indicará en que posición de la cadena se 
          encuentra la caja TATAAT (tal ve con parentesis), y se indicará en que número de nucleotido inicia 
          y termina.
        
     c) Generar la cadena de ARNm (mensajero)
        - Indicar en que número de nucleotido inicia la cadena de ARNm
        - con la información del paso b), generar e imprimir la cadena de ARNm.


2.- Diseño de software


3.- construcción

4.- Pruebas

5.- Despliegue y mantenimiento
