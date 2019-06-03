from scrapy.spiders import CSVFeedSpider
from myproject.items import TestItem

class MySpider(CSVFeedSpider):
    name = 'https://people.sc.fsu.edu/~jburkardt/data/csv/addresses.csv'
    allowed_domains = ['https://people.sc.fsu.edu/~jburkardt/data/csv/addresses.csv']
    start_urls = ['https://people.sc.fsu.edu/~jburkardt/data/csv/addresses.csv']
    delimiter = ';'
    quotechar = "'"
    headers = ['id', 'name', 'description']

    def parse_row(self, response, row):
        self.logger.info('Hi, this is a row!: %r', row)

        item = TestItem()
        item['id'] = row['id']
        item['name'] = row['name']
        item['description'] = row['description']
        return item