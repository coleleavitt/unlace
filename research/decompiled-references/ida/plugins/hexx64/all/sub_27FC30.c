__int64 (__fastcall **__fastcall sub_27FC30(_QWORD *a1))()
{
  __int64 v2; // rdi
  __int64 (__fastcall **result)(); // rax
  __int64 v4; // rdi

  *a1 = off_4E09B8;
  clear_tinfo_t();
  v2 = a1[5];
  result = off_4DBCF8;
  *a1 = off_4DBCF8;
  if ( v2 )
  {
    a1[6] = 0;
    result = (__int64 (__fastcall **)())qfree(v2);
  }
  v4 = a1[2];
  if ( v4 )
  {
    a1[3] = 0;
    return (__int64 (__fastcall **)())qfree(v4);
  }
  return result;
}

