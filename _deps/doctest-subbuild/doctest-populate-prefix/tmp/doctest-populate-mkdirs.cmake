# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/home/susan/Documents/csi281/_deps/doctest-src"
  "/home/susan/Documents/csi281/_deps/doctest-build"
  "/home/susan/Documents/csi281/_deps/doctest-subbuild/doctest-populate-prefix"
  "/home/susan/Documents/csi281/_deps/doctest-subbuild/doctest-populate-prefix/tmp"
  "/home/susan/Documents/csi281/_deps/doctest-subbuild/doctest-populate-prefix/src/doctest-populate-stamp"
  "/home/susan/Documents/csi281/_deps/doctest-subbuild/doctest-populate-prefix/src"
  "/home/susan/Documents/csi281/_deps/doctest-subbuild/doctest-populate-prefix/src/doctest-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/home/susan/Documents/csi281/_deps/doctest-subbuild/doctest-populate-prefix/src/doctest-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/home/susan/Documents/csi281/_deps/doctest-subbuild/doctest-populate-prefix/src/doctest-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
