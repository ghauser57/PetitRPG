# Pixel Adventure

## C'est quoi ?
Hello, bienvenue sur ce projet.

Ceci est un petit RPG 2D ecrit en C/C++.

- __Cross-platform__, ecrit en C/C++ et utilisant des outils cross-platform
telque _CMake_, ce projet fonctionne sous différentes configurations. _Seul 
Arch Linux et Window 10 ont été testé_

## Installation
    
    Pour plus de détails, voir le wiki

Pour le moment l'installation est manuelle et nécessite quelques étaptes,
en effet certaines librairies ont besoins d'une installation particulière.

Il existe deux solutions:
- Installer depuis les fichiers compilés
- Installer depuis les sources

### Installation depuis les fichiers compilés

1. Télécharger la dernière _release_ du projet depuis _GitHub_
2. __Unix__:
    1. Installer __Allegro__
        1. __Debian__: [packages](https://packages.debian.org/source/jessie/allegro5)
        2. __Arch__: ``pacman -S allegro``
    2. Assurez-vous que la librairie est installée dans `/usr/lib` et `/usr/include`
3. __Windows__
    1. Placer les fichers .dll dans le même répertoire que l'executable

### Installion depuis les sources
__Prérequis__ [CMake](http://cmake.org), [Git](http://git-scm.com/) et [Allegro](http://allegro.cc/) sont nécessaires

1. Cloner le projet depuis _GitHub_ `git clone https://github.com/ghauser57/PetitRPG.git`
2. __Window__ :
    1. Télécharger les binaires de [Allegro](https://www.allegro.cc/files/)
    2. Créer le répertoire `lib/allegro` et placez y les dossiers `bin`, `lib` et `include` 
    3. Créer un dossier `build` et ouvrez le dans un terminal
    4. Executer _CMake_ avec la command `cmake ..`
    5. Compiler le projet
    
3. __Unix__:
    1. Installer _Allegro__ et assurez vous qu'il se trouve dans `/usr/lib` et `/usr/include`
    2. Créer un dossier `build` et ouvrez le dans un terminal
    3. Executer _CMake_ avec la command `cmake ..`
    4. Compiler le projet
   
    
## Les librairies

- [__Allegro__](http://allegro.cc/) Utilisé pour l'affichage, les entrées utilisateurs, le chargement des 
fichiers    
