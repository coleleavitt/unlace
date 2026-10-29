unsigned __int64 __fastcall sub_118F50(__int64 a1, __int64 a2, const char *a3, __int64 *a4, _DWORD *a5)
{
  size_t v8; // rax
  __int64 v9; // r12
  size_t v10; // r15
  __int64 v11; // rax
  __int64 v12; // rdi
  __m128i v13; // xmm1
  __m128 v14; // xmm0
  __int64 v15; // rax
  void *v17; // [rsp+10h] [rbp-58h] BYREF
  __m128i v18; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v19; // [rsp+28h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  if ( *a5 != 2 )
  {
    if ( !under_debugger )
      sub_37E160(51499);
    BUG();
  }
  sub_118BA0(a1);
  v17 = nullptr;
  v18 = 0;
  if ( a3 )
  {
    v8 = strlen(a3);
    v9 = v8 + 1;
    v10 = v8;
    v17 = (void *)qvector_reserve();
    v18.m128i_i64[0] = v9;
    memmove(v17, a3, v10);
    *((_BYTE *)v17 + v10) = 0;
  }
  *(_BYTE *)a1 = 15;
  *(_DWORD *)(a1 + 4) = get_tinfo_size();
  v11 = qalloc_or_throw();
  *(_DWORD *)v11 = 0;
  v12 = v11;
  *(_QWORD *)(v11 + 8) = 0;
  v13 = _mm_loadu_si128(&v18);
  *(_QWORD *)(v11 + 48) = 0;
  v14 = _mm_loadh_ps((const double *)&v17);
  v18 = 0;
  *(__m128 *)(v11 + 16) = v14;
  *(__m128i *)(v11 + 32) = v13;
  v15 = *a4;
  *a4 = 0;
  *(_QWORD *)(v12 + 48) = v15;
  *(_QWORD *)(a1 + 8) = v12;
  v17 = nullptr;
  copy_argloc();
  if ( v17 )
  {
    v18.m128i_i64[0] = 0;
    qfree();
  }
  return v19 - __readfsqword(0x28u);
}

