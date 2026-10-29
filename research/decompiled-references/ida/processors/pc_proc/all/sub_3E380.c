__int64 __fastcall sub_3E380(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int8 *v4; // rbx
  __int64 v5; // rax
  unsigned __int8 *v6; // r15
  __int64 v8; // rax
  __m128i v9; // xmm0
  __int64 v10; // rax
  __m128i v11; // xmm0
  __int64 v12; // rax
  __m128i v13; // xmm0
  __int64 v15; // [rsp+0h] [rbp-108h] BYREF
  __m128i v16; // [rsp+8h] [rbp-100h] BYREF
  char v17; // [rsp+18h] [rbp-F0h]
  __m128i v18; // [rsp+20h] [rbp-E8h] BYREF
  __m128i v19; // [rsp+30h] [rbp-D8h] BYREF
  __m128i v20; // [rsp+40h] [rbp-C8h] BYREF
  __m128i v21; // [rsp+50h] [rbp-B8h] BYREF
  __m128i v22; // [rsp+60h] [rbp-A8h] BYREF
  __m128i v23; // [rsp+70h] [rbp-98h] BYREF
  __m128i v24; // [rsp+80h] [rbp-88h] BYREF
  __m128i v25; // [rsp+90h] [rbp-78h] BYREF
  __int64 v26; // [rsp+A0h] [rbp-68h]
  __m128i v27; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v28; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v29; // [rsp+C8h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  v18 = _mm_loadu_si128((const __m128i *)(a2 + 80));
  v19 = _mm_loadu_si128((const __m128i *)(a2 + 96));
  v20 = _mm_loadu_si128((const __m128i *)(a2 + 112));
  v21 = _mm_loadu_si128((const __m128i *)(a2 + 128));
  v22 = _mm_loadu_si128((const __m128i *)(a2 + 144));
  v23 = _mm_loadu_si128((const __m128i *)(a2 + 160));
  v24 = _mm_loadu_si128((const __m128i *)(a2 + 176));
  v25 = _mm_loadu_si128((const __m128i *)(a2 + 192));
  v4 = *(unsigned __int8 **)(a4 + 8);
  v26 = *(_QWORD *)(a2 + 208);
  v5 = *(_QWORD *)(a2 + 232);
  v27 = _mm_loadu_si128((const __m128i *)(a2 + 216));
  v28 = v5;
  v6 = &v4[12 * *(_QWORD *)(a4 + 16)];
  if ( v6 == v4 )
  {
LABEL_7:
    v10 = v26;
    *(__m128i *)(a2 + 80) = _mm_load_si128(&v18);
    v11 = _mm_load_si128(&v19);
    *(_QWORD *)(a2 + 208) = v10;
    v12 = v28;
    *(__m128i *)(a2 + 96) = v11;
    v13 = _mm_load_si128(&v20);
    *(_QWORD *)(a2 + 232) = v12;
    *(__m128i *)(a2 + 112) = v13;
    *(__m128i *)(a2 + 128) = _mm_load_si128(&v21);
    *(__m128i *)(a2 + 144) = _mm_load_si128(&v22);
    *(__m128i *)(a2 + 160) = _mm_load_si128(&v23);
    *(__m128i *)(a2 + 176) = _mm_load_si128(&v24);
    *(__m128i *)(a2 + 192) = _mm_load_si128(&v25);
    *(__m128i *)(a2 + 216) = _mm_loadu_si128(&v27);
    *(_BYTE *)(a1 + 24) = 0;
  }
  else
  {
    while ( 1 )
    {
      if ( a3 >= *v4 )
      {
        sub_3DE70((__int64)&v15, (__int64)&v18, (__int64)v4);
        if ( v17 )
          break;
      }
      v4 += 12;
      if ( v6 == v4 )
        goto LABEL_7;
    }
    v8 = v15;
    v9 = _mm_loadu_si128(&v16);
    *(_BYTE *)(a1 + 24) = 1;
    *(_QWORD *)a1 = v8;
    *(__m128i *)(a1 + 8) = v9;
  }
  return a1;
}

