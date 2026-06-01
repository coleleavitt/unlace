bool __fastcall sub_1D1E0(__int64 *a1, unsigned int a2, __int64 a3, __int64 a4, int a5)
{
  _QWORD *v6; // rdi
  __int64 v7; // r9
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r14
  __int64 (__fastcall *v14)(__int64, __int64); // rax
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rdi
  __m128i v18; // xmm0
  __int64 v19; // r14
  __int64 v20; // rdx
  char v21; // al
  __int64 v22; // rdi
  __m128i v23; // xmm0
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // [rsp-10h] [rbp-70h]
  unsigned int v28; // [rsp+Ch] [rbp-54h]
  __m128i v29; // [rsp+10h] [rbp-50h] BYREF
  __int64 v30; // [rsp+20h] [rbp-40h] BYREF
  __m128i v31; // [rsp+28h] [rbp-38h] BYREF
  char v32; // [rsp+38h] [rbp-28h]
  unsigned __int64 v33; // [rsp+48h] [rbp-18h]

  v33 = __readfsqword(0x28u);
  v6 = *(_QWORD **)(a4 + 136);
  if ( !v6 )
    return 0;
  v7 = a2;
  v10 = 0x10000;
  v11 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(a4 + 32) + 24LL) - 1);
  if ( (unsigned int)v11 <= 7 )
  {
    v10 = dword_23420[v11];
    if ( (_DWORD)v10 != 0x10000 )
    {
      v10 = (unsigned int)v7 | (unsigned int)v10;
      if ( (unsigned int)v7 >= 0x10000 )
        v10 = 0x10000;
    }
  }
  v32 = 0;
  if ( a5 <= 0 )
    a5 = 20;
  v31 = 0;
  v12 = -1;
  v30 = 0;
  v13 = a5;
  v14 = *(__int64 (__fastcall **)(__int64, __int64))(*v6 + 16LL);
  v15 = *(_QWORD *)(*(_QWORD *)(v6[1] + 32LL) + 16LL) & a3;
  if ( v14 != sub_12BD0 )
  {
    v28 = v10;
    v29.m128i_i64[0] = (__int64)v6;
    v25 = ((__int64 (__fastcall *)(_QWORD *, __int64, _QWORD, __int64, __int64, __int64, double))v14)(
            v6,
            v15,
            0,
            -1,
            v10,
            v7,
            0.0);
    v10 = v28;
    v15 = v25;
    v12 = v26;
  }
  reg_finder_find(v6, &v30, v15, v12, v10, 0, v13);
  v16 = v30;
  v17 = *a1;
  v18 = _mm_loadu_si128(&v31);
  v19 = v30;
  v30 = 0;
  v31 = 0;
  if ( v17 )
  {
    a1[1] = 0;
    v29 = v18;
    qfree(v17, &v30, v27);
    v21 = v32;
    v22 = v30;
    *a1 = v19;
    v23 = _mm_load_si128(&v29);
    *((_BYTE *)a1 + 24) = v21;
    *(__m128i *)(a1 + 1) = v23;
    if ( v22 )
    {
      v31.m128i_i64[0] = 0;
      qfree(v22, &v30, v20);
      v21 = *((_BYTE *)a1 + 24);
    }
  }
  else
  {
    *a1 = v16;
    v21 = v32;
    *(__m128i *)(a1 + 1) = v18;
    *((_BYTE *)a1 + 24) = v21;
  }
  return (unsigned __int8)(v21 - 10) <= 3u;
}
