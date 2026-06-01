__int64 __fastcall sub_133D0(__int64 a1)
{
  int v2; // eax
  unsigned __int32 v3; // eax
  int v4; // r12d
  unsigned __int64 v6; // rbp
  unsigned int v7; // eax
  __int64 v8; // r15
  unsigned __int64 v9; // rcx
  __int64 v10; // r14
  __int64 v11; // rcx
  unsigned int v12; // esi
  unsigned __int64 v13; // rdi
  unsigned int *v14; // rax
  unsigned int v15; // edx
  unsigned int v16; // edi
  unsigned int v17; // eax
  __int64 v18; // rsi
  __int64 v19; // rax

  qlseek();
  if ( qlread() != 8 )
    return 0;
  v2 = *(_DWORD *)(a1 + 60);
  if ( v2 == -1095041334 )
  {
    v17 = *(_DWORD *)(a1 + 64);
    *(_DWORD *)(a1 + 60) = -889275714;
    v4 = 2;
    v3 = _byteswap_ulong(v17);
    *(_DWORD *)(a1 + 64) = v3;
  }
  else
  {
    if ( v2 != -889275714 )
      return 0;
    v3 = *(_DWORD *)(a1 + 64);
    v4 = 1;
  }
  if ( v3 > 0x10 )
    return 0;
  v6 = qlsize();
  v7 = *(_DWORD *)(a1 + 64);
  v8 = 20 * v7;
  if ( v8 + 8 >= v6 )
    return 0;
  v9 = *(_QWORD *)(a1 + 80);
  v10 = v7;
  if ( v9 < v7 )
  {
    v18 = *(_QWORD *)(a1 + 72);
    if ( *(_QWORD *)(a1 + 88) < (unsigned __int64)v7 )
    {
      v19 = qvector_reserve();
      v9 = *(_QWORD *)(a1 + 80);
      *(_QWORD *)(a1 + 72) = v19;
      v18 = v19;
    }
    memset((void *)(v18 + 20 * v9), 0, 20 * (v10 - v9));
    *(_QWORD *)(a1 + 80) = v10;
  }
  else if ( v7 != v9 )
  {
    *(_QWORD *)(a1 + 80) = v7;
  }
  if ( v8 != qlread() )
  {
LABEL_22:
    if ( *(_QWORD *)(a1 + 72) )
    {
      *(_QWORD *)(a1 + 80) = 0;
      qfree();
      *(_QWORD *)(a1 + 72) = 0;
      *(_QWORD *)(a1 + 88) = 0;
    }
    return 0;
  }
  v11 = 0;
  v12 = 0;
  if ( *(_DWORD *)(a1 + 64) )
  {
    while ( 1 )
    {
      v14 = (unsigned int *)(v11 + *(_QWORD *)(a1 + 72));
      v15 = v14[3];
      if ( v4 == 2 )
      {
        v16 = *v14;
        v15 = _byteswap_ulong(v15);
        v14[3] = v15;
        *v14 = _byteswap_ulong(v16);
        v14[1] = _byteswap_ulong(v14[1]);
        v14[2] = _byteswap_ulong(v14[2]);
        v14[4] = _byteswap_ulong(v14[4]);
      }
      if ( v15 <= 0x1C )
        break;
      if ( v15 >= v6 )
        break;
      v13 = v14[2];
      if ( v13 < v8 + 8 || v6 < v15 + (unsigned int)v13 )
        break;
      ++v12;
      v11 += 20;
      if ( v12 >= *(_DWORD *)(a1 + 64) )
        return 1;
    }
    goto LABEL_22;
  }
  return 1;
}

