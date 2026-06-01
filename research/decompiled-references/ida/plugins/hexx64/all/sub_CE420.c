void __fastcall sub_CE420(unsigned __int64 a1, __int64 **a2, __int64 a3, __int64 a4, double a5, __m128 a6)
{
  __int64 **v6; // r15
  __int64 **v7; // r14
  __int64 *v8; // rbp
  __int64 *v9; // r12
  __int64 i; // rdx
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rax

  v6 = &a2[a3];
  v7 = a2;
  v8 = *(__int64 **)(a1 + 768);
  do
  {
    v9 = *v7;
    for ( i = (*v7)[1]; i; i = v9[1] )
    {
      v11 = sub_8ED50(a1, *v9, i, a4);
      if ( (*(_BYTE *)v11 & 4) == 0 )
      {
        if ( !under_debugger )
          sub_383060(0xC378u, a5);
        BUG();
      }
      *(_QWORD *)(v11 + 1920) = v9[2];
      sub_CE1C0(v11, a5);
      sub_322CE0(v11, 0, a5, a6);
      v12 = v8[1];
      v13 = *v8;
      if ( v8[2] < (unsigned __int64)(v12 + 1) )
      {
        v14 = qvector_reserve((__int64)v8, v13, v12 + 1, 8);
        *v8 = v14;
        v13 = v14;
        v12 = v8[1];
      }
      v9 += 3;
      *(_QWORD *)(v13 + 8 * v12) = v11;
      ++v8[1];
    }
    ++v7;
  }
  while ( v7 != v6 );
}

