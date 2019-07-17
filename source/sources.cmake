if(INCLUDE__EXPRJLIBAPP)

    get_filename_component(_tmpdir "${CMAKE_CURRENT_LIST_DIR}" ABSOLUTE)

    file(GLOB_RECURSE _tmpsrc
        "${_tmpdir}/*.c"
        "${_tmpdir}/*.cpp"
        "${_tmpdir}/*.S"
        "${_tmpdir}/*.s")

    set(PROJECT_SOURCES ${PROJECT_SOURCES} ${_tmpsrc})
    
endif(INCLUDE__EXPRJLIBAPP)

