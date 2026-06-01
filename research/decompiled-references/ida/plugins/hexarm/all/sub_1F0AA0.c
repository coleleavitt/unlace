__int64 __fastcall sub_1F0AA0(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rbx
  __int64 v9; // [rsp+0h] [rbp-48h] BYREF
  __m128i si128; // [rsp+8h] [rbp-40h]
  unsigned __int64 v11; // [rsp+18h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  v9 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_41F900);
  sub_32FA90(a2, &v9);
  v4 = a1[1];
  v5 = *a1;
  si128.m128i_i64[1] = a3;
  v6 = v5;
  if ( !(104 * v4) )
    goto LABEL_11;
  while ( 1 )
  {
    if ( *(_QWORD *)(v6 + 16) != a3 )
      goto LABEL_3;
    if ( sub_1C4C20(v6, (__int64)&v9) )
      break;
    v5 = *a1;
    v4 = a1[1];
LABEL_3:
    v6 += 104;
    if ( v6 == v5 + 104 * v4 )
      goto LABEL_11;
    a3 = si128.m128i_i64[1];
  }
  if ( !v6 )
  {
LABEL_11:
    v7 = -1;
    goto LABEL_10;
  }
  v7 = 0x4EC4EC4EC4EC4EC5LL * ((v6 - *a1) >> 3);
LABEL_10:
  cleanup_argloc();
  return v7;
}

