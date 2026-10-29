__int64 __fastcall sub_C230(__int64 a1)
{
  __int64 v2; // rdi
  __int64 result; // rax
  __int64 *v4; // rbx
  __int64 v5; // rdi
  __int64 *v6; // r12
  __int64 v7; // rdi
  __int64 v8; // r13
  __int64 i; // rbx
  _QWORD *v10; // rbp
  __int64 v11; // rdi

  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 24) = 0;
    result = qfree(v2);
  }
  if ( *(_BYTE *)a1 )
  {
    v4 = *(__int64 **)(a1 + 8);
    if ( v4 )
    {
      v5 = *v4;
      if ( *v4 )
      {
        v4[1] = 0;
        qfree(v5);
      }
      return qfree(v4);
    }
  }
  else
  {
    v6 = *(__int64 **)(a1 + 8);
    if ( v6 )
    {
      v7 = *v6;
      if ( *v6 )
      {
        v8 = v6[1];
        if ( v8 )
        {
          for ( i = 0; i != v8; ++i )
          {
            v10 = (_QWORD *)(v7 + 40 * i);
            v11 = v10[2];
            if ( v11 )
            {
              v10[3] = 0;
              qfree(v11);
            }
            sub_A960(v10);
            v7 = *v6;
          }
        }
        v6[1] = 0;
        qfree(v7);
      }
      return qfree(v6);
    }
  }
  return result;
}

