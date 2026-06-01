__int64 sub_40C80()
{
  __m128i *v0; // rax
  __m128i v1; // xmm0
  __int64 v2; // r14
  __int64 v3; // rdx
  __int64 v4; // r12
  __int64 v5; // rbx
  _QWORD *v6; // rax
  __int64 v8; // [rsp+70h] [rbp-130h]
  __int128 v9; // [rsp+78h] [rbp-128h]
  __m128i v10; // [rsp+130h] [rbp-70h] BYREF
  unsigned __int64 v11; // [rsp+168h] [rbp-38h]

  v11 = __readfsqword(0x28u);
  v9 = 0;
  v10 = 0;
  v8 = qvector_reserve();
  v0 = (__m128i *)v8;
  *(_OWORD *)(v8 + 8) = 0;
  v1 = _mm_load_si128(&v10);
  v0->m128i_i64[0] = 0;
  v0[1].m128i_i16[4] = 123;
  v0[2].m128i_i64[0] = 0;
  v0[2].m128i_i8[8] = 0;
  v0[3] = v1;
  *(_QWORD *)&v9 = v9 + 1;
  if ( (unsigned int)parse_json() )
    v2 = qerrstr();
  else
    v2 = 2;
  jvalue_t_clear();
  v3 = v8;
  if ( v8 )
  {
    v4 = v9;
    if ( (_QWORD)v9 )
    {
      v5 = 0;
      do
      {
        v6 = (_QWORD *)(v3 + (v5 << 6));
        if ( *v6 )
        {
          v6[1] = 0;
          qfree();
          v3 = v8;
        }
        ++v5;
      }
      while ( v4 != v5 );
    }
    *(_QWORD *)&v9 = 0;
    qfree();
  }
  return v2;
}

