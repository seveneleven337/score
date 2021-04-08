OBJ = score.o getscore.o eval.o classify.o output.o
APPNAME = score
$(APPNAME) : $(OBJ)
	gcc -o $(APPNAME) $(OBJ)
%.o : %.c
	gcc -g  -c -o $@ $<
clean:
	rm $(OBJ) $(APPNAME)

