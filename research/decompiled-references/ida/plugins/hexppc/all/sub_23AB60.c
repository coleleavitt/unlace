__int64 __fastcall sub_23AB60(const __m128i *a1)
{
  __int64 v1; // rbx
  __m128i *v2; // rax

  v1 = j__qalloc_or_throw();
  *(_QWORD *)v1 = -1;
  *(_QWORD *)(v1 + 8) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v1 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(v1 + 40) = 0;
  *(_QWORD *)(v1 + 48) = 0;
  *(_DWORD *)(v1 + 56) = 0;
  *(_OWORD *)(v1 + 24) = 0;
  sub_2519B0(v1);
  *(_QWORD *)v1 = -1;
  *(_DWORD *)(v1 + 8) = 62;
  v2 = (__m128i *)j__qalloc_or_throw();
  *v2 = _mm_loadu_si128(a1);
  v2[1].m128i_i32[0] = a1[1].m128i_i32[0];
  *(_QWORD *)(v1 + 24) = v2;
  copy_tinfo_t();
  return v1;
}

