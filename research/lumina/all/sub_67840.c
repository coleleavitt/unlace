unsigned __int64 __fastcall sub_67840(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdx
  __int64 v5; // rsi
  unsigned __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rax
  __m128i v11; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v12; // [rsp+18h] [rbp-20h]

  v2 = a1[1];
  v12 = __readfsqword(0x28u);
  v11 = 0;
  if ( a2 < v2 )
  {
LABEL_9:
    a1[1] = a2;
    return v12 - __readfsqword(0x28u);
  }
  if ( v2 < a2 )
  {
    v5 = *a1;
    v6 = a1[2];
    if ( (unsigned __int64)&v11 < *a1 || (unsigned __int64)&v11 >= v5 + 16 * v6 )
    {
      if ( v6 >= a2 || (v9 = sub_1987B0(a1, v5, a2, 16), v2 = a1[1], *a1 = v9, v5 = v9, v2 < a2) )
      {
        v7 = 16 * v2;
        while ( 1 )
        {
          *(__m128i *)(v5 + v7) = _mm_load_si128(&v11);
          v7 += 16;
          if ( v7 == 16 * a2 )
            break;
          v5 = *a1;
        }
      }
    }
    else if ( v6 >= a2 || (v10 = sub_1987B0(a1, v5, a2, 16), v2 = a1[1], *a1 = v10, v5 = v10, v2 < a2) )
    {
      v8 = 16 * v2;
      while ( 1 )
      {
        *(_OWORD *)(v5 + v8) = 0;
        v8 += 16;
        if ( 16 * a2 == v8 )
          break;
        v5 = *a1;
      }
    }
    goto LABEL_9;
  }
  return v12 - __readfsqword(0x28u);
}
