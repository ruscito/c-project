coverage:
	cmake -H. -Bbuild -G "Unix Makefiles" -DCMAKE_BUILD_TYPE="Debug" -DENABLE_TESTING=ON -DENABLE_COVERAGE=ON  
	cmake --build build --config Debug --target coverage -j4   

testing:	
	cd build && cmake -DENABLE_TESTING=ON ..
	cd build && cmake --build . --target libtest

debug:	
	cd build && cmake -DCMAKE_BUILD_TYPE=Debug ..
	cd build && cmake --build . --target libtest

doc:
	cd build && cmake -DENABLE_DOC=ON ..
	cd build && cmake --build . --target doc_doxygen

graph:
	cd build && cmake .. --graphviz=graph.dot && dot -Tpng graph.dot -o ../docs/graph.png

clean:
	rm -rf build
	mkdir build