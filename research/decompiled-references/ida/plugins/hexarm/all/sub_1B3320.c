__int64 *__fastcall sub_1B3320(unsigned __int64 *a1, __int64 *a2)
{
  __int64 v4; // rbp
  __int64 v5; // rsi
  unsigned __int64 v6; // r12
  __int64 v7; // r13
  __int64 v8; // rbp
  __int64 v9; // rax
  __m128i si128; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v11; // [rsp+18h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  si128 = _mm_load_si128((const __m128i *)&xmmword_41F900);
  if ( (unsigned int)sub_317300(a1, &si128) )
    return sub_1B2E50(a1, a2);
  v4 = a2[1];
  if ( v4 )
  {
    v7 = v4 + 5;
    v6 = v4 + 6;
    v5 = *a2;
    --v4;
    if ( a2[2] >= v6 )
      goto LABEL_5;
LABEL_7:
    v9 = qvector_reserve();
    *a2 = v9;
    v5 = v9;
    goto LABEL_5;
  }
  v5 = *a2;
  v6 = 7;
  v7 = 6;
  if ( (unsigned __int64)a2[2] < 7 )
    goto LABEL_7;
LABEL_5:
  a2[1] = v6;
  *(_BYTE *)(v5 + v7) = 0;
  v8 = *a2 + v4;
  *(_DWORD *)v8 = 1296845889;
  *(_WORD *)(v8 + 4) = 19781;
  return (__int64 *)(v11 - __readfsqword(0x28u));
}

