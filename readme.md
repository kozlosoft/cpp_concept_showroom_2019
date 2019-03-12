[![Build Status](https://travis-ci.org/kozlosoft/cpp_concept_showroom_2019.svg?branch=master)](https://travis-ci.org/kozlosoft/cpp_concept_showroom_2019)
# Cpp Concept Showroom 2019

It's been a while since Bjarne introduced concepts:
* https://www.youtube.com/watch?v=HddFGPTAmtU
* http://www.stroustrup.com/good_concepts.pdf

I want to understand that feature and use it, that is why I am sharing it. Feel free to share your thoughts on this. 

Table of contents:
1. Concept contains method. This method has args

   1.1 use that concept as a method argument

   1.2 store pointer to that concept (dependency injection)

2. Concept contains method. Args of that method are concepts as well 
3. Concept based on type-traits
4. The composition of concepts (i.e. concept includes all requirements from another concept plus own requirements)

# Requirements
* docker-compose

# How to run (windows/linux/macos)
```docker-compose up --build```

or check travis-ci output

## notes
At the moment GCC (6+) has -fconcepts flag (unlike CLANG).
