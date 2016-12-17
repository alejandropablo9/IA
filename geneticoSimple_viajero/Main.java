public class Main{
  public static void main(String[] args) {
    GeneticoSimple gs = new GeneticoSimple();
    gs.iniciar();
    for (int i=0 ; i<1000 ; i++) {
      //System.out.println("Padres iniciales");
      //System.out.println(gs.printPadres());
      gs.seleccion();
      gs.ordenaPadres();
      //System.out.println("Padres Ordenados");
      //System.out.println(gs.printPadres());
      gs.generarHijos();
      gs.generaMutantes();
      //System.out.println("Hijos mutados");
      //System.out.println(gs.printHijos());
      gs.filtraAptitud();
      //System.out.println("Padres para la siguiente generacion");
      //System.out.println(gs.printPadres());
      gs.mejorGeneracion();
    }
    System.out.println(gs.printMejores());
  }
}
