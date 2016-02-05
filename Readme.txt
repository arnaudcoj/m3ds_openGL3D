Camus Tristan
Cojez Arnaud

Doit contenir :
- ce que vous n'avez pas fait (et pourquoi). Précisez explicitement "tout à été fait et fonctionne parfaitement" si c'est le cas.
- difficultés rencontrées.
- commentaires éventuels sur le TP (points à éclaircir, longueur du sujet, etc).

Q6.
Il est nécessaire de dupliquer les sommets car chaque sommet est associé à une couleur. En dupliquant les sommets et en les associants avec d'autres couleurs, nous pourrons créer des triangles de couleurs différentes avec des sommets en des positions identiques.

Q7.
Les triangles sont dessinés les uns à la suite des autres.
Le rouge vers le haut, le vert vers la gauche, le bleu vers le bas, le cyan vers la droite. Le rouge étant dessiné en premier, il est donc recouvert par les autres, et inversement, le cyan étant dessiné en dernier il n'est pas recouvert.

Q8.
Désormais la profondeur est prise en compte, les triangles rouges et bleus sont les plus près de l'observateur, les triangles se trouvant derrière ne sont donc plus visible.

Q9.
  1 - OpenGL va maintenant dessiner uniquement les pixels d'une profondeur supérieure à 1, il n'y en a pas ici.
  2 - OpenGL va maintenant dessiner uniquement les pixels d'une profondeur supérieure à 0.
  3 - Les tests sont faits dans l'autre sens. Les triangles verts et cyan sont donc affichés avant.
  
Q12.
Nous avons compris que nous pouvons modifier le repère dans le but de le rendre plus intuitif

Q13.
Dans le repère 1, on déplace juste la "fenêtre" en utilisant les mêmes proportions, c'est pour cette raison que l'on voit la figure décalée en bas
Dans le repère 2, on déforme et diminue la fenêtre, donc la figure paraît plus grande et ne ressemble plus à ce que l'on voyait avant.

Q14.
Nous comprenons que la trop grande valeur de far cause un problème de précision lors de la conversion en repère normalisé. Ainsi des points se confondent et donnent le résultat constaté.

Q15.
Le tétrahèdre effectue bien une rotation.
