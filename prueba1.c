float promedio(Lista *lista){
  int x, largo_lista, suma;
  suma = 0;
  //utilizando las funciones dentro del TDAlista
  //la función Fin entrega la posición del último valor(n-1)
  largo_lista = Fin(lista); 
  
  for (x = 0; x < largo_lista; x++){
    suma+ = Recuperar(x, lista);
    //se utiliza la funcion recuperar para que vaya sumando cada elemento de la lista
  }
  return (suma/largo_lista);
}
