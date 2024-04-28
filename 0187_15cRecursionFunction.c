#include <stdio.h>


// Déclaration de le fonction appelé "somme" et déclaration de la variable ka dans la fonction somme.
// La variable ka devra être définie à chaque fois que sera appelé la fonction somme
int somme(int ka);

/* Ici, la méthode "main" déclare et définit la variable "résultat".
Ensuite, la méthode "main" exécute l'instruction faisant apparaître sur le terminal
la variable "résultat" par un nombre entier grâce à la fonction "printf".
Ce nombre entier dépendra de la définition de la variable "ka" qui sera 
incorporé dans la fonction "somme" entre ses parenthèses par un nombre entier. */
int main() {
	int resultat = somme(11);
	printf("%d", resultat);
	return 0;
}

/* Définition de la fonction somme avec tous les détails de son utilisation.
Si la variable "ka" est supérieure à 0, la fonction "somme" ajoute à "ka" 
son propre nombre entier moins 1. On peut remarquer que la fonction "somme" 
est ici imbriquée car la fonction "somme" nécessite d'être exécutée jusqu'à 
ce que la variable "ka" soit égale à 0, jusqu'à ce que la variable "ka" ne soit 
plus supérieure à 0.
En effet, la fonction s'exécute indéfiniment si l'instruction 
"return 0" n'est pas inscrite au moins dans une alternative inévitable 
de la fonction elle-même. */

int somme(int ka) {
	if (ka > 0) {
		return ka + somme(ka - 1);
	} else {
		return 0;
	}
}

/* Le code en C est compilé, cela veut dire qu'il est d'abord lu par le compilateur.
De cette manière, les fonctions n'ont pas besoin d'être définies immédiatement dans
le code, ce qui aurait très probablement été le cas pour un interpréteur dans un 
code en javascript. Également, le compilateur ici va réitérer toutes les fonctions 
tant que toutes les conditions ne sont par remplies pour être arrêtées grâce à 
l'instruction "return 0". 
Ce programme est plutôt intéressant car il se retrouve à réitérer une addition 
du nombre entier "ka" par lui-même - 1 jusqu'à ce que ka soit égale à 0.
De cette manière, le programme pratique une boucle alors qu'aucune boucle n'a eu besoin 
d'avoir été déclarée.
Dans une écriture mathématique, on pourrait définir la variable ka comme la suivante:
x = x + (x-1). Cependant, cette écriture n'est pas du tout exacte.
Il y a dans la même variable plusieurs autres variables qui se dissocient de celle d'origine.
Par exemple, si je donne à x la valeur de 1, x restera égale à un car:
x = 1 + (1 - 1)
x = 1 + 0
x = 1
Si je donne à x la valeur de 2 :
x = 2 + (2 - 1) + (1 - 1)
x = 2 + 1 + 0
x = 3 
Un des éléments de l'opération est réitéré par imbrication. 
Tant que l'une des parties de son opération n'est pas égale à zéro, l'opération est réitéré.
Si je donne à x la valeur de 3 :
x = 3 + (3 - 1) + (2 - 1) + ( 1 - 1)
x = 3 + 2 + (2 - 1)
x = 3 + 2 + 1 + ( 1 - 1 )
x = 3 
La variable x, tout comme la variable "ka" utilisé ici, est incorporé dans une opération 
mathématique strictement identique.
Cette opération mathématique peut être décrite comme ceci :
La variable de départ, qui est un nombre entier positif, 
est d'abord additionné par un autre entier positif.
Cette addition apporte le résultat final de la variable.
Le programme ne fait alors que résoudre une équation */

/* En demandant à chatgpt d'expliquer le programme avec pour "ka(ou argument) = 11", ce dernier m'apporte la réponse suivante: 
Ce programme est écrit en langage C et calcule la somme des entiers de 1 à n, où n est passé en argument à la fonction somme. Voici une explication détaillée du programme :

Le programme inclut la bibliothèque standard stdio.h pour pouvoir utiliser les fonctions d'entrée/sortie.
Il déclare un prototype de fonction somme, qui prend un entier comme argument et renvoie un entier. Ce prototype est nécessaire car la fonction somme est utilisée avant sa définition dans le code.
La fonction main est la fonction principale du programme. Elle ne prend aucun argument et renvoie un entier.
Dans la fonction main, la variable resultat est déclarée et initialisée à la valeur renvoyée par l'appel de la fonction somme avec l'argument 11.
La fonction somme est définie après la fonction main. Elle prend un argument ka de type entier et renvoie un entier.
Dans la fonction somme, il y a une structure conditionnelle (if). Si la valeur de ka est supérieure à 0, la fonction somme est appelée récursivement avec l'argument ka - 1, et la valeur de ka est ajoutée au résultat de cet appel récursif. Sinon, si ka est égal à 0, la fonction renvoie 0.
Ainsi, chaque appel récursif diminue ka de 1 jusqu'à ce que ka atteigne 0. À ce stade, les appels récursifs s'arrêtent et les valeurs sont renvoyées et additionnées de manière récursive jusqu'à remonter à l'appel initial dans main.
Une fois que la fonction somme a terminé son exécution pour ka = 11, la valeur totale de la somme est renvoyée à partir de l'appel initial dans la fonction main.
Enfin, la valeur de resultat est imprimée à l'écran à l'aide de la fonction printf.
En résumé, ce programme calcule la somme des entiers de 1 à 11 à l'aide de la récursivité. " */
