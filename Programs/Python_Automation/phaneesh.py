from selenium import webdriver
import time

driver = webdriver.Chrome()

driver.maximize_window()
driver.get("https://opensource-demo.orangehrmlive.com")

# Find the username input field and fill it with "Admin" (assuming "Admin" is the username)
#username = driver.find_element_by_name("username")
#username.send_keys("Admin")

time.sleep(5)
driver.quit()