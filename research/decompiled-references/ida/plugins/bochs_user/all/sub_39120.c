__int64 __fastcall sub_39120(__int64 a1, const void *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __m128i *v7; // rbx
  __m128i *v8; // r14
  __int64 v9; // rbp
  size_t v10; // rax
  size_t v11; // rbx
  void *v13; // rdi
  size_t v14; // r15
  __int64 v15; // rax
  __int64 v17; // [rsp+10h] [rbp-98h] BYREF
  __int64 v18; // [rsp+18h] [rbp-90h] BYREF
  __int64 v19; // [rsp+20h] [rbp-88h] BYREF
  __int128 v20; // [rsp+28h] [rbp-80h]
  __int128 v21; // [rsp+38h] [rbp-70h]
  __m128i v22; // [rsp+48h] [rbp-60h] BYREF
  __int64 v23; // [rsp+58h] [rbp-50h]
  unsigned __int64 v24; // [rsp+68h] [rbp-40h]

  v6 = *(_QWORD *)(a1 + 80);
  v24 = __readfsqword(0x28u);
  v22 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v22, (__m128i)(unsigned __int64)&v22);
  v19 = 0;
  v23 = 0;
  v17 = v6 + 636;
  v20 = 0;
  v21 = 0;
  sub_38000(&v18, v6 + 636, &v17, (__int64)&v19);
  v7 = (__m128i *)v22.m128i_i64[0];
  for ( *(_QWORD *)(a1 + 72) = v18 + 16; v7 != &v22; --v23 )
  {
    v8 = v7;
    v7 = (__m128i *)v7->m128i_i64[0];
    *(_QWORD *)v8->m128i_i64[1] = v7;
    v7->m128i_i64[1] = v8->m128i_i64[1];
    if ( v8[1].m128i_i64[0] )
    {
      v8[1].m128i_i64[1] = 0;
      qfree();
    }
    qfree();
  }
  if ( v19 )
  {
    *(_QWORD *)&v20 = 0;
    qfree();
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 72) + 24LL) = a3;
  v9 = *(_QWORD *)(a1 + 72);
  if ( a2 && (v10 = strlen((const char *)a2), (v11 = v10) != 0) )
  {
    v13 = *(void **)v9;
    v14 = v10 + 1;
    if ( *(_QWORD *)(v9 + 16) < v10 + 1 )
    {
      v15 = qvector_reserve();
      *(_QWORD *)v9 = v15;
      v13 = (void *)v15;
    }
    *(_QWORD *)(v9 + 8) = v14;
    memmove(v13, a2, v11);
    *(_BYTE *)(*(_QWORD *)v9 + v11) = 0;
  }
  else
  {
    *(_QWORD *)(v9 + 8) = 0;
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 72) + 32LL) = a4;
  return 0;
}

