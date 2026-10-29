__int64 (__fastcall **__fastcall sub_79EC0(_QWORD *a1))()
{
  __int64 (__fastcall **result)(); // rax

  result = off_4D63B8;
  *a1 = off_4D63B8;
  if ( a1[5] )
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

