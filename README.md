# 📚 Fila Dinâmica em C

Este projeto apresenta a implementação de uma **estrutura de dados do tipo Fila (Queue)** em linguagem C, utilizando **listas encadeadas**.
Inclui funções básicas para **enfileirar (inserir)** e **desenfileirar (remover)** elementos.

---

## 🚀 Funcionalidades

* Criar uma fila dinâmica.
* Inserir elementos no **final** da fila.
* Remover elementos do **início** da fila.
* Gerenciamento de memória dinâmica com `malloc` e `free`.

---

## 🛠️ Estruturas Utilizadas

```c
typedef struct NO {
    int dado;
    struct NO* prox;
} NO;

typedef struct FILA {
    NO* inicio;
    NO* fim;
} FILA;
```

---

## 📌 Observação

Este projeto foi desenvolvido como **atividade acadêmica**, com a proposta de aplicar conceitos de **estruturas de dados dinâmicas** na prática.

