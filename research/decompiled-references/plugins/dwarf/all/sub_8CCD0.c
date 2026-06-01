__int64 __fastcall sub_8CCD0(__int64 a1, unsigned int a2, unsigned int a3, __int64 *a4, __int64 a5)
{
  __int64 v7; // r9
  unsigned __int64 v8; // r12
  int v9; // r13d
  __int64 v10; // r12
  __int64 v11; // rax
  void *v13; // rdi
  unsigned __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rsi
  unsigned int v17; // eax
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // rcx
  unsigned int v21[15]; // [rsp+Ch] [rbp-3Ch] BYREF

  v7 = *(_QWORD *)(a1 + 128);
  v21[0] = a3;
  sub_8CBF0(0, v21, 8u, a5, a2, v7);
  v8 = v21[0];
  a4[1] = 0;
  v9 = v8;
  if ( v8 )
  {
    v13 = (void *)*a4;
    v14 = v8;
    if ( a4[2] < v8 )
    {
      v19 = qvector_reserve(a4, *a4, v8, 8);
      v20 = a4[1];
      *a4 = v19;
      v14 = v8 - v20;
      v13 = (void *)(v19 + 8 * v20);
    }
    memset(v13, 0, 8 * v14);
    a4[1] = v8;
  }
  v10 = 8 * v8;
  qlseek(*(_QWORD *)(a1 + 48), *(_QWORD *)(a1 + 120) + a2 + *(_QWORD *)(a1 + 96), 0);
  v11 = qlread(*(_QWORD *)(a1 + 48), *a4, v10);
  if ( v11 == v10 )
  {
    if ( *(_BYTE *)(a1 + 160) )
    {
      v15 = *a4;
      v16 = *a4 + v11;
      if ( v9 )
      {
        do
        {
          v18 = _byteswap_ulong(*(_DWORD *)v15);
          if ( v18 >= 0 )
          {
            v17 = _byteswap_uint64(*(_QWORD *)v15);
            *(_DWORD *)v15 = _byteswap_ulong(*(_QWORD *)v15);
            *(_DWORD *)(v15 + 4) = *(_DWORD *)(v15 + 4) & 0xFF000000 | (v17 >> 8);
            *(_BYTE *)(v15 + 7) = (16 * v17) | (8 * ((v17 & 0x10) != 0)) | ((v17 & 0x80) != 0) | (2 * ((v17 >> 5) & 3));
          }
          else
          {
            *(_DWORD *)v15 = v18;
            *(_DWORD *)(v15 + 4) = _byteswap_ulong(*(_DWORD *)(v15 + 4));
          }
          v15 += 8;
        }
        while ( v16 != v15 );
      }
    }
    return 1;
  }
  else
  {
    a4[1] = 0;
    return 0;
  }
}
