__int64 __fastcall sub_14730(__int64 a1, __m128i *a2)
{
  char *v2; // rax
  bool v3; // zf
  char v4; // al
  __int64 v5; // rdi
  __m128i v6; // xmm0
  __int64 v8; // [rsp+0h] [rbp-28h] BYREF
  __m128i v9; // [rsp+8h] [rbp-20h] BYREF
  unsigned __int64 v10; // [rsp+18h] [rbp-10h]

  v2 = (char *)s1;
  v3 = *(_QWORD *)(a1 + 16) == 0;
  v10 = __readfsqword(0x28u);
  v8 = 0;
  v9 = 0;
  if ( !v3 )
    v2 = *(char **)(a1 + 8);
  v4 = sub_14500(v2, (__int64)&v8);
  v5 = v8;
  if ( v4 )
  {
    v6 = _mm_loadu_si128(&v9);
    a2->m128i_i8[0] = 7;
    a2->m128i_i64[1] = v5;
    a2[1] = v6;
  }
  else if ( v8 )
  {
    v9.m128i_i64[0] = 0;
    qfree();
  }
  return 0;
}

