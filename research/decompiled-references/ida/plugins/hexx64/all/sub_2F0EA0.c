unsigned __int64 __fastcall sub_2F0EA0(__int64 a1, __int64 a2, const __m128i *a3)
{
  __int64 v3; // rsi
  __int64 v5; // rbx
  __int64 v6; // r13
  __m128i v7; // xmm0
  int v8; // r10d
  void (__fastcall *v9)(__int128 *, const __m128i *, __int64); // rax
  int v10; // r15d
  __int64 v11; // r14
  __m128i v12; // xmm0
  __m128i si128; // xmm0
  int v15; // [rsp+Ch] [rbp-FCh]
  __m128i v16; // [rsp+28h] [rbp-E0h] BYREF
  __m128i v17[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 (__fastcall **v18)(); // [rsp+60h] [rbp-A8h] BYREF
  __m128i v19; // [rsp+68h] [rbp-A0h]
  int v20; // [rsp+78h] [rbp-90h]
  __m128i v21; // [rsp+80h] [rbp-88h]
  int v22; // [rsp+90h] [rbp-78h]
  __int64 v23; // [rsp+98h] [rbp-70h]
  __int128 v24; // [rsp+A0h] [rbp-68h] BYREF
  __m128i v25; // [rsp+B0h] [rbp-58h]
  unsigned __int64 v26; // [rsp+C8h] [rbp-40h]

  v3 = a2 - a1;
  v26 = __readfsqword(0x28u);
  if ( v3 > 64 )
  {
    v5 = ((v3 >> 6) - 2) / 2;
    v6 = a1 + (v5 << 6);
    while ( 1 )
    {
      v7 = _mm_loadu_si128((const __m128i *)(v6 + 8));
      v8 = *(_DWORD *)(v6 + 24);
      v25 = 0u;
      v9 = (void (__fastcall *)(__int128 *, const __m128i *, __int64))a3[1].m128i_i64[0];
      v10 = *(_DWORD *)(v6 + 48);
      v16 = v7;
      v11 = *(_QWORD *)(v6 + 56);
      v17[0] = _mm_loadu_si128((const __m128i *)(v6 + 32));
      v24 = 0;
      if ( v9 )
      {
        v15 = v8;
        v9(&v24, a3, 2);
        v8 = v15;
        v25 = _mm_loadu_si128(a3 + 1);
      }
      v12 = _mm_loadu_si128(&v16);
      v20 = v8;
      v22 = v10;
      v19 = v12;
      si128 = _mm_load_si128(v17);
      v18 = off_4E2C88;
      v23 = v11;
      v21 = si128;
      sub_2F0B30(a1, v5, v3 >> 6, (__int64)&v18, (__int64)&v24);
      if ( v25.m128i_i64[0] )
        ((void (__fastcall *)(__int128 *, __int128 *, __int64))v25.m128i_i64[0])(&v24, &v24, 3);
      v6 -= 64;
      if ( !v5 )
        break;
      --v5;
    }
  }
  return v26 - __readfsqword(0x28u);
}

