__int64 sub_417E0()
{
  __int64 v0; // rax
  __m128i v1; // xmm0
  __int64 v2; // rbp
  __int64 v3; // rdx
  __int64 v4; // r12
  __int64 v5; // rbx
  __int64 *v6; // rax
  __int64 v7; // rdi
  __int64 v9; // [rsp+20h] [rbp-D8h] BYREF
  __int128 v10; // [rsp+28h] [rbp-D0h]
  __m128i v11; // [rsp+A0h] [rbp-58h] BYREF
  unsigned __int64 v12; // [rsp+B8h] [rbp-40h]

  v12 = __readfsqword(0x28u);
  v10 = 0;
  v9 = 0;
  v11 = 0;
  v9 = qvector_reserve((__int64)&v9, 0, 1, 64);
  v0 = ((_QWORD)v10 << 6) + v9;
  *(_QWORD *)v0 = 0;
  *(_OWORD *)(v0 + 8) = 0;
  v1 = _mm_load_si128(&v11);
  *(_WORD *)(v0 + 24) = 123;
  *(_QWORD *)(v0 + 32) = 0;
  *(_BYTE *)(v0 + 40) = 0;
  *(__m128i *)(v0 + 48) = v1;
  *(_QWORD *)&v10 = v10 + 1;
  if ( (unsigned int)parse_json() )
    v2 = qerrstr();
  else
    v2 = 2;
  jvalue_t_clear();
  v3 = v9;
  if ( v9 )
  {
    v4 = v10;
    if ( (_QWORD)v10 )
    {
      v5 = 0;
      do
      {
        v6 = (__int64 *)(v3 + (v5 << 6));
        v7 = *v6;
        if ( *v6 )
        {
          v6[1] = 0;
          qfree(v7);
          v3 = v9;
        }
        ++v5;
      }
      while ( v4 != v5 );
    }
    *(_QWORD *)&v10 = 0;
    qfree(v3);
  }
  return v2;
}
