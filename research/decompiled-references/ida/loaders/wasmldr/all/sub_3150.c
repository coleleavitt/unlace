__int64 __fastcall sub_3150(__int64 *a1, __int64 *a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 result; // rax
  __m128i *v6; // rsi
  __m128i si128; // xmm0
  _DWORD *v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rax
  _BYTE v11[8]; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v12; // [rsp+8h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  v4 = qlread(a3, v11, 8);
  result = 0;
  if ( v4 == 8
    && v11[1] == 97
    && v11[2] == 115
    && v11[3] == 109
    && v11[4] == 1
    && !(v11[7] | (unsigned __int8)(v11[6] | v11[5] | v11[0])) )
  {
    v6 = (__m128i *)*a1;
    if ( (unsigned __int64)a1[2] <= 0x12 )
    {
      v9 = qvector_reserve(a1, v6, 19, 1);
      *a1 = v9;
      v6 = (__m128i *)v9;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_F310);
    a1[1] = 19;
    v6[1].m128i_i16[0] = 25964;
    *v6 = si128;
    *(_BYTE *)(*a1 + 18) = 0;
    v8 = (_DWORD *)*a2;
    if ( (unsigned __int64)a2[2] <= 4 )
    {
      v10 = qvector_reserve(a2, v8, 5, 1);
      *a2 = v10;
      v8 = (_DWORD *)v10;
    }
    a2[1] = 5;
    *v8 = 1836278135;
    *(_BYTE *)(*a2 + 4) = 0;
    return 1;
  }
  return result;
}

