__int64 __fastcall sub_6F2E0(__int64 a1)
{
  __m128i *v2; // rbp
  __int64 v3; // rbx
  void *v4; // rdi
  __m128i si128; // xmm0
  _QWORD *v6; // r13
  __int64 v7; // r14
  __int64 v8; // rbp
  __int64 i; // rbx
  _QWORD *v10; // rax
  __int64 result; // rax

  v2 = *(__m128i **)(a1 + 5312);
  v3 = v2[1].m128i_i64[1];
  while ( v3 )
  {
    sub_6AAA0(*(_QWORD **)(v3 + 24));
    v4 = (void *)v3;
    v3 = *(_QWORD *)(v3 + 16);
    operator delete(v4, 0x1E8u);
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_960A0);
  v2[1].m128i_i64[1] = 0;
  v2[2].m128i_i64[0] = (__int64)v2[1].m128i_i64;
  v2[2].m128i_i64[1] = (__int64)v2[1].m128i_i64;
  v2[3] = si128;
  v6 = *(_QWORD **)(a1 + 5304);
  v7 = v6[8];
  v6[2] = 0;
  v6[5] = 0;
  if ( v7 )
  {
    v8 = 0;
    for ( i = 0; i != v7; ++i )
    {
      v10 = (_QWORD *)(v8 + v6[7]);
      if ( *v10 )
      {
        v10[1] = 0;
        qfree();
      }
      v8 += 56;
    }
  }
  v6[8] = 0;
  result = netnode_altval();
  *(_QWORD *)(a1 + 5344) = -1;
  *(_OWORD *)(a1 + 5328) = -1;
  *(_DWORD *)(a1 + 4452) = result;
  *(_QWORD *)(a1 + 5624) = 0;
  *(_OWORD *)(a1 + 5512) = 0;
  *(_OWORD *)(a1 + 5528) = 0;
  *(_OWORD *)(a1 + 5544) = 0;
  *(_OWORD *)(a1 + 5560) = 0;
  *(_OWORD *)(a1 + 5576) = 0;
  *(_OWORD *)(a1 + 5592) = 0;
  *(_OWORD *)(a1 + 5608) = 0;
  return result;
}

