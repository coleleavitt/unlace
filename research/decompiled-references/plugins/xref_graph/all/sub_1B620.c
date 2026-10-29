void __fastcall sub_1B620(volatile signed __int32 **a1)
{
  __int64 v2; // rax
  volatile signed __int32 *v3; // r12
  __int64 v4; // rbp
  const __m128i *v5; // rdi
  __m128i *v6; // rax
  __m128i *v7; // rdx
  __m128i *v8; // rcx
  __m128i *v9; // rdx
  __m128i *v10; // rcx
  __int64 v11; // rdx
  volatile signed __int32 *v12; // r12
  __int64 v13; // rax
  __int64 v14; // rbp
  volatile signed __int32 *v15; // rax
  volatile signed __int32 *v16; // r12

  if ( *a1 )
  {
    if ( **a1 != 1 )
    {
      v2 = operator new(0x38u);
      v3 = *a1;
      *(_DWORD *)v2 = 0;
      v4 = v2;
      *(_DWORD *)(v2 + 16) = 0;
      *(_QWORD *)(v2 + 24) = 0;
      *(_QWORD *)(v2 + 32) = v2 + 16;
      *(_QWORD *)(v2 + 40) = v2 + 16;
      *(_QWORD *)(v2 + 48) = 0;
      v5 = *((const __m128i **)v3 + 3);
      if ( v5 )
      {
        v6 = sub_1A5C0(v5, v2 + 16);
        v7 = v6;
        do
        {
          v8 = v7;
          v7 = (__m128i *)v7[1].m128i_i64[0];
        }
        while ( v7 );
        *(_QWORD *)(v4 + 32) = v8;
        v9 = v6;
        do
        {
          v10 = v9;
          v9 = (__m128i *)v9[1].m128i_i64[1];
        }
        while ( v9 );
        *(_QWORD *)(v4 + 40) = v10;
        v11 = *((_QWORD *)v3 + 6);
        *(_QWORD *)(v4 + 24) = v6;
        *(_QWORD *)(v4 + 48) = v11;
      }
      if ( v4 )
        _InterlockedAdd((volatile signed __int32 *)v4, 1u);
      v12 = *a1;
      *a1 = (volatile signed __int32 *)v4;
      if ( v12 )
      {
        if ( !_InterlockedSub(v12, 1u) )
        {
          sub_1A3F0(*((_QWORD **)v12 + 3));
          operator delete((void *)v12, 0x38u);
        }
      }
    }
  }
  else
  {
    v13 = operator new(0x38u);
    *(_DWORD *)v13 = 0;
    v14 = v13;
    v13 += 16;
    *(_DWORD *)v13 = 0;
    *(_QWORD *)(v13 + 8) = 0;
    *(_QWORD *)(v14 + 32) = v13;
    *(_QWORD *)(v14 + 40) = v13;
    v15 = *a1;
    *(_QWORD *)(v14 + 48) = 0;
    if ( v15 )
    {
      if ( !_InterlockedSub(v15, 1u) )
      {
        v16 = *a1;
        if ( *a1 )
        {
          sub_1A3F0(*((_QWORD **)v16 + 3));
          operator delete((void *)v16, 0x38u);
        }
      }
    }
    *a1 = (volatile signed __int32 *)v14;
    if ( v14 )
      _InterlockedAdd((volatile signed __int32 *)v14, 1u);
  }
}
