__int64 __fastcall sub_5C500(__m128i *a1, __int64 a2, __int64 a3)
{
  __m128i *v3; // rbp
  __int64 v4; // rax
  __m128i *v5; // rbx
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __m128i *v9; // rbx
  const __m128i *v11; // [rsp+8h] [rbp-60h] BYREF
  _QWORD v12[11]; // [rsp+10h] [rbp-58h] BYREF

  v3 = a1 + 1;
  v4 = *(_QWORD *)(a3 + 8);
  v5 = (__m128i *)a1[1].m128i_i64[1];
  v12[3] = __readfsqword(0x28u);
  v12[0] = 0x800000000000000ALL;
  v12[1] = v4;
  if ( !v5 )
    goto LABEL_12;
  do
  {
    while ( 1 )
    {
      v6 = sub_849A0(&v5[2], v12);
      v7 = v5[1].m128i_i64[0];
      v8 = v5[1].m128i_i64[1];
      if ( v6 < 0 )
        break;
      v3 = v5;
      v5 = (__m128i *)v5[1].m128i_i64[0];
      if ( !v7 )
        goto LABEL_6;
    }
    v5 = (__m128i *)v5[1].m128i_i64[1];
  }
  while ( v8 );
LABEL_6:
  if ( &a1[1] == v3 || (int)sub_849A0(v12, &v3[2]) < 0 )
  {
LABEL_12:
    v11 = (const __m128i *)v12;
    v9 = sub_5C230(&a1->m128i_i64[1], v3, &v11) + 3;
    if ( v9->m128i_i8[0] )
      goto LABEL_9;
  }
  else
  {
    v9 = v3 + 3;
    if ( v3[3].m128i_i8[0] )
      goto LABEL_9;
  }
  create_tinfo(v9, 50, 7, 0);
LABEL_9:
  if ( a2 )
    copy_tinfo_t(a2, v9);
  return v12[0];
}
