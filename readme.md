# Cpp Concept Showroom 2019

It's been a while since Bjarne introduced concepts:
* https://www.youtube.com/watch?v=HddFGPTAmtU
* http://www.stroustrup.com/good_concepts.pdf

I want to understand that feature and use it, that is why I am sharring it. Feel free to share your thoughts on this. 

Table of contents:
* 1. Concept contains method. This method has args
    * 1.1 use that concept as method argument
    * 1.2 store pointer to that concept (dependency injection)
* 2. Concept contains method. Args of that method are concepts as well 
* 3. Concept based on type-traits
* 4. Composition of concepts (i.e. concept includes all requirements from another concept plus own requirements)

# Requirements
* docker-compose

# How to run (windows/linux/macos)
```docker-compose up --build```

## notes
At the moment GCC (6+) has -fconcepts flag (unlike CLANG).
