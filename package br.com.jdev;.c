package br.com.jdev;
import java.util.Scanner;

public class switch_case {
	

	public static void main(String [] args) {
		
		Scanner ler = new Scanner(System.in);
		
		String moeda;
		float qtd; // quantidade de moedas


​		

		/* 1 centavo = 2.43g       		12,15 qtd5
		   5 centavos = 4.10g     	 	32,8  qtd8
		   10 centavos = 4.80g			43,2  qtd9
		   25 centavos = 7.55g			75,5  qtd10
		   50 centavos = 9.25g			92,5  qtd10
		   1 real      = 7.84g 		    78,4  qtd10       */
		
		int moeda1, moeda5,moeda10, moeda25, moeda50, moeda1R;
		
		double peso1 = 2.43;
		double peso5 = 4.10;
		double peso10 = 4.80;
		double peso25 = 7.55;
		double peso50 = 9.25;
		double peso1R = 7.84;
		
		float total_peso_moedas = 0;
		
		int valor_total_moedas_m1 = 0;
		int valor_total_moedas = 0;		
		
		System.out.println("Digite a quantidade de moeda1: ");
		moeda1 = ler.nextInt();		
		
		System.out.println("Digite a quantidade de moeda5: ");
		moeda5 = ler.nextInt();	
		
		System.out.println("Digite a quantidade de moeda10: ");
		moeda10 = ler.nextInt();
		
		System.out.println("Digite a quantidade de moeda25: ");
		moeda25 = ler.nextInt();
		
		System.out.println("Digite a quantidade de moeda50: ");
		moeda50 = ler.nextInt();
		
		System.out.println("Digite a quantidade de moeda1R: ");
		moeda1R = ler.nextInt();
		
		System.out.println("Quantidade de moeda1 -> " + moeda1);
		System.out.println("Quantidade de moeda5 -> " + moeda5);
		System.out.println("Quantidade de moeda10 -> " + moeda10);
		System.out.println("Quantidade de moeda25 -> " + moeda25);
		System.out.println("Quantidade de moeda50 -> " + moeda50);
		System.out.println("Quantidade de moeda1R -> " + moeda1R);
		
		System.out.println("\nValor financeiro da moeda1 inserida -> R$ " + moeda1 * 0.10 );
		System.out.println("Valor financeiro da moeda5 inserida -> R$ " + moeda5 * 0.5 );
		System.out.println("Valor financeiro da moeda10 inserida -> R$ " + moeda10 * 0.10 );
		System.out.println("Valor financeiro da moeda25 inserida -> R$ " + moeda25 * 0.25 );
		System.out.println("Valor financeiro da moeda50 inserida -> R$ " + moeda50 * 0.50 );
		System.out.println("Valor financeiro da moeda1R inserida -> R$ " + moeda1R * 1 );
		
		total_peso_moedas = (float) (peso1 * moeda1 + peso5 * moeda5 + peso10 * moeda10 + peso25 * moeda25 + peso50 * moeda50 + peso1R * moeda1R); 


​		

		System.out.println("\nPeso total de todas as moedas: " + total_peso_moedas + "kg");
		
		valor_total_moedas_m1 = (moeda1 + moeda5 + moeda10 + moeda25 + moeda50);
		valor_total_moedas = (moeda1 + moeda5 + moeda10 + moeda25 + moeda50 + moeda1R);
		
		System.out.println("\nValor total das moedas - moeda1R -> " + valor_total_moedas_m1);		
		System.out.println("\nValor total de todas as moedas -> " + valor_total_moedas );
		
		if(moeda1 > moeda1R ) {
			if(moeda1 > 1300){
				System.out.println("Será necessário enviar as moedas1 para o banco central realizar a trocar por moedas de 1 real");
			}
			else {
				System.out.println("Não será necessario");
			}


​			

		}


​		
​		
​		

	}		

}