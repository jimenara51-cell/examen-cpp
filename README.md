Nombre:   Jimena Naranjo Obando



| Numero Linea | Linea | Justificacion | Correcion | Cambio |
|---|---|---|---|---|
| 9 | } | A esta linea después del "}" le hace falta el punto y coma | }; | Se agrego ; |
| 11 | void sumarPuntos(Jugador j, int extra) { | El & nos deja editar el valor, por lo que aqui al no haber un &, nos imprime exactamente el mismo valor en el puntaje maximo (90). Cuando se aniade el &, ya se puede trabajar directamente con el valor | void sumarPuntos(Jugador& j, int extra) { | Se agrego & luego de la variable Jugador |
| 23 | char inicial = "A"; | Aqui al ser un char lo que se busca aniadir no se puede usar dobles comillas porque las dobles comillas son para texto, entonces se deberian usar comillas simples | char inicial = 'A'; | Se cambiaron las comillas dobles por simples |
| 26 | Jugador& respaldo = a; | En este caso es el contrario de la linea 11, mas bien se busca almacenar el respaldo y que no se modifique, pero ahi tiene el & que modifica directamente el valor | Jugador respaldo = a; | Se quito el & |
| 30 | if (a.puntos > 100) { | En las instrucciones dice que necesita avisar cuando el valor llegue a 100, sin un = el programa solo va a avisar si llega a ser mayor a 100, y si llega a 100 no avisa, por lo que haria falta al > ponerle un = | if (a.puntos >= 100) { | se agrego un =, ahora es >= |

** Nota: Profe mi compu no pone tildes ni enies, perdon por eso. 
