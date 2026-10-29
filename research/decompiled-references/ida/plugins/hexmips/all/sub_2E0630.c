unsigned __int64 __fastcall sub_2E0630(__int64 a1, __int64 a2, const __m128i *a3)
{
  __int64 v3; // rsi
  __int64 v5; // rbp
  unsigned __int64 v6; // rbx
  __m128i v7; // xmm0
  __m128i v8; // xmm1
  __int64 v9; // r12
  int v10; // r11d
  __int16 v11; // r10
  char v12; // r9
  char v13; // r8
  __m128i v14; // xmm0
  __int64 v15; // rcx
  int v16; // r14d
  __int64 v17; // r13
  void (__fastcall *v18)(__int128 *, const __m128i *, __int64); // rax
  __m128i v19; // xmm1
  __m128i v20; // xmm0
  __m128i v22; // [rsp+10h] [rbp-158h] BYREF
  __int64 v23; // [rsp+20h] [rbp-148h]
  int v24; // [rsp+28h] [rbp-140h]
  char v25; // [rsp+2Ch] [rbp-13Ch]
  char v26; // [rsp+2Dh] [rbp-13Bh]
  __int16 v27; // [rsp+2Eh] [rbp-13Ah]
  __int64 v28; // [rsp+30h] [rbp-138h]
  __int64 v29; // [rsp+38h] [rbp-130h]
  __int64 (__fastcall **v30)(); // [rsp+40h] [rbp-128h]
  __m128i v31; // [rsp+48h] [rbp-120h] BYREF
  int v32; // [rsp+58h] [rbp-110h]
  __int16 v33; // [rsp+5Ch] [rbp-10Ch]
  char v34; // [rsp+5Eh] [rbp-10Ah]
  char v35; // [rsp+5Fh] [rbp-109h]
  __int64 v36; // [rsp+60h] [rbp-108h]
  __m128i v37; // [rsp+68h] [rbp-100h]
  __int64 v38; // [rsp+78h] [rbp-F0h]
  __m128i v39; // [rsp+80h] [rbp-E8h] BYREF
  int v40; // [rsp+90h] [rbp-D8h]
  __int64 v41; // [rsp+98h] [rbp-D0h]
  __int64 (__fastcall **v42)(); // [rsp+A0h] [rbp-C8h] BYREF
  __m128i v43; // [rsp+A8h] [rbp-C0h]
  int v44; // [rsp+B8h] [rbp-B0h]
  __int16 v45; // [rsp+BCh] [rbp-ACh]
  char v46; // [rsp+BEh] [rbp-AAh]
  char v47; // [rsp+BFh] [rbp-A9h]
  __int64 v48; // [rsp+C0h] [rbp-A8h]
  __m128i v49; // [rsp+C8h] [rbp-A0h]
  __int64 v50; // [rsp+D8h] [rbp-90h]
  __m128i v51; // [rsp+E0h] [rbp-88h]
  int v52; // [rsp+F0h] [rbp-78h]
  __int64 v53; // [rsp+F8h] [rbp-70h]
  __int128 v54; // [rsp+100h] [rbp-68h] BYREF
  __m128i v55; // [rsp+110h] [rbp-58h]
  unsigned __int64 v56; // [rsp+128h] [rbp-40h]

  v3 = a2 - a1;
  v28 = a1;
  v56 = __readfsqword(0x28u);
  if ( v3 > 96 )
  {
    v29 = 0xAAAAAAAAAAAAAAABLL * (v3 >> 5);
    v5 = (v29 - 2) / 2;
    v6 = a1 + 32 * (v5 + ((v29 - 2 + ((unsigned __int64)(v29 - 2) >> 63)) & 0xFFFFFFFFFFFFFFFELL)) + 8;
    while ( 1 )
    {
      v7 = _mm_loadu_si128((const __m128i *)v6);
      v8 = _mm_loadu_si128((const __m128i *)(v6 + 56));
      v9 = *(_QWORD *)(v6 + 24);
      v10 = *(_DWORD *)(v6 + 16);
      v30 = off_4C3328;
      v11 = *(_WORD *)(v6 + 20);
      v12 = *(_BYTE *)(v6 + 22);
      v31 = v7;
      v13 = *(_BYTE *)(v6 + 23);
      v14 = _mm_loadu_si128((const __m128i *)(v6 + 32));
      *(_QWORD *)(v6 + 24) = 0;
      v15 = *(_QWORD *)(v6 + 48);
      v16 = *(_DWORD *)(v6 + 72);
      *(_OWORD *)(v6 + 32) = 0;
      v17 = *(_QWORD *)(v6 + 80);
      v18 = (void (__fastcall *)(__int128 *, const __m128i *, __int64))a3[1].m128i_i64[0];
      v32 = v10;
      v39 = v8;
      v33 = v11;
      v34 = v12;
      v35 = v13;
      v36 = v9;
      v38 = v15;
      v40 = v16;
      v41 = v17;
      v55 = 0u;
      v37 = v14;
      v54 = 0;
      if ( v18 )
      {
        v27 = v11;
        v23 = v15;
        v26 = v13;
        v25 = v12;
        v24 = v10;
        v22 = v14;
        v18(&v54, a3, 2);
        v11 = v27;
        v14 = _mm_load_si128(&v22);
        v15 = v23;
        v13 = v26;
        v12 = v25;
        v55 = _mm_loadu_si128(a3 + 1);
        v10 = v24;
      }
      v47 = v13;
      v19 = _mm_loadu_si128(&v31);
      v37 = 0;
      v48 = v9;
      v49 = v14;
      v20 = _mm_load_si128(&v39);
      v50 = v15;
      v44 = v10;
      v45 = v11;
      v46 = v12;
      v36 = 0;
      v52 = v16;
      v42 = off_4C3328;
      v53 = v17;
      v43 = v19;
      v51 = v20;
      sub_2DFFB0(v28, v5, v29, (__int64)&v42, (__int64)&v54);
      if ( v48 )
        qfree();
      if ( v55.m128i_i64[0] )
        ((void (__fastcall *)(__int128 *, __int128 *, __int64))v55.m128i_i64[0])(&v54, &v54, 3);
      v6 -= 96LL;
      if ( !v5 )
        break;
      --v5;
    }
  }
  return v56 - __readfsqword(0x28u);
}

