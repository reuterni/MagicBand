CFLAGS=$(MCU) $(CPU_SPEED) -Os -w
LIBNAME=libEEPROM.a
OBJECTS= EEPROM.o

build: $(OBJECTS)
	avr-ar rcs $(LIBNAME) $^
	mkdir -p $(LIBDIR)
	mkdir -p ~/lib/
	cp *.h $(LIBDIR)
	mv $(LIBNAME) ~/lib/
	rm *.o

%.o : %.cpp
	$(CXX) $(LIBRARIES) $< $(CFLAGS) -c -o $@
