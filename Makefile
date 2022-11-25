CC := g++
SRCDIR := src
BUILD := build
TARGET := main.out
CFLAGS := -g -Wall -O3 -std=c++11 -I include/

all: main

Classe:
	$(CC) $(CFLAGS) -c src/Classe.cpp -o build/Classe.o
Personagem:
	$(CC) $(CFLAGS) -c src/Personagem.cpp -o build/Personagem.o
Interface:
	$(CC) $(CFLAGS) -c src/Interface.cpp -o build/Interface.o
Inimigos:
	$(CC) $(CFLAGS) -c src/Inimigos.cpp -o build/Inimigos.o
Turno:
	$(CC) $(CFLAGS) -c src/Turno.cpp -o build/Turno.o
Robo:
	$(CC) $(CFLAGS) -c src/Robo.cpp -o build/Robo.o

main: Classe Personagem Interface Inimigos Turno Robo
	$(CC) $(CFLAGS) build/Classe.o build/Personagem.o build/Interface.o build/Inimigos.o build/Turno.o build/Robo.o src/main.cpp -o $(TARGET)

clean:
	$(RM) -r $(BUILD)/* $(TARGET)