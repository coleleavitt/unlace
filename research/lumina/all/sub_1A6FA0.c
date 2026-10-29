int __fastcall sub_1A6FA0(char *filename, struct stat64 *stat_buf)
{
  return __lxstat64(1, filename, stat_buf);
}
