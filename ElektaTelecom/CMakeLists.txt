PROJECT(ElektaTelecom)

add_executable(ElektaTelecomTest main.cpp Tests.cpp ElektaTelecom.cpp)
target_link_libraries(ElektaTelecomTest gtestgmock pthread)
