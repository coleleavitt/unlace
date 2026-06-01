bool __fastcall sub_3856F0(int a1, const char *a2)
{
  const char *v3; // rax

  if ( a1 )
  {
    v3 = (const char *)tinfo_errstr();
    sub_2AFAB0((__int64)"%s failed: %s", a2, v3);
  }
  return a1 == 0;
}

