__int64 (__fastcall **__fastcall sub_264E30(_QWORD *a1))()
{
  __int64 v2; // rdi
  __int64 (__fastcall **result)(); // rax

  *a1 = off_4B4170;
  qfree();
  if ( a1[9] )
  {
    a1[10] = 0;
    qfree();
  }
  v2 = a1[5];
  result = off_4AF6D8;
  *a1 = off_4AF6D8;
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

