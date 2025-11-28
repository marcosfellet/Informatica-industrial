from pyModbusTCP.cliente import ModbusCliente
from time import sleep

class Cliente():
    """
    Classe Cliente MODBUS
    """
    def __init__(self, server_ip, porta, scan_time = 1):
        """
        Construtor
        """
        self._cliente = ModbusCliente(host = server_ip, port = porta)
        self._scan_time = scan_time
    
    def atendimento(self):
        """
        Método de tendimento ao usuário
        """
        self._cliente.open()
        try:
            atendimento = True
            while atendimento:
                    
        except Exception as e:
            print("")