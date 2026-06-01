unsigned __int64 __fastcall sub_3F0EB0(__int64 a1, unsigned int a2, int a3, int a4, int a5, char a6)
{
  __int64 v9; // rcx
  __int64 v10; // rdx
  __m128i v11; // xmm0
  __int64 v12; // rax
  __m128i v13; // xmm1
  int dtype_size; // eax
  __int64 v16; // [rsp+8h] [rbp-80h]
  _QWORD v17[2]; // [rsp+10h] [rbp-78h] BYREF
  _QWORD v18[2]; // [rsp+20h] [rbp-68h] BYREF
  int v19; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v20; // [rsp+34h] [rbp-54h]
  unsigned __int64 v21; // [rsp+48h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  if ( a6 )
  {
    v9 = *(_QWORD *)(a1 + 40);
    v17[0] = 0xFFFFFFFF00000000LL;
    v17[1] = 0;
    v16 = v9;
    sub_3F0D20(a1, (__int64)v17, a4, v9);
    v18[1] = 0;
    v18[0] = 0xFFFFFFFF00000000LL;
    sub_3F0D20(a1, (__int64)v18, a5, v16);
    v10 = *(_QWORD *)(a1 + 832);
    v11 = _mm_cvtsi32_si128(HIDWORD(v17[0]));
    v12 = *(_QWORD *)(v10 + 4464);
    if ( !v12 )
      sub_3E6800(*(double *)v11.m128i_i64);
    v13 = _mm_cvtsi32_si128(*(_DWORD *)(*(_QWORD *)(v10 + 4456) + 4 * v12 - 4));
    v19 = 1;
    *(_QWORD *)(v10 + 4464) = v12 - 1;
    v20 = _mm_unpacklo_epi32(v11, v13).m128i_u64[0];
    sub_1D2850(a1, a2, (unsigned __int8 *)v17, (unsigned __int8 *)v18, (unsigned __int8 *)&v19);
    sub_3F0E20(a1, SHIDWORD(v20), a3);
    sub_119360((__int64)&v19);
    sub_119360((__int64)v18);
    sub_119360((__int64)v17);
  }
  else
  {
    dtype_size = get_dtype_size();
    sub_1D2710(a1, a2, dtype_size, a4, a5, a3, 0);
  }
  return sub_3EC840(a1, a3, 8);
}

