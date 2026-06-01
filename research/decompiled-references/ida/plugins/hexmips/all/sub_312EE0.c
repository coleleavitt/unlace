__int64 __fastcall sub_312EE0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __m128i *v5; // r12
  __int64 v6; // rdi
  __int64 v7; // rdx
  unsigned int v8; // r14d
  __m128i *v9; // rdx
  __int64 v11[7]; // [rsp+0h] [rbp-38h] BYREF

  v11[1] = __readfsqword(0x28u);
  v2 = a1[1];
  if ( !v2 )
    return 0;
  v3 = *(_QWORD *)(a2 + 8);
  if ( !v3 )
    return 0;
  v5 = *(__m128i **)a2;
  v6 = *a1;
  if ( v3 != 1 )
  {
    v11[0] = v6;
    if ( 16 * v3 )
      goto LABEL_5;
    return 0;
  }
  if ( v5->m128i_i64[0] || v5->m128i_i64[1] )
  {
    v11[0] = v6;
LABEL_5:
    v7 = v6;
    v8 = 0;
    while ( v6 != v7 + 16 * v2 )
    {
      v9 = v5++;
      v8 |= sub_312C00(a1, v11, v9);
      if ( v5 == (__m128i *)(*(_QWORD *)a2 + 16LL * *(_QWORD *)(a2 + 8)) )
        break;
      v6 = v11[0];
      v7 = *a1;
      v2 = a1[1];
    }
    return v8;
  }
  if ( v6 )
  {
    a1[1] = 0;
    qfree();
    *a1 = 0;
    a1[2] = 0;
  }
  return 1;
}

