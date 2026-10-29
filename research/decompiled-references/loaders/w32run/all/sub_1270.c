__int64 __fastcall sub_1270(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  unsigned int v5; // r14d
  unsigned __int64 v6; // r15
  __int64 v7; // rax
  __m128i si128; // xmm0
  __int64 v9; // rax
  int v10; // [rsp+0h] [rbp-68h] BYREF
  unsigned int v11; // [rsp+4h] [rbp-64h]
  unsigned int v12; // [rsp+8h] [rbp-60h]
  unsigned int v13; // [rsp+Ch] [rbp-5Ch]
  unsigned int v14; // [rsp+10h] [rbp-58h]
  unsigned int v15; // [rsp+14h] [rbp-54h]
  unsigned __int64 v16; // [rsp+28h] [rbp-40h]

  v16 = __readfsqword(0x28u);
  if ( qlread(a3, &v10, 28) != 28 )
    return 0;
  if ( (_WORD)v10 != 23117 )
    return 0;
  if ( !(_WORD)v12 )
    return 0;
  v5 = 16 * (unsigned __int16)v12;
  v6 = qlsize(a3);
  qlseek(a3, v5, 0);
  if ( qlread(a3, &v10, 24) != 24
    || v10 != 17987
    || v11 < (unsigned __int64)(v5 + 24)
    || v14 < v12
    || v15 >= v13
    || v6 < v11
    || v6 - v11 < v12
    || v12 - 2 < v13 )
  {
    return 0;
  }
  if ( a1[2] <= 0x1Au )
    *a1 = qvector_reserve(a1, *a1, 27, 1);
  v7 = *a1;
  si128 = _mm_load_si128((const __m128i *)&xmmword_2330);
  a1[1] = 27;
  *(__m128i *)v7 = si128;
  *(__m128i *)(v7 + 10) = _mm_load_si128((const __m128i *)&xmmword_2340);
  *(_BYTE *)(*a1 + 26LL) = 0;
  if ( a2[2] <= 6u )
    *a2 = qvector_reserve(a2, *a2, 7, 1);
  v9 = *a2;
  a2[1] = 7;
  *(_DWORD *)v9 = 1635018093;
  *(_WORD *)(v9 + 4) = 25456;
  *(_BYTE *)(*a2 + 6LL) = 0;
  return 19;
}
