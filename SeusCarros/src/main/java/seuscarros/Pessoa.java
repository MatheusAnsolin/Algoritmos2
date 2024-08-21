package seuscarros;
class Pessoa {
    public String nome;
    public String tipoCNH;

     public Pessoa() {
    }
        
    public Pessoa(String nome, String tipoCNH) {
        this.nome = nome;
        this.tipoCNH = tipoCNH;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getTipoCNH() {
        return tipoCNH;
    }

    public void setTipoCNH(String tipoCNH) {
        this.tipoCNH = tipoCNH;
    }

   
}
