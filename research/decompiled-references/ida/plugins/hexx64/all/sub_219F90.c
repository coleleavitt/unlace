__int64 __fastcall sub_219F90(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  int v5; // edx
  __int64 v6; // rax
  _QWORD *v7; // rax
  __int64 v8; // r15
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // r12
  unsigned int v11; // r12d
  __int64 v12; // rbx
  _QWORD *v14; // rax
  unsigned __int64 v15; // rbx
  int v16[4]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v17; // [rsp+10h] [rbp-68h]
  __int64 v18[11]; // [rsp+20h] [rbp-58h] BYREF

  v18[3] = __readfsqword(0x28u);
  if ( !a2 )
    return 0;
  if ( !a3 )
  {
    if ( (*(_BYTE *)a1 & 1) == 0
      && (*(_BYTE *)(a2 + 25) & 1) == 0
      && (unsigned int)sub_1F06C0((__int64 *)(a1 + 432), (int *)a2, *(_DWORD *)(a2 + 88), 0, a4) != -1 )
    {
      return 0;
    }
    v14 = *(_QWORD **)(a1 + 1280);
    if ( !v14 )
      return 2;
LABEL_28:
    v15 = *v14 & 0xFFFFFFFFFFFFFFFCLL;
    if ( !v15 )
    {
LABEL_38:
      v11 = 2;
      sub_2188C0((unsigned __int64 **)(a1 + 1280), (__int64 *)v15);
      return v11;
    }
    while ( (*(_BYTE *)v15 & 2) == 0 )
    {
      while ( (int)sub_3307E0((int *)a2, (int *)(v15 + 24)) < 0 )
      {
        v15 = *(_QWORD *)(v15 + 8);
        if ( (*(_BYTE *)v15 & 2) != 0 )
          return 2;
      }
      if ( (int)sub_3307E0((int *)(v15 + 24), (int *)a2) >= 0 )
      {
        if ( *(_QWORD *)(a1 + 1280) == v15 )
          return 2;
        goto LABEL_38;
      }
      v15 = *(_QWORD *)(v15 + 16);
    }
    return 2;
  }
  v5 = *(_DWORD *)(a2 + 88);
  if ( v5 > *(_DWORD *)(a3 + 88)
    || (*(_BYTE *)a1 & 1) == 0
    && (*(_BYTE *)(a2 + 25) & 1) == 0
    && (unsigned int)sub_1F06C0((__int64 *)(a1 + 432), (int *)a2, v5, 0, a4) != -1 )
  {
    return 0;
  }
  LODWORD(v18[0]) = 0;
  copy_argloc();
  v6 = *(_QWORD *)(a3 + 16);
  v16[0] = 0;
  v18[2] = v6;
  copy_argloc();
  v17 = *(_QWORD *)(a2 + 16);
  if ( !(unsigned int)sub_3307E0(v16, (int *)v18) )
  {
    cleanup_argloc();
    cleanup_argloc();
    v14 = *(_QWORD **)(a1 + 1280);
    if ( !v14 )
      return 2;
    goto LABEL_28;
  }
  cleanup_argloc();
  cleanup_argloc();
  v7 = *(_QWORD **)(a1 + 1280);
  if ( !v7 )
  {
LABEL_9:
    v18[0] = a2;
    v10 = sub_219540((__m128i *)(a1 + 1280), (int *)a2, v18) + 24;
    copy_argloc();
    *(_QWORD *)(v10 + 40) = *(_QWORD *)(a3 + 16);
    v11 = 1;
    goto LABEL_10;
  }
  v8 = 24;
  v9 = *v7 & 0xFFFFFFFFFFFFFFFCLL;
  if ( v9 )
  {
    while ( (*(_BYTE *)v9 & 2) == 0 )
    {
      v8 = v9 + 24;
      if ( (int)sub_3307E0((int *)a2, (int *)(v9 + 24)) >= 0 )
      {
        if ( (int)sub_3307E0((int *)(v9 + 24), (int *)a2) >= 0 )
        {
          if ( *(_QWORD *)(a1 + 1280) == v9 )
            goto LABEL_9;
          goto LABEL_22;
        }
        v9 = *(_QWORD *)(v9 + 16);
      }
      else
      {
        v9 = *(_QWORD *)(v9 + 8);
      }
    }
    goto LABEL_9;
  }
LABEL_22:
  v11 = 2;
  copy_argloc();
  *(_QWORD *)(v8 + 40) = *(_QWORD *)(a3 + 16);
LABEL_10:
  v12 = *(_QWORD *)(a1 + 1256);
  if ( 96LL * *(_QWORD *)(a1 + 1264) )
  {
    while ( (unsigned int)sub_3307E0((int *)v12, (int *)a2) )
    {
      v12 += 96;
      if ( v12 == *(_QWORD *)(a1 + 1256) + 96LL * *(_QWORD *)(a1 + 1264) )
        return v11;
    }
    if ( v12 && (*(_BYTE *)(v12 + 88) & 8) != 0 )
      *(_DWORD *)(a2 + 24) |= 0x200000u;
  }
  return v11;
}

