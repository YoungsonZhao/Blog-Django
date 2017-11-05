# -*- coding: utf-8 -*-
from __future__ import unicode_literals

from django.shortcuts import render
from django.shortcuts import redirect
from django.http import HttpResponse
from article.models import Article, Photo
from django.views.decorators.csrf import csrf_exempt
import math
import json


# Create your views here.
def home(request):
        post_list = Article.objects.all()  # 获取全部的Article对象
        post_num = len(post_list)+30
        page_num = int(math.ceil(post_num/3.0))
        if page_num > 4:
            page_max = page_num     # 两种模式，一种小于等于4页；一种大于4页
        else:
            page_max = 0
        if post_num > 3:
            return render(request, 'index.html', {'post_list': post_list[0:3], 'page_num': range(1, page_num+1), 'page_max': page_max, 'currt_pg': 1})
        else:
            return render(request, 'index.html', {'post_list': post_list, 'page_num': range(1, page_num+1), 'page_max': page_max, 'currt_pg': 1})


def index(request, pg):
        pg = int(pg)
        post_list = Article.objects.all()  # 获取全部的Article对象
        post_num = len(post_list)+30
        if post_num < 3*(pg-1)+1:   # 处理超页的情况
            pg = pg - 1
        if pg < 1:    # 处理页码为零的情况
            pg = 1
        page_num = int(math.ceil(post_num/3.0))
        if page_num > 4:
            page_max = page_num     # 两种模式，一种小于等于4页；一种大于4页
        else:
            page_max = 0
        # return render(request, 'home.html', {'post_list' : post_list})
        if post_num > 3*pg:
            return render(request, 'index.html', {'post_list': post_list[3*(pg-1):3*pg], 'page_num': range(1, page_num+1), 'page_max': page_max, 'currt_pg': pg})
        else:
            return render(request, 'index.html', {'post_list': post_list[3*(pg-1): post_num], 'page_num': range(1, page_num+1), 'page_max': page_max, 'currt_pg': pg})


def article(request, id):
        post = Article.objects.get(pk=id)
        post.increase_views()
        return render(request, 'article.html', {'post': post})


def test(request):
        post = Article.objects.all()[1]
        return render(request, 'test.html', {'content': post.content})


def archives(request):
        post_list = Article.objects.all()
        return render(request, 'archives.html', {'post_list': post_list})


def photography(request):
        photo_list = Photo.objects.all()
        return render(request, 'photography.html', {'photo_list': photo_list})


def about_me(request):
        return render(request, 'about_me.html')


def love(request, id, path):
        return redirect(path)


@csrf_exempt
def addLove(request):
        if request.method == 'POST':
            love_count = request.POST.get('data')
            id = request.POST.get('post_id')
            love_count = int(love_count) + 1
            post = Article.objects.get(pk=int(id))
            post.lovecount += 1
            post.save()
            return HttpResponse(json.dumps(love_count))


@csrf_exempt
def addLove_photo(request):
        if request.method == 'POST':
            love_count = request.POST.get('data')
            id = request.POST.get('photo_id')
            love_count = int(love_count) + 1
            photo = Photo.objects.get(pk=int(id))
            photo.lovecount += 1
            photo.save()
            return HttpResponse(json.dumps(love_count))


@csrf_exempt
def photo_info(request):
        if request.method == 'POST':
            id = request.POST.get('photo_id')
            state = request.POST.get('label')
            print {'label': state, 'photo_id': id}
            return HttpResponse(json.dumps({'label': state, 'photo_id': id}))
