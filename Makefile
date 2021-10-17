todo-ls: main.o mainFrame.o listBox.o textCtrl.o
	$(CXX) -o todo-ls main.o mainFrame.o listBox.o textCtrl.o `wx-config --libs`

main.o: main.cpp
	$(CXX) `wx-config --cxxflags` -c main.cpp -o main.o

mainFrame.o: mainFrame.cpp
	$(CXX) `wx-config --cxxflags` -c mainFrame.cpp -o mainFrame.o

listBox.o: listBox.cpp
	$(CXX) `wx-config --cxxflags` -c listBox.cpp -o listBox.o

textCtrl.o: textCtrl.cpp
	$(CXX) `wx-config --cxxflags` -c textCtrl.cpp -o textCtrl.o

clean:
	$(RM) todo-ls main.o mainFrame.o listBox.o gtextCtrl.o
.PHONY: clean
