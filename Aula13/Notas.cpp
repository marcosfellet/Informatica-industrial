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
      

          
*/
