__int64 __fastcall sub_196A40(__int64 a1, __int64 a2, __int64 a3, double a4, __m128 a5)
{
  __int64 v5; // r15
  __int64 v7; // r13
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r15
  __m128i v12; // xmm0
  __int64 v13; // rdi
  __int64 v14; // rdi
  __m128i v15; // xmm0
  int tinfo_size; // eax
  __int64 v18; // rdx
  __m128i v19; // [rsp+0h] [rbp-60h] BYREF
  __int64 v20; // [rsp+10h] [rbp-50h] BYREF
  __int128 v21; // [rsp+18h] [rbp-48h] BYREF
  unsigned __int64 v22; // [rsp+28h] [rbp-38h]

  v5 = *(_QWORD *)(a1 + 1496);
  v22 = __readfsqword(0x28u);
  sub_1959F0(v5, a3);
  sub_1959F0(v5, a3 + 80);
  v20 = 1;
  v19.m128i_i64[0] = a3;
  v7 = sub_335B10(a1, a2, (__int64)"va_copy", (__int64)&v20, 2, a3, 0);
  clear_tinfo_t();
  v8 = *(_QWORD *)(v7 + 72);
  v9 = v19.m128i_i64[0];
  *(_DWORD *)(v8 + 280) |= 4u;
  *(_DWORD *)(v8 + 284) = 24;
  if ( *(_BYTE *)v9 == 10 && **(_BYTE **)(v9 + 8) == 5 )
  {
    tinfo_size = get_tinfo_size();
    v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v19.m128i_i64[0] + 8) + 8LL) + 8LL) + *(_QWORD *)(a1 + 1440);
    *(_QWORD *)&v21 = tinfo_size;
    v20 = v18;
    sub_316BB0((__int64 *)(v8 + 152), (__m128i *)&v20, a4, a5);
  }
  v20 = 0;
  v21 = 0;
  v20 = qvector_reserve((__int64)&v20, 0, 1, 16);
  *(__m128i *)(v20 + 16 * v21) = _mm_load_si128((const __m128i *)&xmmword_424800);
  v10 = v20;
  v20 = 0;
  v11 = v10;
  v12 = (__m128i)_mm_loadh_ps((const double *)&v21 + 1);
  v21 = 0;
  v13 = *(_QWORD *)(v8 + 216);
  if ( v13 )
  {
    *(_QWORD *)(v8 + 224) = 0;
    v19 = v12;
    qfree(v13);
    v14 = v20;
    v15 = _mm_load_si128(&v19);
    *(_QWORD *)(v8 + 216) = v11;
    *(__m128i *)(v8 + 224) = v15;
    if ( v14 )
    {
      *(_QWORD *)&v21 = 0;
      qfree(v14);
    }
  }
  else
  {
    *(_QWORD *)(v8 + 216) = v10;
    *(__m128i *)(v8 + 224) = v12;
  }
  return v7;
}

