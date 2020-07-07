set(COMPONENT_SRCS
    "src/functions.cpp"
    "src/Motor.cpp"
    "src/Motors_dc2platform.cpp")
set(COMPONENT_ADD_INCLUDEDIRS "include")

idf_component_register( SRCS ${COMPONENT_SRCS}
                        INCLUDE_DIRS ${COMPONENT_ADD_INCLUDEDIRS})