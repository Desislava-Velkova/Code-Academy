from bs4 import BeautifulSoup
import requests

URL = 'https://www.jobs.bg/front_job_search.php?add_sh=1&categories%5B%5D=56'

html_text = requests.get(URL).text #takes the html data from the provide side

soup = BeautifulSoup(html_text, 'lxml')  #make instance of the beaut.soup and put a parser 'lxml'


job = soup.find('td', class_ ='offerslistRow').text


company_name = job.find('a.card__title mdc-typography mdc-typography--headline6 text-overflow')
print(company_name)
