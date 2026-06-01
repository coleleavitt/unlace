__int64 __fastcall sub_8530(__int64 a1)
{
  int v2; // eax
  unsigned __int32 v3; // eax
  int v4; // r12d
  unsigned __int64 v6; // rbp
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // eax
  __int64 v10; // r15
  unsigned __int64 v11; // rcx
  __int64 v12; // r14
  __int64 v13; // rcx
  unsigned int v14; // esi
  unsigned __int64 v15; // rdi
  unsigned int *v16; // rax
  unsigned int v17; // edx
  unsigned int v18; // edi
  unsigned int v19; // eax
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // rax

  qlseek(*(_QWORD *)(a1 + 48), *(_QWORD *)(a1 + 96), 0);
  if ( qlread(*(_QWORD *)(a1 + 48), a1 + 60, 8) != 8 )
    return 0;
  v2 = *(_DWORD *)(a1 + 60);
  if ( v2 == -1095041334 )
  {
    v19 = *(_DWORD *)(a1 + 64);
    *(_DWORD *)(a1 + 60) = -889275714;
    v4 = 2;
    v3 = _byteswap_ulong(v19);
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
  v6 = qlsize(*(_QWORD *)(a1 + 48));
  v9 = *(_DWORD *)(a1 + 64);
  v10 = 20 * v9;
  if ( v10 + 8 >= v6 )
    return 0;
  v11 = *(_QWORD *)(a1 + 80);
  v12 = v9;
  if ( v11 < v9 )
  {
    v21 = *(_QWORD *)(a1 + 72);
    if ( *(_QWORD *)(a1 + 88) < (unsigned __int64)v9 )
    {
      v22 = qvector_reserve(a1 + 72, v21, v9, 20, v7, v8);
      v11 = *(_QWORD *)(a1 + 80);
      *(_QWORD *)(a1 + 72) = v22;
      v21 = v22;
    }
    memset((void *)(v21 + 20 * v11), 0, 20 * (v12 - v11));
    *(_QWORD *)(a1 + 80) = v12;
  }
  else if ( v9 != v11 )
  {
    *(_QWORD *)(a1 + 80) = v9;
  }
  if ( v10 != qlread(*(_QWORD *)(a1 + 48), *(_QWORD *)(a1 + 72), v10) )
  {
LABEL_22:
    v20 = *(_QWORD *)(a1 + 72);
    if ( v20 )
    {
      *(_QWORD *)(a1 + 80) = 0;
      qfree(v20);
      *(_QWORD *)(a1 + 72) = 0;
      *(_QWORD *)(a1 + 88) = 0;
    }
    return 0;
  }
  v13 = 0;
  v14 = 0;
  if ( *(_DWORD *)(a1 + 64) )
  {
    while ( 1 )
    {
      v16 = (unsigned int *)(v13 + *(_QWORD *)(a1 + 72));
      v17 = v16[3];
      if ( v4 == 2 )
      {
        v18 = *v16;
        v17 = _byteswap_ulong(v17);
        v16[3] = v17;
        *v16 = _byteswap_ulong(v18);
        v16[1] = _byteswap_ulong(v16[1]);
        v16[2] = _byteswap_ulong(v16[2]);
        v16[4] = _byteswap_ulong(v16[4]);
      }
      if ( v17 <= 0x1C )
        break;
      if ( v17 >= v6 )
        break;
      v15 = v16[2];
      if ( v15 < v10 + 8 || v6 < v17 + (unsigned int)v15 )
        break;
      ++v14;
      v13 += 20;
      if ( v14 >= *(_DWORD *)(a1 + 64) )
        return 1;
    }
    goto LABEL_22;
  }
  return 1;
}

