__int64 __fastcall sub_25590(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4, __int64 a5)
{
  __int64 v7; // r9
  unsigned __int64 v8; // r12
  __int64 v9; // rax
  unsigned int *v11; // rdi
  unsigned __int64 v12; // rdx
  unsigned int *v13; // rdx
  __int64 v14; // rsi
  unsigned int v15; // eax
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rcx
  unsigned int v19[15]; // [rsp+Ch] [rbp-3Ch] BYREF

  v7 = *(_QWORD *)(a1 + 128);
  v19[0] = a3;
  sub_254B0(0, v19, 8u, a5, a2, v7);
  v8 = v19[0];
  *(_QWORD *)(a4 + 8) = 0;
  if ( v8 )
  {
    v11 = *(unsigned int **)a4;
    v12 = v8;
    if ( *(_QWORD *)(a4 + 16) < v8 )
    {
      v17 = qvector_reserve();
      v18 = *(_QWORD *)(a4 + 8);
      *(_QWORD *)a4 = v17;
      v12 = v8 - v18;
      v11 = (unsigned int *)(v17 + 8 * v18);
    }
    memset(v11, 0, 8 * v12);
    *(_QWORD *)(a4 + 8) = v8;
  }
  qlseek();
  v9 = qlread();
  if ( v9 == 8 * v8 )
  {
    if ( *(_BYTE *)(a1 + 160) )
    {
      v13 = *(unsigned int **)a4;
      v14 = *(_QWORD *)a4 + v9;
      if ( (_DWORD)v8 )
      {
        do
        {
          v16 = _byteswap_ulong(*v13);
          if ( v16 >= 0 )
          {
            v15 = _byteswap_uint64(*(_QWORD *)v13);
            *v13 = _byteswap_ulong(*(_QWORD *)v13);
            v13[1] = v13[1] & 0xFF000000 | (v15 >> 8);
            *((_BYTE *)v13 + 7) = (16 * v15) | (8 * ((v15 & 0x10) != 0)) | ((v15 & 0x80) != 0) | (2 * ((v15 >> 5) & 3));
          }
          else
          {
            *v13 = v16;
            v13[1] = _byteswap_ulong(v13[1]);
          }
          v13 += 2;
        }
        while ( (unsigned int *)v14 != v13 );
      }
    }
    return 1;
  }
  else
  {
    *(_QWORD *)(a4 + 8) = 0;
    return 0;
  }
}

