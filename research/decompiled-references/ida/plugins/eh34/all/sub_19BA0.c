__int64 __fastcall sub_19BA0(__int64 a1, _QWORD *a2, unsigned __int64 a3)
{
  _QWORD *v4; // rax
  _QWORD *v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD *v9; // rax
  _QWORD *v10; // r9
  unsigned __int64 v11; // r8
  _QWORD *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __m128i v16; // xmm0
  __m128i v18; // xmm0
  __int64 v19; // [rsp+0h] [rbp-28h] BYREF
  __m128i v20; // [rsp+8h] [rbp-20h] BYREF
  unsigned __int64 v21; // [rsp+18h] [rbp-10h]

  v4 = (_QWORD *)a2[2];
  v21 = __readfsqword(0x28u);
  if ( !v4 )
    goto LABEL_17;
  v6 = a2 + 1;
  do
  {
    while ( 1 )
    {
      v7 = v4[2];
      v8 = v4[3];
      if ( v4[4] >= a3 )
        break;
      v4 = (_QWORD *)v4[3];
      if ( !v8 )
        goto LABEL_6;
    }
    v6 = v4;
    v4 = (_QWORD *)v4[2];
  }
  while ( v7 );
LABEL_6:
  if ( a2 + 1 == v6 || a3 < v6[4] )
  {
LABEL_17:
    sub_19A90((__int64)&v19, (__int64)"lookup_rf(%a): no RUNTIME_FUNCTION", a3);
LABEL_18:
    *(_QWORD *)a1 = v19;
    v18 = _mm_loadu_si128(&v20);
    *(_BYTE *)(a1 + 24) = 1;
    *(__m128i *)(a1 + 8) = v18;
    return a1;
  }
  v9 = (_QWORD *)a2[8];
  v10 = a2 + 7;
  v11 = v6[5];
  v12 = a2 + 7;
  if ( !v9 )
    goto LABEL_19;
  do
  {
    while ( 1 )
    {
      v13 = v9[2];
      v14 = v9[3];
      if ( v9[4] >= v11 )
        break;
      v9 = (_QWORD *)v9[3];
      if ( !v14 )
        goto LABEL_13;
    }
    v12 = v9;
    v9 = (_QWORD *)v9[2];
  }
  while ( v13 );
LABEL_13:
  if ( v10 == v12 || v11 < v12[4] )
  {
LABEL_19:
    sub_19A90((__int64)&v19, (__int64)"lookup_rf(%a): no RUNTIME_FUNCTION cache entry", a3);
    goto LABEL_18;
  }
  v15 = v12[7];
  v16 = _mm_loadu_si128((const __m128i *)(v12 + 5));
  *(_BYTE *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 16) = v15;
  *(__m128i *)a1 = v16;
  return a1;
}

