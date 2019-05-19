#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  mcpi01.py

import sys
import os
import mcpi.minecraft as minecraft
import mcpi.block as block

os.environ["USERNAME"] = "Steve"  # nazwa użytkownika
os.environ["COMPUTERNAME"] = "mykomp"  # nazwa komputera

mc = minecraft.Minecraft.create("192.168.3.39")

def czysc(x=0, y=0, z=0, roz=50):
    mc.setBlocks(x, y, z, x + roz, y + 2 * roz, z + roz, block.AIR)

def warstwa(x=0, y=0, z=0, roz=50, block=block.WOOD):
    mc.setBlocks(x, y, z, x + roz, y, z + roz, block)

# def prostokat(x, y, z, a, b, block=block.WOOD):
    #mc.setBlocks(x, y, z, x, y, z + a, block)
    #mc.setBlocks(x, y, z, x + b, y, z, block)
    #mc.setBlocks(x, y, z + a, x + b, y, z + a, block)
    #mc.setBlocks(x + b, y, z, x + b, y, z + a, block)

def prostokat(x, y, z, a, b, blok=block.WOOD):
    mc.setBlocks(x, y, z, x + a, y, z + b, blok)
    mc.setBlocks(x + 1, y, z + 1, x + a - 1, y, z + b - 1, block.AIR)


def prostokat(x, y, z, a, b, blok=block.WOOD):
    mc.setBlocks(x, y, z, x + a, y, z + b, blok)
    mc.setBlocks(x + 1, y, z + 1, x + a - 1, y, z + b - 1, block.AIR)

def main(args):
    mc.postToChat("Witaj w Minecrafcie!")
    mc.player.setPos(0, 0, 0)
    czysc(-50, 0, -50, 100)
    warstwa(-20, 0, -20, 60, block.GRASS)
    prostokat(-20, 1, -20, 21, 34, block.WOOD_PLANKS)
    
    return 0


if __name__ == '__main__':
    sys.exit(main(sys.argv))


