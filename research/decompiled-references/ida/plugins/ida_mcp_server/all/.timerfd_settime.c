// attributes: thunk
int timerfd_settime(int ufd, int flags, const struct itimerspec *utmr, struct itimerspec *otmr)
{
  return timerfd_settime(ufd, flags, utmr, otmr);
}

