__int64 __fastcall sub_3FF260(__int64 a1, int a2)
{
  __m128i *v3; // rax
  char *v4; // rbx
  __m128i si128; // xmm1
  unsigned int v6; // r12d
  __int64 v8; // rdi
  const char *v9; // rdx
  __int64 v10; // r13
  __int64 *v11; // rax
  __m128i v12; // xmm0
  __int64 v13; // [rsp+10h] [rbp-1E0h]
  const char *v14; // [rsp+20h] [rbp-1D0h] BYREF
  __int128 v15; // [rsp+28h] [rbp-1C8h]
  __int64 v16[2]; // [rsp+40h] [rbp-1B0h] BYREF
  __int64 *v17; // [rsp+50h] [rbp-1A0h] BYREF
  __int128 v18; // [rsp+58h] [rbp-198h]
  _BYTE v19[320]; // [rsp+70h] [rbp-180h] BYREF
  char v20; // [rsp+1B0h] [rbp-40h] BYREF
  unsigned __int64 v21; // [rsp+1B8h] [rbp-38h]

  v3 = (__m128i *)v19;
  v4 = &v20;
  si128 = _mm_load_si128((const __m128i *)&xmmword_41F8F0);
  v21 = __readfsqword(0x28u);
  do
  {
    v3->m128i_i32[1] = -1;
    v3 += 5;
    v3[-5].m128i_i16[0] = 0;
    v3[-5].m128i_i16[1] = 0;
    v3[-5].m128i_i64[1] = 0;
    v3[-4] = si128;
    v3[-3].m128i_i64[0] = 0;
    *(__m128i *)((char *)&v3[-3] + 8) = 0;
    v3[-2].m128i_i32[2] = 0;
    v3[-1].m128i_i64[0] = 0;
    v3[-1].m128i_i32[2] = 0;
  }
  while ( &v20 != (char *)v3 );
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 800) + 604LL) & 8) != 0 && (v6 = sub_3FE8B0(a1, (__int64)v19, 0, 0.0), (_BYTE)v6) )
  {
    v14 = nullptr;
    v15 = 0;
    sub_3FEF00(a1, (__int64 *)&v14, 0.0, (__int64)"st", nullptr, a2, a1 + 64);
    v8 = *(_QWORD *)(a1 + 8);
    v16[0] = 1;
    v9 = s1;
    if ( (_QWORD)v15 )
      v9 = v14;
    v13 = sub_335C70(v8, *(_QWORD *)(a1 + 40), (__int64)v9, v16, 2, (__int64)v19, 1);
    clear_tinfo_t();
    v10 = *(_QWORD *)(v13 + 72);
    *(_DWORD *)(v10 + 280) |= 4u;
    v16[0] = 0;
    v16[1] = 0;
    v17 = nullptr;
    v18 = 0;
    v11 = (__int64 *)qvector_reserve();
    v12 = _mm_load_si128((const __m128i *)&xmmword_41F900);
    v17 = v11;
    *(__m128i *)&v11[2 * v18] = v12;
    *(_QWORD *)&v18 = v18 + 1;
    sub_63C80((__int64 *)(v10 + 136), v16);
    sub_317070((__int64 *)(v10 + 152), &v17);
    if ( v17 )
    {
      *(_QWORD *)&v18 = 0;
      qfree();
    }
    qfree();
    sub_B4CD0(*(_QWORD **)(a1 + 16), v13);
    sub_3F9F40(a1, a1 + 104, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 620LL), *(double *)v12.m128i_i64);
    if ( v14 )
    {
      *(_QWORD *)&v15 = 0;
      qfree();
    }
  }
  else
  {
    v6 = 0;
  }
  do
  {
    v4 -= 80;
    cleanup_argloc();
    if ( *((_QWORD *)v4 + 4) )
    {
      *((_QWORD *)v4 + 5) = 0;
      qfree();
    }
    clear_tinfo_t();
    sub_11C7E0((__int64)v4);
  }
  while ( v4 != v19 );
  return v6;
}

