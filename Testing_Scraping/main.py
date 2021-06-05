from bs4 import BeautifulSoup
import requests


URL = 'https://igicheva.wordpress.com/all-posts/'

html_text = requests.get(URL).text #takes the html data from the provide side

soup = BeautifulSoup(html_text, 'lxml')  #make instance of the beaut.soup and put a parser 'lxml'


blogs = soup.find_all('div', class_ ='entry-wrapper') #takes the content of the page

index = 1

for blog in blogs:
    if index <= 20:
        with open('output.txt', 'a') as file:
            published_date = blog.find('time', class_='entry-date published').text
            title = blog.find('h2', class_='entry-title').text
            content = blog.find('p', class_='').text
            
            file.write(f'\n№: {index}\n')
            file.write(f'Title: {title}\n')
            file.write(f'Content: {content}\n')
            file.write(f'|Date: {published_date}\n')
            
        index =index + 1
    else:
        break
    