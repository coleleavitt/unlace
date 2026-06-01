void __fastcall sub_2AB90(__int64 *a1, const __m128i *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rax
  __int64 v8; // r12
  __m128i *v9; // rbp
  __int64 v10; // rdi
  unsigned __int64 v11; // rdx
  __int64 v12; // rdx
  __m128i v13; // [rsp+0h] [rbp-38h]

  v7 = *a1;
  v8 = a1[2];
  if ( *a1 && *(int *)v7 <= 1 )
  {
    v10 = a1[1];
    v11 = (v7 + 31) & 0xFFFFFFFFFFFFFFF0LL;
    if ( *(_QWORD *)(v7 + 8) - ((__int64)(v10 - v11) >> 4) != v8 )
    {
      *(__m128i *)(v10 + 16 * v8) = _mm_loadu_si128(a2);
      ++a1[2];
      goto LABEL_6;
    }
    if ( v8 )
    {
      v13 = *a2;
      sub_2AA30(a1, 0, 1, nullptr, nullptr, a6);
      v9 = (__m128i *)(a1[1] + 16 * v8);
      goto LABEL_12;
    }
    if ( v10 != v11 )
    {
      *(__m128i *)(v10 - 16) = _mm_loadu_si128(a2);
      a1[1] -= 16;
      ++a1[2];
      goto LABEL_6;
    }
    v13 = *a2;
  }
  else
  {
    v13 = *a2;
  }
  sub_2AA30(a1, 0, 1, nullptr, nullptr, a6);
  v9 = (__m128i *)(a1[1] + 16 * v8);
LABEL_12:
  v12 = a1[2];
  if ( v8 < v12 )
  {
    memmove(&v9[1], v9, 16 * (v12 - v8));
    v12 = a1[2];
  }
  a1[2] = v12 + 1;
  *v9 = v13;
LABEL_6:
  if ( !*a1 || *(int *)*a1 > 1 )
    sub_29720((__int64)a1, 0, 0, 0, a5, a6);
}

