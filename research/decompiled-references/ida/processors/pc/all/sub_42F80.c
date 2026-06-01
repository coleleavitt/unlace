unsigned __int64 __fastcall sub_42F80(__int128 a1, double a2, double a3, double a4, double a5)
{
  __int64 v5; // rbx
  __int64 *v6; // r9
  __int64 *v7; // r8
  __int64 *v8; // rax
  __int64 func; // rax
  __int64 v10; // r14
  unsigned __int64 v11; // rax
  __int64 i; // rbp
  __int64 v13; // rax
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  __m128i *v18; // rbp
  __int64 v19; // rax
  __int64 v20; // rbx
  __m128i *v21; // r12
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rdx
  __m128i *v24; // rsi
  __m128i *v25; // rdi
  const __m128i *v26; // rbp
  __m128i *v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rdx
  const __m128i *v30; // r8
  __int64 v31; // rax
  __int64 v32; // r8
  unsigned __int64 v33; // rsi
  __int64 v34; // [rsp+8h] [rbp-60h]
  __m128i v35; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v36; // [rsp+28h] [rbp-40h]

  v36 = __readfsqword(0x28u);
  *((_QWORD *)&a1 + 1) = *(_QWORD *)(a1 + 232);
  if ( !*((_QWORD *)&a1 + 1) )
    return v36 - __readfsqword(0x28u);
  v5 = a1;
  v6 = (__int64 *)(a1 + 256);
  v7 = (__int64 *)(a1 + 248);
  *(_QWORD *)(a1 + 240) = **((_QWORD **)&a1 + 1);
  v8 = (__int64 *)(a1 + 272);
  *(_QWORD *)&a1 = *(_QWORD *)a1;
  *(_QWORD *)(v5 + 264) = sub_31500(a1, 0, 0, v7, v6, 0, v8, 0);
  if ( (debug & 0x200000) != 0 )
    sub_224B0((__int64)"%a: space=%a pre=%a post=%a\n", a2, a3, a4, a5);
  func = get_func();
  *(_DWORD *)(v5 + 72) = 2;
  *(_QWORD *)(v5 + 232) = func;
  *(_QWORD *)(v5 + 64) = func;
  *(_QWORD *)(v5 + 32) = 0;
  *(_OWORD *)(v5 + 48) = -1;
  create_qflow_chart();
  v10 = *(int *)(v5 + 104);
  v11 = *(_QWORD *)(v5 + 216);
  if ( (int)v10 > 0 )
  {
    for ( i = 0; i != v10; ++i )
    {
      v35.m128i_i32[2] = i;
      v14 = v11 + 1;
      v33 = *(_QWORD *)(v5 + 208);
      v32 = *(_QWORD *)(*(_QWORD *)(v5 + 80) + (i << 6));
      v15 = *(_QWORD *)(v5 + 224);
      v35.m128i_i64[0] = v32;
      if ( (unsigned __int64)&v35 < v33 || (unsigned __int64)&v35 >= v33 + 16 * v15 )
      {
        if ( v15 < v14 )
        {
          v16 = qvector_reserve();
          *(_QWORD *)(v5 + 208) = v16;
          v33 = v16;
          v11 = *(_QWORD *)(v5 + 216);
        }
        *(__m128i *)(v33 + 16 * v11) = _mm_load_si128(&v35);
      }
      else
      {
        if ( v15 < v14 )
        {
          v34 = v32;
          v31 = qvector_reserve();
          v32 = v34;
          *(_QWORD *)(v5 + 208) = v31;
          v33 = v31;
          v11 = *(_QWORD *)(v5 + 216);
        }
        v13 = v33 + 16 * v11;
        *(_QWORD *)v13 = v32;
        *(_DWORD *)(v13 + 8) = i;
      }
      v11 = *(_QWORD *)(v5 + 216) + 1LL;
      *(_QWORD *)(v5 + 216) = v11;
    }
  }
  if ( v11 <= 1 )
    return v36 - __readfsqword(0x28u);
  v18 = *(__m128i **)(v5 + 208);
  v19 = v11;
  v20 = v19 * 16;
  v21 = &v18[v19];
  if ( v18 == &v18[v19] )
    return v36 - __readfsqword(0x28u);
  v22 = (v19 * 16) >> 4;
  if ( v22 )
  {
    _BitScanReverse64(&v23, v22);
    sub_42CC0(v18, v21->m128i_i64, 2LL * (int)v23, (__int64 (__fastcall *)(__int64, __int64))sub_3FB90);
    if ( v20 > 256 )
    {
      v24 = v18 + 16;
      v25 = v18;
      v26 = v18 + 15;
      sub_429A0(v25, v24, (__int64 (__fastcall *)(__m128i *, __m128i *))sub_3FB90);
      do
      {
        v27 = (__m128i *)v26;
        v35 = _mm_loadu_si128(v26 + 1);
        while ( sub_3FB90(&v35, v27) )
        {
          v28 = *(_QWORD *)v29;
          v27 = (__m128i *)(v29 - 16);
          v27[2].m128i_i64[0] = v28;
          v27[2].m128i_i32[2] = v27[1].m128i_i32[2];
        }
        ++v26;
        *(_QWORD *)(v29 + 16) = v35.m128i_i64[0];
        *(_DWORD *)(v29 + 24) = v35.m128i_i32[2];
      }
      while ( v30 != v26 );
      return v36 - __readfsqword(0x28u);
    }
  }
  else
  {
    sub_42CC0(v18, v21->m128i_i64, -2, (__int64 (__fastcall *)(__int64, __int64))sub_3FB90);
  }
  return sub_429A0(v18, v21, (__int64 (__fastcall *)(__m128i *, __m128i *))sub_3FB90);
}
