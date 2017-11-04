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
from article.models import Article

class BlogSitemap(Sitemap):
    changefreq = "weekly"
    priority = 0.5

    def items(self):
        return Article.objects.all()

    def lastmod(self, item):
        return item.date_time


