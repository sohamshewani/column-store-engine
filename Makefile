all:
	make -C src

test:
	make -C tests

install:
	make -C src install

clean:
	make -C src clean
	make -C tests clean
