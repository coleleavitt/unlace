unsigned __int64 sub_8290()
{
  int v0; // r12d
  __int64 v1; // rbx
  char **v2; // r14
  __int64 v4; // [rsp+8h] [rbp-B0h]
  unsigned __int64 v5; // [rsp+78h] [rbp-40h]

  v0 = 0;
  v5 = __readfsqword(0x28u);
  v4 = 65248;
  do
  {
    v1 = v4;
    v2 = (char **)&off_CBE0;
    do
    {
      ++v2;
      qsnprintf();
      set_name();
      qsnprintf();
      set_cmt();
      ++v1;
    }
    while ( v2 != off_CC20 );
    ++v0;
    v4 += 8;
  }
  while ( v0 != 4 );
  return v5 - __readfsqword(0x28u);
}

