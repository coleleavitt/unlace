unsigned __int64 __fastcall sub_2E59E0(__int64 a1, __int64 a2, const __m128i *a3)
{
  __int64 v3; // rsi
  __int64 v5; // rbx
  __int64 v6; // r15
  __int64 v7; // r14
  int v8; // r10d
  __m128i v9; // xmm0
  __int64 v10; // r8
  __int64 v11; // rcx
  void (__fastcall *v12)(__int128 *, const __m128i *, __int64); // rax
  int v14; // [rsp+Ch] [rbp-11Ch]
  __m128i v15; // [rsp+10h] [rbp-118h] BYREF
  __int64 v16; // [rsp+20h] [rbp-108h]
  __int64 v17; // [rsp+28h] [rbp-100h]
  __int64 v18; // [rsp+30h] [rbp-F8h]
  __int64 v19; // [rsp+38h] [rbp-F0h]
  __int64 (__fastcall **v20)(); // [rsp+40h] [rbp-E8h]
  int v21; // [rsp+48h] [rbp-E0h]
  __int64 v22; // [rsp+50h] [rbp-D8h]
  __m128i v23; // [rsp+58h] [rbp-D0h]
  __int64 v24; // [rsp+68h] [rbp-C0h]
  __int64 v25; // [rsp+70h] [rbp-B8h]
  __int64 (__fastcall **v26)(); // [rsp+80h] [rbp-A8h] BYREF
  int v27; // [rsp+88h] [rbp-A0h]
  __int64 v28; // [rsp+90h] [rbp-98h]
  __m128i v29; // [rsp+98h] [rbp-90h]
  __int64 v30; // [rsp+A8h] [rbp-80h]
  __int64 v31; // [rsp+B0h] [rbp-78h]
  __int128 v32; // [rsp+C0h] [rbp-68h] BYREF
  __m128i v33; // [rsp+D0h] [rbp-58h]
  unsigned __int64 v34; // [rsp+E8h] [rbp-40h]

  v3 = a2 - a1;
  v18 = a1;
  v34 = __readfsqword(0x28u);
  if ( v3 > 56 )
  {
    v19 = 0x6DB6DB6DB6DB6DB7LL * (v3 >> 3);
    v5 = (v19 - 2) / 2;
    v6 = a1 + 56 * v5;
    while ( 1 )
    {
      v7 = *(_QWORD *)(v6 + 16);
      v8 = *(_DWORD *)(v6 + 8);
      v9 = _mm_loadu_si128((const __m128i *)(v6 + 24));
      v10 = *(_QWORD *)(v6 + 40);
      *(_OWORD *)(v6 + 24) = 0;
      *(_QWORD *)(v6 + 16) = 0;
      v11 = *(_QWORD *)(v6 + 48);
      v12 = (void (__fastcall *)(__int128 *, const __m128i *, __int64))a3[1].m128i_i64[0];
      v21 = v8;
      v22 = v7;
      v24 = v10;
      v20 = off_4B65D8;
      v25 = v11;
      v33 = 0u;
      v23 = v9;
      v32 = 0;
      if ( v12 )
      {
        v17 = v10;
        v16 = v11;
        v14 = v8;
        v15 = v9;
        v12(&v32, a3, 2);
        v10 = v17;
        v9 = _mm_load_si128(&v15);
        v11 = v16;
        v8 = v14;
        v33 = _mm_loadu_si128(a3 + 1);
      }
      v28 = v7;
      v30 = v10;
      v31 = v11;
      v27 = v8;
      v22 = 0;
      v26 = off_4B65D8;
      v29 = v9;
      v23 = 0;
      sub_2E54C0(v18, v5, v19, (__int64)&v26, (__int64)&v32);
      if ( v28 )
        qfree();
      if ( v33.m128i_i64[0] )
        ((void (__fastcall *)(__int128 *, __int128 *, __int64))v33.m128i_i64[0])(&v32, &v32, 3);
      v6 -= 56;
      if ( !v5 )
        break;
      --v5;
    }
  }
  return v34 - __readfsqword(0x28u);
}

