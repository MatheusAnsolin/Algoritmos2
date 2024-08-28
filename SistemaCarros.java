package com.mycompany.sistemacarros;
/**
 *
 * @author Alunos
 */
public class SistemaCarros {    
    public static void main(String[] args) { 
        
        System.out.println("Sistema de Carros 1");
        Pessoa pessoa = new Pessoa();
        pessoa.inserirValores();
        System.out.println(pessoa.mostrarPessoa());
        Carro carro = new Carro();
        carro.inserirValores();
        carro.mostrarCarro();
        carro.dono = pessoa;
        carro.mostrarCarro();

        }
}