ssize_t __fastcall sub_194590(char *buf, size_t len)
{
  ssize_t result; // rax

  result = readlink("/proc/self/exe", buf, len);
  if ( result <= 0 || result >= len )
  {
    if ( !unk_2439A0 )
      sub_198E10(1208);
    BUG();
  }
  buf[result] = 0;
  return result;
}
