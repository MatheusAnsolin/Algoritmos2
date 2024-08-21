package seuscarros;

/**
 *
 * @author Ansolin
 * @since 
 */
public class Carro {
    public String modelo;
    public int ano;
    public Pessoa dono;

    public Carro(String modelo, int ano, Pessoa dono) {
        this.modelo = modelo;
        this.ano = ano;
        this.dono = dono;
    }

    public String getModelo() {
        return modelo;
    }

    public void setModelo(String modelo) {
        this.modelo = modelo;
    }

    public int getAno() {
        return ano;
    }

    public void setAno(int ano) {
        this.ano = ano;
    }

    public Pessoa getDono() {
        return dono;
    }

    public void setDono(Pessoa dono) {
        this.dono = dono;
    }
    
    
}