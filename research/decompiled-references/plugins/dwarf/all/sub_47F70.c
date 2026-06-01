__int64 __fastcall sub_47F70(__int64 a1, __int64 a2, __int64 a3, __int64 (__fastcall *a4)(__m128i *, __m128i *))
{
  __int64 v4; // rsi
  __int64 v5; // r14
  __int64 v6; // rbp
  __m128i v8; // xmm0
  size_t v9; // r13
  __int64 v10; // r12
  __int64 v11; // rbx
  __int64 v12; // rax
  __m128i v13; // xmm0
  size_t v14; // r13
  __int64 v15; // rax
  __m128i v16; // xmm0
  __m128i v17; // xmm0
  __int64 v18; // rax
  __m128i v19; // xmm0
  __int64 v20; // rax
  __m128i v21; // xmm0
  char v22; // r13
  void *v24; // rax
  const void *v25; // rsi
  void *v26; // rax
  const void *v27; // rsi
  __m128i v29; // [rsp+10h] [rbp-118h] BYREF
  void *v30; // [rsp+20h] [rbp-108h]
  __int128 v31; // [rsp+28h] [rbp-100h]
  __int64 v32; // [rsp+38h] [rbp-F0h]
  __m128i v33; // [rsp+40h] [rbp-E8h]
  __int64 v34; // [rsp+50h] [rbp-D8h]
  char v35; // [rsp+58h] [rbp-D0h]
  __int64 v36; // [rsp+60h] [rbp-C8h]
  __m128i v37; // [rsp+68h] [rbp-C0h]
  __m128i v38; // [rsp+80h] [rbp-A8h] BYREF
  void *v39; // [rsp+90h] [rbp-98h]
  __int128 v40; // [rsp+98h] [rbp-90h]
  __int64 v41; // [rsp+A8h] [rbp-80h]
  __m128i v42; // [rsp+B0h] [rbp-78h]
  __int64 v43; // [rsp+C0h] [rbp-68h]
  char v44; // [rsp+C8h] [rbp-60h]
  __int64 v45; // [rsp+D0h] [rbp-58h]
  __m128i v46; // [rsp+D8h] [rbp-50h]
  unsigned __int64 v47; // [rsp+E8h] [rbp-40h]

  v4 = a2 - a1;
  v5 = a1;
  v47 = __readfsqword(0x28u);
  v6 = 0x4EC4EC4EC4EC4EC5LL * (v4 >> 3);
  if ( v4 > 0 )
  {
    do
    {
      while ( 1 )
      {
        v8 = _mm_loadu_si128((const __m128i *)a3);
        v9 = *(_QWORD *)(a3 + 24);
        v10 = v6 >> 1;
        v30 = nullptr;
        v29 = v8;
        v31 = 0;
        v11 = v5 + 8 * ((v6 >> 1) + 4 * ((v6 >> 1) + (v6 & 0xFFFFFFFFFFFFFFFELL)));
        if ( v9 )
        {
          v26 = (void *)qalloc_or_throw(v9);
          v27 = *(const void **)(a3 + 16);
          *((_QWORD *)&v31 + 1) = v9;
          v30 = v26;
          memcpy(v26, v27, v9);
          *(_QWORD *)&v31 = v9;
        }
        v12 = *(_QWORD *)(a3 + 40);
        v13 = _mm_loadu_si128((const __m128i *)(a3 + 48));
        v39 = nullptr;
        v14 = *(_QWORD *)(v11 + 24);
        v40 = 0;
        v32 = v12;
        v15 = *(_QWORD *)(a3 + 64);
        v33 = v13;
        v16 = _mm_loadu_si128((const __m128i *)(a3 + 88));
        v34 = v15;
        LOBYTE(v15) = *(_BYTE *)(a3 + 72);
        v37 = v16;
        v17 = _mm_loadu_si128((const __m128i *)v11);
        v35 = v15;
        v18 = *(_QWORD *)(a3 + 80);
        v38 = v17;
        v36 = v18;
        if ( v14 )
        {
          v24 = (void *)qalloc_or_throw(v14);
          v25 = *(const void **)(v11 + 16);
          v39 = v24;
          *((_QWORD *)&v40 + 1) = v14;
          memcpy(v24, v25, v14);
          *(_QWORD *)&v40 = v14;
        }
        v19 = _mm_loadu_si128((const __m128i *)(v11 + 48));
        v41 = *(_QWORD *)(v11 + 40);
        v20 = *(_QWORD *)(v11 + 64);
        v42 = v19;
        v21 = _mm_loadu_si128((const __m128i *)(v11 + 88));
        v43 = v20;
        LOBYTE(v20) = *(_BYTE *)(v11 + 72);
        v46 = v21;
        v44 = v20;
        v45 = *(_QWORD *)(v11 + 80);
        v22 = a4(&v38, &v29);
        if ( v39 )
        {
          *(_QWORD *)&v40 = 0;
          qfree(v39);
        }
        if ( v30 )
        {
          *(_QWORD *)&v31 = 0;
          qfree(v30);
        }
        if ( v22 )
          break;
        v6 >>= 1;
        if ( v10 <= 0 )
          return v5;
      }
      v5 = v11 + 104;
      v6 = v6 - 1 - v10;
    }
    while ( v6 > 0 );
  }
  return v5;
}
