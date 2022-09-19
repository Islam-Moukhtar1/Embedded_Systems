CC =arm-none-eabi-
CFLAGS = -mcpu=cortex-m4 -gdwarf-2 -g
INCS = -I .
LIBS =
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
AS = $(wildcard *.s)
ASOBJ = $(AS:.s=.o)
project_name =Learn_In_Depth_cortex-m4

all :  Learn_In_Depth_cortex-m4.bin
	@echo "Build done"
	
	
%.o : %.c
	$(CC)gcc.exe -c $(CFLAGS) $(INCS) $< -o $@
	
Learn_In_Depth_cortex-m4.elf : $(OBJ) $(ASOBJ)
	$(CC)ld.exe -T linker_script.ld $(OBJ) $(ASOBJ) $(LIBS) -o $@ -Map=map_output.map
	cp Learn_In_Depth_cortex-m4.elf Learn_In_Depth_cortex-m4.axf

Learn_In_Depth_cortex-m4.bin : Learn_In_Depth_cortex-m4.elf
		$(CC)objcopy.exe -O binary $< $@
		
clean_all : 
	rm *.bin *.elf *.o
	@echo "Everything deleted"
	
clean :
	rm *.bin *.elf