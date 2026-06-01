__int64 (__fastcall **__fastcall sub_23F350(_QWORD *a1))()
{
  __int64 v2; // rdi
  __int64 (__fastcall **result)(); // rax

  *a1 = off_4DA158;
  clear_tinfo_t();
  v2 = a1[5];
  result = off_4D63B8;
  *a1 = off_4D63B8;
  if ( v2 )
  {
    a1[6] = 0;
    result = (__int64 (__fastcall **)())qfree();
  }
  if ( a1[2] )
  {
    a1[3] = 0;
    return (__int64 (__fastcall **)())qfree();
  }
  return result;
}

