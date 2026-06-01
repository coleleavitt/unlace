// attributes: thunk
int epoll_ctl(int epfd, int op, int fd, struct epoll_event *event)
{
  return epoll_ctl(epfd, op, fd, event);
}

