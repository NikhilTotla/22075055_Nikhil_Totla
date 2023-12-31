from django.shortcuts import render
# from django.http import HttpResponse
from .models import Post
posts = [
    {
        'author': 'Nikhil',
        'title': 'Blog Post 1',
        'content': 'first post content',
        'date_posted': 'Oct 25, 2023'
    },
    {
        'author': 'Reet',
        'title': 'Blog Post 2',
        'content': 'sec post content',
        'date_posted': 'Oct 25, 2023'
    }
]

def home(request):
    context = {
        'posts': Post.objects.all()
    }
    return render(request, 'blog/home.html',context)
def about(request):
    return render(request, 'blog/about.html', {'title' : 'About'})
    