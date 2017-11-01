#======================================================================
#   Copyright (C) 2017 Institute of Cyber-Systems & Control.
#   
#           File Name: img_src.py
#              Author: Dr. Yongsheng Zhao
#               Email: zhaoyongsheng@zju.edu.cn
#       Creating Data: 11 01, 2017
#        Discription: 
#
#======================================================================

from django import template
from blog import settings

register = template.Library()

@register.filter
def img_src(content):
  return content.replace('src=','src='+settings.STATIC_URL)
