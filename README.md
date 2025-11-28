# 🧵 ft_printf — Basic Tester

Ce tester compare **ton `ft_printf`** avec le **vrai `printf`** sur toutes les conversions demandées dans le sujet 42.

⚠️ IMPORTANT ⚠️: Le fichier tester est a installer et a mettre dans votre Home/bin pour pouvoir executer la commande tester printf dans le terminal qui executera proprement et plus rapidement le tester !!!

Chaque test affiche :

- ✅ **OK** — Les deux fonctions renvoient la **même valeur**
- ❌ **FAIL** — Les valeurs renvoyées sont **différentes**

> 💡 Le but du tester est de vérifier les **valeurs de retour**, et ce qu'elle affiche mais ✅ ne valide que ce que renvoi les fonctions ce qu'affiche les fonction se fait pas verification visuelle.

---

## ✔️ Conversions testées

- `%c` — Caractère  
- `%s` — Chaîne  
- `%p` — Pointeur  
- `%d` / `%i` — Entier signé  
- `%u` — Entier non signé  
- `%x` / `%X` — Hexadécimal  
- `%%` — Pourcentage
- `NULL`
- `""`
- `INT_MIN` & `INT_MAX`
- pointeurs invalides (`(void *)-1`)

---

## 🎯 Objectif

S’assurer que :

- `ft_printf` **se comporte comme** `printf`
- Les fonctions retourne bien la meme valeurs

---

## 🛠️ Notes & conseils

- Effectue t'est propres test en plus pour t'assurer que la fonction marche bien
- Vérifie **tous les tests**, le tester ne peut pas tout couvrir  

---

#### ✨ Created by **neichert**
