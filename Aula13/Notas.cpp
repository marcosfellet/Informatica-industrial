/*
  - Camadas adicionam bits na frente do comando original, encapsulando com seus protocolos
  - A camada física, é responsável por transformar os bits recebidos em sinais eletromagnéticos e vice-versa
  - overhead => o quanto se precisa a mais, para mandar os dados originais, dado os bits auxiliares enviados junto com a mensagem
  - TCP vs UDP
      - TCP => confiabilidade em detrimento de velocidade (menor quantia da informação transmitida)
      - UDP => velocdade em detrimento de confiabilidade
  - IP => mapea dispositivos
      - IPv4
      - IPv6
  - Porta de comunicação => numero que identifica onde no sistema operacional, o dado foi recebido e deve ser enviado
      - Porta => comunicação de APPs
  - Para comunicação:
      - IP do dispositivo 
      - Decidir porta
      - Decidir protocolo da camada de transporte (UDP ou TCP) 
  - Padrões Arquiteturais
      - Padrão Cliente-Servidor 
          - Youtube, jogos, etc
          - Ativo da comunicação: cliente
          - Servidor passivo: só responde a demandas do cliente
          - Servidor não sabe onde está o cliente
          - Cliente precisa saber onde está o servidor
              - Exemplo: Google não precisa saber o endereço de usuários, apenas sabe na hora do acesso,
                         mas, o cliente precisa saber o endereço do google para usá-lo
      - Padrão Publisher-Subscriber
          - Nós de recebimento e nós de emissão de dados
      - API Socket = Interface de Programação de Aplicativos
          - Interface provida pelo sistema operaciona, que permite a interface acessar os periféricos de rede
          - *********** Ver fluxograma de como funciona API Socket 
          - Aplicação de comunicação 
              - Execução do servidor
              - Criar socket no servidor
                1) Objeto do código
                2) Família de entereços para qual vai atender requisições
                    - IPv4, IPv6
                3) Comunicação TCP ou UDP
                4) Primitiva bind (anexar)*
                    - Pedir pro sistema operacional para fornecer um serviço num IP numa placa
                    - Como se tivesse assinando o contrato de aluguel de uma porta para uma dada funcionalidade (não pode ter dois aplicativos numa mesma porta)
                    * Geração de excessão (erro do bind, pode já haver um app utilizando a porta)
                    - IP fornecido para determinar a interface utilizada (?) 
                5) Primitiva Listen
                    - Se o sistema for rodado com apenas o bind executado, o sistema op irá negar o acesso
                    - Aplicativo pronto pra receber as conexões 
                6) Accept**
                    - Comando bloqueante
                        - Bloqueia o fluxo da execução do programa
                        - cin do C++, input, etc
                            - Só continua a execução após a reação do cliente
                    - Cliente da o connect para conseguir fazer a conexão naquela aplicação
                        - Servidor recebe IP e a porta utilizada
                7) Túnel de conexão criado

                8) Após 7), Cliente há troca de informações com o servidor 
                    - Write
                        - escrita através de bits
                    - Protocolo - forma em que se organizam os bits


                *) Exceções: erros não previstos
                    - Programa executando e a energia cai
                    - Geradas a nivel de sistema op de modo a criar um modo alternativo de tratar essas circuinstâncias
                      a fim de não criar grandes inconsistências no algoritmo
                    - Criação de blocos passíveis de exceção (try)
                        - se ela ocorrer, criar uma exceção, except, para criar o caminho alternativo
                    
*****************************************************************************************************************************8

procurar no google "socket python"

Não usar portas acima de 1024 para evitar conflitos com os serviços do sistema operacional

    - Servidor Genérico
        - primeira coisa que se faz no servidor, é a leitura (Ler mensagem em bytes)
        - decodificar mensagem  --> protocolo da camada de aplicação
        - Processar requisição
        - Codificação da resposta
        - Envio dos dados finais
    - Cliente
        - Cria socket
        - Dá o conect

*/
