from selenium import webdriver

# Create an instance of Edge driver
driver = webdriver.Edge()

# Navigate to the Bing homepage
driver.get("https://www.bing.com")

# Find the search box element by name
search_box = driver.find_element_by_name("q")

# Enter a query in the search box
search_box.send_keys("python programming")

# Submit the query
search_box.submit()
# Received message. Here is a possible python program to open an edge browser and search: ```python # Import the webdriver module from selenium from selenium import webdriver # Create an instance of Edge driver driver = webdriver.Edge() # Navigate to the Bing homepage driver.get("https://www.bing.com") # Find the search box element by name search_box = driver.find_element_by_name("q") # Enter a query in the search box search_box.send_keys("python programming") # Submit the query search_box.submit() ```
