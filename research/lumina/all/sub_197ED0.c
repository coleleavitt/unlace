size_t __fastcall sub_197ED0(FILE *stream, void *ptr, signed __int64 a3)
{
  size_t v4; // r12
  int v5; // eax

  if ( a3 < 0 )
  {
    if ( !unk_2439A0 )
      sub_198E10(1225);
    BUG();
  }
  if ( stream )
  {
    v4 = 0;
    if ( a3 )
    {
      v4 = fread(ptr, 1u, a3, stream);
      if ( a3 != v4 )
      {
        v5 = feof(stream);
        sub_18FA40(v5 == 0 ? 1 : 3);
      }
    }
  }
  else
  {
    v4 = -1;
    sub_18FA40(1u);
    *__errno_location() = 9;
    sub_18FA40(1u);
  }
  return v4;
}
