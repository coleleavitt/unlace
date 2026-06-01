unsigned __int64 __fastcall sub_1CB80(__int64 a1, __int64 *a2, _QWORD *a3)
{
  int v4; // eax
  unsigned __int64 i; // rbx
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // rbp
  __int64 v10; // r14
  __int64 v11; // rdx
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // [rsp+18h] [rbp-88h] BYREF
  __int128 v21; // [rsp+20h] [rbp-80h]
  __int64 v22; // [rsp+38h] [rbp-68h] BYREF
  __int128 v23; // [rsp+40h] [rbp-60h]
  __int64 v24; // [rsp+50h] [rbp-50h]
  unsigned __int64 v25; // [rsp+60h] [rbp-40h]

  v4 = *(_DWORD *)(a1 + 120);
  v25 = __readfsqword(0x28u);
  v23 = 0;
  LODWORD(v22) = v4;
  v24 = 0;
  if ( (unsigned __int8)sub_1CAB0((const __m128i *)&v22, a3 + 4) )
  {
    v16 = a2[1];
    v17 = a2[2];
    LODWORD(v20) = -3;
    v18 = *a2;
    if ( v17 < v16 + 1 )
    {
      v19 = qvector_reserve(a2, v18, v16 + 1, 4);
      *a2 = v19;
      v18 = v19;
      v16 = a2[1];
    }
    *(_DWORD *)(v18 + 4 * v16) = -3;
    ++a2[1];
  }
  for ( i = 0; i < a3[1]; ++i )
  {
    v7 = *a3 + 80 * i;
    v20 = 0;
    v21 = 0;
    if ( (unsigned int)sub_1C600(&v22, &v20, (__int64 *)(v7 + 64), 0) == 8 )
    {
      v13 = a2[1];
      v14 = *a2;
      if ( a2[2] < (unsigned __int64)(v13 + 1) )
      {
        v15 = qvector_reserve(a2, v14, v13 + 1, 4);
        *a2 = v15;
        v14 = v15;
        v13 = a2[1];
      }
      *(_DWORD *)(v14 + 4 * v13) = i;
      ++a2[1];
    }
    v8 = v20;
    if ( v20 )
    {
      v9 = v21;
      if ( (_QWORD)v21 )
      {
        v10 = 0;
        do
        {
          v11 = v10++;
          clear_tinfo_t(v8 + 16 * v11 + 8);
          v8 = v20;
        }
        while ( v9 != v10 );
      }
      *(_QWORD *)&v21 = 0;
      qfree(v8);
    }
  }
  return v25 - __readfsqword(0x28u);
}
