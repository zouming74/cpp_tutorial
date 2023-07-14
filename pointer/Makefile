

.PHONY: build
build: configure
	cmake --build build

.PHONY: configure
configure:
	cmake -B build 

.PHONY: run
run:
	./build/pointer


.PHONY: clean
clean:
	rm -rf build

#
# 可以使用 Make 来更方便地调用 CMake 命令：
#
# make configure
# make build
# make run
# make clean