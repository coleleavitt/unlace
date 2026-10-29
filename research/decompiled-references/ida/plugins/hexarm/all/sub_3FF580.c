__int64 __fastcall sub_3FF580(__int64 a1, int a2, const char *a3)
{
  __m128 *v3; // rax
  char *v5; // rbx
  __m128 si128; // xmm1
  unsigned int v8; // r12d
  __int64 v10; // rax
  const char *v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // r14
  __m128i v15; // xmm0
  __m128i v16; // [rsp+10h] [rbp-1B0h] BYREF
  const char *v17; // [rsp+20h] [rbp-1A0h] BYREF
  __int128 v18; // [rsp+28h] [rbp-198h]
  _BYTE v19[80]; // [rsp+40h] [rbp-180h] BYREF
  unsigned __int8 v20[24]; // [rsp+90h] [rbp-130h] BYREF
  _BYTE v21[216]; // [rsp+A8h] [rbp-118h] BYREF
  char v22; // [rsp+180h] [rbp-40h] BYREF
  unsigned __int64 v23; // [rsp+188h] [rbp-38h]

  v3 = (__m128 *)v19;
  v5 = &v22;
  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_41F8F0);
  v23 = __readfsqword(0x28u);
  do
  {
    v3->m128_i32[1] = -1;
    v3 += 5;
    v3[-5].m128_i16[0] = 0;
    v3[-5].m128_i16[1] = 0;
    v3[-5].m128_u64[1] = 0;
    v3[-4] = si128;
    v3[-3].m128_u64[0] = 0;
    *(__m128 *)((char *)&v3[-3] + 8) = 0;
    v3[-2].m128_i32[2] = 0;
    v3[-1].m128_u64[0] = 0;
    v3[-1].m128_i32[2] = 0;
  }
  while ( v3 != (__m128 *)&v22 );
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 800) + 604LL) & 8) != 0 && (v8 = sub_3FE8B0(a1, (__int64)v19, 1, 0.0), (_BYTE)v8) )
  {
    v10 = *(_QWORD *)(a1 + 832);
    v17 = nullptr;
    v18 = 0;
    if ( *(_DWORD *)(v10 + 80) != 8 && *(_BYTE *)(a1 + 98) == 0xFF )
      a3 = "_dup";
    sub_3FEF00(a1, (__int64 *)&v17, 0.0, (__int64)"ld", a3, a2, a1 + 64);
    v11 = s1;
    if ( (_QWORD)v18 )
      v11 = v17;
    v12 = sub_335C70(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), (__int64)v11, v21, 1, (__int64)v19, 1);
    v13 = *(_QWORD *)(v12 + 72);
    v14 = v12;
    *(_BYTE *)(v12 + 65) |= 2u;
    *(_DWORD *)(v13 + 280) |= 4u;
    v15 = _mm_load_si128((const __m128i *)&xmmword_41F900);
    v16 = v15;
    sub_316F70((__int64 *)(v13 + 216), &v16, *(double *)v15.m128i_i64, si128);
    sub_3EFE10(a1, v14, v20);
    sub_3F9F40(a1, a1 + 104, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 620LL), *(double *)v15.m128i_i64);
    if ( v17 )
    {
      *(_QWORD *)&v18 = 0;
      qfree();
    }
  }
  else
  {
    v8 = 0;
  }
  do
  {
    v5 -= 80;
    cleanup_argloc();
    if ( *((_QWORD *)v5 + 4) )
    {
      *((_QWORD *)v5 + 5) = 0;
      qfree();
    }
    clear_tinfo_t();
    sub_11C7E0((__int64)v5);
  }
  while ( v5 != v19 );
  return v8;
}

