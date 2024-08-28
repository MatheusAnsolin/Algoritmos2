/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.sistemacarros;

import java.util.Scanner;

/**
 *
 * @author Alunos
 */
public class Pessoa {

    Scanner lerDados = new Scanner(System.in);
    
    public String nome;
    public String tipoCNH;

     public Pessoa() {
    }
      
    public Pessoa(String nome, String tipoCNH) {
        this.nome = nome;
        this.tipoCNH = tipoCNH;
    }
    public void inserirValores(){
        System.out.println("Digite seu nome:");
        this.nome = lerDados.nextLine();
        System.out.println("Qual tipo de sua CNH?");
        this.tipoCNH = lerDados.nextLine();
             
    }

    String mostrarPessoa() {
        String mensagem = ("Sr(a) " + this.nome+", com habilitação categoria "+this.tipoCNH);
        return mensagem;
      
        
    }
}
