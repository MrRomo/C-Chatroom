# C-Chatroom

Una simple sala de chat hecha en C, utilizando la tecnologia de Sockets e Hilos. 

[![N|](https://github.com/MrRomo/C-Chatroom/raw/master/media/Sala%20de%20chat%20en%20C-file_system.png)](https://nodesource.com/products/nsolid)
###### Sistema de archivos
[![N|Solid](https://github.com/MrRomo/C-Chatroom/raw/master/media/Sala%20de%20chat%20en%20C-esquema%20del%20sistema.png)](https://nodesource.com/products/nsolid)
###### Esquema del sistema
[![Build Status](https://travis-ci.org/joemccann/dillinger.svg?branch=master)](https://travis-ci.org/joemccann/dillinger)

# Modo de uso
- Compilar el servidor:
    ```sh
    $ gcc -o server -lm server.c -lpthread
    ```
- Compilar el cliente:
    ```sh
    $ gcc -o client -lm client.c -lpthread
    ```
- Iniciar el servidor en el puerto que desee conectarse:
    ```sh
    $ ./server <port>
    ```
- Iniciar el cliente o los clientes en el puerto del servidor:
    ```sh
    $ ./client <port>
    ```
  
