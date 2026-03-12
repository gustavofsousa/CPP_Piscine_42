<h1 align="center">CPP Piscine — Módulos C++</h1>

<p align="center">
  <img src="https://img.shields.io/badge/linguagem-C++-blue.svg" alt="Linguagem">
  <img src="https://img.shields.io/badge/padrão-C++98-orange.svg" alt="C++98">
  <img src="https://img.shields.io/badge/42-School-black.svg" alt="42 School">
  <img src="https://img.shields.io/badge/status-completo-brightgreen.svg" alt="Status">
</p>

<p align="center">
  10 módulos progressivos cobrindo C++ do zero — OOP, gerenciamento de memória, templates, STL e mais.
</p>

<p align="center">
  <a href="README.md">🇺🇸 Read in English</a>
</p>

---

## Por que este projeto importa

> "Este projeto me ensinou o paradigma orientado a objetos completo — encapsulamento, herança, polimorfismo e sobrecarga de operadores — e por que esses conceitos existem, não apenas como usá-los. Entender C++ nesse nível dá uma visão direta de como linguagens como Java, C# e Python implementam seus modelos de objeto, e como sistemas de alta performance (game engines, sistemas financeiros, software embarcado) são projetados."

C++ permanece uma das linguagens mais demandadas em programação de sistemas, desenvolvimento de jogos, sistemas embarcados e aplicações críticas de performance. Essa base é diretamente transferível.

---

## Visão geral dos módulos

| Módulo | Tópico | Conceitos-chave |
|---|---|---|
| **CPP00** | Namespaces, I/O | `std::cout`, classes, funções membro |
| **CPP01** | Alocação de memória | `new`/`delete`, referências vs ponteiros, `filestream` |
| **CPP02** | Polimorfismo ad-hoc | Sobrecarga de operadores, forma canônica, ponto fixo |
| **CPP03** | Herança | Classes base/derivadas, construtores em hierarquia |
| **CPP04** | Polimorfismo de subtipo | Funções virtuais, classes abstratas, interfaces |
| **CPP05** | Exceções | `try`/`catch`/`throw`, classes de exceção customizadas |
| **CPP06** | Casts | `static_cast`, `dynamic_cast`, `reinterpret_cast`, `const_cast` |
| **CPP07** | Templates | Templates de função, templates de classe, `std::swap` |
| **CPP08** | Containers STL | `std::vector`, `std::list`, `std::map`, iteradores |
| **CPP09** | Algoritmos STL | `std::stack`, problema Bitcoin exchange, merge-insert sort |

---

## Um detalhe técnico que se destaca

O exercício final do CPP09 implementa o algoritmo **Ford-Johnson (merge-insert sort)** — um dos algoritmos de ordenação por comparação teoricamente ótimos, conhecido por minimizar o número de comparações. Implementá-lo em C++ com containers STL demonstra domínio tanto de pensamento algorítmico quanto de idiomas modernos de C++, indo muito além dos exercícios acadêmicos típicos.

---

## Como usar

Cada módulo é independente:

```bash
git clone https://github.com/gustavofsousa/CPP_Piscine_42.git
cd CPP_Piscine_42/CPP00/ex00
make
./megaphone "olá mundo"
```

### Executando qualquer exercício

```bash
cd CPP<módulo>/ex<número>
make
./<executável>
```

---

## Estrutura do projeto

```
CPP_Piscine_42/
├── CPP00/       # Namespaces, classes, I/O
│   ├── ex00/    # Megaphone
│   └── ex01/    # PhoneBook
├── CPP01/       # Memória, referências, arquivos
├── CPP02/       # Sobrecarga de operadores, ponto fixo
├── CPP03/       # Herança
├── CPP04/       # Funções virtuais, classes abstratas
├── CPP05/       # Exceções
├── CPP06/       # Type casts
├── CPP07/       # Templates
├── CPP08/       # Containers e iteradores STL
└── CPP09/       # Algoritmos STL, Bitcoin exchange, merge-insert sort
```

---

## Habilidades demonstradas

- Programação Orientada a Objetos (OOP) em C++
- Gerenciamento de memória (`new`/`delete`, RAII)
- Sobrecarga de operadores e forma canônica de classe
- Herança e polimorfismo (despacho virtual)
- Tratamento de exceções
- Programação genérica com templates
- Containers e iteradores STL
- Design de algoritmos (merge-insert / Ford-Johnson sort)

---

## Licença

Este projeto foi desenvolvido como parte do currículo da [42 School](https://42.fr).

---

<p align="center">Feito com ☕ na 42 Rio de Janeiro</p>
