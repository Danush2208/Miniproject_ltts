#To check if the OS is Windows or Linux and set the executable file extension and delete command accordingly
ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  #EXEC = out
   endif
endif

PROJ_NAME = quiz
TEST_PROJ_NAME = $(PROJ_NAME)

BUILD_DIR = Build

SRC = src/main.c src/help.c src/edit_score.c src/reset_score.c src/show_record.c
INC = inc/quiz.h\
unity/unity.h unity/unity_internals.h


TEST_SRC = testfile/TEST_quiz.c\
unity/unity.c



all: $(SRC) $(BUILD_DIR)
	gcc $(SRC) $(INC) -o $(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))

run: all
	$(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))

$(BUILD_DIR):
	mkdir $(BUILD_DIR)

analysis: all
	cppcheck --enable=all $(SRC)
	valgrind --leak-check=full $(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))

coverage:
	gcc -fprofile-arcs -ftest-coverage $(SRC) $(TEST_SRC) $(INC) -o $(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))
	$(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))
	gcov -a $(SRC)

clean:
	$(RM) $(call FixPath,$(BUILD_DIR)/*) *.gcda *.gcno *.gcov
	