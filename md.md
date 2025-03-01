📌 Compiler un programme spécifique

Si vous souhaitez compiler uniquement une partie du projet :

bash

Copier

Modifier

make test-grid       # Compiler le test de la grille

make test-loader     # Compiler le test du chargement de grille

2️⃣ Exécuter un programme

Une fois compilé, vous pouvez exécuter les tests avec :

✅ Tester l'affichage d'une grille

bash

Copier

Modifier

./test-grid

Affiche une grille de test en dur.

📄 Charger une grille depuis un fichier

bash

Copier

Modifier

./test-loader

Charge une grille depuis data/grid\_test.txt et l'affiche dans la console.

3️⃣ Nettoyer les fichiers compilés

Si vous voulez supprimer les fichiers objets (.o) et les exécutables, utilisez :

bash

Copier

Modifier

make clean

📌 État d’avancement du projet

✅ Ce qui est terminé :

1️⃣ Structure de la grille (grid.c & grid.h)

✔ Définition des structures Grid et Cell

✔ Fonctions pour créer, gérer et afficher la grille

✔ Programme de test (test-grid)

2️⃣ Lecture d’une grille depuis un fichier (loader.c & loader.h)

✔ Chargement d’une grille depuis un fichier .txt

✔ Implémentation de load\_grid\_from\_file()

✔ Test de la lecture (test-loader)

🔨 Ce qu’il reste à faire :

3️⃣ Génération d'images PPM (image.c & image.h) 🎨

🔲 Générer une image PPM pour visualiser la grille

🔲 Afficher les cellules ouvertes (blanc), bloquées (noir) et visitées (rouge)

🔲 Ajouter un test pour générer une image à partir d’une grille de test

4️⃣ Implémentation de l’algorithme naïf de percolation (DFS) 🔍

🔲 Implémenter une recherche en profondeur (DFS) pour détecter si la grille percole

🔲 Marquer les cellules visitées pour éviter les boucles infinies

🔲 Tester avec différentes grilles pour valider l’algorithme

5️⃣ Simulation de Monte Carlo pour trouver le seuil de percolation 🎲

🔲 Générer des grilles aléatoires avec une probabilité p pour chaque cellule d’être ouverte

🔲 Tester plusieurs valeurs de p pour estimer le seuil où la grille commence à percoler

🔲 Répéter 50 simulations et calculer une moyenne

6️⃣ Optimisation avec Union-Find (union\_find.c & union\_find.h) 🚀

🔲 Implémenter Union-Find pour détecter plus efficacement la percolation

🔲 Comparer les performances avec l’algorithme DFS

🔲 Adapter la simulation de Monte Carlo pour utiliser Union-Find
