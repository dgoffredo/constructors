.PHONY: compile format

compile: main.cpp format
	./g++-4.8 -o /dev/null -std=c++11 -Wall -Wextra -pedantic -Werror $<

format: main.cpp
	./clang-format-6.0 -style=file -i $<
