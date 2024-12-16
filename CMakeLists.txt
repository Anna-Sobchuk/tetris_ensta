cmake_minimum_required(VERSION 3.21)
project(tetris_ensta)

set(CMAKE_CXX_STANDARD 14)
set(SFML_DIR "C:/Users/Anna/Documents/oop/tetris_ensta/SFML-2.6.2/build")
find_package(SFML 2.5 COMPONENTS system window graphics audio REQUIRED)

add_executable(tetris_ensta main.cpp Board.cpp Controller.cpp FileManager.cpp NextFrame.cpp I.cpp J.cpp
        L.cpp O.cpp S.cpp T.cpp Z.cpp Shape.cpp Screens.cpp)

# Линковка с библиотеками SFML
target_link_libraries(tetris_ensta sfml-system sfml-window sfml-graphics sfml-audio)
target_link_libraries(tetris_ensta
        C:/Users/Anna/Documents/oop/tetris_ensta/SFML-2.6.2/build/lib/Debug/sfml-graphics-d.lib
        C:/Users/Anna/Documents/oop/tetris_ensta/SFML-2.6.2/build/lib/Debug/sfml-window-d.lib
        C:/Users/Anna/Documents/oop/tetris_ensta/SFML-2.6.2/build/lib/Debug/sfml-system-d.lib
        C:/Users/Anna/Documents/oop/tetris_ensta/SFML-2.6.2/build/lib/Debug/sfml-audio-d.lib
        )