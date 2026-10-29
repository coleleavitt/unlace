__int64 *__fastcall sub_11140(__int64 *a1, __int64 a2)
{
  int v2; // edx
  __int64 v3; // rax
  __m128i v4; // xmm0
  __int64 v6; // rax
  __m128i v7; // xmm0
  __int64 v8; // rax
  __m128i si128; // xmm0
  void *v10; // rax
  void *v11; // rax
  __int64 v12; // rax
  __m128i v13; // xmm0
  __int64 v14; // rax
  __m128i v15; // xmm0
  __int64 v16; // rax
  __m128i v17; // xmm0
  __int64 v18; // rax
  __m128i v19; // xmm0
  __m128i v20; // xmm0
  __int64 v21; // [rsp+0h] [rbp-38h] BYREF
  __m128i v22; // [rsp+8h] [rbp-30h] BYREF
  unsigned __int64 v23; // [rsp+18h] [rbp-20h]

  v2 = *(_DWORD *)(a2 + 68);
  v23 = __readfsqword(0x28u);
  *a1 = 0;
  *(_OWORD *)(a1 + 1) = 0;
  switch ( v2 )
  {
    case 3:
      v8 = qvector_reserve(a1, 0, 32, 1);
      si128 = _mm_load_si128((const __m128i *)&xmmword_21730);
      *a1 = v8;
      a1[1] = 32;
      *(__m128i *)v8 = si128;
      *(__m128i *)(v8 + 15) = _mm_load_si128((const __m128i *)&xmmword_21740);
      *(_BYTE *)(*a1 + 31) = 0;
      break;
    case 4:
      v10 = (void *)qvector_reserve(a1, 0, 11, 1);
      *a1 = (__int64)v10;
      a1[1] = 11;
      qmemcpy(v10, "is unknown", 10);
      *(_BYTE *)(*a1 + 10) = 0;
      break;
    case 5:
      v11 = (void *)qvector_reserve(a1, 0, 13, 1);
      *a1 = (__int64)v11;
      a1[1] = 13;
      qmemcpy(v11, "is incorrect", 12);
      *(_BYTE *)(*a1 + 12) = 0;
      break;
    case 6:
      v12 = qvector_reserve(a1, 0, 27, 1);
      v13 = _mm_load_si128((const __m128i *)&xmmword_21750);
      *a1 = v12;
      a1[1] = 27;
      *(__m128i *)v12 = v13;
      *(__m128i *)(v12 + 10) = _mm_load_si128((const __m128i *)&xmmword_21760);
      *(_BYTE *)(*a1 + 26) = 0;
      break;
    case 7:
      v14 = qvector_reserve(a1, 0, 22, 1);
      v15 = _mm_load_si128((const __m128i *)&xmmword_21770);
      *a1 = v14;
      a1[1] = 22;
      *(__m128i *)v14 = v15;
      *(_QWORD *)(v14 + 13) = 0x414449206E692064LL;
      *(_BYTE *)(*a1 + 21) = 0;
      break;
    case 8:
      v16 = qvector_reserve(a1, 0, 22, 1);
      v17 = _mm_load_si128((const __m128i *)&xmmword_21780);
      *a1 = v16;
      a1[1] = 22;
      *(__m128i *)v16 = v17;
      *(_QWORD *)(v16 + 13) = 0x414449206E692073LL;
      *(_BYTE *)(*a1 + 21) = 0;
      break;
    case 9:
      v18 = qvector_reserve(a1, 0, 30, 1);
      v19 = _mm_load_si128((const __m128i *)&xmmword_21790);
      *a1 = v18;
      a1[1] = 30;
      *(__m128i *)v18 = v19;
      *(__m128i *)(v18 + 13) = _mm_load_si128((const __m128i *)&xmmword_217A0);
      *(_BYTE *)(*a1 + 29) = 0;
      break;
    case 10:
      v3 = qvector_reserve(a1, 0, 21, 1);
      v4 = _mm_load_si128((const __m128i *)&xmmword_217B0);
      *a1 = v3;
      a1[1] = 21;
      *(_DWORD *)(v3 + 16) = 1701869940;
      *(__m128i *)v3 = v4;
      *(_BYTE *)(*a1 + 20) = 0;
      break;
    case 11:
      v6 = qvector_reserve(a1, 0, 21, 1);
      v7 = _mm_load_si128((const __m128i *)&xmmword_217C0);
      *a1 = v6;
      a1[1] = 21;
      *(_DWORD *)(v6 + 16) = 1701869940;
      *(__m128i *)v6 = v7;
      *(_BYTE *)(*a1 + 20) = 0;
      break;
    default:
      v21 = 0;
      v22 = 0;
      sub_10D20(&v21, (__int64)"has bad state %u", v2);
      v20 = _mm_loadu_si128(&v22);
      *a1 = v21;
      *(__m128i *)(a1 + 1) = v20;
      break;
  }
  return a1;
}

