void __fastcall sub_75920(__int64 a1, __int64 *a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 i; // rbx
  _QWORD *v8; // rsi
  __int64 v9; // r13
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // r8
  size_t v13; // rax
  __int64 v14; // rsi
  __int64 v15; // r15
  unsigned __int64 v16; // rdx
  char *v17; // r15
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // [rsp+0h] [rbp-48h]
  __int64 v21; // [rsp+0h] [rbp-48h]
  __int64 v22; // [rsp+8h] [rbp-40h]

  for ( i = *(_QWORD *)(a1 + 848); i; i = *(_QWORD *)(i + 8) )
  {
    if ( *(_QWORD *)(i + 16) < a4 && a3 < *(_QWORD *)(i + 24) )
    {
      v9 = 4LL * *(_QWORD *)(i + 48);
      v10 = v9 >> 2;
      if ( v9 >> 2 )
      {
        v11 = a2[1];
        v12 = *(_QWORD *)(i + 40);
        v13 = 0;
        v14 = *a2;
        v15 = 4 * v11;
        v16 = v10 + v11;
        if ( a2[2] < v16 )
        {
          v21 = *(_QWORD *)(i + 40);
          v19 = qvector_reserve(a2, v14, v16, 4);
          v10 = v9 >> 2;
          v12 = v21;
          *a2 = v19;
          v14 = v19;
          v13 = 4 * a2[1] - v15;
        }
        v17 = (char *)(v14 + v15);
        v22 = v10;
        v20 = v12;
        memmove(&v17[v9], v17, v13);
        v18 = 0;
        if ( v9 )
        {
          do
          {
            *(_DWORD *)&v17[v18] = *(_DWORD *)(v20 + v18);
            v18 += 4;
          }
          while ( v9 != v18 );
        }
        a2[1] += v22;
      }
    }
    v8 = *(_QWORD **)i;
    if ( *(_QWORD *)i )
    {
      if ( a3 < v8[4] )
        sub_74720(a2, v8, a3, a4);
    }
  }
}
