# The CMakeRoot handles all the libraries necessary to run the code
cmake_minimum_required(VERSION 3.16)

project(SysmicSoftware VERSION 1.0.0 LANGUAGES CXX)
set(TARGET SysmicSoftware)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Setup Qt6
find_package(Qt6 REQUIRED COMPONENTS Core Network Gui Widgets)
qt_standard_project_setup()

# Build protobuf
set(DEPENDENCY_DOWNLOADS "${CMAKE_BINARY_DIR}/downloads")
set(PROTOBUF_INSTALL_DIR "${CMAKE_BINARY_DIR}/protobuf-install")
list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")
include(BuildProtobuf)

# Compile protobuf
include(CompileProtobuf)
set(PROTOBUF_ROOT "${CMAKE_BINARY_DIR}/project_protobuf-prefix")  # <- more correct than using 'build/project_protobuf-prefix'
set(Protobuf_PROTOC_EXECUTABLE "${PROTOBUF_ROOT}/bin/protoc")
set(Protobuf_INCLUDE_DIR "${PROTOBUF_ROOT}/include")
set(Protobuf_LIBRARIES "${PROTOBUF_ROOT}/lib/libprotobuf.a")  # or .lib on Windows
set(PROTO_SRC_DIR "${CMAKE_SOURCE_DIR}/src/protobuf/protos")
set(PROTO_GEN_DIR "${CMAKE_SOURCE_DIR}/src/protobuf")
define_proto_generation_target(generate_protos ${PROTO_SRC_DIR} ${PROTO_GEN_DIR})
add_dependencies(generate_protos project_protobuf)
add_library(proto_files STATIC ${generate_protos_SRCS} ${generate_protos_HDRS})
add_dependencies(proto_files generate_protos)
target_include_directories(proto_files PUBLIC
    "${PROTO_GEN_DIR}"
    "${Protobuf_INCLUDE_DIR}"
)
target_link_libraries(proto_files PUBLIC ${Protobuf_LIBRARIES})


# Include the Lua project
add_subdirectory(lua)

include(FetchContent)

# Fetch sol2 using a valid tag (e.g., v3.3.0)
FetchContent_Declare(
    sol2
    GIT_REPOSITORY https://github.com/ThePhD/sol2.git
    GIT_TAG        v3.3.0
)
FetchContent_MakeAvailable(sol2)


add_subdirectory(src)