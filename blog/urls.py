"""blog URL Configuration

The `urlpatterns` list routes URLs to views. For more information please see:
    https://docs.djangoproject.com/en/1.11/topics/http/urls/
Examples:
Function views
    1. Add an import:  from my_app import views
    2. Add a URL to urlpatterns:  url(r'^$', views.home, name='home')
Class-based views
    1. Add an import:  from other_app.views import Home
    2. Add a URL to urlpatterns:  url(r'^$', Home.as_view(), name='home')
Including another URLconf
    1. Import the include() function: from django.conf.urls import url, include
    2. Add a URL to urlpatterns:  url(r'^blog/', include('blog.urls'))
"""
from django.conf.urls import url
from django.contrib import admin
from article.views import home, article, test, index, archives, photography, about_me

urlpatterns = [
    url(r'^admin/', admin.site.urls),
    url(r'^home', home, name='home'),
    url(r'^index', home, name='home'),
    url(r'^archives', archives, name='archives'),
    url(r'^photography', photography, name='photography'),
    url(r'^about_me', about_me, name='about_me'),
    url(r'^index?pg=(?P<pg>\d+)/$', index, name='index'),
    url(r'^article?id=(?P<id>\d+)/$', article, name='article'),
    url(r'^test', test, name = 'test'),
]
