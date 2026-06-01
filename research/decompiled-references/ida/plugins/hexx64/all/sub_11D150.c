unsigned __int64 __fastcall sub_11D150(__int64 a1, __int64 a2, const char *a3, __int64 *a4, _DWORD *a5, double a6)
{
  size_t v9; // rax
  __int64 v10; // r12
  size_t v11; // r15
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdi
  __m128i v17; // xmm1
  __m128 v18; // xmm0
  __int64 v19; // rax
  void *v21; // [rsp+10h] [rbp-58h] BYREF
  __m128i v22; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v23; // [rsp+28h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  if ( *a5 != 2 )
  {
    if ( !under_debugger )
      sub_383060(0xC92Bu, a6);
    BUG();
  }
  sub_11CDA0(a1);
  v21 = nullptr;
  v22 = 0;
  if ( a3 )
  {
    v9 = strlen(a3);
    v10 = v9 + 1;
    v11 = v9;
    v21 = (void *)qvector_reserve((__int64)&v21, 0, v9 + 1, 1);
    v22.m128i_i64[0] = v10;
    memmove(v21, a3, v11);
    *((_BYTE *)v21 + v11) = 0;
  }
  *(_BYTE *)a1 = 15;
  v12 = *a4;
  *(_DWORD *)(a1 + 4) = get_tinfo_size();
  v15 = qalloc_or_throw(56, v12, v13, v14);
  *(_DWORD *)v15 = 0;
  v16 = v15;
  *(_QWORD *)(v15 + 8) = 0;
  v17 = _mm_loadu_si128(&v22);
  *(_QWORD *)(v15 + 48) = 0;
  v18 = _mm_loadh_ps((const double *)&v21);
  v22 = 0;
  *(__m128 *)(v15 + 16) = v18;
  *(__m128i *)(v15 + 32) = v17;
  v19 = *a4;
  *a4 = 0;
  *(_QWORD *)(v16 + 48) = v19;
  *(_QWORD *)(a1 + 8) = v16;
  v21 = nullptr;
  copy_argloc();
  if ( v21 )
  {
    v22.m128i_i64[0] = 0;
    qfree((__int64)v21);
  }
  return v23 - __readfsqword(0x28u);
}

