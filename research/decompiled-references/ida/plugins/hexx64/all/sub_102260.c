__int64 __fastcall sub_102260(_QWORD *a1, int a2, __int64 a3, int *a4, double a5)
{
  __int64 v8; // rsi
  __int64 v9; // rdx
  int v10; // r13d
  __int64 v11; // rax
  __int64 v12; // rbp
  _QWORD *v13; // rsi
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // r15
  unsigned __int64 v16; // rdi
  __int64 v18; // rax
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // r14
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // r14
  unsigned __int64 v24; // rax
  __int64 v25; // rax
  __int64 v27[11]; // [rsp+10h] [rbp-58h] BYREF

  v8 = a1[16];
  v27[3] = __readfsqword(0x28u);
  v9 = a1[17];
  v10 = v9;
  v11 = v9 + 1;
  if ( a1[18] < (unsigned __int64)(v9 + 1) )
  {
    v18 = qvector_reserve((__int64)(a1 + 16), v8, v9 + 1, 16);
    v9 = a1[17];
    a1[16] = v18;
    v8 = v18;
    v11 = v9 + 1;
  }
  v12 = a2;
  a1[17] = v11;
  v13 = (_QWORD *)(16 * v9 + v8);
  *v13 = a2;
  v13[1] = a3;
  v14 = a1[19];
  v15 = a1[20];
  v16 = v14;
  if ( a2 >= v15 )
  {
    v19 = a2 + 1;
    if ( v19 < v15 )
    {
      v23 = v19;
      while ( 1 )
      {
        v24 = v23++;
        qfree(*(_QWORD *)(v14 + 16 * v24));
        if ( v23 >= v15 )
          break;
        v14 = a1[19];
      }
      a1[20] = v19;
      v16 = a1[19];
    }
    else if ( v15 < v19 )
    {
      v20 = a1[21];
      if ( (unsigned __int64)(a1 + 36) < v14 || (unsigned __int64)(a1 + 36) >= v14 + 16 * v20 )
      {
        if ( v20 >= v19
          || (v25 = qvector_reserve((__int64)(a1 + 19), v14, v19, 16), v15 = a1[20], a1[19] = v25, v16 = v25, v15 < v19) )
        {
          do
          {
            v22 = v15++;
            sub_64000((__int64 *)(16 * v22 + v16), (__int64)(a1 + 36), a5);
            v16 = a1[19];
          }
          while ( v15 < v19 );
        }
        a1[20] = v19;
      }
      else
      {
        sub_64000(v27, (__int64)(a1 + 36), a5);
        if ( a1[21] < v19 )
          a1[19] = qvector_reserve((__int64)(a1 + 19), a1[19], v19, 16);
        v21 = a1[20];
        if ( v21 < v19 )
        {
          do
            sub_64000((__int64 *)(a1[19] + 16 * v21++), (__int64)v27, a5);
          while ( v19 != v21 );
        }
        a1[20] = v19;
        qfree(v27[0]);
        v16 = a1[19];
      }
    }
  }
  sub_64190((__int64 *)(16 * v12 + v16), v10, a5);
  return sub_64190((__int64 *)(a1[1] + 24LL * *a4), v10, a5);
}

