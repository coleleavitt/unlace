__int64 __fastcall sub_215890(__int64 a1)
{
  __int64 v2; // rax
  __int64 result; // rax
  char v4; // cl
  __int64 v5; // rdx
  int v6; // edi
  int v7; // edx
  char v8; // si
  __int64 v9; // rsi
  int v10; // esi
  __int64 v11; // rax
  int v12; // ebp
  __int64 v13; // r13
  int *v14; // r12
  _QWORD *v15; // r15
  unsigned __int64 v16; // r14
  int v17; // eax
  __int64 *v18; // rbx
  __int64 v19; // rdx
  _DWORD *v20; // rcx
  _DWORD *v21; // rax
  unsigned __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx

  v2 = *(_QWORD *)(a1 + 32);
  if ( *(_DWORD *)v2 != 4 && (*(_DWORD *)v2 != 67 || *(_DWORD *)(v2 + 36) != *(_DWORD *)(v2 + 68)) )
    return 0;
  v4 = *(_BYTE *)(v2 + 32);
  if ( v4 != 9 || (v5 = *(_QWORD *)(v2 + 40), *(_QWORD *)(v5 + 8)) )
    v6 = -1;
  else
    v6 = *(_DWORD *)(v5 + 16);
  v7 = *(_DWORD *)(a1 + 40);
  v8 = *(_BYTE *)(v2 + 64);
  if ( v7 == v6 )
  {
    if ( v8 == 9 )
    {
      v11 = *(_QWORD *)(v2 + 72);
      if ( !*(_QWORD *)(v11 + 8) )
        goto LABEL_16;
    }
    return 0;
  }
  if ( v8 != 9 || (v9 = *(_QWORD *)(v2 + 72), *(_QWORD *)(v9 + 8)) )
    v10 = -1;
  else
    v10 = *(_DWORD *)(v9 + 16);
  if ( v7 != v10 )
    return 0;
  if ( v4 != 9 )
    return 0;
  v11 = *(_QWORD *)(v2 + 40);
  if ( *(_QWORD *)(v11 + 8) )
    return 0;
LABEL_16:
  v12 = *(_DWORD *)(v11 + 16);
  if ( v12 == -1 )
    return 0;
  v13 = *(_QWORD *)(a1 + 8);
  v14 = (int *)(*(_QWORD *)(v13 + 432) + 104LL * v12);
  if ( *(_DWORD *)(a1 + 44) != v14[22] )
    return 0;
  v15 = *(_QWORD **)(v13 + 1280);
  if ( v15 )
  {
    v16 = *v15 & 0xFFFFFFFFFFFFFFFCLL;
    if ( !v16 )
      return 0;
    if ( (*(_BYTE *)v16 & 2) == 0 )
    {
      do
      {
        if ( (int)sub_3307E0(v14, (int *)(v16 + 24)) >= 0 )
        {
          if ( (int)sub_3307E0((int *)(v16 + 24), v14) >= 0 )
            goto LABEL_39;
          v16 = *(_QWORD *)(v16 + 16);
        }
        else
        {
          v16 = *(_QWORD *)(v16 + 8);
        }
      }
      while ( (*(_BYTE *)v16 & 2) == 0 );
      v16 = *(_QWORD *)(v13 + 1280);
LABEL_39:
      if ( v15 != (_QWORD *)v16 )
        return 0;
    }
  }
  v17 = v14[6];
  if ( (v17 & 1) == 0 && (v17 & 0x100) == 0 )
    return 0;
  v18 = *(__int64 **)(a1 + 48);
  result = 1;
  if ( v18 )
  {
    v19 = v18[1];
    v20 = (_DWORD *)(*v18 + 4 * v19);
    if ( (_DWORD *)*v18 == v20 )
      goto LABEL_29;
    v21 = (_DWORD *)*v18;
    while ( *v21 != v12 )
    {
      if ( v20 == ++v21 )
        goto LABEL_29;
    }
    if ( v21 == v20 )
    {
LABEL_29:
      v22 = v19 + 1;
      if ( v18[2] < v22 )
      {
        v23 = qvector_reserve((__int64)v18, *v18, v22, 4);
        v24 = v18[1];
        *v18 = v23;
        v20 = (_DWORD *)(v23 + 4 * v24);
      }
      *v20 = v12;
      ++v18[1];
    }
    return 0;
  }
  return result;
}

