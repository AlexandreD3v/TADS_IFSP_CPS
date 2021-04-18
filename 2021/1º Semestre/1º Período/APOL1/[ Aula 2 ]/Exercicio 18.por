
/* CLIQUE NO SINAL DE "+", À ESQUERDA, PARA EXIBIR A DESCRIÇÃO DO EXEMPLO
 *  
 * Copyright (C) 2014 - UNIVALI - Universidade do Vale do Itajaí
 * 
 * Este arquivo de código fonte é livre para utilização, cópia e/ou modificação
 * desde que este cabeçalho, contendo os direitos autorais e a descrição do programa, 
 * seja mantido.
 * 
 * Se tiver dificuldade em compreender este exemplo, acesse as vídeoaulas do Portugol 
 * Studio para auxiliá-lo:
 * 
 * https://www.youtube.com/watch?v=K02TnB3IGnQ&list=PLb9yvNDCid3jQAEbNoPHtPR0SWwmRSM-t
 * 
 * Descrição:
 * 
 *	Este exemplo utiliza a entrada de dados do Portugol para ler e armazenar
 * 	um número inteiro em uma variável. Logo após, utiliza a saída de dados para
 * 	exibir o número digitado.
 * 
 * Autores:
 * 
 * 	Giordana Maria da Costa Valle
 * 	Carlos Alexandre Krueger
 * 	
 * Data: 01/06/2013
 */
 
programa 
{ 
	funcao inicio () 
	{ 
		inteiro numero_1, numero_2,soma, subtracao, produto, divisao, resto
		
		escreva("Digite o primeiro número inteiro: ")
		leia(numero_1)
		
		escreva("Digite o segundo número inteiro: ")
		leia(numero_2)

		soma = numero_1 + numero_2
		subtracao = numero_1 - numero_2
		produto = numero_1 * numero_2
		divisao = numero_1 / numero_2
		resto = numero_1 % numero_2
		
		escreva("\nA soma dos números digitados é: ", soma, "\n")
		escreva("A subtração dos números digitados é: ", subtracao, "\n")
		escreva("A multiplicação dos números digitados é: ", produto, "\n")
		escreva("A divisão dos números digitados é: ", divisao, "\n")
		escreva("O resto dos números digitados é: ", resto, "\n")
	} 
}

/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 1279; 
 * @DOBRAMENTO-CODIGO = [1];
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */