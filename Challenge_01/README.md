# Paire ou Impaire

# Description

Ce programme en C permet à l'utilisateur de saisir un nombre entier, puis détermine et affiche si ce nombre est pair ou impair. Le programme est structuré en trois fonctions principales : LireNumber pour lire le nombre, pairOuImpair pour vérifier si le nombre est pair ou impair, et main pour organiser le flux d'exécution du programme.

# Fonctionnement

Lire le Nombre (LireNumber) :

La fonction LireNumber invite l'utilisateur à saisir un nombre entier et retourne ce nombre.
Déterminer et Afficher (pairOuImpair) :

La fonction pairOuImpair prend en entrée un nombre entier et affiche si ce nombre est pair (Pair) ou impair (Impair).
Elle vérifie si le nombre est divisible par 2 :
Si Number % 2 == 0, le nombre est pair.
Sinon, le nombre est impair.
Fonction Principale (main)

La fonction main appelle LireNumber pour obtenir le nombre saisi par l'utilisateur, puis appelle pairOuImpair pour déterminer et afficher le résultat.
