# -*- coding: utf-8 -*-
from __future__ import unicode_literals

from django.db import models


# Create your models here.
class Article(models.Model):
    title = models.CharField(max_length=100)  # 博客题目
    category = models.CharField(max_length=50, blank=True)  # 博客标签
    lovecount = models.IntegerField(default=0)  # 博客点赞数量
    date_time = models.DateTimeField(auto_now_add=True)  # 博客日期
    abstract = models.TextField(blank=True, null=True)  # 博客文章简介
    content = models.TextField(blank=True, null=True)  # 博客文章正文
    cover = models.CharField(max_length=75, blank=True)  # 博客封面

    def __unicode__(self):
        return self.title

    class Meta:  # 按时间下降排序
        ordering = ['-date_time']


class Photo(models.Model):
    category = models.CharField(max_length=50, blank=True)  # 照片标签
    lovecount = models.IntegerField(default=0)  # 照片点赞数量
    date_time = models.DateTimeField(auto_now_add=True)  # 照片日期
    abstract = models.TextField(blank=True, null=True)  # 照片简介
    image = models.ImageField(upload_to='photos/', default="")

    def __unicode__(self):
        return self.abstract

    class Meta:  # 按时间下降排序
        ordering = ['-date_time']
