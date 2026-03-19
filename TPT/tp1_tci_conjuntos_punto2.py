
def union(a,b):
    u=set()
    u=set(a)
    for x in b:
        if(not pertenece(x,u)):
            u.add(x)
    return u

def pertenece(x,u):
    ban=False
    for r in u:
        if(x==r):
            ban=True
    return ban

def conjunto_partes(b):
    partes=[set()] #Pensamos al conjunto partes como una lista de conjuntos ya que python no permite hacer conjuntos de coonjuntos, inicializamos una lista que contiene el conjunto vacío
    #El ciclo for recorrera el conjunto ingresado, creando los subconjunto elemento a elemento
    for x in b:
        j=0 #Inicializamos un índice en cero necesario para el ciclo while que tiene que reiniciarse cada vez que se procese un elemento del conjunto original
        n=len(partes) #La funcion len devuelve un entero que es el tamaño de una lista, que al inicio tiene un solo elemento y es el conjunto vacío
        while j < n: #el ciclo while recorrera cada elemento del conjunto partes creado, haciendo las correspondientes uniones y agregandolas en la lista partes
            conjunto_actual=partes[j] #Nos posicionamos en cada subconjunto del conjunto partes
            nuevo=union(conjunto_actual,{x}) #Hacemos la union de un elemento del conjunto de entrada con el subconjunto del conjunto partes
            partes.append(nuevo) #Agregamos la union de estos conjuntos al conjunto partes
            j+=1 #Incrementamos índice para recorrer todo el conjunto partes
    return partes #Retorna la lista que representa el conjunto partes 
a={7,8}
b={1,2,3}
c=union(a,b)
print (c)
partes=conjunto_partes(b)
print(partes)
 # el for in realiza un un pop ya que toma datos que son iterables
 #y se para en la primera posición ya que lo toma como una pila y por eso
 #puede sacar los primeros elementos y compararlos
 # por otro lado in solo  es booleano con una consulta if lo que hace es devolver un booleano

