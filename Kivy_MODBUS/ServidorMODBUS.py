from pyModbusTCP.server import DataBank, ModbusServer
import random
from time import sleep

class ServidorMODBUS():
    """
    Classe Servidor - API So
    """

    def __init__(self, host_ip, port):
        """
        Construtor
        """
        self._db = DataBank()
        self._server = ModbusServer(host = host_ip, port = port, no_block = True, data_bank = self._db)

    def run(self):
        """
        Execução do servidor Modbus
        """
        try:
            self._server.start()
            print("Servirdor MODBUS iniciado")
            while True:
                self.db.se