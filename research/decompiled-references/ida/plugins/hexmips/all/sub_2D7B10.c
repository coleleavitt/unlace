unsigned __int64 __fastcall sub_2D7B10(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  __int64 v6; // r14
  __int64 v7; // rax
  __m128i v8; // xmm0
  __int128 v9; // xmm1
  __m128i v10; // xmm2
  __m128i v11; // xmm0
  __int64 v12; // rax
  __int64 v13; // r15
  __m128i v14; // xmm0
  __int64 v15; // rdi
  __int64 v16; // r13
  __m128i v17; // xmm0
  char v18; // dl
  __m128i v19; // xmm0
  int v20; // edx
  __int64 v21; // rdi
  __m128i v22; // xmm3
  __m128i v23; // xmm0
  __int64 v24; // rcx
  char v25; // al
  int v26; // eax
  __m128i v28; // [rsp+0h] [rbp-138h] BYREF
  __int64 v29; // [rsp+18h] [rbp-120h]
  __int64 v30; // [rsp+20h] [rbp-118h]
  __int64 v31; // [rsp+28h] [rbp-110h]
  __m128i v32; // [rsp+30h] [rbp-108h] BYREF
  __int64 v33; // [rsp+40h] [rbp-F8h]
  char v34; // [rsp+4Bh] [rbp-EDh]
  int v35; // [rsp+4Ch] [rbp-ECh]
  __m128i v36[3]; // [rsp+58h] [rbp-E0h] BYREF
  __m128i v37[2]; // [rsp+88h] [rbp-B0h] BYREF
  _BYTE v38[16]; // [rsp+B0h] [rbp-88h] BYREF
  __m128i v39; // [rsp+C0h] [rbp-78h] BYREF
  __int128 v40; // [rsp+D0h] [rbp-68h] BYREF
  __m128i v41; // [rsp+E0h] [rbp-58h]
  unsigned __int64 v42; // [rsp+F8h] [rbp-40h]

  v30 = a2;
  v42 = __readfsqword(0x28u);
  if ( a1 != a2 && a2 != a1 + 88 )
  {
    v5 = a1 + 176;
    do
    {
      while ( 1 )
      {
        v6 = v5 - 88;
        if ( !*(_QWORD *)(a3 + 16) )
          std::__throw_bad_function_call();
        if ( (*(int (__fastcall **)(__int64, __int64, __int64))(a3 + 24))(a3, v5 - 88, a1) >= 0 )
          break;
        v7 = *(_QWORD *)(v5 - 64);
        v8 = _mm_loadu_si128((const __m128i *)(v5 - 80));
        v9 = 0;
        v10 = _mm_loadu_si128((const __m128i *)(v5 - 56));
        v29 = v5;
        v33 = v7;
        LOBYTE(v7) = *(_BYTE *)(v5 - 40);
        v36[0] = v8;
        v34 = v7;
        LODWORD(v7) = *(_DWORD *)(v5 - 16);
        *(_OWORD *)(v5 - 56) = 0;
        v11 = _mm_loadu_si128((const __m128i *)(v5 - 32));
        v35 = v7;
        v12 = *(_QWORD *)(v5 - 8);
        *(_QWORD *)(v5 - 64) = 0;
        v31 = v12;
        v32 = v10;
        v13 = 0x2E8BA2E8BA2E8BA3LL * ((v6 - a1) >> 3);
        v37[0] = v11;
        if ( v6 - a1 > 0 )
        {
          do
          {
            v14 = _mm_loadu_si128((const __m128i *)(v6 - 80));
            v15 = *(_QWORD *)(v6 + 24);
            v6 -= 88;
            v16 = *(_QWORD *)(v6 + 24);
            *(_QWORD *)(v6 + 24) = 0;
            *(__m128i *)(v6 + 96) = v14;
            v17 = _mm_loadu_si128((const __m128i *)(v6 + 32));
            *(_OWORD *)(v6 + 32) = v9;
            if ( v15 )
            {
              *(_QWORD *)(v6 + 120) = 0;
              v28 = v17;
              qfree();
              v17 = _mm_load_si128(&v28);
              v9 = 0;
            }
            v18 = *(_BYTE *)(v6 + 48);
            *(__m128i *)(v6 + 120) = v17;
            v19 = _mm_loadu_si128((const __m128i *)(v6 + 56));
            *(_QWORD *)(v6 + 112) = v16;
            *(_BYTE *)(v6 + 136) = v18;
            v20 = *(_DWORD *)(v6 + 72);
            *(__m128i *)(v6 + 144) = v19;
            *(_DWORD *)(v6 + 160) = v20;
            *(_QWORD *)(v6 + 168) = *(_QWORD *)(v6 + 80);
            --v13;
          }
          while ( v13 );
        }
        v21 = *(_QWORD *)(a1 + 24);
        *(__m128i *)(a1 + 8) = _mm_loadu_si128(v36);
        if ( v21 )
        {
          *(_QWORD *)(a1 + 32) = 0;
          qfree();
        }
        v22 = _mm_load_si128(&v32);
        v5 += 88;
        v23 = _mm_loadu_si128(v37);
        v24 = v30;
        *(_QWORD *)(a1 + 24) = v33;
        v25 = v34;
        *(__m128i *)(a1 + 32) = v22;
        *(_BYTE *)(a1 + 48) = v25;
        v26 = v35;
        *(__m128i *)(a1 + 56) = v23;
        *(_DWORD *)(a1 + 72) = v26;
        *(_QWORD *)(a1 + 80) = v31;
        if ( v29 == v24 )
          return v42 - __readfsqword(0x28u);
      }
      sub_2C9380((__int64)v38, (const __m128i *)a3);
      v41 = 0u;
      v40 = 0;
      if ( v39.m128i_i64[0] )
      {
        ((void (__fastcall *)(__int128 *, _BYTE *, __int64))v39.m128i_i64[0])(&v40, v38, 2);
        v41 = _mm_load_si128(&v39);
      }
      sub_2D78A0(v5 - 88, (__int64)&v40);
      if ( v41.m128i_i64[0] )
        ((void (__fastcall *)(__int128 *, __int128 *, __int64))v41.m128i_i64[0])(&v40, &v40, 3);
      if ( v39.m128i_i64[0] )
        ((void (__fastcall *)(_BYTE *, _BYTE *, __int64))v39.m128i_i64[0])(v38, v38, 3);
      v29 = v5;
      v5 += 88;
    }
    while ( v29 != v30 );
  }
  return v42 - __readfsqword(0x28u);
}

