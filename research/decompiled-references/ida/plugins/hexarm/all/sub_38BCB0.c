bool __fastcall sub_38BCB0(int a1, const char *a2)
{
  const char *v3; // rax

  if ( a1 )
  {
    v3 = (const char *)tinfo_errstr();
    sub_2B5230((__int64)"%s failed: %s", a2, v3);
  }
  return a1 == 0;
}

