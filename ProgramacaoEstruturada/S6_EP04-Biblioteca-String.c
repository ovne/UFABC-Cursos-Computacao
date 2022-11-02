//inclua as implementações das funções descritas em strlib.h

#include <stdio.h>
#include <stdlib.h>


/**
 * @brief string length (tamanho da string)
 * @details função determina o tamanho da string passada como parâmetro
 * desconsiderando o caractere '\0', ou seja, ele não é contabilizado no
 * tamanho. se a string for nula, a função deve retornar -1. a função 
 * assume que a string é bem formada, isto é, termina com o '\0'.
 * 
 * @param str string para qual o tamanho deve ser computado
 * @return o tamanho da string ou -1 no caso de string nula
 */
int str_length (const char *str) {
    if(str == NULL)return -1;
    int i = 0;
    while(*(str + i) != '\0'){
        i++;
    }
    return i;
}


/**
 * @brief string duplicate (duplica string)
 * @details a função duplica a string recebida como parâmetro. um novo
 * ponteiro é criado, memória para acomodar a cópia é alocada e o con-
 * teúdo de str é copiado para a nova região de memória criada. este 
 * ponteiro é então retornado pela função.
 * 
 * @param str a string a ser duplicada
 * @return ponteiro para a nova string que é uma cópia da original. caso
 * a string recebida como parâmetro seja nula a função retorna um pon-
 * teiro nulo.
 */
char* str_duplicate (const char *str) {
    if(str == NULL){
        char *pnull = NULL;
        return pnull; 
    }
    
    int len = str_length(str);
    char *copy = malloc(sizeof(char) * len);

    for(int i=0; i<len; i++)
        *(copy + i) = *(str + i);

    *(copy + len) = '\0';
    return copy;
}

/**
 * @brief string compare (compara strings)
 * @details compara duas strings com relação a seus caracteres. a função 
 * assume (pré condição) que as duas strings passadas como parâmetro não
 * são nulas e não trata estes casos.
 * 
 * @param stra uma string não nula devidamente formada (com \0 ao final)
 * @param strb uma string não nula devidamente formada (com \0 ao final)
 * 
 * @return a função retorna: 0 caso as strings sejam lexicograficamente 
 * iguais; -1 caso stra < strb; +1 caso stra > strb.
 */
int str_compare (const char *stra, const char *strb) {
    int i = 0;
    while(stra[i]!='\0' && strb[i] != '\0'){
        if(stra[i] != strb[i]){
            if(stra[i] < strb[i]) return -1; 
            else return 1;
        }
        i++;
    }

    // nesse ponto, ou as strings tem mesmo tamanho e são iguais. 
    // Ou uma das strings é maior e portanto a outra string é lexicograficamente menor
    if(str_length(stra) == str_length(strb)) 
        return 0;
    if(str_length(stra) < str_length(strb)) return -1;
    else return 1;
}


/**
 * @brief string revese (reverte string)
 * @details reverte uma string
 * 
 * @param str a string a ser revertida
 * @return retorna 1 caso consiga reverter a string e 0 caso contrário. 
 * Note que é possível reverter uma string vazia (o resultado é ela mes-
 * ma), mas não é possível reverter uma string nula.
 */
int str_reverse (char *str) {
    if(str == NULL)return 0;

    int len = str_length(str);
    //Caso em que str é vazia ou possui só um caractere
    if(len == 0 || len == 1)return 1;

    // Caso seja um palindromo, então não é possível reverter
    int eh_palindromo = 1;
    for(int i=0; i<=(len/2); i++){
        if(str[i] != str[(len-1)-i])eh_palindromo = 0;
    }
    if(eh_palindromo)return 0;
    else {
        // caso nao palindromo então vamo reverter permanentemente a string
        for(int i=0; i<(len/2); i++){
            int aux = str[i];
            str[i] = str[(len-1)-i];
            str[(len-1)-i] = aux;
        }
        return 1;
    }
}


/**
 * @brief string upper (string maiúsculas)
 * @details transforma todos caracteres alfabéticos da string para caixa 
 * alta (maiúsculo). somente os caracteres alfabéticos são alterados.
 * 
 * @param str a string que deve ser passada para caixa alta
 * @return o número de caracteres que foram transformados para caixa al-
 * ta. caso a string seja nula, retorna -1.
 */
int str_upper (char *str) {
    if(str == NULL)return - 1;

    int i = 0;
    int counter = 0;
    while(*(str + i) != '\0'){
        if(*(str + i) > 96 && *(str + i) < 123){
            *(str + i) = *(str + i) - 32;
            counter++;
        }
        i++;
    }
    return counter;
}


/**
 * @brief string lower (string minúsculas)
 * @details transforma todos caracteres alfabéticos da string para caixa 
 * baixa (minúsculo). somente os caracteres alfabéticos são alterados.
 * 
 * @param str a string que deve ser passada para caixa baixa
 * @return o número de caracteres que foram transformados para caixa
 * baixa. caso a string seja nula, retorna -1.
 */
int str_lower (char *str) {
    if(str == NULL)return - 1;

    int i = 0;
    int counter = 0;
    while(*(str + i) != '\0'){
        if(*(str + i) > 64 && *(str + i) < 91){
            *(str + i) = *(str + i) + 32;
            counter++;
        }
        i++;
    }
    return counter;
}


/**
 * @brief string copy (copia string)
 * @details copia o conteúdo da string src (source - fonte) para a 
 * string dst (destination - destino), incluindo o caractere \0. Todo o 
 * conteúdo da string dst será perdido. antes de realizar a cópia, a 
 * função verifica se a string dst possui tamanho suficiente para acomo-
 * dar a string src. ou seja, o número de caracteres de dst inlcuindo \0
 * deve ser maior ou igual que o número de caracteres de src (incluindo 
 * o caractere \0). caso dst seja menor que src a cópia não é realizada.
 * 
 * @param dst string que conterá a cópia
 * @param src string a ser copiada
 * 
 * @return retorna 1 caso a cópia seja feita, 0 caso não seja possível 
 * copiar (restrições de tamanho) e -1 caso src ou dst sejam nulas.
 */
int str_copy (char *dst, const char *src) {
    if(dst == NULL || src == NULL)return - 1;

    // validar se os tamanhos são compativeis com a operação
    int len_dst = str_length(dst) + 1; //+1 for '\0'
    int len_src = str_length(src) + 1;
    
    if(len_dst < len_src)return 0;
    else{
        for(int i=0; i<len_src; i++){
            *(dst + i) = *(src + i);
        }
        *(dst + len_src) = '\0';
        return 1;
    }
}


/**
 * @brief string contatenate (contatena strings)
 * @details contatena stra e strb em uma nova string, alocada pela fun-
 * ção. o ponteiro desta nova string é retornado pela função.
 * 
 * @param stra primeira string
 * @param strb segunda string
 * 
 * @return a concatenação das strings stra e strb. caso as duas sejam 
 * não nulas, retorna a concatenação. caso uma das strings seja nula, 
 * uma nova string deve ser alocada e uma cópia da string não nula é
 * retornada. caso stra e strb sejam nulas, um ponteiro nulo é retorna-
 * do pela função.
 */
char* str_concatenate (const char *stra, const char *strb) {
    // buscar o tamanho das strings
    int len_a = str_length(stra);
    int len_b = str_length(strb);

    if(stra == NULL && strb == NULL){
        char *pnull = NULL;
        return pnull;
    }
    else if(stra != NULL && strb == NULL){
        char *copy_a = malloc(sizeof(char) * len_a);
        for(int i=0; i<len_a; i++)
            copy_a[i] = stra[i];
        copy_a[len_a] = '\0';
        return copy_a;
    }
    else if(stra == NULL && strb != NULL){
        char *copy_b = malloc(sizeof(char) * len_b);
        for(int j=0; j<len_b; j++)
            copy_b[j] = strb[j];
        copy_b[len_b] = '\0';

        return copy_b;
    }
    else{
        //nesse ponto, ambas as strings são nao nulas
        int len_ab = len_a + len_b;
        char *concat_ab = malloc(sizeof(char) * len_ab);
        // então vou juntas as duas numa mesma string
        for(int m=0; m<len_a; m++){
            concat_ab[m] = stra[m];
        }
        for(int n=len_a; n<len_ab; n++){
            concat_ab[n] = strb[n-len_a];
        }
        concat_ab[len_ab] = '\0';

        return concat_ab;
    }
}


/**
 * @brief string find first (encontra primeira ocorrência)
 * @details encontra a primeira ocorrência do caractere c em str
 * 
 * @param str a string na qual o caractere será procurado
 * @param c o caractere a ser buscado
 * 
 * @return retorna a posição da primeira ocorrência do caractere c na 
 * string str. caso o caractere não seja encontrado ou str seja nula
 * a função retorna -1.
 */
int str_find_first (const char *str, const char c) {
    if(str == NULL)return -1;
    
    int i=0;
    while(str[i]!='\0'){
        if(str[i] == c) return i;
        i++;
    }
    // nesse ponto toda a string foi percorrida e 'c' nao foi encontrado
    return -1;
}


/**
 * @brief string find last (encontra última ocorrência)
 * @details encontra a última ocorrência do caractere c em str
 * 
 * @param str a string na qual o caractere será procurado
 * @param c o caractere a ser buscado
 * 
 * @return retorna a posição da última ocorrência do caractere c na 
 * string str. caso o caractere não seja encontrado ou str seja nula
 * a função retorna -1.
 */
int str_find_last (const char *str, const char c) {
    if(str == NULL)return -1;

    int j=0;
    int pos = -1;

    while(str[j]!='\0'){
        if(str[j] == c)
            pos = j;
        j++;
    }
    //nesse ponto 'pos' ja guarda a ultima ocorrencia de 'c' e caso 'c' esteja ausente 'pos' se mante como -1.
    return pos;
}


/**
 * @brief string count words (conta palavras)
 * @details conta o número de palavras em uma string
 * 
 * @param str a string para a qual a contagem será realizada
 * @return retorna o número de palavras da string. uma palavra é defini-
 * da como uma região de caracteres (quaisquer caracteres) separada por 
 * um ou mais espaços, ex: "   o gato preto cruzou a   estrada" possui
 * seis palavras. retorna -1 caso str seja nula.
 */
int str_count_words (const char *str) {
    if(str == NULL)return -1;
    // a identificação de uma palavra nessa função vai seguir a 'definição' para palavra que esta na documentação
    // porem, vale observar que essa definição é bastante vaga, o que pode limitar o comportamento da função.
    int i=0;
    int qtd=0;
    while(str[i] != '\0'){
        // se for um caractere qlqr seguido imediatamente por um '\s' então, conto como uma palavra
        if(str[i]!=32 && str[i+1]==32 || str[i+1] == '\0') qtd++;
        i++;
    }
    return qtd;
}

int main(){
    //"Frase de Teste."
    char str[30] = "Frase de Teste.";
    // Teste funcao str_length
    printf("RETORNO str_length: %d\n", str_length(str));

    // Testando função str_duplicate
    char *copy = str_duplicate(str);
    printf("RETORNO str_duplicate: %s\n", copy);
    free(copy);

    // Testando função str_compare
    printf("RETORNO str_compare: %d\n", str_compare(str, "Frase de Teste..e"));

    // Testando str_reverse (que deveria se chamar str_reversible uma vez que nao esta revertendo nada)
    printf("RETORNO str_reverse: %d\n", str_reverse(str));
    printf("ALTERACAO str_reverse: %s\n", str);

    // Testando str_upper()
    printf("RETORNO str_upper: %d\n", str_upper(str));
    printf("ALTERACAO str_upper: %s\n", str);

    // Testando str_upper()
    printf("RETORNO str_lower: %d\n", str_lower(str));
    printf("ALTERACAO str_lower: %s\n", str);

    // Testando str_copy()
    printf("RETORNO str_copy: %d\n", str_copy(str, "Frase, de teste"));
    printf("ALTERACAO str_copy: %s\n", str);

    // Testando função str_concatenate()
    char *concat = str_concatenate(str, " Muscle Man - 1# Prankster");
    printf("RETORNO str_concatenate: %s\n", concat);
    free(concat);

    // Testando função str_find_first()
    printf("RETORNO str_find_first: %d\n", str_find_first(str, 's'));

    // Testando função str_find_last()
    printf("RETORNO str_find_last: %d\n", str_find_last(str, 'e'));

    // Testando função str_count_words()
    printf("RETORNO str_count_words: %d\n", str_count_words("   o gato preto cruzou a   estrada"));

}
