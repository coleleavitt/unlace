void __fastcall sub_20860(volatile signed __int32 **a1)
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
  __int64 v13; // rbx
  void *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rbp
  volatile signed __int32 *v17; // rax
  volatile signed __int32 *v18; // r12

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
        v6 = sub_1F330(v5, v2 + 16);
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
      if ( v12 && !_InterlockedSub(v12, 1u) )
      {
        v13 = *((_QWORD *)v12 + 3);
        while ( v13 )
        {
          sub_1F160(*(_QWORD **)(v13 + 24));
          v14 = (void *)v13;
          v13 = *(_QWORD *)(v13 + 16);
          operator delete(v14, 0x38u);
        }
        operator delete((void *)v12, 0x38u);
      }
    }
  }
  else
  {
    v15 = operator new(0x38u);
    *(_DWORD *)v15 = 0;
    v16 = v15;
    v15 += 16;
    *(_DWORD *)v15 = 0;
    *(_QWORD *)(v15 + 8) = 0;
    *(_QWORD *)(v16 + 32) = v15;
    *(_QWORD *)(v16 + 40) = v15;
    v17 = *a1;
    *(_QWORD *)(v16 + 48) = 0;
    if ( v17 )
    {
      if ( !_InterlockedSub(v17, 1u) )
      {
        v18 = *a1;
        if ( *a1 )
        {
          sub_1F160(*((_QWORD **)v18 + 3));
          operator delete((void *)v18, 0x38u);
        }
      }
    }
    *a1 = (volatile signed __int32 *)v16;
    if ( v16 )
      _InterlockedAdd((volatile signed __int32 *)v16, 1u);
  }
}

