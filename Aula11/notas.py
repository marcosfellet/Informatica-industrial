#################################### COLECOES NAO-ORDENADAS #######################################################
# listas = armazena elementos, acesso por meio de indices mutavel
  l = [1,10,150,"ENE118  "]
  l.append(30)
print(l[1])
# tuplas = armazena elementos, acesso por meio de indices imutavel
  t = (1,2,5,6)
  print(t[2])
# dicionarios = armazena elementos, acesso por meio de chaves unicas, carrega a semantica do dado junto (o que o dado significa)
  d = {"curso": "Engenhaia", "Ch": 3600}
#        key       value
  print(d["curso"])

##############################################################################################################
#################################### COLECOES ORDENADAS ######################################################
##############################################################################################################

# pilhas
# filas

####################################################################################################
#################################### DESAFIO #######################################################
####################################################################################################

#Dica:
catalogo = {
  "p000" = {"Descricao": ..., "Faixa de Valores, ..., ..." },
  "p001" = {},
  "p002" = {},
  .
  .
  .
}

print(catalogo["p000"]["Descricao"])
#  p000 = chave principal

################################################################################################################
#################################### VARIAVEIS E OBJETOS #######################################################
################################################################################################################

# Tudo em python e um objeto
# Objeto e uma instancia de uma classe
# Classe e um modelo para a criaca de objetos
# Variaveis ao lado esquerdo da igualdade
# Variavel e o nome temporario associado ao objeto
  a = 10
  # variavel "a" associada ao objeto "10"

#################################### OBJETOS IMUTAVEIS #######################################################
#tupas
#numeros
#strings
  a = 20
  # objeto "20" e criado e o nome "a" e associado ao novo objeto "20"
  # objetos que nao possuirem referencia ativa no codigo, e automaticamente descartado
  b = a
  # nova variavel b e associada ao objeto que esta associado a variavel a
  b = 30
  # objeto "30" e criado e b e associado a ele, objeto "20" nao e descartado, pois a ainda esta associado a ele
  b = [1,2] # lista e um objeto mutavel
  c = b # c e b associados ao mesmo objeto
  c.append(10) # lista e um objeto mutavel, portanto, pode ser alterada
  c = [1,2,10] 
  b = [1,2,10] # b e alterado pois esta associado ao mesmo objeto (lista)

#############################################################################################################################
#################################### CRIACAO DE SUB-ROTINAS (FUNCOES) #######################################################
#############################################################################################################################

# Passagem por atribuicao e a unica passagem de atributo do python, depende do tipo de objeto (mutavel ou imutavel)

# imutqavel
def foo(a):
  a = 10


var = 20
foo(var)
# passagem de objetos imutaveis, a variavel original nao sera mudada

# mutavel
def foo2(l):
  l.append(5)


lista = [1,2]
foo2(lista) 
# variavel original e mudada








