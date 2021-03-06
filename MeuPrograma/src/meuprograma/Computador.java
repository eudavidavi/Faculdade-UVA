package meuprograma;
import java.util.Scanner;

public class Computador {
    private String modelo;
    private String processador;
    private int hd;
    private int memoria;
    private boolean comHdmi;
    
    public Computador(){}
    
    public Computador(String modelo, String processador, int hd, int memoria, boolean comHdmi){
        this.modelo = modelo;
        this.processador = processador;
        this.hd = hd;
        this.memoria = memoria;
        this.comHdmi = comHdmi;
   }
    public String getModelo(){
        return modelo;
    }
    
    public void setModelo(String modelo){
        this.modelo = modelo;
    }

    public String getProcessador() {
        return processador;
    }

    public void setProcessador(String processador) {
        this.processador = processador;
    }

    public int getHd() {
        return hd;
    }

    public void setHd(int hd) {
        this.hd = hd;
    }

    public int getMemoria() {
        return memoria;
    }

    public void setMemoria(int memoria) {
        this.memoria = memoria;
    }

    public boolean isComHdmi() {
        return comHdmi;
    }

    public void setComHdmi(boolean comHdmi) {
        this.comHdmi = comHdmi;
    }
    
    void imprimir(){ 
        /* System.out.println("Este é o " + this); //--- COMO Imprimir o nome do pc (pc1, pc2,...)?--- */
        System.out.println("Modelo: " + this.modelo);
        
        System.out.println("Processador: " + this.processador);
       
        System.out.println("Hd: " + this.hd);
        
        System.out.println("Memória: " + this.memoria);
       
        System.out.println("Entrada HDMI: " + this.comHdmi);
    }
   
    void pegarDados(){
        Scanner dados = new Scanner(System.in);
         
        System.out.println("Digite o modelo do seu pc: ");
        modelo = dados.nextLine();   
        
        System.out.println("Digite o nome do processador: ");
        processador = dados.nextLine(); 
        
        System.out.println("Digite a capacidade do seu HD: ");
        hd = dados.nextInt();
        
        System.out.println("Digite a capacidade da sua memória: ");
        memoria = dados.nextInt();
        
        System.out.println("Seu PC tem entrada HDMI? (escreva 'true' ou 'false') ");
        comHdmi = dados.nextBoolean(); 
    }
}



