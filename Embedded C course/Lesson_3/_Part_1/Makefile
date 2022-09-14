CC =arm-none-eabi-
CFLAGS = -mcpu=cortex-m3 -gdwarf-2
INCS = -I .
LIBS =
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
AS = $(wildcard *.s)
ASOBJ = $(AS:.s=.o)
project_name =Learn_In_Depth_cortex-m3

all :  Learn_In_Depth_cortex-m3.bin
	@echo "Build done"
	
startup.o : startup.s 
	$(CC)as.exe $(CFLAGS) $< -o $@
	
%.o : %.c
	$(CC)gcc.exe -c $(CFLAGS) $(INCS) $< -o $@
	
Learn_In_Depth_cortex-m3.elf : $(OBJ) $(ASOBJ)
	$(CC)ld.exe -T linker_script.ld $(OBJ) $(ASOBJ) $(LIBS) -o $@ -Map=map_output.map
	

Learn_In_Depth_cortex-m3.bin : Learn_In_Depth_cortex-m3.elf
		$(CC)objcopy.exe -O binary $< $@
		
clean_all : 
	rm *.bin *.elf *.o
	@echo "Everything deleted"
	
clean :
	rm *.bin *.elf