OBJS		= config.o server.o main.o
BIN			= example_exe
CXX			= g++
CXXFLAGS	= -O3 -g -ggdb3 -std=c++11
BIN_DIR     = ./bin
OBJ_DIR		= ./obj
SRC_DIR		= ./src

INC			= -I./src \
			  -I./third \

LIB			= -lpthread \
			  ./third/lib/libiniparser.a


all: dir $(addprefix $(BIN_DIR)/,$(BIN))

dir:
	@-mkdir -p $(OBJ_DIR)
	@-mkdir -p $(BIN_DIR)

$(OBJ_DIR)/%.o:src/%.cpp
	$(CXX) $(CXXFLAGS) $(INC) -o $@ -c $<

$(BIN_DIR)/$(BIN) : $(addprefix $(OBJ_DIR)/,${OBJS})
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LIB)

clean:
	@rm -f $(addprefix $(BIN_DIR)/,$(BIN)) $(OBJ_DIR)/*.o
	@rm -rf $(BIN_DIR)/$(BIN) $(OBJ_DIR)
