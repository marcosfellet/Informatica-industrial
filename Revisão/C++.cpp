/*


1) Intruducao ao C++
  Memoria de programa:
    funcoes
    metodos das classes
  
  memoria de dados
    varaveis locais, globais e dinamicas
  
  Variavel: espaco de memoria nomeado
    Operadores: aritimeticos e booleanos
    estruturas de repeticao
      while e for
    estruturas condicionais
      if, else e switch case
    funcoes
    
2) Vetores
    blocos de memorias com diversos segmentos de memoria individuais, mas com apenas um nome
    Declaracao:
      int vet[10];
    Maneira programatica de se trabalhar com uma massa de dados
      generalizacao e escalacao de dados

3) Ponteiros
    Variavei que armazena o endereco de memoria
    Uso:
      1 - operar variaveis locais de uma funcao dentro de outra funcao => reducao de tempo computacional
      2 - alocacao dinamica
      3 - manipulacao de variaveis grande porte, 82 bits, por exemplo, passando apenas 32 bits (4 bytes) 

4) Passagem de Parametros
    1 - Passagem por valor
        copia do valor das variaveis locais de uma funcao para outra funcao (metodo mais simples)
    2 - Passagem por ponteiro
        funcao recebe ponteiro (endereco de memoria da variavel original) => manipulacao da variavel diretamente da funcao 
    3 - Passagem por referencia
        Uso da variavel original, com um nome diferente dentro da funcao => menor uso de memoria RAM

5) Struc
    - Estrutura de dados
    - Uma forma de criar um tipo de dados
    - Composicao de dados primitivos para maior capacidade de abstracao
    - Criacao de novos tipos de dados

6) Classes
    - Modelo para criar objetos
      - int a; => int e um modelo para criar variaveis inteiras
      - Conta c1; => Conta e um modelo mais sofisticado
    - Objetos
      - Atributos: Dados atribuidos aos objetos da classe
      - Metodos: Metodos sao maneiras de processarem os atributos do objeto
      - Especificadores de acesso: 
          - public: atributos e metodos acessiveis a qualquer parte do codigo
          - private: atributos e metodos acessiveis, somente, a propria classe
                    - ENCAPSULAMENTO: proteger as funcionalidades da regra de negocios (o que se deseja implementar) do codigo
                    - esconder/encapsular dentro da propria classe, a fim de impedir que usuario corrompa a regra de negocio
                    - metodos publicos para acessar os dados privados COM VALIDACOES de entrada e ate de saida
                    - PRINCIPIO DO MENOR PRIVILEGIO: restringir ao maximo ao o acesso do usuario
          - protected: permite acesso dos atributos e metodos na classe e em suas classes derivadas
    
7)  Construtores e Destrutores
    - Construtores
        - Inicializar Atributos
            Estado inicial condizente
        - Alocar Recursos
            Concetar a internet
    - Destrutores
        - Destruir objetos
        - Desaloca recursos
    - Invocacao automatica
        -RAII: Resource Acquisition Is Initialization
            - um recurso e adquirido durante a inicializacao de um objeto e liberado automaticamente quando o objeto e destruido

8)  Argumentos opicionais
    - ser um pouco mais sintetico (sem mudar a logica da funcao)
    - funcao invocada passando ou nao os argumentos opicionais
    - se quiser mudar a logica da funcao, usar a sobrecarga
    
9) Palavra-chave const
    - Modificador 
    - aplicado a variaveis ou objetos 
    - variavel e inicializada e nunca mais sera modificada (leitura apenas)
    - pode ser utilizada em argumentos de uma funcao, como por exemplo, em passagem por referencia
    - metodos: nao tem privilegio de escrita, nao pode modificar os atributos da classe, apenas os ler
    
10) Palavra-chave static
    - Modificador
    - Aplicada a variavel local
        - nao e alocada na stack, mas sim, no data, nao perdendo o seu valor ao final da execucao da funcao
        - retencao de valores entre chamadas de funcoes
    - Aplicada  atributos de uma classe
        - atributo compartilhado entre objetos da mesma classe
    - Aplicada  metodos de uma classe
        - nao tem acesso ao "this->"
        - criados, geralmente, para trabalhar com atributos estaticos
        
11) Alocacao dinamica de memoria

12) Templates

********************************************************** TOPICOS IMPORTANTES *************************************************************
1) NUNCA REPITIR CODIGO (manutencao e consistencia)

2) SEPARACAO DE RESPONSABILIDADES
      - funcoes, metodos e classes especializados, fazendo pouca coisa
      - metodos fazendo apenas uma funcao
      
3)ENCAPSULAMENTO
    - ESCONDER A LOGICA/REGRA DE NEGOCIO SEM EXPOR AO USUARIO  
    - VALIDACAO
    - PRINCIPIO DO MENOR PRIVILEGIO

4) PRINCIPIO DO MENOR PRIVILEGIO  

5) RAII: Resource Acquisition Is Initialization
        - ALOCACAO E DESALOCACAO
        - um recurso e adquirido durante a inicializacao de um objeto e liberado automaticamente quando o objeto e destruido

*/
