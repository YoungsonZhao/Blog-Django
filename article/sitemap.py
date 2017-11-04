#======================================================================
#   Copyright (C) 2017 Institute of Cyber-Systems & Control.
#   
#           File Name: sitemap.py
#              Author: Dr. Yongsheng Zhao
#               Email: zhaoyongsheng@zju.edu.cn
#       Creating Data: 11 04, 2017
#        Discription: 
#
#======================================================================
from django.contrib.sitemaps import Sitemap
from datetime import datetime
from django.core.urlresolvers import reverse
from article.models import Article

class BlogSitemap(Sitemap):
    changefreq = "weekly"
    priority = 0.5

    def items(self):
        return Article.objects.all()

    def lastmod(self, item):
        return item.date_time

class StaticSitemap(Sitemap):
    lastmod = datetime.today().date()
    changefreq = 'weekly'
    priority = 0.5

    def items(self):
        static_urls = [
            'home',
            'archives',
            'photography',
            'about_me'
        ]
        return static_urls

    def location(self, url):
        return reverse(url)
