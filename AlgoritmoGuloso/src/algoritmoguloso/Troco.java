/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package algoritmoguloso;

/**
 *
 * @author luana
 */
public class Troco {
    int[] qtdNotas = new int[6];
    int[] qtdMoedas = new int[6];
   // int nota100=0, nota50=0, nota20=0, nota10=0, nota5=0, nota2=0;
    
    public void calculaTroco(Double valor){
        double aux;
        aux = calculaNotas(valor);
        calculaMoedas(aux);
        
    }
    
    public double calculaNotas(Double valor){
        qtdNotas[0] = (int) (valor/100);
        valor -= qtdNotas[0]*100;
        qtdNotas[1] = (int) (valor/50);
        valor -= qtdNotas[1]*50;
        qtdNotas[2] = (int) (valor/20);
        valor -= qtdNotas[2]*20;
        qtdNotas[3] = (int) (valor/10);
        valor -= qtdNotas[3]*10;
        qtdNotas[4] = (int) (valor/5);
        valor -= qtdNotas[4]*5;
        qtdNotas[5] = (int) (valor/2);
        valor -= qtdNotas[5]*2;
        System.out.println("Notas de 100,00: " + qtdNotas[0]);
        System.out.println("Notas de 50,00: " + qtdNotas[1]);
        System.out.println("Notas de 20,00: " + qtdNotas[2]);
        System.out.println("Notas de 10,00: " + qtdNotas[3]);
        System.out.println("Notas de 05,00: " + qtdNotas[4]);
        System.out.println("Notas de 02,00: " + qtdNotas[5]);
        return valor;
    }
    public void calculaMoedas(Double valor){
        qtdMoedas[0] = (int) (valor/1);
        valor -= qtdMoedas[0]*1;
        
        qtdMoedas[1] = (int) (valor/0.50);
        valor -= qtdMoedas[1] *0.50;
        
        qtdMoedas[2] = (int) (valor/0.25);
        valor -= qtdMoedas[2]*0.25;
        
        qtdMoedas[3] = (int) (valor/0.10);
        valor -= qtdMoedas[3]*0.10;
        
        qtdMoedas[4] = (int) (valor/0.05);
        valor -= qtdMoedas[4]*0.05;
        
        qtdMoedas[5] = (int) (valor/0.01);
        valor -= qtdMoedas[5]*0.01;
        
        System.out.println("Moedas de 1,00: " + qtdMoedas[0]);
        System.out.println("Moedas de 0,50: " + qtdMoedas[1]);
        System.out.println("Moedas de 0,25: " + qtdMoedas[2]);
        System.out.println("Moedas de 0,10: " + qtdMoedas[3]);
        System.out.println("Moedas de 0,05: " + qtdMoedas[4]);
        System.out.println("Moedas de 0,01: " + qtdMoedas);

    }
}
