unsigned __int64 __fastcall sub_2DD2B0(__int64 a1, __int64 a2, const __m128i *a3)
{
  __int64 v3; // r13
  __int64 v4; // r14
  __int64 v5; // rbx
  __int64 v6; // rbp
  unsigned __int64 v7; // r12
  __int64 v8; // r15
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // r14
  __m128i v12; // xmm0
  __int64 v13; // rdi
  __int64 v14; // r14
  __m128i v15; // xmm0
  __int64 v16; // rdx
  __m128i v18; // [rsp+0h] [rbp-198h] BYREF
  const __m128i *v19; // [rsp+18h] [rbp-180h]
  __int64 v20; // [rsp+20h] [rbp-178h]
  __int64 v21; // [rsp+28h] [rbp-170h]
  __int64 v22; // [rsp+30h] [rbp-168h]
  const __m128i *v23; // [rsp+38h] [rbp-160h]
  __m128i v24[3]; // [rsp+40h] [rbp-158h] BYREF
  __int64 v25[12]; // [rsp+70h] [rbp-128h] BYREF
  __int64 v26; // [rsp+100h] [rbp-98h]
  _BYTE v27[16]; // [rsp+110h] [rbp-88h] BYREF
  __m128i v28; // [rsp+120h] [rbp-78h] BYREF
  __int128 v29; // [rsp+130h] [rbp-68h] BYREF
  __m128i v30; // [rsp+140h] [rbp-58h]
  unsigned __int64 v31; // [rsp+158h] [rbp-40h]

  v21 = a1;
  v22 = a2;
  v19 = a3;
  v31 = __readfsqword(0x28u);
  if ( a1 != a2 && a2 != a1 + 200 )
  {
    v3 = a1 + 400;
    do
    {
      if ( !v19[1].m128i_i64[0] )
        std::__throw_bad_function_call();
      v4 = v21;
      if ( ((int (__fastcall *)(const __m128i *, __int64, __int64))v19[1].m128i_i64[1])(v19, v3 - 200, v21) >= 0 )
      {
        sub_2CC7B0((__int64)v27, v19);
        v30 = 0u;
        v29 = 0;
        if ( v28.m128i_i64[0] )
        {
          ((void (__fastcall *)(__int128 *, _BYTE *, __int64))v28.m128i_i64[0])(&v29, v27, 2);
          v30 = _mm_load_si128(&v28);
        }
        sub_2DD160((const __m128i *)(v3 - 200), (__int64)&v29);
        if ( v30.m128i_i64[0] )
          ((void (__fastcall *)(__int128 *, __int128 *, __int64))v30.m128i_i64[0])(&v29, &v29, 3);
        if ( v28.m128i_i64[0] )
          ((void (__fastcall *)(_BYTE *, _BYTE *, __int64))v28.m128i_i64[0])(v27, v27, 3);
        v20 = v3;
      }
      else
      {
        v5 = v3 - 200 - v4;
        v23 = v24;
        v6 = v3 - 192;
        sub_2CA690(v24, (const __m128i *)(v3 - 200));
        v20 = v3;
        v24[0].m128i_i64[0] = (__int64)off_4CFE70;
        v26 = *(_QWORD *)(v3 - 8);
        v7 = 0x8F5C28F5C28F5C29LL * (v5 >> 3);
        if ( v5 > 0 )
        {
          do
          {
            v8 = v6;
            v6 -= 200;
            copy_argloc();
            *(_QWORD *)(v8 + 16) = *(_QWORD *)(v8 - 184);
            *(_QWORD *)(v8 + 24) = *(_QWORD *)(v8 - 176);
            *(_DWORD *)(v8 + 32) = *(_DWORD *)(v8 - 168);
            copy_argloc();
            v9 = *(_QWORD *)(v8 - 144);
            v10 = *(_QWORD *)(v8 + 64);
            v11 = *(_QWORD *)(v8 - 136);
            v12 = _mm_loadu_si128((const __m128i *)(v8 - 128));
            *(_QWORD *)(v8 - 136) = 0;
            *(_QWORD *)(v8 + 56) = v9;
            *(_OWORD *)(v8 - 128) = 0;
            if ( v10 )
            {
              *(_QWORD *)(v8 + 72) = 0;
              v18 = v12;
              qfree();
              v12 = _mm_load_si128(&v18);
            }
            *(_QWORD *)(v8 + 64) = v11;
            *(__m128i *)(v8 + 72) = v12;
            copy_tinfo_t();
            v13 = *(_QWORD *)(v8 + 96);
            v14 = *(_QWORD *)(v8 - 104);
            *(_QWORD *)(v8 - 104) = 0;
            v15 = _mm_loadu_si128((const __m128i *)(v8 - 96));
            *(_OWORD *)(v8 - 96) = 0;
            if ( v13 )
            {
              *(_QWORD *)(v8 + 104) = 0;
              v18 = v15;
              qfree();
              v15 = _mm_load_si128(&v18);
            }
            v16 = *(_QWORD *)(v8 - 80);
            *(_QWORD *)(v8 + 96) = v14;
            *(__m128i *)(v8 + 104) = v15;
            *(_QWORD *)(v8 + 120) = v16;
            *(_DWORD *)(v8 + 128) = *(_DWORD *)(v8 - 72);
            copy_argloc();
            *(_QWORD *)(v8 + 152) = *(_QWORD *)(v8 - 48);
            *(_QWORD *)(v8 + 160) = *(_QWORD *)(v8 - 40);
            *(_DWORD *)(v8 + 168) = *(_DWORD *)(v8 - 32);
            *(_DWORD *)(v8 + 176) = *(_DWORD *)(v8 - 24);
            *(_QWORD *)(v8 + 184) = *(_QWORD *)(v8 - 16);
            --v7;
          }
          while ( v7 );
        }
        sub_2AF2E0(v21, v23);
        *(_QWORD *)(v21 + 192) = v26;
        v24[0].m128i_i64[0] = (__int64)&off_4CE648;
        cleanup_argloc();
        sub_2B5D00(v25);
        cleanup_argloc();
      }
      v3 += 200;
    }
    while ( v20 != v22 );
  }
  return v31 - __readfsqword(0x28u);
}

