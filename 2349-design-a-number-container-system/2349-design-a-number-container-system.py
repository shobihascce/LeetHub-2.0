import sortedcontainers

class NumberContainers:

    def __init__(self):
        self.index_map = {}
        self.number_map = {}

    def change(self, index: int, number: int) -> None:
        if index in self.index_map:
            old_number = self.index_map[index]
            if old_number in self.number_map:
                self.number_map[old_number].discard(index) 
        
        self.index_map[index] = number  
        
        if number not in self.number_map:
            self.number_map[number] = sortedcontainers.SortedSet()
        self.number_map[number].add(index)  

    def find(self, number: int) -> int:
        if number in self.number_map and self.number_map[number]:
            return next(iter(self.number_map[number]))  
        return -1
