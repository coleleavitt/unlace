__int64 (__fastcall **__fastcall sub_2658A0(_QWORD *a1))()
{
  __int64 v2; // rdi
  __int64 (__fastcall **result)(); // rax

  *a1 = off_4C0ED0;
  if ( a1[10] )
  {
    a1[11] = 0;
    qfree();
  }
  v2 = a1[5];
  result = off_4BC478;
  *a1 = off_4BC478;
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

