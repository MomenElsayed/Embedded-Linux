fileScr1 = main.c
fileObj1 = main.o

fileScr2 = ./MCAL/Lib/DIO.c
fileObj2 = ./MCAL/Lib/DIO.o
fileHeader2 = ./MCAL/Includes/DIO.h

fileScr3 = ./MCAL/Lib/PORT.c
fileObj3 = ./MCAL/Lib/PORT.o
fileHeader3 = ./MCAL/Includes/PORT.h

fileScr4 = ./PORT_Configuration/PORT_Cfg.c
fileObj4 = ./PORT_Configuration/PORT_Cfg.o

fileHeader4 = ./MCAL/Includes/bitmath.h
fileHeader5 = ./MCAL/Includes/DIO_Private.h
fileHeader6 = ./MCAL/Includes/std_types.h
fileHeader7 = ./MCAL/Includes/PORT_Cfg.h

allObjs = $(fileObj1) $(fileObj2) $(fileObj3) $(fileObj4)
MCALlib = libmcal.a
includes = -I ./MCAL/Includes

finalTargetName = main.elf

CC = avr-gcc

LIBS = -L. -lmcal

$(finalTargetName) : CFLAG = 
$(MCALlib) : CFLAG = -c
$(fileObj1) : CFLAG = -c
$(fileObj4) : CFLAG = -c

$(finalTargetName) : $(fileObj1) $(fileObj4) $(MCALlib)
	$(CC) -o $(finalTargetName) $(fileObj1) $(fileObj4) $(MCALlib)


$(fileObj1) : $(fileScr1)
	$(CC) $(CFLAG) $(fileScr1) $(includes) -o $(fileObj1)

$(fileObj4) : $(fileScr4)
	$(CC) $(CFLAG) $(fileScr4) $(includes) -o $(fileObj4)
	
$(MCALlib) : $(fileScr2) $(fileScr3)
	$(CC) $(CFLAG) $(fileScr2) $(includes) -o $(fileObj2)
	$(CC) $(CFLAG) $(fileScr3) $(includes) -o $(fileObj3)
	avr-ar -rcs $@ $(fileObj2) $(fileObj3)	

.PHONY: clean
clean:
	rm -f $(finalTargetName) $(MCALlib) $(allObjs)

