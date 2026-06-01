__int64 __fastcall sub_2C8B0(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 result; // rax
  __int64 v4; // rdi
  __int64 v5; // rdi

  v2 = a1[9];
  if ( v2 )
  {
    a1[10] = 0;
    result = qfree(v2);
  }
  v4 = a1[3];
  if ( v4 )
  {
    a1[4] = 0;
    result = qfree(v4);
  }
  v5 = *a1;
  if ( *a1 )
  {
    a1[1] = 0;
    return qfree(v5);
  }
  return result;
}

