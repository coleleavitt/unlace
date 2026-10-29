__int64 __fastcall std::_Deque_base<long>::_M_initialize_map(__m128i *a1, unsigned __int64 a2)
{
  __int64 v3; // r13
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  __int64 *v8; // r14
  __int64 *v9; // r13
  __int64 *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 result; // rax

  v3 = (a2 >> 6) + 1;
  v4 = (a2 >> 6) + 3;
  if ( v4 < 8 )
    v4 = 8;
  a1->m128i_i64[1] = v4;
  v5 = 8 * v4;
  v6 = (v4 - v3) >> 1;
  v7 = operator new(v5);
  v8 = (__int64 *)(v7 + 8 * v6);
  a1->m128i_i64[0] = v7;
  v9 = &v8[v3];
  if ( v8 < v9 )
  {
    v10 = (__int64 *)(v7 + 8 * v6);
    do
      *v10++ = operator new(0x200u);
    while ( v10 < v9 );
  }
  v11 = *v8;
  a1[2].m128i_i64[1] = (__int64)v8;
  a1[2].m128i_i64[0] = v11 + 512;
  a1[4].m128i_i64[1] = (__int64)(v9 - 1);
  v12 = *(v9 - 1);
  a1[1] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v11, (__m128i)(unsigned __int64)v11);
  result = v12 + 8 * (a2 & 0x3F);
  a1[3].m128i_i64[1] = v12;
  a1[4].m128i_i64[0] = v12 + 512;
  a1[3].m128i_i64[0] = result;
  return result;
}

