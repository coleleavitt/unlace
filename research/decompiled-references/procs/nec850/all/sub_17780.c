unsigned __int64 __fastcall sub_17780(__int64 a1, __int64 a2, __int64 a3, double a4, double a5, __m128 a6)
{
  __int64 v8; // rdx
  __int64 v9; // rsi
  _QWORD *v10; // rbx
  __int64 v11; // r13
  __int64 v12; // rax
  __int64 v13; // rbp
  __int64 v15; // [rsp+20h] [rbp-58h] BYREF
  __int128 v16; // [rsp+28h] [rbp-50h]
  unsigned __int64 v17; // [rsp+38h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  if ( (unsigned __int8)(*(_BYTE *)(a1 + 24) - 10) <= 3u && a2 )
  {
    v8 = *(_QWORD *)(a1 + 8);
    v15 = 0;
    v16 = 0;
    if ( v8 )
    {
      v15 = qvector_reserve(&v15, 0, v8, 8);
      v9 = v15;
      v10 = *(_QWORD **)a1;
      v11 = *(_QWORD *)a1 + 24LL * *(_QWORD *)(a1 + 8);
      if ( v11 != *(_QWORD *)a1 )
      {
        v12 = v16;
        while ( 1 )
        {
          v13 = a2 + *v10;
          if ( *((_QWORD *)&v16 + 1) < (unsigned __int64)(v12 + 1) )
          {
            v15 = qvector_reserve(&v15, v9, v12 + 1, 8);
            v9 = v15;
            v12 = v16;
          }
          *(_QWORD *)(v9 + 8 * v12) = v13;
          v10 += 3;
          v12 = v16 + 1;
          *(_QWORD *)&v16 = v16 + 1;
          if ( (_QWORD *)v11 == v10 )
            break;
          v9 = v15;
        }
      }
    }
    sub_173E0((__int64 *)a1, (__int64)&v15, a3, 0.0, a5, a6);
    if ( v15 )
    {
      *(_QWORD *)&v16 = 0;
      qfree(v15);
    }
  }
  return v17 - __readfsqword(0x28u);
}
