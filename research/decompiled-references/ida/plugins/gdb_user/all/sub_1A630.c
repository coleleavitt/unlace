__int64 __fastcall sub_1A630(__int64 a1, __m128i *a2)
{
  __int64 v2; // rax
  const char *v3; // rdx
  char v4; // al
  __int64 v5; // rdi
  __m128i v6; // xmm0
  __int64 v8; // [rsp+0h] [rbp-38h] BYREF
  __m128i v9; // [rsp+8h] [rbp-30h] BYREF
  unsigned __int64 v10; // [rsp+18h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  v8 = 0;
  v9 = 0;
  v2 = sub_F0E0();
  v3 = s;
  if ( *(_QWORD *)(a1 + 16) )
    v3 = *(const char **)(a1 + 8);
  v4 = sub_3AB30(*(_QWORD *)(v2 + 864), &v8, v3);
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

