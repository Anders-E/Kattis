to_int = {
    "xxxxx\nx...x\nx...x\nx...x\nx...x\nx...x\nxxxxx" : 0,
    "....x\n....x\n....x\n....x\n....x\n....x\n....x" : 1,
    "xxxxx\n....x\n....x\nxxxxx\nx....\nx....\nxxxxx" : 2,
    "xxxxx\n....x\n....x\nxxxxx\n....x\n....x\nxxxxx" : 3,
    "x...x\nx...x\nx...x\nxxxxx\n....x\n....x\n....x" : 4,
    "xxxxx\nx....\nx....\nxxxxx\n....x\n....x\nxxxxx" : 5,
    "xxxxx\nx....\nx....\nxxxxx\nx...x\nx...x\nxxxxx" : 6,
    "xxxxx\n....x\n....x\n....x\n....x\n....x\n....x" : 7,
    "xxxxx\nx...x\nx...x\nxxxxx\nx...x\nx...x\nxxxxx" : 8,
    "xxxxx\nx...x\nx...x\nxxxxx\n....x\n....x\nxxxxx" : 9,
    ".....\n..x..\n..x..\nxxxxx\n..x..\n..x..\n....." : '+',
}

to_ascii = {value: key for key, value in to_int.items()}

