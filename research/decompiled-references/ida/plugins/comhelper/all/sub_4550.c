unsigned __int64 __fastcall sub_4550(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // r12
  __int64 v3; // rax
  __m128i *v4; // r12
  __int64 v5; // rbx
  __m128i *v6; // rbp
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  __m128i *v9; // rbx
  __int64 v10; // rdi
  unsigned __int64 v12; // [rsp+28h] [rbp-40h]

  v1 = 0;
  v2 = *(_QWORD *)(a1 + 120);
  v12 = __readfsqword(0x28u);
  if ( v2 )
  {
    do
    {
      v3 = *(_QWORD *)(a1 + 112) + 40 * v1;
      if ( *(_QWORD *)(v3 + 16) )
      {
        *(_QWORD *)(v3 + 24) = 0;
        qfree();
      }
      ++v1;
    }
    while ( v2 != v1 );
  }
  *(_QWORD *)(a1 + 120) = 0;
  read_ioports();
  v4 = *(__m128i **)(a1 + 112);
  v5 = 40LL * *(_QWORD *)(a1 + 120);
  v6 = (__m128i *)((char *)v4 + v5);
  if ( v4 != (__m128i *)&v4->m128i_i8[v5] )
  {
    v7 = 0xCCCCCCCCCCCCCCCDLL * (v5 >> 3);
    if ( v7 )
    {
      _BitScanReverse64(&v8, v7);
      sub_3EE0((__int64)v4, (unsigned __int64)v6, 2LL * (int)v8);
      if ( v5 > 640 )
      {
        v9 = v4 + 40;
        sub_2CB0(v4, v4 + 40);
        do
        {
          v10 = (__int64)v9;
          v9 = (__m128i *)((char *)v9 + 40);
          sub_2B80(v10);
        }
        while ( v6 != v9 );
        return v12 - __readfsqword(0x28u);
      }
    }
    else
    {
      sub_3EE0((__int64)v4, (unsigned __int64)v6, -2);
    }
    sub_2CB0(v4, v6);
  }
  return v12 - __readfsqword(0x28u);
}

