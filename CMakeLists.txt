cmake_minimum_required(VERSION 3.16)

project(practica_2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_custom_target(Documentacion SOURCES
    README.md
)

add_executable(practica_2
  main.cpp
  include/configuracion.h
  include/enlace.h
  src/ejercicio_2.cpp
  src/ejercicio_4.cpp
)

include(GNUInstallDirs)
install(TARGETS laboratorio_II
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

target_include_directories(desafio_1 PRIVATE include)

install(FILES README.md DESTINATION ${CMAKE_INSTALL_DOCDIR})
