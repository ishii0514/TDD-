target  = 'tddtest'
sources = [
    Glob('src/*.cpp'),
    Glob('test/*.cpp')
    ]

Program(target,sources,
    LIBS='gtest',
    LIBPATH='../gtest-1.6.0/lib/debug',
    CPPPATH=['../gtest-1.6.0/include'])