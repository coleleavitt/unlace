__int64 __fastcall sub_48230(__int64 a1, __int64 a2, __int64 a3, __int64 (__fastcall *a4)(__m128i *, __m128i *))
{
  __int64 v4; // rsi
  __int64 v5; // r14
  __int64 v6; // rbp
  __int64 v8; // r12
  __int64 v9; // rbx
  size_t v10; // r13
  __int64 v11; // rax
  __m128i v12; // xmm0
  size_t v13; // r13
  __int64 v14; // rax
  __m128i v15; // xmm0
  __m128i v16; // xmm0
  __int64 v17; // rax
  __m128i v18; // xmm0
  __int64 v19; // rax
  __m128i v20; // xmm0
  char v21; // r13
  void *v23; // rax
  const void *v24; // rsi
  void *v25; // rax
  const void *v26; // rsi
  __m128i v28; // [rsp+10h] [rbp-118h] BYREF
  void *v29; // [rsp+20h] [rbp-108h]
  __int128 v30; // [rsp+28h] [rbp-100h]
  __int64 v31; // [rsp+38h] [rbp-F0h]
  __m128i v32; // [rsp+40h] [rbp-E8h]
  __int64 v33; // [rsp+50h] [rbp-D8h]
  char v34; // [rsp+58h] [rbp-D0h]
  __int64 v35; // [rsp+60h] [rbp-C8h]
  __m128i v36; // [rsp+68h] [rbp-C0h]
  __m128i v37; // [rsp+80h] [rbp-A8h] BYREF
  void *v38; // [rsp+90h] [rbp-98h]
  __int128 v39; // [rsp+98h] [rbp-90h]
  __int64 v40; // [rsp+A8h] [rbp-80h]
  __m128i v41; // [rsp+B0h] [rbp-78h]
  __int64 v42; // [rsp+C0h] [rbp-68h]
  char v43; // [rsp+C8h] [rbp-60h]
  __int64 v44; // [rsp+D0h] [rbp-58h]
  __m128i v45; // [rsp+D8h] [rbp-50h]
  unsigned __int64 v46; // [rsp+E8h] [rbp-40h]

  v4 = a2 - a1;
  v5 = a1;
  v46 = __readfsqword(0x28u);
  v6 = 0x4EC4EC4EC4EC4EC5LL * (v4 >> 3);
  if ( v4 > 0 )
  {
    do
    {
      while ( 1 )
      {
        v29 = nullptr;
        v8 = v6 >> 1;
        v30 = 0;
        v9 = v5 + 8 * ((v6 >> 1) + 4 * ((v6 >> 1) + (v6 & 0xFFFFFFFFFFFFFFFELL)));
        v10 = *(_QWORD *)(v9 + 24);
        v28 = _mm_loadu_si128((const __m128i *)v9);
        if ( v10 )
        {
          v25 = (void *)qalloc_or_throw(v10);
          v26 = *(const void **)(v9 + 16);
          *((_QWORD *)&v30 + 1) = v10;
          v29 = v25;
          memcpy(v25, v26, v10);
          *(_QWORD *)&v30 = v10;
        }
        v11 = *(_QWORD *)(v9 + 40);
        v12 = _mm_loadu_si128((const __m128i *)(v9 + 48));
        v38 = nullptr;
        v13 = *(_QWORD *)(a3 + 24);
        v39 = 0;
        v31 = v11;
        v14 = *(_QWORD *)(v9 + 64);
        v32 = v12;
        v15 = _mm_loadu_si128((const __m128i *)(v9 + 88));
        v33 = v14;
        LOBYTE(v14) = *(_BYTE *)(v9 + 72);
        v36 = v15;
        v16 = _mm_loadu_si128((const __m128i *)a3);
        v34 = v14;
        v17 = *(_QWORD *)(v9 + 80);
        v37 = v16;
        v35 = v17;
        if ( v13 )
        {
          v23 = (void *)qalloc_or_throw(v13);
          v24 = *(const void **)(a3 + 16);
          v38 = v23;
          *((_QWORD *)&v39 + 1) = v13;
          memcpy(v23, v24, v13);
          *(_QWORD *)&v39 = v13;
        }
        v18 = _mm_loadu_si128((const __m128i *)(a3 + 48));
        v40 = *(_QWORD *)(a3 + 40);
        v19 = *(_QWORD *)(a3 + 64);
        v41 = v18;
        v20 = _mm_loadu_si128((const __m128i *)(a3 + 88));
        v42 = v19;
        LOBYTE(v19) = *(_BYTE *)(a3 + 72);
        v45 = v20;
        v43 = v19;
        v44 = *(_QWORD *)(a3 + 80);
        v21 = a4(&v37, &v28);
        if ( v38 )
        {
          *(_QWORD *)&v39 = 0;
          qfree(v38);
        }
        if ( v29 )
        {
          *(_QWORD *)&v30 = 0;
          qfree(v29);
        }
        if ( !v21 )
          break;
        v6 >>= 1;
        if ( v8 <= 0 )
          return v5;
      }
      v5 = v9 + 104;
      v6 = v6 - 1 - v8;
    }
    while ( v6 > 0 );
  }
  return v5;
}
