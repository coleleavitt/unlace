__int64 __fastcall sub_1F06E0(__int64 *a1, __int64 *a2, __int64 a3)
{
  __m128i si128; // xmm0
  __int64 v4; // r12
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rbx
  __int64 v10; // [rsp+0h] [rbp-48h] BYREF
  __m128i v11; // [rsp+8h] [rbp-40h]
  unsigned __int64 v12; // [rsp+18h] [rbp-30h]

  si128 = _mm_load_si128((const __m128i *)&xmmword_424800);
  v12 = __readfsqword(0x28u);
  v4 = a3;
  v10 = 0;
  v11 = si128;
  sub_32F770(a2, &v10, a3);
  v5 = a1[1];
  v6 = *a1;
  v11.m128i_i64[1] = v4;
  v7 = v6;
  if ( !(104 * v5) )
    goto LABEL_11;
  while ( 1 )
  {
    if ( *(_QWORD *)(v7 + 16) != v4 )
      goto LABEL_3;
    if ( sub_1C51E0(v7, (__int64)&v10, *(double *)si128.m128i_i64) )
      break;
    v6 = *a1;
    v5 = a1[1];
LABEL_3:
    v7 += 104;
    if ( v7 == v6 + 104 * v5 )
      goto LABEL_11;
    v4 = v11.m128i_i64[1];
  }
  if ( !v7 )
  {
LABEL_11:
    v8 = -1;
    goto LABEL_10;
  }
  v8 = 0x4EC4EC4EC4EC4EC5LL * ((v7 - *a1) >> 3);
LABEL_10:
  cleanup_argloc();
  return v8;
}

