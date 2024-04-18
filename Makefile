# Compiler settings
CXX := g++
CXXFLAGS := -std=c++11 -Wall -Wextra

# Directories
SRC_DIR := src
BUILD_DIR := build
PROTO_DIR := proto

# Source files
SRCS := $(wildcard $(SRC_DIR)/*.cpp)
OBJS := $(patsubst $(SRC_DIR)/%.cpp,$(BUILD_DIR)/%.o,$(SRCS))

# gRPC and Protocol Buffers
GRPC_CPP_PLUGIN := grpc_cpp_plugin
GRPC_CPP_PLUGIN_PATH ?= `which $(GRPC_CPP_PLUGIN)`
PROTOC := protoc
GRPC_CPP_FLAGS := -I$(PROTO_DIR) --grpc_out=$(SRC_DIR) --plugin=protoc-gen-grpc=$(GRPC_CPP_PLUGIN_PATH)
PROTO_FLAGS := -I$(PROTO_DIR) --cpp_out=$(SRC_DIR)

# Target executable
TARGET := server

.PHONY: all clean

all: $(BUILD_DIR) $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@ -L/usr/local/lib `pkg-config --libs grpc++ grpc` -lprotobuf -lpthread

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@


$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

# Generate gRPC and Protocol Buffers code
grpc: $(PROTO_DIR)/*.proto
	$(PROTOC) $(PROTO_FLAGS) $^
	$(PROTOC) $(GRPC_CPP_FLAGS) $^

clean:
	$(RM) -r $(BUILD_DIR) $(TARGET)