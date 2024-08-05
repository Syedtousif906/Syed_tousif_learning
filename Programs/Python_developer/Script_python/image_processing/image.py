from PIL import Image

img = Image.open('pikachu.jpg')
print(img.format)
print(img.size)
print(img.mode)
print(dir(img))