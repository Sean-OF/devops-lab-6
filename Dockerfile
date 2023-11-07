FROM gcc:latest
COPY . /app
WORKDIR /app
RUN gcc -o SampleProg SampleProg.c
CMD ["./SampleProg"]
