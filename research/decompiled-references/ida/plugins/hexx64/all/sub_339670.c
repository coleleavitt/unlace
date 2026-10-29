__int64 __fastcall sub_339670(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6, double a7, __m128 a8)
{
  __int64 v9; // r12
  int v10; // ebp
  __int64 v11; // rax
  __int64 v12; // rax
  int v13; // edx
  int v14; // esi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v18; // rdi
  __int64 v19; // rbp
  __m128i v20; // xmm0
  __m128i v21; // xmm0
  __int64 v22; // rdi
  __m128i v23; // [rsp+0h] [rbp-68h] BYREF
  const void *v24[2]; // [rsp+10h] [rbp-58h] BYREF
  __int64 v25; // [rsp+20h] [rbp-48h] BYREF
  __m128i v26; // [rsp+28h] [rbp-40h] BYREF
  unsigned __int64 v27; // [rsp+38h] [rbp-30h]

  v27 = __readfsqword(0x28u);
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_OWORD *)(a1 + 24) = 0;
  if ( (unsigned int)(*(_DWORD *)a4 - 56) > 1 )
  {
    sub_127A20((__int64)v24, a3, a4, 0, a5, a6, 0.0, a8);
    sub_648D0((__int64 *)a1, v24, 0.0);
    v18 = *(_QWORD *)(a1 + 16);
    v19 = v25;
    v25 = 0;
    v20 = _mm_loadu_si128(&v26);
    v26 = 0;
    if ( v18 )
    {
      *(_QWORD *)(a1 + 24) = 0;
      v23 = v20;
      qfree(v18);
      v21 = _mm_load_si128(&v23);
      v22 = v25;
      *(_QWORD *)(a1 + 16) = v19;
      *(__m128i *)(a1 + 24) = v21;
      if ( v22 )
      {
        v26.m128i_i64[0] = 0;
        qfree(v22);
      }
    }
    else
    {
      *(_QWORD *)(a1 + 16) = v19;
      *(__m128i *)(a1 + 24) = v20;
    }
    qfree((__int64)v24[0]);
  }
  else
  {
    if ( *(_BYTE *)(a4 + 64) != 8 )
    {
      if ( !under_debugger )
        sub_383060(0xCE57u, 0.0);
      BUG();
    }
    v9 = *(_QWORD *)(a4 + 72);
    if ( *(_QWORD *)(v9 + 56) )
    {
      v10 = 0;
      v11 = 0;
      do
      {
        v12 = *(_QWORD *)(v9 + 48) + 16 * v11;
        v13 = *(_DWORD *)(v12 + 4);
        v14 = *(_DWORD *)(v12 + 8);
        v24[0] = nullptr;
        v24[1] = nullptr;
        sub_63E80((__int64 *)v24, v14, v13, 0.0);
        v25 = 0;
        v26 = 0;
        sub_64280((__int64 *)a1, (__int64 *)v24, 0.0);
        sub_316CB0((__int64 *)(a1 + 16), (const void **)&v25, v15, v16);
        if ( v25 )
        {
          v26.m128i_i64[0] = 0;
          qfree(v25);
        }
        ++v10;
        qfree((__int64)v24[0]);
        v11 = v10;
      }
      while ( (unsigned __int64)v10 < *(_QWORD *)(v9 + 56) );
    }
    else
    {
      sub_1C67F0(a2, a1, (_DWORD *)(v9 + 80), 0.0);
    }
  }
  return a1;
}

