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
from django.conf.urls.static import static
from django.conf import settings
from django.contrib.sitemaps.views import sitemap
from article.views import home, article, test, index, archives, photography, about_me, love, addLove, addLove_photo, photo_info
from article.sitemap import BlogSitemap, StaticSitemap

sitemaps = {
    'blog': BlogSitemap,
    'static': StaticSitemap
}


urlpatterns = [
    url(r'^$', home, name='home'),
    url(r'^admin/', admin.site.urls),
    url(r'^home/$', home, name='home'),
    url(r'^index/pg=(?P<pg>\d+)/$', index, name='index'),
    url(r'^index/$', home, name='home'),
    url(r'^archives/$', archives, name='archives'),
    url(r'^photography/$', photography, name='photography'),
    url(r'^about_me/$', about_me, name='about_me'),
    url(r'^Article-id=(?P<id>\d+)/$', article, name='article'),
    url(r'^test', test, name='test'),
    url(r'^love-id=(?P<id>\d+)/path=(?P<path>(.*))/$', love, name='love'),
    url(r'^addLove/$', addLove, name='addLove'),
    url(r'^addLove_photo/$', addLove_photo, name='addLove_photo'),
    url(r'^photo_info/$', photo_info, name='photo_info'),
    url(r'^index/sitemap\.xml$', sitemap, {'sitemaps': sitemaps}, name='django.contrib.sitemaps.views.sitemap'),
    url(r'^sitemap\.xml$', sitemap, {'sitemaps': sitemaps}, name='django.contrib.sitemaps.views.sitemap')
] + static(settings.MEDIA_URL, document_root=settings.MEDIA_ROOT)
