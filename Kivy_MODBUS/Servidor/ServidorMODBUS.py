from pyModbusTCP.server import DataBank, ModbusServer
import random
from time import sleep


class ServidorMODBUS():
    """
    Classe Servidor Modbus
    """
    
    def __init__(self, host_ip, port):
        """
        Construtor
        """
        self._db = DataBank()
        self._server = ModbusServer(host=host_ip,port=port,no_block=True,data_bank=self._db)
       
        
    def run(self):
        """
        Execução do servidor Modbus
        """
        try:
            self._server.start()
            print("Servidor MODBUS em execução")
            while True:
                self._db.set_holding_registers(1000,[random.randrange(int(0.95*400),int(1.05*400))])
                self._db.set_holding_registers(1001,[random.randrange(int(0.475*900),int(1.05*900))])
                self._db.set_holding_registers(1002,[random.randrange(int(0.655*300),int(1.05*300))])
                self._db.set_holding_registers(1003,[random.randrange(int(0.287*600),int(1.05*600))])
                sleep(1)
        except Exception as e:
            print("Erro: ",e.args)



    

