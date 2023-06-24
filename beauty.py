import random
from selenium import webdriver
from selenium.webdriver.common.keys import Keys

# Set up the Edge browser driver
driver = webdriver.Edge()

# Navigate to Google
driver.get('https://www.google.com')

# Find the search box and enter a random search term
search_box = driver.find_element_by_name('q')
search_term = ' '.join([random.choice(['cat', 'dog', 'bird', 'tree' , 'CC']) for _ in range(3)])
search_box.send_keys(search_term)
search_box.send_keys(Keys.RETURN)

# Wait for the search results to load
driver.implicitly_wait(10)

# Close the browser window
driver.quit()
