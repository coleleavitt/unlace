__int64 __fastcall sub_3F0130(__int64 a1, unsigned int a2)
{
  _QWORD *v3; // rax
  __int64 v4; // rsi
  __int64 v5; // rbx
  unsigned __int8 *v6; // r15
  __int64 v7; // r14
  __m128i v8; // xmm0
  __int64 v9; // rax

  v3 = (_QWORD *)j__qalloc_or_throw();
  v4 = *(_QWORD *)(a1 + 40);
  v5 = (__int64)v3;
  v6 = (unsigned __int8 *)(v3 + 4);
  v7 = (__int64)(v3 + 8);
  v3[4] = 0xFFFFFFFF00000000LL;
  v3[5] = 0;
  v3[6] = 0xFFFFFFFF00000000LL;
  v3[7] = 0;
  v3[8] = 0xFFFFFFFF00000000LL;
  v3[9] = 0;
  sub_330C90((__int64)v3, v4);
  *(_DWORD *)v5 = 14;
  v8 = _mm_cvtsi32_si128(*(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL));
  *(_BYTE *)(v5 + 32) = 1;
  *(_QWORD *)(v5 + 36) = _mm_unpacklo_epi32(v8, _mm_cvtsi32_si128(a2)).m128i_u64[0];
  v9 = sub_3F0090((__int64 *)a1);
  *(_BYTE *)(v5 + 48) = 4;
  *(_QWORD *)(v5 + 56) = v9;
  *(_DWORD *)(v5 + 52) = *(_DWORD *)(v5 + 36);
  sub_124BC0(v7, v6);
  return sub_B4CD0(*(_QWORD **)(a1 + 16), v5);
}

