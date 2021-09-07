PROJ_NAME = Restaurant_Food_Ordering_System
BUILD_DIR = Build

#To check if the OS is windows or linux and set the executable file extension and delete command accordingly
ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif

# All source code files
SRC = src/Bill.c\
src/clear.c\
src/Food_List.c\
src/Insert.c\
src/Order.c\
src/Previous_Order.c\
test/test_main.c\
unity/unity.c

# All include folders with header files
INC = -Iinc\
-Iunity

all:$(BUILD_DIR)
	gcc $(SRC) $(INC) -o $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC))

run: all
	$(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC))

$(BUILD_DIR):
	mkdir $(BUILD_DIR)

clean:
	$(RM) $(call FixPath,$(BUILD_DIR)/*)
	rmdir $(BUILD_DIR)