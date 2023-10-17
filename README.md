![Tec de Monterrey](images/logotecmty.png)
# Act 3.4 - Actividad Integral de Árboles (Evidencia Competencia)

## <span style="color: rgb(26, 99, 169);">¿Qué tengo que hacer?</span>
En este repositorio encontrarás los archivos de entrada, así como las salidas esperadas que podrás usar para probar tu implementación. También encontrarás un archivo "main.cpp". Ahí deberás implementar tu solución. En el archivo deberás colocar en la parte superior, en comentarios, tus datos. Por ejemplo:
```
// =========================================================
// File: main.cpp
// Author: Edward Elric - A00123456
// Date: 01/01/2021
// =========================================================
```
<span style="text-decoration: underline;">De manera individual</span>, desarrolla la solución del siguiente problema:

Considere un árbol enraizado. Un árbol con raíz tiene un vértice especial llamado raíz. Todos los bordes están dirigidos desde la raíz. El vértice *u* se llama hijo del vértice *v* y el vértice *v* se llama padre del vértice *u* si existe una arista dirigida de *v* a *u*. Un vértice se llama hoja si no tiene hijos y tiene un padre.
 
Llamemos abeto a un árbol enraizado si cada uno de sus vértices que no son hojas tiene al menos 3 hijos hojas. Dado un árbol enraizado, comprueba si es un abeto.

## <span style="color: rgb(26, 99, 169);">**Entrada**</span>
La primera línea contiene un número entero *n*: el número de vértices en el árbol (3 <= *n* <= 1000). Cada una de las siguientes *n* - 1 líneas contiene un número entero p<sub>i</sub> (1 <= *i* <= *n* - 1), el índice del padre del *i* + 1-ésimo vértice (1 <= p<sub>i</sub> <= i).

## <span style="color: rgb(26, 99, 169);">**Salida**</span>
Despliega "Yes" si el árbol es un abeto y "No" en caso contrario.

## <span style="color: rgb(26, 99, 169);">**Ejemplo de entrada 1**</span>
```
7
1
1
1
2
2
2
```

## <span style="color: rgb(26, 99, 169);">**Ejemplo de salida 1**</span>
```
No
```

## <span style="color: rgb(26, 99, 169);">**Ejemplo de entrada 2**</span>
```
8
1
1
1
1
3
3
3
```

## <span style="color: rgb(26, 99, 169);">**Ejemplo de salida 2**</span>
```
Yes
```

Para probar tu implementación, compila tu programa con el comando:
```
g++ -std=c++11 main.cpp -o app
```
Posteriormente, prueba con cada uno de los archivos de entrada de prueba que encontrarás en este repositorio (input1.txt, input2.txt, input3.txt, input4.txt). Los resultados que debes obtener se encuentran en los archivos llamados output1.txt, output1.txt, output1.txt y output1.txt. Para realizar las pruebas, puedes usar las siguientes líneas de código. Por ejemplo, si queremos probar con el archivo de prueba "input1.txt".
```
./app < input1.txt > mysolution1.txt
diff mysolution1.txt output1.txt
```
Si el segundo comando no tenga ninguna salida, sabrás que los resultados que obtuviste son los esperados. 

Por último, realiza una investigación y reflexión en forma individual de la importancia y eficiencia del uso de los diferentes algoritmos de ordenamiento y búsqueda en una situación problema de esta naturaleza, generando un documento llamado **"ReflexAct3.4.pdf"**

## <span style="color: rgb(26, 99, 169);">**¿Bajo qué criterios se evalúa mi evidencia?**</span>

- **80%** - Para cada una de las funcionalidades se evaluará:

    - **Excelente (80%)** - pasa correctamente todos los casos de prueba.
    - **Muy Bien (60%)** - pasa correctamente el 75% de los casos de prueba.
    - **Bien (40%)** - pasa correctamente el 50% de los casos de prueba.
    - **Insuficiente (20%)** - pasa correctamente menos del 50% de los casos de prueba.


- **10%** - El código deberá seguir los lineamientos estipulados en el estándar de codificación: <span class="instructure_file_holder link_holder">[liga_estándar_codificación](estandar.pdf)</span>
- **10%** - Se respetenan los nombres de las funciones en la aplicación.

## <span style="color: rgb(26, 99, 169);">**¿Dónde la entrego?**</span>
Esta actividad forma parte tanto de tu calificación final del curso, así como del portafolio de evidencias de las competencias a desarrollar del curso, por lo que se te pide que en forma individual:
* Realices una entrega de  los archivos correspondientes de los algoritmos de ordenamiento y búsqueda, en la sección correspondiente dentro de esta plataforma, así como el documento de reflexión individual (**ReflexAct3.4.pdf**).
* Generes una carpeta en forma personal llamada **TC1031(Portafolio_Final)** que servirá como preparación para la entrega del portafolio de competencias que se realizará al final del curso, esta carpeta debe contener 5 carpetas:
    * Act1.3
    * Act2.3
    * **Act3.4** - coloca aquí tus archivos que solucionaron la <span style="text-decoration: underline;">actividad 1.3</span> así como el documento de reflexión individual (**ReflexAct3.4.pdf**).
    * Act4.3
    * Act5.2
