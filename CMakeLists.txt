cmake_minimum_required(VERSION 3.13.0)

set(DOCPARSER_VERSION_MAJOR 1)
set(DOCPARSER_VERSION_MINOR 0)
set(DOCPARSER_VERSION_PATCH 0)

string(CONCAT PRJ_VER
    "${DOCPARSER_VERSION_MAJOR}"
    ".${DOCPARSER_VERSION_MINOR}"
    ".${DOCPARSER_VERSION_PATCH}")

project(docparser
    VERSION ${PRJ_VER}
    DESCRIPTION "Doc parser"
    LANGUAGES C) 

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED True)

find_program(CLANG_TIDY_FOUND NAMES clang-tidy)
if (CLANG_TIDY_FOUND)
  set(CMAKE_C_CLANG_TIDY clang-tidy)
endif()

# vim YouCompleteMe
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

if(EXISTS "${CMAKE_CURRENT_BINARY_DIR}/compile_commands.json")
  EXECUTE_PROCESS(COMMAND ${CMAKE_COMMAND} -E copy_if_different
      ${CMAKE_CURRENT_BINARY_DIR}/compile_commands.json
      ${CMAKE_CURRENT_SOURCE_DIR}/compile_commands.json)
endif()

set(PROJECT_COMPILE_FLAGS
		-Wall
		-Wextra
		-Wcast-align
		-Wcast-qual
		-Wdiv-by-zero)

set(INCLUDE_FILES
    include/hyundeok/macro.h
    include/hyundeok/docparser/read_Fib.h
    include/hyundeok/docparser/utils/file.h
    include/hyundeok/docparser/msdoc/Clx.h
    include/hyundeok/docparser/msdoc/FcCompressed.h
    include/hyundeok/docparser/msdoc/LID.h
    include/hyundeok/docparser/msdoc/Pcd.h
    include/hyundeok/docparser/msdoc/Pcdt.h
    include/hyundeok/docparser/msdoc/PlcPcd.h
    include/hyundeok/docparser/msdoc/Prc.h
    include/hyundeok/docparser/msdoc/PrcData.h
    include/hyundeok/docparser/msdoc/Prl.h
    include/hyundeok/docparser/msdoc/Prm.h
    include/hyundeok/docparser/msdoc/STTB.h
    include/hyundeok/docparser/msdoc/Sprm.h
    include/hyundeok/docparser/msdoc/ToggleOperand.h
    include/hyundeok/docparser/msdoc/Fib/Fib.h
    include/hyundeok/docparser/msdoc/Fib/FibBase.h
    include/hyundeok/docparser/msdoc/Fib/FibRgLw97.h
    include/hyundeok/docparser/msdoc/Fib/FibRgW97.h
    include/hyundeok/docparser/msdoc/Fib/FibRgCswNew/FibRgCswNew.h
    include/hyundeok/docparser/msdoc/Fib/FibRgCswNew/FibRgCswNewData.h
    include/hyundeok/docparser/msdoc/Fib/FibRgCswNew/FibRgCswNewData2000.h
    include/hyundeok/docparser/msdoc/Fib/FibRgCswNew/FibRgCswNewData2007.h
    include/hyundeok/docparser/msdoc/Fib/FibRgFcLcb/FibRgFcLcb.h
    include/hyundeok/docparser/msdoc/Fib/FibRgFcLcb/FibRgFcLcb97.h
    include/hyundeok/docparser/msdoc/Fib/FibRgFcLcb/FibRgFcLcb2000.h
    include/hyundeok/docparser/msdoc/Fib/FibRgFcLcb/FibRgFcLcb2002.h
    include/hyundeok/docparser/msdoc/Fib/FibRgFcLcb/FibRgFcLcb2003.h
    include/hyundeok/docparser/msdoc/Fib/FibRgFcLcb/FibRgFcLcb2007.h
    include/hyundeok/docparser/msoffcrypto/EncryptionHeader.h)

set(SOURCE_FILES
    src/read_Fib.c
    src/utils/file.c)

add_library(${PROJECT_NAME} SHARED)

target_compile_options(${PROJECT_NAME}
    PRIVATE $<$<COMPILE_LANGUAGE:C>:${PROJECT_COMPILE_FLAGS}>)

target_include_directories(${PROJECT_NAME}
    PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    PRIVATE
        src)

target_sources(${PROJECT_NAME}
    PUBLIC ${INCLUDE_FILES}
    PRIVATE ${SOURCE_FILES})

set_target_properties(${PROJECT_NAME} PROPERTIES
    VERSION ${PROJECT_VERSION}
    SOVERSION ${DOCPARSER_VERSION_MAJOR}
    PUBLIC_HEADER "${INCLUDE_FILES}")

include(GNUInstallDirs)

install(TARGETS ${PROJECT_NAME}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_LIBDIR}
    PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})

enable_testing()
add_subdirectory(test)
