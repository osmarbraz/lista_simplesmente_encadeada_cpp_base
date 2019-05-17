/**
 *
 * Implementação dos métodos Base de Lista Simplesmente Encadeada.
 *
 */

//Inclui o cabeçalho da classe Lista
#include "Lista.h"

/**
 * Construtor sem parâmetro da lista.
 */
Lista::Lista() {
    this->inicio = (No*) NULL; //Inicializa o início da lista com null
}

/**
 * Recuperador de início.
 *
 * @return O nó do início da lista.
 */
No* Lista::getInicio() {
    return inicio;
}

/**
 * Modificador de início.
 *
 * @param inicio Um nó a ser atribuído ao início da lista.
 */

void Lista::setInicio(No* inicio) {
    this->inicio = inicio;
}

/**
 * Retorna o valor em String da lista.
 *
 * @return Uma string com o valor do início da lista.
 */

string Lista::paraString() {
    stringstream endereco;
    endereco << this;
    stringstream enderecoinicio;
    enderecoinicio << getInicio();
    return "OID: " + endereco.str() + " / início: " + enderecoinicio.str();
}

/**
 * Insere um nó no início da lista.
 *
 * @param valor Um novo valor de um nó a ser inserido na lista.
 * @return Verdadeiro se conseguiu incluir o nó no início da lista.
 */
bool Lista::inserirInicio(int valor) {
  
    return true;
}

/**
 * Insere um nó em uma posição especifica da lista.
 *
 * @param valor Um novo valor de um nó a ser inserido na lista.
 * @param k Posição a ser inserida o valor.
 * @return Verdadeiro ou falso se conseguiu incluir o novo valor.
 */
bool Lista::inserirPosicao(int valor, int k) {
    
    return false;
}

/**
 * Insere um nó no final da lista.
 *
 * @param valor Um novo valor de um nó a ser inserido na lista.
 * @return Verdadeiro se conseguiu incluir o nó no final da lista.
 */
bool Lista::inserirFim(int valor) {
   
    return false;
}

/**
 * Excluir um nó do início da lista.
 *
 * @return Verdadeiro ou falso se excluiu o valor do início.
 */
bool Lista::excluirInicio() {
   
    return false;
}

/**
 * Excluir um Nó da lista pela posição.
 *
 * @param k Posição do nó a ser excluído da lista.
 * @return Verdadeiro ou falso se excluiu o valor da posição.
 */
bool Lista::excluirPosicao(int k) {
    
    return false;
}

/**
 * Excluir um nó do final da lista.
 *
 * @return Verdadeiro ou falso se excluiu o valor do final.
 */
bool Lista::excluirFim() {
    
   return false;
}

/**
 * Altera o valor de um Nó da lista pela posição.
 *
 * @param valor Um valor a ser atualizado na posição k da lista.
 * @param k Posição do nó a ser alterado da lista.
 * @return Verdadeiro ou falso se alterou o valor da posição.
 */
bool Lista::alterarPosicao(int valor, int k) {
    
   return false;
}

/**
 * Procura lista pela posição.
 *
 * @param k Posição do nó a ser consultada na lista.
 * @return O dado de uma posição k ou -1.
 */
int Lista::procurarPosicao(int k) {
    
    return -1;
}

/**
 * Procura o nó da lista pela posição.
 *
 * @param chave Valor a a ser consultado na lista.
 * @return A posição do dado na lista ou -1.
 */
int Lista::procurarValor(int chave) {
    
    return -1;
}

/**
 * Lista os dados da lista.
 *
 * @return Uma String com os dados da lista.
 */
string Lista::listar() {
    //Recupera o início da lista
    No* atual = getInicio();
    int cont = 0;
    //String de retorno
    string temp = "";
    while (atual != NULL) {
        cont = cont + 1;
        temp = temp + to_string(cont) + "-" + to_string(atual->getDado()) + "\n";
        atual = atual->getProximo();
    }
    return temp;
}

/**
 * Lista os dados da lista.
 *
 * @return Uma String com os dados da lista e seus endereços.
 */
string Lista::listarEndereco() {
    //Recupera o início da lista
    No* atual = getInicio();
    int cont = 0;
    //String de retorno
    string temp = "";
    stringstream enderecoatual;
    enderecoatual << atual;
    temp = temp + "Início = " + enderecoatual.str() + "\n";
    while (atual != NULL) {
        cont = cont + 1;
        stringstream enderecoatual;
        enderecoatual << atual;
        stringstream enderecoproximo;
        enderecoproximo << atual->getProximo();
        temp = temp + to_string(cont) + "- Dado = " + to_string(atual->getDado()) + " / Endereço = " + enderecoatual.str() + " / Próximo = " + enderecoproximo.str() + "\n";
        atual = atual->getProximo();
    }
    return temp;
}

/**
 * Retorna a quantidade de nós da lista.
 *
 * @return A quantidade de nós da lista.
 */
int Lista::getQuantidade() {
    int cont = 0;
    //Verifica se a lista não esta vazia
    if (getInicio() != NULL) {
        //Recupera o início da lista
        No* atual = getInicio();
        while (atual != NULL) {
            cont = cont + 1;
            atual = atual->getProximo();
        }
    }
    return cont;
}

/**
 * Retorna se a lista esta vazia.
 *
 * @return Verdadeiro ou falso se a lista está vazia.
 */
bool Lista::estaVazia() {
    return getInicio() == NULL;
}