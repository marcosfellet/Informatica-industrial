import kivy
from kivy.app import App
from kivy.uix.boxlayout import BoxLayout
from kivy.config import Config
from kivy.uix.gridlayout import GridLayout
import re


class MyWidget(BoxLayout):
    def changelb(self):
        
       # Método simples para incremento do valor mostrado no label
        
        self.ids['lb'].text = str(int(self.ids.lb.text) + 1) 

class Calculadora_Grid(GridLayout):
    #função chamada quando o botão = é apertado 
    def calcule(self, calculo):
        if calculo:
            try:
                self.display.text = str(eval(calculo))
            except Exception:
                self.display.text = "Erro"

class BasicApp(App):
    def build(self):
        """
        Método para construção do aplicativo com base no widget criado
        """
        return MyWidget()
 

class CalculadoraApp(App):
    def build(self):
        """
        Método para construção do aplicativo com base no widget criado
        """
        return Calculadora_Grid()
    
if __name__ == '__main__':
    Config.set('graphics','resizable',True)
    CalculadoraApp().run()