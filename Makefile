EXE=hello

all: ${EXE}

clean:
	rm -rf ${EXE}
test:
	./${EXE} || exit 1
