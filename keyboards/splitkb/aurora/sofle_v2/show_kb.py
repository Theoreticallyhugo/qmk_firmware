import os
import json


def get_keymap(path):
    with open(path, "r") as r:
        map = json.load(r)
        print(map)


keymap = get_keymap(
    os.path.join(os.path.curdir, "keymaps", "Theoreticallyhugo", "keymap.json")
)


layers = keymap
