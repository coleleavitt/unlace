__int64 __fastcall sub_10570(_QWORD *a1, _BYTE *a2, __int64 a3, double a4)
{
  __int64 result; // rax
  __int64 v5; // rdi
  __int64 v6; // r13
  __int64 i; // r12
  _QWORD *v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rbp
  __int64 j; // r15
  __int64 *v12; // r14
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v18; // [rsp+10h] [rbp-48h]

  result = (__int64)a1;
  v5 = a1[16];
  if ( v5 )
  {
    v18 = *(_QWORD *)(result + 136);
    if ( v18 )
    {
      v6 = 0;
      for ( i = 0; i != v18; ++i )
      {
        v8 = (_QWORD *)(v5 + v6);
        v9 = *(_QWORD *)(v5 + v6 + 56);
        if ( v9 )
        {
          v10 = v8[8];
          if ( v10 )
          {
            for ( j = 0; j != v10; ++j )
            {
              v12 = (__int64 *)(v9 + 48 * j);
              v13 = v12[3];
              if ( v13 )
              {
                v12[4] = 0;
                qfree(v13, a2, a3, a4);
              }
              v14 = *v12;
              if ( *v12 )
              {
                v12[1] = 0;
                qfree(v14, a2, a3, a4);
              }
              v9 = v8[7];
            }
          }
          v8[8] = 0;
          qfree(v9, a2, a3, a4);
        }
        v15 = v8[4];
        if ( v15 )
        {
          v8[5] = 0;
          qfree(v15, a2, a3, a4);
        }
        v16 = v8[1];
        if ( v16 )
        {
          v8[2] = 0;
          qfree(v16, a2, a3, a4);
        }
        v6 += 88;
        v5 = a1[16];
      }
    }
    a1[17] = 0;
    result = qfree(v5, a2, a3, a4);
    a1[16] = 0;
    a1[18] = 0;
  }
  if ( a2 )
  {
    if ( *a2 )
      return read_ioports(a1 + 16, 0, a2, 0);
  }
  return result;
}

