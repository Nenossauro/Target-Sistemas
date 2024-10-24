### Para facilitar a compilação, deixarei aqui o link para o compilador online:
### https://www.online-python.com/
def verificar_string(a):
    contador = 0
    for i in a:
        if i in "aA":
            contador += 1
    return print("A string tem "+str(contador)+" letras 'a'")
     
    

string = "Andreas"
verificar_string(string)
