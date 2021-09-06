# Name of the project
PROJECT_NAME = Restaurant_Food_Ordering_Management_System

# Output directory
BUILD = build

# All source code files
SRC = src/Bill.c\
src/clear.c\
src/console.c\
src/Food_List.c\
src/Insert.c\
src/Order.c\
src/Previous_Order.c\
test/test_main.c\
unity/unity.c

# All include folders with header files
INC = -Iinc\
-Iunity

all: $(SRC) $(BUILD)
	gcc $(SRC) $(INC) -o build/Final_output.exe -lm

run:
	./build/Final_output.exe

