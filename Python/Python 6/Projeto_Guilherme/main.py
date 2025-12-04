#Caso de erro:
"""
import os 
os.environ['KIVY_GL_BACKEND'] = 'angle_sdl2'
"""
from kivy.app import App
from kivy.uix.button import Button
from kivy.uix.boxlayout import BoxLayout
from kivy.uix.label import Label
   
#Necessário fazer herança da classe app

class MeuApp(App):
    def build(self):
        bt = Button(text = "INCREMENTO", on_press = self.incremento)
        self.lb = Label(text = "0")
        layout = BoxLayout()
        layout.add_widget(bt)
        layout.add_widget(self.lb)
        return layout
    
    def incremento(self, arg):
        self.lb.text = str(int(self.lb.text)+1)
    

app = MeuApp() # criando um objeto(instância) da classe MeuApp

app.run() #utilizando o método run