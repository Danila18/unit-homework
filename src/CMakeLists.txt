add_library(example "")
set(SOURCE_FILES main.cpp example12/example12.cpp)

target_sources(
        example
        PRIVATE
        main.cpp
        example.cpp
        example12/example12.cpp
        PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}/example.h
        ${CMAKE_CURRENT_LIST_DIR}/example12/example12.h
)

target_link_libraries(
        example
)

target_include_directories(
        example
        PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}
)

add_executable(main main.cpp)
