package seuscarros;

public class SeusCarros {

    public static void main(String[] args) {
        System.out.println("Sistema de Carros 1");
        
        Pessoa p = new Pessoa();
        System.out.println("criei a pessoa " + p.nome + " com CNH tipo " + p.tipoCNH);
        p.nome = "Jora";
        p.tipoCNH= "abc";
       System.out.println("criei a pessoa " + p.nome + " com CNH tipo " + p.tipoCNH);

       Pessoa s = new Pessoa("bolina", "AAA");
        System.out.println("criei a pessoa " + s.nome + " com CNH tipo " + s.tipoCNH);

       
       
    }
}
