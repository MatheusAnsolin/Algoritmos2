/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.sistemacarros;

import java.util.Scanner;

/**
 *
 * @author Ansolin
 * @since 
 */
public class Carro {
    
    Scanner lerDados = new Scanner(System.in);
    
    public String modelo;
    public int ano;
    public Pessoa dono;

    public Carro() {
    }

    public Carro(String modelo, int ano) {
        this.modelo = modelo;
        this.ano = ano;
    }
    
    public Carro(String modelo, int ano, Pessoa dono) {
        this.modelo = modelo;
        this.ano = ano;
        this.dono = dono;
    }

    public void mostrarCarro(){
        System.out.println("Dados do carro:");
        System.out.println("Veículo de modelo " +this.modelo + ", do ano de "+this.ano);

        if(this.dono!=null){
           System.out.println( "Dono: " + this.dono.mostrarPessoa());
        }else{
            System.out.println("COMO PODE UM VEÍCULO SEM DONO!");
        }
    }

    public void inserirValores() {
        System.out.println("Qual modelo do carro?");
        this.modelo = lerDados.nextLine();
        System.out.println("Qual ano do carro?");
        this.ano = lerDados.nextInt();      

    }
    }