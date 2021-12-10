#!/usr/bin/python3
"""  Interview """


def canUnlockAll(boxes):
    """"""
    listKeys = [0]
    for mykey in listKeys:
        for boxKey in boxes[mykey]:
            if boxKey not in listKeys and boxKey < len(boxes):
                listKeys.append(boxKey)

    if len(listKeys) == len(boxes):
        return True
    return False
