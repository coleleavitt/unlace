unsigned __int64 __fastcall sub_45F30(__int64 a1, __int64 (__fastcall *a2)(__m128 *, __m128i *))
{
  __int64 v2; // r14
  __int64 v3; // rax
  const void *v4; // r15
  size_t v6; // rbp
  int v7; // r13d
  __int64 v8; // rax
  int v9; // eax
  __m128 v10; // xmm1
  char v11; // bl
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rbx
  __m128i v15; // xmm0
  __int64 v16; // rax
  int v17; // eax
  __m128i v18; // xmm0
  size_t v19; // rbx
  void *v20; // rax
  const void *v21; // rsi
  __int64 v22; // rdi
  __m128i v23; // xmm0
  __m128i v25; // [rsp+0h] [rbp-D8h] BYREF
  __m128i v26; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v27; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v28; // [rsp+28h] [rbp-B0h] BYREF
  __m128i v29; // [rsp+30h] [rbp-A8h] BYREF
  void *v30; // [rsp+40h] [rbp-98h]
  __int128 v31; // [rsp+48h] [rbp-90h]
  int v32; // [rsp+58h] [rbp-80h]
  __m128 v33; // [rsp+60h] [rbp-78h] BYREF
  void *v34; // [rsp+70h] [rbp-68h]
  __int128 v35; // [rsp+78h] [rbp-60h]
  int v36; // [rsp+88h] [rbp-50h]
  unsigned __int64 v37; // [rsp+98h] [rbp-40h]

  v2 = a1;
  v3 = *(_QWORD *)a1;
  v4 = *(const void **)(a1 + 16);
  v37 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(a1 + 24);
  v7 = *(_DWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 16) = 0;
  v25.m128i_i64[0] = v3;
  v27 = *(_QWORD *)(a1 + 8);
  v8 = *(_QWORD *)(a1 + 32);
  *(_OWORD *)(a1 + 24) = 0;
  v28 = v8;
  while ( 1 )
  {
    v18 = _mm_loadu_si128((const __m128i *)(v2 - 48));
    v19 = *(_QWORD *)(v2 - 24);
    v30 = nullptr;
    v31 = 0;
    v29 = v18;
    if ( v19 )
    {
      v20 = (void *)qalloc_or_throw(v19);
      v21 = *(const void **)(v2 - 32);
      v30 = v20;
      *((_QWORD *)&v31 + 1) = v19;
      memcpy(v20, v21, v19);
      *(_QWORD *)&v31 = v19;
    }
    v9 = *(_DWORD *)(v2 - 8);
    v34 = nullptr;
    v35 = 0;
    v10 = _mm_loadh_ps((const double *)&v27);
    v32 = v9;
    v26 = (__m128i)v10;
    v33 = v10;
    if ( v6 )
    {
      v34 = (void *)qalloc_or_throw(v6);
      *((_QWORD *)&v35 + 1) = v6;
      memcpy(v34, v4, v6);
      *(_QWORD *)&v35 = v6;
    }
    v36 = v7;
    v11 = a2(&v33, &v29);
    if ( v34 )
    {
      *(_QWORD *)&v35 = 0;
      qfree(v34);
    }
    if ( v30 )
    {
      *(_QWORD *)&v31 = 0;
      qfree(v30);
    }
    if ( !v11 )
      break;
    v12 = *(_QWORD *)(v2 - 48);
    v13 = *(_QWORD *)(v2 + 16);
    v14 = *(_QWORD *)(v2 - 32);
    v15 = _mm_loadu_si128((const __m128i *)(v2 - 24));
    *(_QWORD *)(v2 - 32) = 0;
    *(_QWORD *)v2 = v12;
    v16 = *(_QWORD *)(v2 - 40);
    *(_OWORD *)(v2 - 24) = 0;
    *(_QWORD *)(v2 + 8) = v16;
    if ( v13 )
    {
      *(_QWORD *)(v2 + 24) = 0;
      v26 = v15;
      qfree(v13);
      v15 = _mm_load_si128(&v26);
    }
    v17 = *(_DWORD *)(v2 - 8);
    *(_QWORD *)(v2 + 16) = v14;
    v2 -= 48;
    *(__m128i *)(v2 + 72) = v15;
    *(_DWORD *)(v2 + 88) = v17;
  }
  v22 = *(_QWORD *)(v2 + 16);
  v23 = (__m128i)_mm_loadh_ps((const double *)&v28);
  *(__m128i *)v2 = _mm_load_si128(&v26);
  if ( v22 )
  {
    *(_QWORD *)(v2 + 24) = 0;
    v25 = v23;
    qfree(v22);
    v23 = _mm_load_si128(&v25);
  }
  *(_QWORD *)(v2 + 16) = v4;
  *(_DWORD *)(v2 + 40) = v7;
  *(__m128i *)(v2 + 24) = v23;
  return v37 - __readfsqword(0x28u);
}

