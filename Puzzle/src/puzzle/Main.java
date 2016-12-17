public class Main {

	public static void main(String[] args) {
		Puzzle pz = new Puzzle();
		Presentacion pr = new Presentacion(pz.getTablero());
		Busqueda b = new Busqueda(false, pr);
		b.busqueda_profundidad(pz, 0, 20);
	}
}
