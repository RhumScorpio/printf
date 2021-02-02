# notes pour printf

- Utiliser 1, 0, -1, plus souvent
- Faire des fonctions qui putchar et renvoient un int, une pour la précision, une pour les zero et les espaces.
- Pas besoin de faire un tableau de fonctions/faire des fonctions qui renvoient des ints
- *itoa* retourne un *char*
```typedef	struct		s_flags
{
	int				already_print;
	int				type;
	int				width;
	int				minus;
	int				zero;
	int				dot;
	int				star;
}					t_flags;
```
- un parsing de flag + un parsing de type
- varier les utilisations des ft_isdigits, gérer le flag width selon l'étoile et les digits.

