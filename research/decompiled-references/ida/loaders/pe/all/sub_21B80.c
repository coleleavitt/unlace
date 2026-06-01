__int64 __fastcall sub_21B80(__int64 a1, __int64 a2)
{
  int v3; // eax
  int v4; // r12d
  unsigned int v5; // r13d
  __int64 v6; // rax
  __int64 v7; // rsi
  _QWORD *v9; // rax
  _BYTE *v10; // rdi
  __int64 v11; // rax
  _BYTE *v12; // rdx
  __int64 v13; // r12
  __int64 v14; // r13
  _DWORD *v15; // rax
  _DWORD *v16; // rdx
  __int64 v17; // rax
  _DWORD *v18; // rax
  _DWORD *v19; // rdx
  __int64 v20; // rax

  sub_21A20(a1);
  *(_BYTE *)a1 = *(_BYTE *)a2;
  v3 = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a1 + 4) = v3;
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 24);
  *(_DWORD *)(a1 + 28) = *(_DWORD *)(a2 + 28);
  v4 = *(_DWORD *)(a2 + 40);
  *(_DWORD *)(a1 + 40) = v4;
  *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 24);
  v5 = *(_DWORD *)(a2 + 28);
  *(_DWORD *)(a1 + 28) = v5;
  *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 24);
  if ( v3 == 20 )
  {
    if ( (int)v5 > 0 )
    {
      v18 = (_DWORD *)operator new[](4LL * v5);
      *(_QWORD *)(a1 + 32) = v18;
      v19 = *(_DWORD **)(a2 + 32);
      *v18 = *v19;
      if ( v5 != 1 )
      {
        v20 = 1;
        while ( 1 )
        {
          *(_DWORD *)(*(_QWORD *)(a1 + 32) + v20 * 4) = v19[v20];
          if ( v5 == ++v20 )
            break;
          v19 = *(_DWORD **)(a2 + 32);
        }
      }
      v4 = *(_DWORD *)(a1 + 40);
      if ( v4 <= 0 )
        return a1;
    }
    else if ( v4 <= 0 )
    {
      return a1;
    }
    v15 = (_DWORD *)operator new[](4LL * (unsigned int)v4);
    *(_QWORD *)(a1 + 48) = v15;
    v16 = *(_DWORD **)(a2 + 48);
    *v15 = *v16;
    if ( v4 != 1 )
    {
      v17 = 1;
      while ( 1 )
      {
        *(_DWORD *)(*(_QWORD *)(a1 + 48) + v17 * 4) = v16[v17];
        if ( ++v17 == v4 )
          break;
        v16 = *(_DWORD **)(a2 + 48);
      }
    }
    return a1;
  }
  if ( v3 != 21 )
  {
    if ( v3 == 15 )
    {
      v6 = operator new(0x38u);
      *(_QWORD *)(a1 + 24) = v6;
      v7 = *(_QWORD *)(a2 + 24);
      *(_BYTE *)v6 = 0;
      *(_QWORD *)(v6 + 4) = 0;
      *(_QWORD *)(v6 + 32) = 0;
      *(_QWORD *)(v6 + 48) = 0;
      *(_OWORD *)(v6 + 16) = 0;
      sub_21B80(v6, v7, 0.0);
    }
    return a1;
  }
  if ( (int)v5 <= 0 )
    return a1;
  v9 = (_QWORD *)operator new[](56LL * v5 + 8);
  v10 = v9 + 1;
  *v9 = v5;
  v11 = v5 - 2LL;
  v12 = v10;
  do
  {
    --v11;
    *v12 = 0;
    v12 += 56;
    *(_QWORD *)(v12 - 52) = 0;
    *((_QWORD *)v12 - 3) = 0;
    *((_QWORD *)v12 - 1) = 0;
    *(_OWORD *)(v12 - 40) = 0;
  }
  while ( v11 != -2 );
  *(_QWORD *)(a1 + 32) = v10;
  v13 = 0;
  v14 = 56LL * (v5 - 1);
  while ( 1 )
  {
    sub_21B80(&v10[v13], v13 + *(_QWORD *)(a2 + 32), 0.0);
    if ( v14 == v13 )
      break;
    v10 = *(_BYTE **)(a1 + 32);
    v13 += 56;
  }
  return a1;
}
