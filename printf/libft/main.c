/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvieira <alvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 11:12:53 by alvieira          #+#    #+#             */
/*   Updated: 2023/05/20 18:28:39 by alvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

# define YELLOW "\033[1;33m" // vai negrito tbm
# define RESET "\033[0m" // vai resetar para a cor original
# define ITALIC "\033[3m\033[36m" // vai deixar italico e azul
# define BLUE "\033[0;34m" // vai deixar azul
# define GREEN "\033[32m" // vai deixar verde
# define RED "\033[31m" // vai deixar vermelho
# define CIANO "\033[36m" // vai deixar ciano

char	ft_tolower2(unsigned int i, char c)
	{
		(void)i;
		if (c >= 'A' && c <= 'Z')
			c = c + 32;
		return (c);
	}

int	main(void)
{	
	int	num;
	printf("Please, insert:\n%s(1)%s for libft part 1\n%s(2)%s for libft part 2\n%s(3)%s for libft bonus\n", CIANO, RESET, CIANO, RESET, CIANO, RESET);
	scanf("%i", &num);

	//PARTE 1
	if (num == 1){
	
	{//ft_strlen
	printf("%s\nft_strlen%s\n", YELLOW, RESET);
	printf("%sRetorna o tamanho de uma string\n%s", ITALIC, RESET);
	
	const char *str1 = "Hello, world!";
	size_t len = ft_strlen(str1);
	
	printf("size_t	ft_strlen(const char %s%s%s)\n\n", CIANO, str1, RESET);
	printf("Original: %lu\n", strlen(str1));
	printf("Minha: %lu\n\n", len);
}

	{//ft_strlcat
	printf("%s\nft_strlcat%s\n", YELLOW, RESET);
	printf("%sConcatena duas strings em um buffer de destino (maximo n-1) e retorna o tamanho total da string resultante.\n%s", ITALIC, RESET);

	char    a[20] = "azul";
	const char    b[] = "verde";
	size_t	size = 8;
	
	printf("size_t	ft_strlcpy(char %s%s%s, const char %s%s%s, size_t %s%lu%s)\n\n", CIANO, a, RESET, CIANO, b, RESET, CIANO, size, RESET);
	printf("Return = %lu\n", ft_strlcat(a, b, size));
	printf("DST After: %s\n", a);
	printf("SRC After: %s\n\n", b);
	}

	{//ft_strlcpy
	printf("%s\nft_strlcpy%s\n", YELLOW, RESET);
	printf("%sA função strlcpy copia uma string para um buffer de destino (maximo n-1) e retorna o tamanho da string de origem\n%s", ITALIC, RESET);
	char dst1[] = "Hello";
	char src1[] = "LifeisGood";
	size_t n = 6;
	printf("size_t	ft_strlcpy(char %s%s%s, const char %s%s%s, size_t %s%lu%s)\n\n", CIANO, dst1, RESET, CIANO, src1, RESET, CIANO, n, RESET);
	printf("Return = %lu\n", ft_strlcpy(dst1, src1, n));
	printf("DST After: %s\n", dst1);
	printf("SRC After: %s\n\n", src1);
	}

	{//ft_isalpha
	printf("%s\nft_isalpha%s\n", YELLOW, RESET);
	printf("%sDetermina se um caractere é uma letra do alfabeto ou não. (1) Positivo. (0) Negativo\n%s", ITALIC, RESET);
	int	c = 97;
	printf("int	ft_isalpha(char %s%i%s)\n\n", CIANO, c, RESET);
	printf("Original = %i\n", isalpha(c));
	printf("Minha = %i\n\n", ft_isalpha(c));
	}

	{//ft_isdigit
	printf("%s\nft_isdigit%s\n", YELLOW, RESET);
	printf("%sverifica se um caractere é um dígito numérico (0-9) ou não. (1) Positivo (0) Negativo\n%s", ITALIC, RESET);
	int	d = 7;
	printf("int ft_isdigit(int %s%i%s)\n\n", CIANO, d, RESET);
	printf("Original = %i\n", isdigit(d));
	printf("Minha = %i\n\n", ft_isdigit(d));
	}

	{//ft_isalnum
	printf("%s\nft_isalnum%s\n", YELLOW, RESET);
	printf("%sVerifica se um caractere é uma letra do alfabeto ou um dígito decimal. (1) Positivo (0) Negativo\n%s", ITALIC, RESET);
	int	e = 98;
	printf("int ft_isalnum(int %s%i%s)\n\n", CIANO, e, RESET);
	printf("Original = %i\n", isalnum(e));
	printf("Minha = %i\n\n", ft_isalnum(e));
	}

	{//ft_isascii
	printf("%s\nft_isascii%s\n", YELLOW, RESET);
	printf("%sVerifica se um valor inteiro representa um caractere ASCII (0-127) (1) Positivo (0) Negativo\n%s", ITALIC, RESET);
	int	f = 55;
	printf("int ft_isascii(int %s%i%s)\n\n", CIANO, f, RESET);
	printf("Original = %i\n", isascii(f));
	printf("Minha = %i\n\n", ft_isascii(f));
	}

	{//ft_isprint
	printf("%s\nft_isprint%s\n", YELLOW, RESET);
	printf("%sVerifica se um caractere é imprimível ou não (32-126) (1) Positivo (0) Negativo\n%s", ITALIC, RESET);
	int	g = 14;
	printf("int ft_isprint(int %s%i%s)\n\n", CIANO, g, RESET);
	printf("Original = %i\n", isprint(g));
	printf("Minha = %i\n\n", ft_isprint(g));
	}

	{//ft_memset
	printf("%s\nft_memset%s\n", YELLOW, RESET);
	printf("%sPermite preencher uma região de memória com um valor específico\n%s", ITALIC, RESET);
	int h = 'H';
	size_t	l = 4;
	unsigned char	ptr[] = "Euteamo";
	unsigned char	ptr2[] = "Euteamo";
	printf("void	*ft_memset(void %s%s%s, int %s%i%s, size_t %s%lu%s)\n\n", CIANO, ptr, RESET, CIANO, h, RESET, CIANO, l, RESET);
	printf("Frase = %s\n", ptr);
	memset(ptr2, h, l);
	ft_memset(ptr, h, l);
	printf("Original = %s\n", ptr2);
	printf("Minha = %s\n\n", ptr);
	}

	{//ft_bzero
	printf("%s\nft_bzero%s\n", YELLOW, RESET);
	printf("%sPermite preencher uma região de memória com zeros\n%s", ITALIC, RESET);
	size_t	k = 4;
	unsigned char	ptr3[] = "FilhoDaPuta";
	unsigned char	ptr4[] = "FilhoDaPuta";
	printf("void	*ft_bzero(void %s%s%s, size_t %s%lu%s)\n\n", CIANO, ptr3, RESET, CIANO, k, RESET);
	printf("Frase = %s\n", ptr3);
	bzero(ptr3, k);
	ft_bzero(ptr4, k);
	printf("Original = %s\n", ptr3);
	printf("Minha = %s\n\n", ptr4);
	}

	{//ft_memcpy
	printf("%s\nft_memcpy%s\n", YELLOW, RESET);
	printf("%sPermite copiar uma região de memória de uma área para outra\n%s", ITALIC, RESET);
	
	size_t gu = 3 * sizeof(char);
	char ptr5[] = "Hello, world!";
	char ptr7[] = "Hello, world!";
	
	printf("void *ft_memcpy(void %s%s%s, const void %s%s%s, size_t %s%lu%s)\n\n", 
	CIANO, ptr5 + 3, RESET, CIANO, ptr5, RESET, CIANO, gu, RESET);
	
	printf("Frase: %s\n", ptr7);
	
	memcpy(ptr7 + 3, ptr7, gu);
	ft_memcpy(ptr5 + 3, ptr5, gu);
	
	printf("Original: %s\n", ptr7);
	printf("Minha %s\n\n", ptr5);
	}

	{//ft_memmove
	printf("%s\nft_memmove%s\n", YELLOW, RESET);
	printf("%sPermite copiar uma região de memória para outra, mesmo se as regiões se sobrepõem\n%s", ITALIC, RESET);

	size_t gh = 3;
	unsigned char pointer1[] = "Hello, world!";
	unsigned char pointer2[] = "Hello, world!";

	printf("void *ft_memmove(void *%s%s%s, const void *%s%s%s, size_t %s%lu%s)\n\n", CIANO, pointer1 + 3, RESET, CIANO, pointer1, RESET, CIANO, gh, RESET);

	printf("src: %s\n", pointer1);
	memmove(pointer1 + 3, pointer1, gh);
	ft_memmove(pointer2 + 3, pointer2, gh);

	printf("dest (original): %s\n", pointer1);
	printf("dest (minha): %s\n", pointer2);

	if (memcmp(pointer2, pointer1, sizeof(pointer2)) == 0) {
		printf("%sYeah! Estao iguais!%s\n\n", GREEN, RESET);
	} else {
		printf("\n%sOops :( Estao diferentes.%s\n\n", RED, RESET);
	}
	}

	{//ft_toupper
		printf("%s\nft_toupper%s\n", YELLOW, RESET);
	printf("%sPermite converter um caractere para maiúsculo, se ele for uma letra minúscula\n%s", ITALIC, RESET);

	unsigned char c1 = 'a';

	printf("int	ft_toupper(int %sa (%i)%s)\n\n", CIANO, c1, RESET);

	int result1 = toupper(c1);
	int result2 = ft_toupper(c1);
	
	printf("Original: %i\n", result1);
	printf("Minha: %i\n", result2);

	if (result1 == result2) {
		printf("%sYeah! Os resultados são iguais!%s\n\n", GREEN, RESET);
	} else {
		printf("\n%sOops :( Os resultados são diferentes.%s\n\n", RED, RESET);
	}
	}
	
	{//ft_tolower
	printf("%s\nft_tolower%s\n", YELLOW, RESET);
	printf("%sPermite converter um caractere para minúsculo, se ele for uma letra maiúscula\n%s", ITALIC, RESET);

	unsigned char c1 = 'B';

	printf("int	ft_tolower(int %sB (%i)%s)\n\n", CIANO, c1, RESET);

	int result1 = tolower(c1);
	int result2 = ft_tolower(c1);
	
	printf("Original: %i\n", result1);
	printf("Minha: %i\n", result2);

	if (result1 == result2) {
		printf("%sYeah! Os resultados são iguais!%s\n\n", GREEN, RESET);
	} else {
		printf("%sOops :( Os resultados são diferentes.%s\n\n", RED, RESET);
	}
	}
	
	{//ft_strchr
	printf("%s\nft_strchr%s\n", YELLOW, RESET);
	printf("%sBusca a primeira ocorrência de um caractere em uma string e retorna um ponteiro com esta posicao\n%s", ITALIC, RESET);

	const char *s = "Bom dia, malta!";
	int c5 = 257;

	printf("char *ft_strchr(const char *%s%s%s, int %s%i%s)\n\n", CIANO, s, RESET, CIANO, c5, RESET);
	
	char *result1 = strchr(s, c5);
	char *result2 = ft_strchr(s, c5);

	printf("String: %s\n", s);
	printf("Caractere: %c\n", c5); // vai imprimir a letra correspondente ao inteiro ascii
	printf("Resultado (original): %s\n", result1);
	printf("Resultado (minha versão): %s\n", result2);

	if (result1 == result2) {
		printf("%sYeah! Os resultados são iguais!%s\n\n", GREEN, RESET);
	} else {
		printf("%sOops :( Os resultados são diferentes.%s\n\n", RED, RESET);
	}
	
	}

	{//ft_strrchr
	printf("%s\nft_strrchr%s\n", YELLOW, RESET);
	printf("%sBusca a ultima ocorrencia de um carectere em uma string e retorna um ponteiro com esta posicao%s\n", ITALIC, RESET);

	const char	*s5 = "Como voce esta seu idiota?";
	int	b5 = 'C';
	
	printf("char *ft_strrchr(const char *%s%s%s, int %s%i%s\n\n", CIANO, s5, RESET, CIANO, b5, RESET);

	char *result3 = strrchr(s5, b5);
	char *result4 = ft_strrchr(s5, b5);
	
	printf("String: %s\n", s5);
	printf("Caractere: %c\n", b5); // vai imprimir a letra correspondente ao inteiro ascii
	printf("Resultado (original): %s\n", result3);
	printf("Resultado (minha versão): %s\n", result4);

	if (result3 == result4)
		printf("%sYeah! Os resultados sao iguais!%s\n\n", GREEN, RESET);
	else
		printf("%sOops : ( Os resultados sao diferentes.%s\n\n", RED, RESET);
	}
	
	{//ft_strncmp
	
	printf("%s\nft_strncmp%s\n", YELLOW, RESET);
	printf("%sCompara os primeiros n caracteres de duas strings e retorna um valor indicando a ordem lexicográfica%s\n", ITALIC, RESET);

	const char *s1 = "Bom dia pessoal!";
	const char *s2 = "\0";
	size_t n = 1;

	printf("int ft_strncmp(const char *%s%s%s, const char *%s%s%s, size_t %s%zu%s\n\n", CIANO, s1, RESET, CIANO, s2, RESET, CIANO, n, RESET);

	int result1 = strncmp(s1, s2, n);
	int result2 = ft_strncmp(s1, s2, n);

	printf("String 1: %s\n", s1);
	printf("String 2: %s\n", s2);
	printf("Número de caracteres a comparar: %zu\n", n);
	printf("Resultado (original): %d\n", result1);
	printf("Resultado (minha versão): %d\n", result2);

	if ((result1 > 0 && result2 > 0) || (result1 < 0 && result2 < 0))
		printf("%sYeah! Os resultados são iguais!%s\n\n", GREEN, RESET);
	if (result1 == result2)
		printf("%sOops :( Os resultados são diferentes.%s\n\n", RED, RESET);
	}

	{//ft_memchr
	const char *string = "Bom dia, malta!";
	int d1 = 400;
	size_t teste = 8;

	printf("%s\nft_memchr%s\n", YELLOW, RESET);
	printf("%sProcura pela primeira ocorrência de um byte específico em um bloco de memória e retorna um ponteiro com essa posicao.\n%s", ITALIC, RESET);
	printf("void *ft_memchr(const void *%s%s%s, int %s%i%s, size_t %s%lu%s)\n\n", CIANO, string, RESET, CIANO, d1, RESET, CIANO, teste, RESET);
	
	char *result18 = memchr(string, d1, teste);
	char *result19 = ft_memchr(string, d1, teste);

	printf("String: %s\n", string);
	printf("Caractere: %c\n", d1);
	printf("Resultado (original): %s\n", result18);
	printf("Resultado (sua versão): %s\n", result19);

	if (result18 == result19) {
		printf("%sOs resultados são iguais!%s\n\n", GREEN, RESET);
	} else {
		printf("%sOs resultados são diferentes.%s\n\n", RED, RESET);
	}
	}

	{//ft_memcmp
	printf("%s\nft_memcmp%s\n", YELLOW, RESET);
	printf("%sUsada para comparar blocos de memória e determinar se eles são iguais ou diferentes.%s\n", ITALIC, RESET);

	const char *troy = "Troy Bolton";
	const char *sharpey = "Sharpey Evans";
	size_t ryan = 5;

	printf("int ft_memcmp(const void *%s%s%s, const void *%s%s%s, size_t %s%zu%s\n\n", CIANO, troy, RESET, CIANO, sharpey, RESET, CIANO, ryan, RESET);

	int resultado1 = memcmp(troy, sharpey, ryan);
	int resultado2 = ft_memcmp(troy, sharpey, ryan);

	printf("String 1: %s\n", troy);
	printf("String 2: %s\n", sharpey); 
	printf("Resultado (original): %d\n", resultado1);
	printf("Resultado (minha versão): %d\n", resultado2);

	if (resultado1 == resultado2) {
	printf("%sYeah! O Ryan aprovaria!%s\n\n", GREEN, RESET);
	} else {
	printf("%sOops :( A Sharpey não iria gostar disso.%s\n\n", RED, RESET);
	}
	}

	{//ft_strnstr
	printf("%s\nft_strnstr%s\n", YELLOW, RESET);
	printf("%sProcura a primeira ocorrência de uma substring em uma string, com um limite máximo de caracteres a serem comparados.%s\n", ITALIC, RESET);


	const char *ss1 = "O rato roeu a roupa do rei de Roma";
	const char *ss2 = "roupa";
	size_t nn2 = 20;

	printf("char *ft_strnstr(const char *%s%s%s, const char %s%s%s, size_t %s%lu%s)\n\n", CIANO, ss1, RESET, CIANO, ss2, RESET, CIANO, nn2, RESET);

	printf("String 1: %s\n", ss1);
	printf("String 2: %s\n", ss2);
	printf("Número de caracteres a procurar: %lu\n", nn2);

	// char *result00 = strnstr(ss1, ss2, nn2);
	char *result01 = ft_strnstr(ss1, ss2, nn2);

	// printf("Resultado (original): %s\n", result00);
	printf("Resultado (minha versão): %s\n", result01);

	// if (result00 == NULL && result01 == NULL) {
	//     printf("%sYeah! Os resultados são iguais!%s\n\n", GREEN, RESET);
	// } else if (result00 != NULL && result01 != NULL && strcmp(result00, result01) == 0) {
	//     printf("%sYeah! Os resultados são iguais!%s\n\n", GREEN, RESET);
	// } else {
	//     printf("%sOops :( Os resultados são diferentes.%s\n\n", RED, RESET);
	// }
	}

	{//ft_atoi
	printf("%s\nft_atoi%s\n", YELLOW, RESET);
	printf("%sTransforma string num inteiro.%s\n", ITALIC, RESET);

	const char *teste500 = "   +2147483648";
	printf("int	atoi(const char %s%s%s\n\n", CIANO, teste500, RESET);
	
	printf("String: %s\n", teste500);

	// convertendo a string usando a função ft_atoi
	int ft_result = ft_atoi(teste500);

	// convertendo a string usando a função atoi original
	int original_result = atoi(teste500);

	printf("Original = %i\n", original_result);
	printf("Minha Versao = %i\n", ft_result);

	// comparando os resultados
	if (ft_result == original_result) {
		printf("%sYeah! Os resultados são iguais!%s\n\n", GREEN, RESET);
	} else {
		printf("%sOops :( Os resultados são diferentes.%s\n\n", RED, RESET);
	}

}

	{//ft_calloc
	printf("%s\nft_calloc%s\n", YELLOW, RESET);
	printf("%sAloca e inicializa um bloco de memória com zeros, retornando um ponteiro para essa região de memória.%s\n", ITALIC, RESET);

	size_t num = 5;

	printf("void *ft_calloc(size_t %s%lu%s, size_t %s(sizeof)%s)\n\n", CIANO, num, RESET, CIANO, RESET);

	char *arr;
	char *arr2;

	arr = ft_calloc(num, sizeof(char));
	arr2 = calloc(num, sizeof(char));

	if (arr == arr2) {
		printf("%sYeah! Os resultados são iguais!%s\n\n", GREEN, RESET);
	} else {
		printf("%sOops :( Os resultados são diferentes.%s\n\n", RED, RESET);
	}
	}

	{//ft_strdup
	printf("%s\nft_strdup%s\n", YELLOW, RESET);
	printf("%sUsada para copiar uma string. Retorna um ponteiro.%s\n", ITALIC, RESET);

	const char *originalString = "Hello, world!";
    char *copiedString;
	char *copiedString2;

	printf("char *ft_strdup(const char %s%s%s)\n\n", CIANO, originalString, RESET);

	printf("String Original: %s\n", originalString);

    copiedString = strdup(originalString);
	copiedString2 = ft_strdup(originalString);

    printf("Cópia da string (Original): %s\n", copiedString);
	printf("Cópia da string (Minha): %s\n", copiedString2);

	if (strcmp(copiedString, copiedString2) == 0) {
	printf("%sYeah! Os resultados sao iguais!%s\n\n", GREEN, RESET);
	} else {
	printf("%sOops :( Os resultados sao diferentes :(%s\n\n", RED, RESET);
	}
	}

}


	//PARTE 2
	if (num == 2){
	
	{//ft_substr
	printf("%s\nft_substr%s\n", YELLOW, RESET);
	printf("%sAloca e retorna uma substring de uma string original, a partir de um índice inicial e um comprimento máximo.%s\n", ITALIC, RESET);

	char	*str45 = "tripouille";
	int		start = 1;
	size_t	str_len = 42000;

	printf("char	*ft_substr(char const %s%s%s, unsigned int %s%i%s, size_t %s%lu%s\n\n", CIANO, str45, RESET, CIANO, start, RESET, CIANO, str_len, RESET);

	printf("String: %s\n", str45);
	printf("Posicao Inicial: %i\n", start);
	printf("Número max de caracteres: %lu\n", str_len);
	printf("Substring: %s\n\n", ft_substr(str45, start, str_len));
	}

	{//ft_strjoin
	printf("%s\nft_strjoin%s\n", YELLOW, RESET);
	printf("%sConcatena duas strings em uma nova string.%s\n", ITALIC, RESET);

	char	*str46 = "EU SOU ";
	char	*str47 = "JESUS, TUDO BEM?";

	printf("char	*ft_strjoin(const char %s%s%s, const char %s%s%s\n\n", CIANO, str46, RESET, CIANO, str47, RESET);

	printf("String 1: %s\n", str46);
	printf("String 2: %s\n", str47);
	printf("Nova String: %s\n\n", ft_strjoin(str46, str47));
	}
	
	{//ft_itoa
	printf("%s\nft_itoa%s\n", YELLOW, RESET);
	printf("%sConverte inteiro em uma String%s\n", ITALIC, RESET);

	int num = -214783648; // -214783648;
    char *str = ft_itoa(num);

	printf("char	*ft_itoa(int n%s%i%s\n\n", CIANO, num, RESET);
	
    printf("Inteiro: %d\nString: %s\n", num, str);
	}	

	{//ft_strmapi
	printf("%s\nft_strmapi%s\n", YELLOW, RESET);
	printf("%sMapeia uma string aplicando uma função em cada caractere, retornando uma nova string modificada%s\n\n", ITALIC, RESET);
	

	char const	*str88 = strdup("HAKUH FKAH FKJH FKASVBWNWNWMM");
	char 	*newstr;
	
	newstr = ft_strmapi(str88, &ft_tolower2);
	
	printf("char	*ft_strmapi(char const *%s%s%s, char %s(*f)(unsigned int, char)%s\n\n", CIANO, str88, RESET, CIANO, RESET);

	printf("String Antiga: %s\n", str88);
	printf("String Nova: %s\n", newstr);
	
	}
	
	{//ft_split
	printf("%s\nft_split%s\n", YELLOW, RESET);
	printf("%sSepara uma string em substrings com base em um delimitador especificado e retorna um array contendo essas substrings.%s\n", ITALIC, RESET);
	

	char const	*str31 = "      ola tudo  bem chato";
	char 	**array_str = ft_split(str31, ' ');
	int j = 0;

	printf("char	*ft_split((char const %s%s%s, char %s'%c'%s)\n\n", CIANO, str31, RESET, CIANO, ' ', RESET);
	printf("Array de Strings:\n");
	
	while(array_str[j])
	{
		printf("%s\n", array_str[j]);
		j++;
	}

	}
	
	{//ft_striteri
	printf("%s\nft_striteri%s\n", YELLOW, RESET);
	printf("%sItera sobre uma string e aplica uma função de modificação a cada caractere, utilizando o índice como argumento%s\n", ITALIC, RESET);
	

	char	*str70 = "Hello Mundo! Eu estou bem";
	
	printf("char	*ft_striteri(char *%s%s%s, char *%s(*f)(unsigned int, char)%s\n\n", CIANO, str70, RESET, CIANO, RESET);

	printf("I don't know how to make the test :(\n");
	}
	
	{//ft_putchar_fd
	printf("%s\nft_putchar_fd%s\n", YELLOW, RESET);
	printf("%sEscreve um caractere em um descritor de arquivo especificado, resultando na exibição do caractere no local associado%s\n", ITALIC, RESET);
	

	char	ch = 'A';
	int		fd = 1;
	
	printf("void ft_putchar_fd(char %s%c%s, int %s%i%s)\n\n", CIANO, ch, RESET, CIANO, fd, RESET);

	printf("Result:\n");
	ft_putchar_fd(ch, fd);
	printf("\n");

	}

	{//ft_putstr_fd
	printf("%s\nft_putstr_fd%s\n", YELLOW, RESET);
	printf("%sEscreve uma string em um descritor de arquivo especificado, resultando na exibição da string no local associado%s\n", ITALIC, RESET);
	

	char	*chh = "Hello World!";
	int		fds = 1;
	
	printf("void ft_putstr_fd(char %s%s%s, int %s%i%s)\n\n", CIANO, chh, RESET, CIANO, fds, RESET);

	printf("Result:\n");
	ft_putstr_fd(chh, fds);
	printf("\n");

	}

	{//ft_putendl_fd
	printf("%s\nft_putendl_fd%s\n", YELLOW, RESET);
	printf("%simprime uma string seguida por uma nova linha em um arquivo especificado%s\n", ITALIC, RESET);
	

	char	*chhs = "Hello World!";
	int		fdss = 1;
	
	printf("void ft_putendl_fd(char %s%s%s, int %s%i%s)\n\n", CIANO, chhs, RESET, CIANO, fdss, RESET);

	printf("Result:\n");
	ft_putstr_fd(chhs, fdss);
	printf(".");

	}

	{//ft_putnbr_fd
	printf("%s\nft_putnbr_fd%s\n", YELLOW, RESET);
	printf("%sImprime um número inteiro em um descritor de arquivo especificado.%s\n", ITALIC, RESET);
	

	int		fdh = 1;
	int		nb = -2147483648;
	
	printf("void ft_putnbr_fd(int %s%i%s, int %s%i%s)\n\n", CIANO, nb, RESET, CIANO, fdh, RESET);

	printf("Result:\n");
	ft_putnbr_fd(nb, fdh);
	printf("\n");

	}

	}
	
	//BONUS
	if (num == 3){
	
	{//ft_lstnew
	printf("%s\nft_lstnew%s\n", YELLOW, RESET);
	printf("%sAloca memória e cria um novo nó para uma lista encadeada%s\n", ITALIC, RESET);

	int *data = (int*)malloc(sizeof(int));
    *data = 42;
    t_list *new_node = ft_lstnew(data);

    // Verificando se o novo nó foi criado corretamente
    if (new_node != NULL)
    {
        // Acessando o conteúdo do nó e exibindo na saída padrão
        int *content = (int*)new_node->content;
        printf("Content: %d\n", *content);
        printf("Next: %p\n", new_node->next);
    }

    // Liberando a memória alocada
    free(data);
    free(new_node);

	}

	{//ft_lstadd_front 
	printf("%s\nft_lstadd_front%s\n", YELLOW, RESET); 
	printf("%sAdiciona um elemento no inicio da lista%s\n\n", ITALIC, RESET);

	// Criação da lista inicialmente vazia
    t_list *lista = NULL;

    // Criação dos nós
    t_list *gato1 = (t_list *)malloc(sizeof(t_list));
    t_list *gato2 = (t_list *)malloc(sizeof(t_list));
    t_list *gato3 = (t_list *)malloc(sizeof(t_list));

    gato1->content = "Gato 1";
    gato1->next = NULL;
    gato2->content = "Gato 2";
    gato2->next = NULL;
    gato3->content = "Gato 3";
    gato3->next = NULL;

    // Adicionando nós na frente da lista
    ft_lstadd_front(&lista, gato3);
    ft_lstadd_front(&lista, gato2);
    ft_lstadd_front(&lista, gato1);

    // Verificando se a lista está vazia
    if (lista == NULL)
    {
        printf("A lista está vazia.\n");
    }
    else
    {
        // Percorrendo a lista e imprimindo o conteúdo dos nós
        t_list *current = lista;
        while (current != NULL)
        {
            printf("Conteúdo: %s\n", (char *)(current->content));
            current = current->next;
        }
    }

    // Liberando a memória alocada
    free(gato1);
    free(gato2);
    free(gato3);

	}

	{//ft_lstsize
	printf("%s\nft_lstsize%s\n", YELLOW, RESET); 
	printf("%sConta o número de nós em uma lista encadeada.%s\n\n", ITALIC, RESET);
	// Criação da lista
    t_list *node1 = (t_list *)malloc(sizeof(t_list));
    t_list *node2 = (t_list *)malloc(sizeof(t_list));
    t_list *node3 = (t_list *)malloc(sizeof(t_list));

    node1->content = "Node 1";
    node1->next = node2;
    node2->content = "Node 2";
    node2->next = node3;
    node3->content = "Node 3";
    node3->next = NULL;

    // Chamada da função ft_lstsize
    int size = ft_lstsize(node1);
    
    // Exibindo o resultado na saída padrão
    printf("Tamanho da lista: %d\n", size);

    // Liberando a memória alocada
    free(node1);
    free(node2);
    free(node3);


	
	}
	
	{//ft_lstlast
	printf("%s\nft_lstlast%s\n", YELLOW, RESET); 
	printf("%sA função ft_lstlast retorna o último nó de uma lista encadeada.%s\n\n", ITALIC, RESET);
	
	// Criação da lista
    t_list *zavi = NULL;

    // Criação dos nós
    t_list *dog1 = (t_list *)malloc(sizeof(t_list));
    t_list *dog2 = (t_list *)malloc(sizeof(t_list));
    t_list *dog3 = (t_list *)malloc(sizeof(t_list));

    dog1->content = "Dog 1";
    dog1->next = NULL;
    dog2->content = "Dog 2";
    dog2->next = NULL;
    dog3->content = "Dog 3";
    dog3->next = NULL;

    // Adicionando nós na lista
    zavi = dog1;
    dog1->next = dog2;
    dog2->next = dog3;

    // Obtendo o último nó
    t_list *ultimoNo = ft_lstlast(zavi);

    if (ultimoNo != NULL)
    {
        printf("Conteúdo do último nó: %s\n\n", (char *)(ultimoNo->content));
    }
    else
    {
        printf("A lista está vazia.\n");
    }

    // Liberando a memória alocada
    free(dog1);
    free(dog2);
    free(dog3);


	}
	
	{//ft_lstadd_back
	printf("%s\nft_lstadd_back%s\n", YELLOW, RESET); 
	printf("%sA função ft_lstadd_back adiciona um novo nó ao final de uma lista encadeada.%s\n\n", ITALIC, RESET);

	// Criação da lista vazia
    t_list *lista = NULL;

    // Criação dos nós
    t_list *bird1 = (t_list *)malloc(sizeof(t_list));
    t_list *bird2 = (t_list *)malloc(sizeof(t_list));
    t_list *bird3 = (t_list *)malloc(sizeof(t_list));

    bird1->content = "Bird 1";
    bird1->next = NULL;
    bird2->content = "Bird 2";
    bird2->next = NULL;
    bird3->content = "Bird 3";
    bird3->next = NULL;

    // Adicionando nós na lista usando ft_lstadd_back
    ft_lstadd_back(&lista, bird1);
    ft_lstadd_back(&lista, bird2);
    ft_lstadd_back(&lista, bird3);

    // Impressão do conteúdo dos nós na lista
    t_list *node = lista;
    while (node != NULL)
    {
        printf("Conteúdo do nó: %s\n", (char *)(node->content));
        node = node->next;
    }

    // Liberando a memória alocada
    free(bird1);
    free(bird2);
    free(bird3);
	
	
	}
	}
	
	else
		printf("ERROR! You need to insert a number. Try it again :(");

return (0);

}
