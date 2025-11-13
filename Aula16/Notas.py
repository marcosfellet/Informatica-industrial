"""
- Softwares Supervisório  
    - supervisionar plantas industriais
    - Consegue operar a planta industrial 
    - Coleta dados dos componentes industriais
        - sensores, invertores de frequências etc
        - Coleta feita através de protocolos específicos
            - Protocolo MODBUS
    - Supervisório escreve dados em tabela e o CLP pega esses dados e de acordo com a sua programação, realiza uma função
     

- Protocolo MODBUS
    - Protocolo para comunicação com dispositivos insdutriais
    - Comunicação entre sensores e CLPs (Disposisivo responsável por processar e automatizar funções indistriais)
    - OPENSOURCE!
    - ASCII - Restrita a comunicação de níveis mais baixo (comunicação entre sensores, CLP e atuadores)
    - RTU - Restrita a comunicação de níveis mais baixo (comunicação entre sensores, CLP e atuadores)
    - TCP/IP - Camada de aplicação
    - Porta padrão 502
    - Servidor MODBUS - equipamento de campo: comunicação entre sensores, CLP e atuadores
    - Software Cliente - computador, CLP
    - Protocolo MODBUS TCP
        - gateway
            - 1 IP e 1 porta
            - Redireciona os dados para o caminho desejado através do "Unit ID" do protocolos
    - Organização de dados
        - Servidor
            - Tabela de Bobinas
                - dados de 1 bit de escrita e leitura
            - Tabela de entradas discretas
            - Tabela de registradores de entrada
            - Tabela de registradores de saída
    - Transmissão de 1 bit e números inteiros de 16 bits
    - Aquisição de dados

"""
