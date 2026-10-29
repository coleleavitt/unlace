__int64 (__fastcall **__fastcall sub_362E10(_QWORD *a1))()
{
  __int64 v2; // rdi
  __int64 (__fastcall **result)(); // rax

  *a1 = off_4B2A88;
  if ( a1[8] )
  {
    a1[9] = 0;
    qfree();
  }
  v2 = a1[5];
  result = off_4A8538;
  *a1 = off_4A8538;
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

