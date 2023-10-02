# Piscine C - C 02

Ce document est le sujet du module C 02 de la piscine C de 42, version 5.4.

## Table des matières
1. [Consignes](#consignes)
2. [Préambule](#préambule)
3. [Exercice 00 : ft_strcpy](#exercice-00-ft_strcpy)
4. [Exercice 01 : ft_strncpy](#exercice-01-ft_strncpy)
5. [Exercice 02 : ft_str_is_alpha](#exercice-02-ft_str_is_alpha)
6. [Exercice 03 : ft_str_is_numeric](#exercice-03-ft_str_is_numeric)
7. [Exercice 04 : ft_str_is_lowercase](#exercice-04-ft_str_is_lowercase)
8. [Exercice 05 : ft_str_is_uppercase](#exercice-05-ft_str_is_uppercase)
9. [Exercice 06 : ft_str_is_printable](#exercice-06-ft_str_is_printable)
10. [Exercice 07 : ft_strupcase](#exercice-07-ft_strupcase)
11. [Exercice 08 : ft_strlowcase](#exercice-08-ft_strlowcase)

## Consignes
- Seule cette page servira de référence : ne vous fiez pas aux bruits de couloir.
- Relisez bien le sujet avant de rendre vos exercices. À tout moment, le sujet peut changer.
- Attention aux droits de vos fichiers et de vos répertoires.
- Vous devez suivre la procédure de rendu pour tous vos exercices.
- Vos exercices seront corrigés par vos camarades de piscine.
- En plus de vos camarades, vous serez corrigés par un programme appelé la Moulinette.
- La Moulinette est très stricte dans sa notation. Elle est totalement automatisée. Il est impossible de discuter de sa note avec elle. Soyez d’une rigueur irréprochable pour éviter les surprises.
- La Moulinette n’est pas très ouverte d’esprit. Elle ne cherche pas à comprendre le code qui ne respecte pas la Norme. La Moulinette utilise le programme norminette pour vérifier la norme de vos fichiers.
- Les exercices sont très précisément ordonnés du plus simple au plus complexe. En aucun cas nous ne porterons attention ni ne prendrons en compte un exercice complexe si un exercice plus simple n’est pas parfaitement réussi.
- L’utilisation d’une fonction interdite est un cas de triche. Toute triche est sanctionnée par la note de -42.
- Vous ne devrez rendre une fonction main() que si nous vous demandons un programme.
- La Moulinette compile avec les flags -Wall -Wextra -Werror, et utilise cc.
- Si votre programme ne compile pas, vous aurez 0.
- Vous ne devez laisser dans votre répertoire aucun autre fichier que ceux explicitement spécifiés par les énoncés des exercices.
- Vous avez une question ? Demandez à votre voisin de droite. Sinon, essayez avec votre voisin de gauche.
- Votre manuel de référence s’appelle Google / man / Internet / ....

## Préambule
Voici une discussion extraite de la série Silicon Valley :
- I mean, why not just use Vim over Emacs? (CHUCKLES)
- I do use Vim over Emac.
- Oh, God, help us! Okay, uh you know what? I just don’t think this is going to work. I’m so sorry. Uh, I mean like, what, we’re going to bring kids into this world with that over their heads? That’s not really fair to them, don’t you think?
- Kids? We haven’t even slept together.
- And guess what, it’s never going to happen now, because there is no way I’m going to be with someone who uses spaces over tabs.
- Richard! (PRESS SPACE BAR MANY TIMES)
- Wow. Okay. Goodbye.
- One tab saves you eight spaces! - (DOOR SLAMS) - (BANGING)
. . .
(RICHARD MOANS)
- Oh, my God! Richard, what happened?
- I just tried to go down the stairs eight steps at a time. I’m okay, though.
- See you around, Richard.
- Just making a point.
Heureusement, vous n’êtes pas obligé d’utiliser emacs et votre barre d'espace pour compléter les exercices suivants.

## Exercice 00 : ft_strcpy
- Reproduire à l’identique le fonctionnement de la fonction strcpy (man strcpy).
- Prototype : `char *ft_strcpy(char *dest, char *src);`

## Exercice 01 : ft_strncpy
- Reproduire à l’identique le fonctionnement de la fonction strncpy (man strncpy).
- Prototype : `char *ft_strncpy(char *dest, char *src, unsigned int n);`

## Exercice 02 : ft_str_is_alpha
- Écrire une fonction qui renvoie 1 si la chaîne passée en paramètre ne contient que des caractères alphabétiques et renvoie 0 si la chaîne passée en paramètre contient d’autres types de caractères.
- Prototype : `int ft_str_is_alpha(char *str);`
- Elle devra renvoyer 1 si `str` est une chaîne vide.

## Exercice 03 : ft_str_is_numeric
- Écrire une fonction qui renvoie 1 si la chaîne passée en paramètre ne contient que des chiffres et renvoie 0 si la chaîne passée en paramètre contient d’autres types de caractères.
- Prototype : `int ft_str_is_numeric(char *str);`
- Elle devra renvoyer 1 si `str` est une chaîne vide.

## Exercice 04 : ft_str_is_lowercase
- Écrire une fonction qui renvoie 1 si la chaîne passée en paramètre ne contient que des caractères alphabétiques minuscules et renvoie 0 si la chaîne passée en paramètre contient d’autres types de caractères.
- Prototype : `int ft_str_is_lowercase(char *str);`
- Elle devra renvoyer 1 si `str` est une chaîne vide.

## Exercice 05 : ft_str_is_uppercase
- Écrire une fonction qui renvoie 1 si la chaîne passée en paramètre ne contient que des caractères alphabétiques majuscules et renvoie 0 si la chaîne passée en paramètre contient d’autres types de caractères.
- Prototype : `int ft_str_is_uppercase(char *str);`
- Elle devra renvoyer 1 si `str` est une chaîne vide.

## Exercice 06 : ft_str_is_printable
- Écrire une fonction qui renvoie 1 si la chaîne passée en paramètre ne contient que des caractères affichables et renvoie 0 si la chaîne passée en paramètre contient d’autres types de caractères.
- Prototype : `int ft_str_is_printable(char *str);`
- Elle devra renvoyer 1 si `str` est une chaîne vide.

## Exercice 07 : ft_strupcase
- Écrire une fonction qui met en majuscule chaque lettre.
- Prototype : `char *ft_strupcase(char *str);`
- Elle devra renvoyer `str`.

## Exercice 08 : ft_strlowcase
- Écrire une fonction qui met en minuscule chaque lettre.
- Prototype : `char *ft_strlowcase(char *str);`
- Elle devra renvoyer `str`.

**Note :** Assurez-vous de bien nommer vos fichiers et répertoires conformément aux exigences du sujet et de suivre les consignes de rendu.

