#!/usr/bin/python3

""" Lockboxes  """


def canUnlockAll(boxes):
    """ 
    method that determines if all the boxes can be opened
    boxes is a list of lists
    A key with the same number as a box opens that box
    You can assume all keys will be positive integers
    The first box boxes[0] is unlocked
    Return True if all boxes can be opened, else return False
    """
    unlocked = [0]
    for i in unlocked:
        for j in boxes[i]:
            if j < len(boxes):
                if j in unlocked:
                    pass
                else:
                    unlocked.append(j)


    if len(unlocked) == len(boxes):
        return True
    else:
        return False
