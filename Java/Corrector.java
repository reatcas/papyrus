/*
 *
Implementacion en Java de "Norvig spell checker"
la versión para python puede encontrarse en: http://www.norvig.com/spell-correct.html
Esta es la version Java de:  http://raelcunha.com/spell-correct.php

        El objetivo del autor era programar un corrector gramatical sencillo

Comentarios - Scot Drisdale
Traducciones - Rene Casaña

 @author Rael Cunha

*/
package oscareditor;

import java.io.*;
import java.util.*;
import java.util.regex.*;


class Corrector {

  private HashMap<String, Integer> nPalabras;

  /**
   * Constructor de corrector de palabras.
   * Crea un mapa de palabras correctas con sus frecuancias basadas
   * en el archivo dado.
   *
   * @param archivo texto a procesar
   * @throws IOException
   */
  public Corrector(String archivo) throws IOException {
    nPalabras = new HashMap<String, Integer>();
    BufferedReader in = new BufferedReader(new FileReader(archivo));

    // Este patrón encuentra cualquier palabra, caracter, letras o dígitos
    Pattern patron = Pattern.compile("\\w+");
    for(String temporal = ""; temporal != null; temporal = in.readLine()){
      Matcher m = patron.matcher(temporal.toLowerCase());

      // Busca la siguiente igualdad en el patron, en este caso, una palabra
      // group devuelve la ultima igualdad encontrada
      // La ? es una expresion condicional
      while(m.find())
        nPalabras.put((temporal = m.group()), nPalabras.containsKey(temporal) ? nPalabras.get(temporal) + 1 : 1);
    }
    in.close();
  }

  /**
   * Construye una lista de todas las palabras dentro de la longitud de la palabra dada.
   * @param word la palabra de donde construirá la lista
   * @return retorna una lista de palabras dentro del rango de la longitud de la palabra dada
   */
  private ArrayList<String> edits(String word) {
    ArrayList<String> result = new ArrayList<String>();

    // Todas palabras de una sola letra
    for(int i=0; i < word.length(); ++i)
      result.add(word.substring(0, i) + word.substring(i+1));

    // Todos los intercambios entre letras adyacentes
    for(int i=0; i < word.length()-1; ++i)
      result.add(word.substring(0, i) + word.substring(i+1, i+2) +
                 word.substring(i, i+1) + word.substring(i+2));

    // Todos los reemplazos de letras
    for(int i=0; i < word.length(); ++i)
      for(char c='a'; c <= 'z'; ++c)
        result.add(word.substring(0, i) + String.valueOf(c) + word.substring(i+1));

    // Todas las insercciones de letras
    for(int i=0; i <= word.length(); ++i)
      for(char c='a'; c <= 'z'; ++c)
        result.add(word.substring(0, i) + String.valueOf(c) + word.substring(i));

    return result;
  }

  /**
   * Corrige la palabra en una distancia de 2 caracteres .
   * @param palabra
   * @return retorna palabra corregida si está dentro del rango
   */
  public String correct(String palabra) {
    // Si el diccionario la retorna como correctamente escrita
    if(nPalabras.containsKey(palabra))
      return palabra;

    ArrayList<String> list = edits(palabra);
    // Todas las palabras en rango de 1 caracter de error
    HashMap<Integer, String> candidatas = new HashMap<Integer, String>();

    // Encuentra todas las palabras en rango de 1 caracter de error
    //  y recuerda su frecuencia contada del numero de palabras.
    // (Nota: si tienen iguales frecuencias, la última será seleccionada)
    for(String s : list)
      if(nPalabras.containsKey(s))
        candidatas.put(nPalabras.get(s),s);

    // Si encuentra algo en un margen de 1 caracter de error, retorna la palabra mas frecuente
    if(candidatas.size() > 0)
      return candidatas.get(Collections.max(candidatas.keySet()));

    // Encientra todas las palabras en un margen de 1 caracter, mas las de margen de 2
    // más la palabra original.
    for(String s : list)
      for(String w : edits(s))
        if(nPalabras.containsKey(w))
          candidatas.put(nPalabras.get(w),w);

    // Si encuentra algo en margen de 2 caracteres, lo retorna
    // Sino, no retorna nada > ""
    return candidatas.size() > 0 ?
        //candidatas.get(Collections.max(candidatas.keySet())) : "" + palabra;
            candidatas.get(Collections.max(candidatas.keySet())) : "" + palabra;
  }

  /**
   * La versión original de esta clase lee una palabra y la corrige desde la linea de comandos.
   * está comentada en la parte de abajo
   * @throws IOException
   */

/*
   public static void main(String args[]) throws IOException {
    if(args.length > 0)
            System.out.println(
                    (new Corrector("C:\\Users\\rene\\Documents\\Editor\\español.txt")).correct(args[0]));
  }
*/

  /*
   public static void main(String args[]) throws IOException {
     Corrector corrector = new Corrector("C:\\Users\\rene\\Documents\\Editor\\español.txt");
     Scanner input = new Scanner(System.in);

     System.out.println("Ingrese la palabra a corregir");
     String palabra = input.next();

     while(true) {
       System.out.println(palabra + " fue corregida a  " + corrector.correct(palabra));
       palabra = input.next();
     }
   }
   */
}
