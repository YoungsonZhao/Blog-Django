# -*- coding: utf-8 -*-
from __future__ import unicode_literals

from django.contrib import admin
from article.models import Article, Photo

# Register your models here.
admin.site.register(Article)
admin.site.register(Photo)
