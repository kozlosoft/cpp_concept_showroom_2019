FROM ubuntu:18.04

RUN apt-get update && apt-get install -y \ 
    g++ \
    cmake 

WORKDIR /data/build
ENTRYPOINT cmake .. && cmake --build . && ./cpp_concept_showroom_2019
