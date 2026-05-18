__int64 __fastcall sub_197790(unsigned int fd, int a2)
{
  if ( a2 == 1 )
  {
    if ( flock(fd, 5) != -1 )
      goto LABEL_4;
  }
  else if ( a2 == 8 )
  {
    if ( flock(fd, 12) != -1 )
      return 0;
  }
  else if ( flock(fd, 6) != -1 )
  {
LABEL_4:
    fcntl64(fd, 2, 1);
    return 0;
  }
  sub_18FA40(1u);
  return 0xFFFFFFFFLL;
}
