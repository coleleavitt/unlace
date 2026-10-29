int __fastcall sub_1A6F80(int fildes, struct stat64 *stat_buf)
{
  return __fxstat64(1, fildes, stat_buf);
}
