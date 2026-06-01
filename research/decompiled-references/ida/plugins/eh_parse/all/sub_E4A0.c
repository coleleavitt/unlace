__int64 __fastcall sub_E4A0(__int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // r13
  __int64 v6; // r12
  __int64 i; // rbp
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi

  result = *((unsigned __int8 *)a1 + 97);
  if ( (_BYTE)result == 2 )
  {
    v4 = a1[3];
    if ( v4 )
    {
      v5 = a1[4];
      if ( v5 )
      {
        v6 = 0;
        for ( i = 0; i != v5; ++i )
        {
          v8 = *(_QWORD *)(v4 + v6);
          if ( v8 )
          {
            *(_QWORD *)(v4 + v6 + 8) = 0;
            qfree(v8);
            v4 = a1[3];
          }
          v6 += 56;
        }
      }
      a1[4] = 0;
      result = qfree(v4);
    }
  }
  else if ( (_BYTE)result == 1 )
  {
    v9 = a1[8];
    if ( v9 )
    {
      a1[9] = 0;
      result = qfree(v9);
    }
    v10 = a1[3];
    if ( v10 )
    {
      a1[4] = 0;
      result = qfree(v10);
    }
  }
  v3 = *a1;
  *((_BYTE *)a1 + 97) = 0;
  if ( v3 )
  {
    a1[1] = 0;
    return qfree(v3);
  }
  return result;
}

