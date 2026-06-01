unsigned __int64 __fastcall sub_2ADE10(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __m128i v4; // xmm0
  __int64 v5; // rax
  __int64 v6; // r13
  __m128i v7; // xmm0
  __int64 v8; // rdi
  __int64 v9; // r14
  __m128i v10; // xmm0
  int v11; // eax
  __m128i v13; // [rsp+0h] [rbp-68h] BYREF
  __int64 v14; // [rsp+10h] [rbp-58h]
  __m128i v15; // [rsp+18h] [rbp-50h] BYREF
  __int64 v16; // [rsp+28h] [rbp-40h]
  unsigned __int64 v17; // [rsp+38h] [rbp-30h]

  v3 = *(_QWORD *)(a1 + 8);
  v17 = __readfsqword(0x28u);
  v16 = 0;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = v3;
  v4 = _mm_loadu_si128((const __m128i *)(a1 + 24));
  v5 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = 0;
  v15 = v4;
  *(_OWORD *)(a1 + 24) = 0;
  v14 = v5;
  copy_tinfo_t();
  v6 = *(_QWORD *)(a2 + 16);
  v7 = _mm_loadu_si128((const __m128i *)(a2 + 24));
  *(_QWORD *)(a2 + 16) = 0;
  *(_OWORD *)(a2 + 24) = 0;
  if ( *(_QWORD *)(a1 + 16) )
  {
    *(_QWORD *)(a1 + 24) = 0;
    v13 = v7;
    qfree();
    v7 = _mm_load_si128(&v13);
  }
  *(_QWORD *)(a1 + 16) = v6;
  *(__m128i *)(a1 + 24) = v7;
  copy_tinfo_t();
  v8 = *(_QWORD *)(a2 + 16);
  v9 = v14;
  v14 = 0;
  v10 = _mm_loadu_si128(&v15);
  v15 = 0;
  if ( v8 )
  {
    *(_QWORD *)(a2 + 24) = 0;
    v13 = v10;
    qfree();
    v10 = _mm_load_si128(&v13);
  }
  *(_QWORD *)(a2 + 16) = v9;
  *(__m128i *)(a2 + 24) = v10;
  copy_tinfo_t();
  clear_tinfo_t();
  if ( v14 )
  {
    v15.m128i_i64[0] = 0;
    qfree();
  }
  v11 = *(_DWORD *)(a1 + 56);
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(a2 + 56);
  *(_DWORD *)(a2 + 56) = v11;
  return v17 - __readfsqword(0x28u);
}

