
#Implemente una función que reciba una regla y un límite, y devuelva un conjunto finito. 

def filtrar (n, regla):
    p ={ x for x in range(0,n) if regla(x)}
    return p
#Compare las representaciones por extensión y por comprensión.

def filtrar (regla):
    p ={ x for x if regla(x)}
    return p
#la unica forma de "almacenar" un conjunto infinito en una computadora
#es por representacion por comprension (regla lógica)
#si no se crea un bucle infinito y se desvorba la memoria 
#una solucion seria usar yield(iteradores) que muestra elementos pero no almacena

if __name__ == "__main__":
    p=filtrar(lambda x: x%3==0)
    print(p)

