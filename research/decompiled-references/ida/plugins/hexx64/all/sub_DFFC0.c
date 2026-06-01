__int64 __fastcall sub_DFFC0(_QWORD *a1, double a2)
{
  unsigned int v2; // ebx
  unsigned int i; // ebx
  __int64 v4; // rbp
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbp
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r12
  __m128i *v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // ebx
  __int64 v14; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v15; // [rsp+8h] [rbp-A0h]
  __int64 v16[2]; // [rsp+10h] [rbp-98h] BYREF
  __int64 v17; // [rsp+20h] [rbp-88h] BYREF
  __int128 v18; // [rsp+28h] [rbp-80h]
  __int64 v19[2]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v20; // [rsp+50h] [rbp-58h] BYREF
  __int128 v21; // [rsp+58h] [rbp-50h]
  unsigned __int64 v22; // [rsp+68h] [rbp-40h]

  v22 = __readfsqword(0x28u);
  v14 = 0;
  v15 = 0;
  v2 = *(_DWORD *)(*a1 + 72LL);
  sub_6FCF0(*(_QWORD *)(a1[1] + 784LL), v2, &v14, a2);
  sub_64190(&v14, v2, a2);
  v16[0] = 0;
  v16[1] = 0;
  v17 = 0;
  v18 = 0;
  for ( i = sub_64960(&v14, 0); ; i = sub_64960(&v14, i + 1) )
  {
    v7 = a1[1];
    if ( i == (_DWORD)v15 )
      break;
    if ( i >= *(_DWORD *)(v7 + 64) )
    {
      if ( !under_debugger )
        sub_383060(0xCDEFu, 0.0);
      BUG();
    }
    v4 = *(_QWORD *)(*(_QWORD *)(v7 + 528) + 8LL * i);
    sub_64280(v16, (__int64 *)(v4 + 200), 0.0);
    sub_316CB0(&v17, (__int64 **)(v4 + 216), v5, v6);
  }
  v8 = *(_QWORD *)(v7 + 664);
  v9 = *(_QWORD *)(v7 + 672);
  v19[0] = 0;
  v19[1] = 0;
  v21 = 0;
  v20 = 0;
  if ( v8 + v9 - 1 >= v8 )
  {
    v20 = qvector_reserve((__int64)&v20, 0, 1, 16);
    *(__m128i *)(v20 + 16 * v21) = _mm_unpacklo_epi64((__m128i)v8, (__m128i)v9);
    *(_QWORD *)&v21 = v21 + 1;
  }
  sub_64700(v16, v19);
  sub_3180C0(&v17, (__int64)&v20, v10, v11);
  if ( v20 )
  {
    *(_QWORD *)&v21 = 0;
    qfree(v20);
  }
  v12 = 0;
  qfree(v19[0]);
  if ( (_QWORD)v18 )
    v12 = *(_DWORD *)(v17 + 16 * v18 - 16) + *(_DWORD *)(v17 + 16 * v18 - 16 + 8) - *(_DWORD *)(v7 + 664);
  if ( v17 )
  {
    *(_QWORD *)&v18 = 0;
    qfree(v17);
  }
  qfree(v16[0]);
  qfree(v14);
  return v12;
}

