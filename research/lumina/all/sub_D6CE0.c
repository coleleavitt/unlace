void __fastcall sub_D6CE0(__int64 a1, __int64 a2)
{
  __int64 *v5; // rsi
  __int64 v6; // rdi
  bool v7; // zf
  _QWORD *v8; // rbp
  int v9; // r13d
  __int64 v10; // rdi
  __int64 v11; // rdi
  int v12; // ecx
  void *v13; // rdi
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // r12
  _QWORD *v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // rbp

  v5 = nullptr;
  sub_D65F0(a2, 0);
  v6 = *(_QWORD *)(a2 + 16);
  if ( v6 )
  {
    sub_D64C0(v6, nullptr);
    v5 = *(__int64 **)(a2 + 16);
    if ( v5 )
      sub_C9250(a1, v5);
    *(_QWORD *)(a2 + 16) = 0;
  }
  sub_D6510(*(_QWORD *)(a2 + 24), v5);
  v7 = *(_BYTE *)(a2 + 91) == 0;
  *(_QWORD *)(a2 + 24) = 0;
  if ( !v7 )
  {
    v8 = (_QWORD *)(a2 + 96);
    v9 = 0;
    do
    {
      v14 = v9;
      v5 = *(__int64 **)(a2 + 104LL * v9 + 120);
      if ( v5 )
        sub_C9250(a1, v5);
      v15 = a2 + 104LL * v9;
      v16 = *(_QWORD *)(v15 + 136);
      if ( v16 )
      {
        sub_C91C0(v16, (__int64)v5);
      }
      else
      {
        v17 = *(_QWORD *)(v15 + 128);
        if ( v17 )
        {
          do
          {
            v18 = *(_QWORD *)(v17 + 8);
            sub_C91C0(v17, (__int64)v5);
            v17 = v18;
          }
          while ( v18 );
        }
      }
      v10 = *(_QWORD *)(a2 + 104LL * v9 + 168);
      if ( v10 )
        sub_C9230(v10, (__int64)v5);
      v11 = *(_QWORD *)(a2 + 104LL * v9 + 184);
      if ( v11 )
        sub_C9230(v11, (__int64)v5);
      v12 = (int)v8;
      *v8 = 0;
      v8[12] = 0;
      ++v9;
      v13 = (void *)((unsigned __int64)(v8 + 1) & 0xFFFFFFFFFFFFFFF8LL);
      v8 += 13;
      memset(v13, 0, 8LL * ((unsigned int)(v12 - (_DWORD)v13 + 104) >> 3));
      *(_QWORD *)(a2 + 104 * v14 + 112) = a2;
    }
    while ( *(unsigned __int8 *)(a2 + 91) > v9 );
  }
  if ( !*(_QWORD *)(a2 + 64) )
  {
    v20 = *(_QWORD *)(a2 + 56);
    if ( v20 )
    {
      do
      {
        v21 = *(_QWORD *)(v20 + 8);
        sub_C91C0(v20, (__int64)v5);
        v20 = v21;
      }
      while ( v21 );
    }
  }
  v19 = *(_QWORD **)(a2 + 48);
  *(_QWORD *)(a2 + 56) = 0;
  *(_DWORD *)(a2 + 72) = 0;
  *(_BYTE *)(a2 + 88) = 0;
  *(_DWORD *)(a2 + 80) = 0;
  *(_DWORD *)(a2 + 8) = 0;
  if ( v19 )
    sub_C9250(a1, v19);
  *(_QWORD *)(a2 + 48) = 0;
}
