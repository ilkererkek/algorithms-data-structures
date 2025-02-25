class StaticArray:
  def __init__(self, size):
    self.size = size
    self.array = [None] * size
  
  def insert(self, index, value):
    self._index_validation(index)
    self.array[index] = value
  
  def get(self, index):
    self._index_validation(index)
    return self.array[index]
  def remove(self, index):
    self._index_validation(index)
    self.array[index] = None
  def __str__(self):
    return str(self.array)
    
  def _index_validation(self, index):
    if index < 0 or index >= self.size:
      raise IndexError('Index out of bounds')