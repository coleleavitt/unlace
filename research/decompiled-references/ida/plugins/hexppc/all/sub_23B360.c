__int64 (__fastcall **__fastcall sub_23B360(_QWORD *a1))()
{
  _QWORD *v2; // rdi
  __int64 v3; // rdi
  __int64 (__fastcall **result)(); // rax

  v2 = a1 + 8;
  *(v2 - 8) = off_4CCB78;
  sub_2519B0(v2);
  clear_tinfo_t();
  v3 = a1[5];
  result = off_4C8E58;
  *a1 = off_4C8E58;
  if ( v3 )
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

