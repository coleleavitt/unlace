__int64 __fastcall sub_11480(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  __m128i v5; // xmm0
  _QWORD *v6; // rax
  _DWORD *v7; // rax
  void *v8; // rax
  __int64 v9; // rax
  __m128i v10; // xmm0
  __int64 v11; // rax
  __m128i v12; // xmm0
  void *v13; // rax
  __int64 v14; // rax
  __m128i v15; // xmm0
  _QWORD *v16; // rax
  __m128i *v17; // rax
  __m128i v18; // xmm0
  __int64 v19; // rax
  _QWORD *v20; // rax
  __int64 v21; // rax
  __m128i v22; // xmm0
  __int64 v23; // rax
  __m128i si128; // xmm0
  void *v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  _DWORD *v28; // rax
  __int64 v29; // [rsp+0h] [rbp-38h] BYREF
  __m128i v30; // [rsp+8h] [rbp-30h] BYREF
  unsigned __int64 v31; // [rsp+18h] [rbp-20h]

  v31 = __readfsqword(0x28u);
  if ( a2 > 0x307 )
  {
    if ( a2 == 1281 )
    {
      *(_QWORD *)a1 = 0;
      *(_OWORD *)(a1 + 8) = 0;
      v25 = (void *)qvector_reserve(a1, 0, 12, 1);
      *(_QWORD *)a1 = v25;
      *(_QWORD *)(a1 + 8) = 12;
      qmemcpy(v25, "ErrorObject", 11);
      *(_BYTE *)(*(_QWORD *)a1 + 11LL) = 0;
      return a1;
    }
    if ( a2 <= 0x501 )
    {
      if ( a2 == 1024 )
      {
        *(_QWORD *)a1 = 0;
        *(_OWORD *)(a1 + 8) = 0;
        v23 = qvector_reserve(a1, 0, 18, 1);
        si128 = _mm_load_si128((const __m128i *)&xmmword_21810);
        *(_QWORD *)a1 = v23;
        *(_QWORD *)(a1 + 8) = 18;
        *(_BYTE *)(v23 + 16) = 101;
        *(__m128i *)v23 = si128;
        *(_BYTE *)(*(_QWORD *)a1 + 17LL) = 0;
        return a1;
      }
      if ( a2 == 1280 )
      {
        *(_QWORD *)a1 = 0;
        *(_OWORD *)(a1 + 8) = 0;
        v4 = qvector_reserve(a1, 0, 25, 1);
        v5 = _mm_load_si128((const __m128i *)&xmmword_21820);
        *(_QWORD *)a1 = v4;
        *(_QWORD *)(a1 + 8) = 25;
        *(_QWORD *)(v4 + 16) = 0x656C626169726156LL;
        *(__m128i *)v4 = v5;
        *(_BYTE *)(*(_QWORD *)a1 + 24LL) = 0;
        return a1;
      }
    }
    else
    {
      if ( a2 == 1282 )
      {
        *(_QWORD *)a1 = 0;
        *(_OWORD *)(a1 + 8) = 0;
        v28 = (_DWORD *)qvector_reserve(a1, 0, 5, 1);
        *(_QWORD *)a1 = v28;
        *(_QWORD *)(a1 + 8) = 5;
        *v28 = 1802723668;
        *(_BYTE *)(*(_QWORD *)a1 + 4LL) = 0;
        return a1;
      }
      if ( a2 == 1283 )
      {
        *(_QWORD *)a1 = 0;
        *(_OWORD *)(a1 + 8) = 0;
        v2 = qvector_reserve(a1, 0, 4, 1);
        *(_QWORD *)a1 = v2;
        *(_QWORD *)(a1 + 8) = 4;
        *(_WORD *)v2 = 28490;
        *(_BYTE *)(v2 + 2) = 98;
        *(_BYTE *)(*(_QWORD *)a1 + 3LL) = 0;
        return a1;
      }
    }
    goto LABEL_28;
  }
  if ( a2 > 0x2FF )
  {
    *(_QWORD *)a1 = 0;
    *(_OWORD *)(a1 + 8) = 0;
    switch ( a2 )
    {
      case 0x301u:
        v19 = qvector_reserve(a1, 0, 6, 1);
        *(_QWORD *)a1 = v19;
        *(_QWORD *)(a1 + 8) = 6;
        *(_DWORD *)v19 = 1819309396;
        *(_BYTE *)(v19 + 4) = 101;
        *(_BYTE *)(*(_QWORD *)a1 + 5LL) = 0;
        break;
      case 0x302u:
        v16 = (_QWORD *)qvector_reserve(a1, 0, 9, 1);
        *(_QWORD *)a1 = v16;
        *(_QWORD *)(a1 + 8) = 9;
        *v16 = 0x6E6F6974636E7546LL;
        *(_BYTE *)(*(_QWORD *)a1 + 8LL) = 0;
        break;
      case 0x303u:
        v13 = (void *)qvector_reserve(a1, 0, 12, 1);
        *(_QWORD *)a1 = v13;
        *(_QWORD *)(a1 + 8) = 12;
        qmemcpy(v13, "Existential", 11);
        *(_BYTE *)(*(_QWORD *)a1 + 11LL) = 0;
        break;
      case 0x304u:
        v20 = (_QWORD *)qvector_reserve(a1, 0, 9, 1);
        *(_QWORD *)a1 = v20;
        *(_QWORD *)(a1 + 8) = 9;
        *v20 = 0x657079746174654DLL;
        *(_BYTE *)(*(_QWORD *)a1 + 8LL) = 0;
        break;
      case 0x305u:
        v17 = (__m128i *)qvector_reserve(a1, 0, 17, 1);
        v18 = _mm_load_si128((const __m128i *)&xmmword_217E0);
        *(_QWORD *)a1 = v17;
        *(_QWORD *)(a1 + 8) = 17;
        *v17 = v18;
        *(_BYTE *)(*(_QWORD *)a1 + 16LL) = 0;
        break;
      case 0x306u:
        v9 = qvector_reserve(a1, 0, 20, 1);
        v10 = _mm_load_si128((const __m128i *)&xmmword_217F0);
        *(_QWORD *)a1 = v9;
        *(_QWORD *)(a1 + 8) = 20;
        *(__m128i *)v9 = v10;
        *(_DWORD *)(v9 + 15) = 1701869940;
        *(_BYTE *)(*(_QWORD *)a1 + 19LL) = 0;
        break;
      case 0x307u:
        v11 = qvector_reserve(a1, 0, 20, 1);
        v12 = _mm_load_si128((const __m128i *)&xmmword_21800);
        *(_QWORD *)a1 = v11;
        *(_QWORD *)(a1 + 8) = 20;
        *(__m128i *)v11 = v12;
        *(_DWORD *)(v11 + 15) = 1818323316;
        *(_BYTE *)(*(_QWORD *)a1 + 19LL) = 0;
        break;
      default:
        *(_QWORD *)a1 = 0;
        *(_OWORD *)(a1 + 8) = 0;
        v27 = qvector_reserve(a1, 0, 7, 1);
        *(_QWORD *)a1 = v27;
        *(_QWORD *)(a1 + 8) = 7;
        *(_DWORD *)v27 = 1902211151;
        *(_WORD *)(v27 + 4) = 25973;
        *(_BYTE *)(*(_QWORD *)a1 + 6LL) = 0;
        break;
    }
    return a1;
  }
  if ( !a2 )
  {
    *(_QWORD *)a1 = 0;
    *(_OWORD *)(a1 + 8) = 0;
    v26 = qvector_reserve(a1, 0, 6, 1);
    *(_QWORD *)a1 = v26;
    *(_QWORD *)(a1 + 8) = 6;
    *(_DWORD *)v26 = 1935764547;
    *(_BYTE *)(v26 + 4) = 115;
    *(_BYTE *)(*(_QWORD *)a1 + 5LL) = 0;
    return a1;
  }
  if ( a2 - 512 > 4 )
  {
LABEL_28:
    v29 = 0;
    v30 = 0;
    sub_10D20(&v29, (__int64)"%u", a2);
    v22 = _mm_loadu_si128(&v30);
    *(_QWORD *)a1 = v29;
    *(__m128i *)(a1 + 8) = v22;
    return a1;
  }
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  switch ( a2 )
  {
    case 0x201u:
      v7 = (_DWORD *)qvector_reserve(a1, 0, 5, 1);
      *(_QWORD *)a1 = v7;
      *(_QWORD *)(a1 + 8) = 5;
      *v7 = 1836412485;
      *(_BYTE *)(*(_QWORD *)a1 + 4LL) = 0;
      break;
    case 0x202u:
      v6 = (_QWORD *)qvector_reserve(a1, 0, 9, 1);
      *(_QWORD *)a1 = v6;
      *(_QWORD *)(a1 + 8) = 9;
      *v6 = 0x6C616E6F6974704FLL;
      *(_BYTE *)(*(_QWORD *)a1 + 8LL) = 0;
      break;
    case 0x203u:
      v8 = (void *)qvector_reserve(a1, 0, 13, 1);
      *(_QWORD *)a1 = v8;
      *(_QWORD *)(a1 + 8) = 13;
      qmemcpy(v8, "ForeignClass", 12);
      *(_BYTE *)(*(_QWORD *)a1 + 12LL) = 0;
      break;
    case 0x204u:
      v14 = qvector_reserve(a1, 0, 21, 1);
      v15 = _mm_load_si128((const __m128i *)&xmmword_217D0);
      *(_QWORD *)a1 = v14;
      *(_QWORD *)(a1 + 8) = 21;
      *(_DWORD *)(v14 + 16) = 1701869908;
      *(__m128i *)v14 = v15;
      *(_BYTE *)(*(_QWORD *)a1 + 20LL) = 0;
      break;
    default:
      *(_QWORD *)a1 = 0;
      *(_OWORD *)(a1 + 8) = 0;
      v21 = qvector_reserve(a1, 0, 7, 1);
      *(_QWORD *)a1 = v21;
      *(_QWORD *)(a1 + 8) = 7;
      *(_DWORD *)v21 = 1970435155;
      *(_WORD *)(v21 + 4) = 29795;
      *(_BYTE *)(*(_QWORD *)a1 + 6LL) = 0;
      break;
  }
  return a1;
}

