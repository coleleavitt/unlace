__int64 __fastcall sub_3D190(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // r12
  __int64 v6; // rax
  __m128i v7; // xmm0
  __int64 v8; // rax
  __m128i v9; // xmm0
  __int64 v10; // rax
  __m128i v11; // xmm0
  __int64 v13; // [rsp+0h] [rbp-108h] BYREF
  __m128i v14; // [rsp+8h] [rbp-100h] BYREF
  char v15; // [rsp+18h] [rbp-F0h]
  __m128i v16; // [rsp+20h] [rbp-E8h] BYREF
  __m128i v17; // [rsp+30h] [rbp-D8h] BYREF
  __m128i v18; // [rsp+40h] [rbp-C8h] BYREF
  __m128i v19; // [rsp+50h] [rbp-B8h] BYREF
  __m128i v20; // [rsp+60h] [rbp-A8h] BYREF
  __m128i v21; // [rsp+70h] [rbp-98h] BYREF
  __m128i v22; // [rsp+80h] [rbp-88h] BYREF
  __m128i v23; // [rsp+90h] [rbp-78h] BYREF
  __int64 v24; // [rsp+A0h] [rbp-68h]
  __m128i v25; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v26; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v27; // [rsp+C8h] [rbp-40h]

  v27 = __readfsqword(0x28u);
  v16 = _mm_loadu_si128((const __m128i *)(a2 + 80));
  v17 = _mm_loadu_si128((const __m128i *)(a2 + 96));
  v18 = _mm_loadu_si128((const __m128i *)(a2 + 112));
  v19 = _mm_loadu_si128((const __m128i *)(a2 + 128));
  v20 = _mm_loadu_si128((const __m128i *)(a2 + 144));
  v21 = _mm_loadu_si128((const __m128i *)(a2 + 160));
  v22 = _mm_loadu_si128((const __m128i *)(a2 + 176));
  v23 = _mm_loadu_si128((const __m128i *)(a2 + 192));
  v3 = *(_QWORD *)(a3 + 8);
  v24 = *(_QWORD *)(a2 + 208);
  v4 = *(_QWORD *)(a2 + 232);
  v25 = _mm_loadu_si128((const __m128i *)(a2 + 216));
  v26 = v4;
  v5 = v3 + 12LL * *(_QWORD *)(a3 + 16);
  if ( v5 == v3 )
  {
LABEL_6:
    v8 = v24;
    *(__m128i *)(a2 + 80) = _mm_load_si128(&v16);
    v9 = _mm_load_si128(&v17);
    *(_QWORD *)(a2 + 208) = v8;
    v10 = v26;
    *(__m128i *)(a2 + 96) = v9;
    v11 = _mm_load_si128(&v18);
    *(_QWORD *)(a2 + 232) = v10;
    *(__m128i *)(a2 + 112) = v11;
    *(__m128i *)(a2 + 128) = _mm_load_si128(&v19);
    *(__m128i *)(a2 + 144) = _mm_load_si128(&v20);
    *(__m128i *)(a2 + 160) = _mm_load_si128(&v21);
    *(__m128i *)(a2 + 176) = _mm_load_si128(&v22);
    *(__m128i *)(a2 + 192) = _mm_load_si128(&v23);
    *(__m128i *)(a2 + 216) = _mm_loadu_si128(&v25);
    *(_BYTE *)(a1 + 24) = 0;
  }
  else
  {
    while ( 1 )
    {
      sub_3CE70((__int64)&v13, (__int64)&v16, v3);
      if ( v15 )
        break;
      v3 += 12;
      if ( v5 == v3 )
        goto LABEL_6;
    }
    v6 = v13;
    v7 = _mm_loadu_si128(&v14);
    *(_BYTE *)(a1 + 24) = 1;
    *(_QWORD *)a1 = v6;
    *(__m128i *)(a1 + 8) = v7;
  }
  return a1;
}
