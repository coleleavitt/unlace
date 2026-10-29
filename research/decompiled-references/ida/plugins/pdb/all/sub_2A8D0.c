void __fastcall sub_2A8D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // rdx
  unsigned __int64 v9; // rbx
  __int64 v10; // r15
  __int64 v11; // r14
  __int64 v12; // r13
  __m128i v13; // xmm0
  __int64 v14; // rdi
  __int64 v15; // r13
  __m128i v16; // xmm0
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rdi
  unsigned __int64 v20; // r15
  __int64 v21; // rsi
  unsigned __int64 v22; // rbx
  __int64 v23; // r14
  __int64 v24; // r15
  __int64 v25; // r13
  __m128i v26; // xmm0
  __int64 v27; // rdi
  __int64 v28; // r13
  __m128i v29; // xmm0
  __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // rdi
  unsigned __int64 v33; // r15
  __int64 v34; // rcx
  __m128i v35; // [rsp+0h] [rbp-68h] BYREF
  __int64 v36; // [rsp+18h] [rbp-50h]
  __int64 v37; // [rsp+20h] [rbp-48h]
  unsigned __int64 v38; // [rsp+28h] [rbp-40h]

  v37 = a3;
  v36 = a1;
  sub_2A7E0(a1, a2, a4);
  sub_2A7E0(a2, a3, a4);
  v7 = a3 - a2;
  v8 = a2 - a1;
  if ( a3 - a2 < a2 - a1 )
  {
    v22 = 0x8E38E38E38E38E39LL * (v7 >> 4);
    v38 = v22;
    if ( v7 <= 0 )
    {
      v34 = a4;
    }
    else
    {
      v23 = a4 + 64;
      v24 = a2 + 64;
      do
      {
        *(_QWORD *)(v23 - 64) = *(_QWORD *)(v24 - 64);
        *(_QWORD *)(v23 - 56) = *(_QWORD *)(v24 - 56);
        v25 = *(_QWORD *)(v24 - 48);
        v26 = _mm_loadu_si128((const __m128i *)(v24 - 40));
        *(_QWORD *)(v24 - 48) = 0;
        *(_OWORD *)(v24 - 40) = 0;
        v27 = *(_QWORD *)(v23 - 48);
        if ( v27 )
        {
          *(_QWORD *)(v23 - 40) = 0;
          v35 = v26;
          qfree(v27);
          v26 = _mm_load_si128(&v35);
        }
        *(_QWORD *)(v23 - 48) = v25;
        *(__m128i *)(v23 - 40) = v26;
        v28 = *(_QWORD *)(v24 - 24);
        v29 = _mm_loadu_si128((const __m128i *)(v24 - 16));
        *(_QWORD *)(v24 - 24) = 0;
        *(_OWORD *)(v24 - 16) = 0;
        v30 = *(_QWORD *)(v23 - 24);
        if ( v30 )
        {
          *(_QWORD *)(v23 - 16) = 0;
          v35 = v29;
          qfree(v30);
          v29 = _mm_load_si128(&v35);
        }
        *(_QWORD *)(v23 - 24) = v28;
        v31 = v24;
        v32 = v23;
        v24 += 144;
        *(__m128i *)(v23 - 16) = v29;
        v23 += 144;
        copy_tinfo_t(v32, v31);
        *(__m128i *)(v23 - 136) = _mm_loadu_si128((const __m128i *)(v24 - 136));
        *(__m128i *)(v23 - 120) = _mm_loadu_si128((const __m128i *)(v24 - 120));
        *(__m128i *)(v23 - 104) = _mm_loadu_si128((const __m128i *)(v24 - 104));
        *(_DWORD *)(v23 - 88) = *(_DWORD *)(v24 - 88);
        *(_DWORD *)(v23 - 80) = *(_DWORD *)(v24 - 80);
        *(_DWORD *)(v23 - 76) = *(_DWORD *)(v24 - 76);
        *(_BYTE *)(v23 - 72) = *(_BYTE *)(v24 - 72);
        *(_DWORD *)(v23 - 68) = *(_DWORD *)(v24 - 68);
        --v22;
      }
      while ( v22 );
      v33 = v38 - 1;
      if ( (__int64)(v38 - 1) < 0 )
        v33 = 0;
      v34 = a4 + 144 * v33 + 144;
    }
    sub_286C0(v36, a2, a4, v34, v37);
  }
  else
  {
    v9 = 0x8E38E38E38E38E39LL * (v8 >> 4);
    v38 = v9;
    if ( v8 <= 0 )
    {
      v21 = a4;
    }
    else
    {
      v10 = a4 + 64;
      v11 = a1 + 64;
      do
      {
        *(_QWORD *)(v10 - 64) = *(_QWORD *)(v11 - 64);
        *(_QWORD *)(v10 - 56) = *(_QWORD *)(v11 - 56);
        v12 = *(_QWORD *)(v11 - 48);
        v13 = _mm_loadu_si128((const __m128i *)(v11 - 40));
        *(_QWORD *)(v11 - 48) = 0;
        *(_OWORD *)(v11 - 40) = 0;
        v14 = *(_QWORD *)(v10 - 48);
        if ( v14 )
        {
          *(_QWORD *)(v10 - 40) = 0;
          v35 = v13;
          qfree(v14);
          v13 = _mm_load_si128(&v35);
        }
        *(_QWORD *)(v10 - 48) = v12;
        *(__m128i *)(v10 - 40) = v13;
        v15 = *(_QWORD *)(v11 - 24);
        v16 = _mm_loadu_si128((const __m128i *)(v11 - 16));
        *(_QWORD *)(v11 - 24) = 0;
        *(_OWORD *)(v11 - 16) = 0;
        v17 = *(_QWORD *)(v10 - 24);
        if ( v17 )
        {
          *(_QWORD *)(v10 - 16) = 0;
          v35 = v16;
          qfree(v17);
          v16 = _mm_load_si128(&v35);
        }
        *(_QWORD *)(v10 - 24) = v15;
        v18 = v11;
        v19 = v10;
        v11 += 144;
        *(__m128i *)(v10 - 16) = v16;
        v10 += 144;
        copy_tinfo_t(v19, v18);
        *(__m128i *)(v10 - 136) = _mm_loadu_si128((const __m128i *)(v11 - 136));
        *(__m128i *)(v10 - 120) = _mm_loadu_si128((const __m128i *)(v11 - 120));
        *(__m128i *)(v10 - 104) = _mm_loadu_si128((const __m128i *)(v11 - 104));
        *(_DWORD *)(v10 - 88) = *(_DWORD *)(v11 - 88);
        *(_DWORD *)(v10 - 80) = *(_DWORD *)(v11 - 80);
        *(_DWORD *)(v10 - 76) = *(_DWORD *)(v11 - 76);
        *(_BYTE *)(v10 - 72) = *(_BYTE *)(v11 - 72);
        *(_DWORD *)(v10 - 68) = *(_DWORD *)(v11 - 68);
        --v9;
      }
      while ( v9 );
      v20 = v38 - 1;
      if ( (__int64)(v38 - 1) < 0 )
        v20 = 0;
      v21 = a4 + 144 * v20 + 144;
    }
    sub_26940(a4, v21, a2, v37, v36);
  }
}

