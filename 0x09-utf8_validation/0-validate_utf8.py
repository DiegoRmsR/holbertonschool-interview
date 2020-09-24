#!/usr/bin/python3
"""
UTF-8 Validation 
"""
import unicodedata


def validUTF8(data):
    """method that determines if a given data set represents a valid UTF-8 encoding."""
    for inte in data:
        try:
            unicodedata.name(chr(inte))
        except Exception as e:
            return False
    return True
