__m128i *__fastcall sub_5C320(_QWORD *a1, const __m128i *a2)
{
  __m128i *v2; // rbp
  __m128i *v3; // rbx
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  const __m128i *v8[7]; // [rsp+0h] [rbp-38h] BYREF

  v2 = (__m128i *)(a1 + 1);
  v3 = (__m128i *)a1[2];
  v8[1] = (const __m128i *)__readfsqword(0x28u);
  if ( !v3 )
    goto LABEL_9;
  do
  {
    while ( 1 )
    {
      v4 = sub_849A0(&v3[2], a2);
      v5 = v3[1].m128i_i64[0];
      v6 = v3[1].m128i_i64[1];
      if ( v4 < 0 )
        break;
      v2 = v3;
      v3 = (__m128i *)v3[1].m128i_i64[0];
      if ( !v5 )
        goto LABEL_6;
    }
    v3 = (__m128i *)v3[1].m128i_i64[1];
  }
  while ( v6 );
LABEL_6:
  if ( a1 + 1 == (_QWORD *)v2 || (int)sub_849A0(a2, &v2[2]) < 0 )
  {
LABEL_9:
    v8[0] = a2;
    v2 = sub_5C230(a1, v2, v8);
  }
  return v2 + 3;
}

