package meuprograma;

public class MeuPrograma {

    public static void main(String[] args) {
        Computador pc1 = new Computador();
        Computador pc2 = new Computador();
        Computador pc3 = new Computador("", "", 0, 0, false);
        Computador pc4 = new Computador("", "", 0, 0, false);
       
        System.out.println("Pc 1");
        pc1.pegarDados();  
        System.out.println("Pc 2");
        pc2.pegarDados();
        System.out.println("Pc 3");
        pc3.pegarDados();
        System.out.println("Pc 4");
        pc4.pegarDados();

        System.out.println("Pc 1");
        pc1.imprimir();       
        System.out.println("Pc 2");
        pc2.imprimir();
        System.out.println("Pc 3");
        pc3.imprimir();
        System.out.println("Pc 4");
        pc4.imprimir();
     }
    
}
