# NPC PROMOCIÓN


## Descripción

Este modulo, le permite al servidor, ofrecer una serie de promociones las cuales están configuradas dentro del modulo. Por el momento, tenemos disponible.


* Promoción de leveo
```
La cual consiste en otorgarle al dueño de la cuenta, la posibilidad de tener todos los items de leveo.
```

## ¿Cómo funciona?

Debes dirigirte a las zonas de inicio, donde esta creado el correspondiente npc y al hablarle, el mismo te dará una serie de opciones.

![my new module screenshot](/screenshots/my_module.png?raw=true "my new module screenshot")

<!-- Video example - We can't embed videos on github, only on github.io pages. If you can, make an animated gif of your video instead (but it's not needed) -->
[![Youtube Link](https://i.imgur.com/Jhrdgv6.png)](https://www.youtube.com/watch?v=T6UEX47mPeE)


## Requirements

My new module requires:

- AzerothCore v1.0.1+


## Installation

```
1) Simply place the module under the `modules` directory of your AzerothCore source. 
2) Import the SQL manually to the right Database (auth, world or characters) or with the `db_assembler.sh` (if `include.sh` provided).
3) Re-run cmake and launch a clean build of AzerothCore.
```

## Edit module configuration (optional)

If you need to change the module configuration, go to your server configuration folder (where your `worldserver` or `worldserver.exe` is), copy `my_module.conf.dist` to `my_module.conf` and edit that new file.


## Credits

* [Me](https://github.com/pangolp) (author of the module)

AzerothCore: [repository](https://github.com/azerothcore) - [website](http://azerothcore.org/) - [discord chat community](https://discord.gg/PaqQRkd)
