import multiprocessing
import math

def szamol():
    x = 0.0
    while True:
        x += math.sqrt(12345.6789)

if __name__ == "__main__":
    for _ in range(multiprocessing.cpu_count()):
        multiprocessing.Process(target=szamol).start()
