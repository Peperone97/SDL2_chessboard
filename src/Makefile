CC=g++
OBJ=main.o baseWindow.o inputWindow.o errorWindow.o window.o texture.o entity.o core.o timer.o map.o phrase.o button.o dropdownMenu.o cursor.o monster.o movementArrow.o cross.o
LIBS=`pkg-config --libs --cflags sdl2` -lSDL2_image
RES=program

$(RES): $(OBJ)
	g++ $(LIBS) $(OBJ) -o $(RES)

main.o: main.cpp window.h baseWindow.h inputWindow.h errorWindow.h
baseWindow.o: baseWindow.cpp baseWindow.h
inputWindow.o: inputWindow.cpp inputWindow.h baseWindow.h phrase.h button.h dropdownMenu.h cursor.h entity.h
errorWindow.o: errorWindow.cpp errorWindow.h baseWindow.h phrase.h
window.o: window.cpp window.h core.h baseWindow.h phrase.h monster.h entity.h
texture.o: texture.cpp texture.h
core.o: core.cpp core.h texture.h entity.h map.h movementArrow.h
menu.o: menu.cpp menu.h texture.h
new_core.o: new_core.cpp core.h texture.h entity.h
entity.o: entity.cpp entity.h texture.h timer.h
timer.o: timer.cpp timer.h
map.o: map.cpp map.h
phrase.o: phrase.cpp phrase.h texture.h
button.o: button.cpp button.h phrase.h texture.h
dropdownMenu.o: dropdownMenu.cpp dropdownMenu.h button.h phrase.h cursor.h entity.h
cursor.o: cursor.cpp cursor.h entity.h
monster.o: monster.cpp monster.h entity.h
movementArrow.o: movementArrow.cpp movementArrow.h entity.h
cross.o: cross.cpp cross.h entity.h

clean:
	rm *.o $(RES)
