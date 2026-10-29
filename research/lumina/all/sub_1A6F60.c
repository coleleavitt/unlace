int __fastcall sub_1A6F60(char *filename, struct stat64 *stat_buf)
{
  return __xstat64(1, filename, stat_buf);
}
