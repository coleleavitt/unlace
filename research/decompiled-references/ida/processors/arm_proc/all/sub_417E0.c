__int64 sub_417E0()
{
  __m128i v0; // xmm0
  __int64 v1; // rbp
  __int64 v2; // rdx
  __int64 i; // rbx
  _QWORD *v4; // rax
  __int64 v6; // [rsp+20h] [rbp-D8h]
  __m128i v7; // [rsp+A0h] [rbp-58h] BYREF
  unsigned __int64 v8; // [rsp+B8h] [rbp-40h]

  v8 = __readfsqword(0x28u);
  v7 = 0;
  v6 = qvector_reserve();
  *(_QWORD *)v6 = 0;
  *(_OWORD *)(v6 + 8) = 0;
  v0 = _mm_load_si128(&v7);
  *(_WORD *)(v6 + 24) = 123;
  *(_QWORD *)(v6 + 32) = 0;
  *(_BYTE *)(v6 + 40) = 0;
  *(__m128i *)(v6 + 48) = v0;
  if ( (unsigned int)parse_json() )
    v1 = qerrstr();
  else
    v1 = 2;
  jvalue_t_clear();
  v2 = v6;
  if ( v6 )
  {
    for ( i = 0; i != 1; ++i )
    {
      v4 = (_QWORD *)(v2 + (i << 6));
      if ( *v4 )
      {
        v4[1] = 0;
        qfree();
        v2 = v6;
      }
    }
    qfree();
  }
  return v1;
}

