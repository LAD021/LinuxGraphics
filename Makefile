#######################
# Makefile
#######################

CC := gcc

INC := -I ./ -I /usr/include -I./grafLib/include

TARGETREPO := ./grafLib/shared/

TARGET := ${TARGETREPO}libgraf.so

OBJREPO := ./grafLib/srv/

OBJ := ${OPJREPO}graf.c

MODE := -shared -fPIC

${TARGET}: ${OBJ}
	${CC} ${MODE} -o $@ $^

clean:
	rm -rf ${TARGET}
