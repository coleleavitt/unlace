__int64 __fastcall sub_192840(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 v5; // r13
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r15
  __m128i v10; // xmm0
  __int64 v11; // rdi
  __m128i v12; // xmm0
  int tinfo_size; // eax
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // [rsp-8h] [rbp-68h]
  __m128i v20; // [rsp+0h] [rbp-60h] BYREF
  __int64 v21; // [rsp+10h] [rbp-50h] BYREF
  __int128 v22; // [rsp+18h] [rbp-48h] BYREF
  unsigned __int64 v23; // [rsp+28h] [rbp-38h]

  v3 = *(_QWORD *)(a1 + 1496);
  v23 = __readfsqword(0x28u);
  sub_1917F0(v3, a3);
  sub_1917F0(v3, a3 + 80);
  v5 = sub_3308F0(a1, a2, (unsigned int)"va_copy", (unsigned int)&v21, 2, a3, 0, v19, a3, v20.m128i_i32[2], 1, v22);
  clear_tinfo_t();
  v6 = *(_QWORD *)(v5 + 72);
  v7 = v20.m128i_i64[0];
  *(_DWORD *)(v6 + 280) |= 4u;
  *(_DWORD *)(v6 + 284) = 24;
  if ( *(_BYTE *)v7 == 10 && **(_BYTE **)(v7 + 8) == 5 )
  {
    tinfo_size = get_tinfo_size();
    v15 = *(_QWORD *)(*(_QWORD *)(v20.m128i_i64[0] + 8) + 8LL);
    v16 = *(_QWORD *)(v15 + 8) + *(_QWORD *)(a1 + 1440);
    *(_QWORD *)&v22 = tinfo_size;
    v21 = v16;
    sub_311E30(v6 + 152, &v21, v16, v15, v17, v18);
  }
  v21 = 0;
  v22 = 0;
  v21 = qvector_reserve();
  *(__m128i *)(v21 + 16 * v22) = _mm_load_si128((const __m128i *)&xmmword_407240);
  v8 = v21;
  v21 = 0;
  v9 = v8;
  v10 = (__m128i)_mm_loadh_ps((const double *)&v22 + 1);
  v22 = 0;
  if ( *(_QWORD *)(v6 + 216) )
  {
    *(_QWORD *)(v6 + 224) = 0;
    v20 = v10;
    qfree();
    v11 = v21;
    v12 = _mm_load_si128(&v20);
    *(_QWORD *)(v6 + 216) = v9;
    *(__m128i *)(v6 + 224) = v12;
    if ( v11 )
    {
      *(_QWORD *)&v22 = 0;
      qfree();
    }
  }
  else
  {
    *(_QWORD *)(v6 + 216) = v8;
    *(__m128i *)(v6 + 224) = v10;
  }
  return v5;
}

