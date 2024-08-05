from PIL import Image , ImageFilter

img = Image.open('pikachu.jpg')
filter_image = img.filter(ImageFilter.BLUR)
filter_smooth = img.filter(ImageFilter.SMOOTH)
filter_image.save("blur.png",'png')
filter_smooth.save("smooth.png",'png')
filter_grey = img.convert('L')
filter_grey.save("grey.png",'png')