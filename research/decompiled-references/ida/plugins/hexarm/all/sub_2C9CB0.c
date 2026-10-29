__int64 __fastcall sub_2C9CB0(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r12
  __int64 i; // rbx
  _QWORD *v5; // rdi
  __int64 v6; // rax
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    v3 = a1[1];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = (_QWORD *)(48 * i + v2);
        v6 = v5[2];
        *v5 = off_4DBA30;
        if ( v6 )
        {
          v5[3] = 0;
          qfree();
        }
        v2 = *a1;
      }
    }
    a1[1] = 0;
    return qfree();
  }
  return result;
}

