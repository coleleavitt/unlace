__int64 __fastcall sub_4DFE0(__int64 a1, __int64 a2)
{
  int v3; // edi
  unsigned int v5; // esi
  int v6; // ecx
  char v7; // r9
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r12
  int v12; // r13d
  __int64 v13; // rax
  unsigned __int64 v14; // r15
  int v15; // eax
  char v16; // al
  __int64 v17; // rcx
  const char *v18; // rdx
  int v20; // edx
  int v21; // ecx
  int v22; // r8d
  _QWORD v23[137]; // [rsp+0h] [rbp-448h] BYREF

  v23[129] = __readfsqword(0x28u);
  if ( !a2 )
    return 0xFFFFFFFFLL;
  v3 = *(_DWORD *)(a2 + 20);
  v5 = v3 & 0xFFFFFFF;
  if ( (v3 & 0xFFFFFFF) == 0xC || v5 == 2 )
    return 1;
  v6 = *(_DWORD *)(a2 + 4);
  v7 = *(_BYTE *)(a1 + 792);
  v8 = *(_QWORD *)(a1 + 1384);
  if ( v6 != -3 )
  {
    v9 = *(_QWORD *)(a1 + 1376);
    v10 = v9 + 112 * v8;
    if ( v9 != v10 )
    {
      do
      {
        v11 = v9;
        if ( v6 == *(_DWORD *)(v9 + 24) )
        {
          if ( !v7 )
            goto LABEL_23;
          goto LABEL_10;
        }
        v9 += 112;
      }
      while ( v10 != v9 );
      if ( v7 )
        goto LABEL_43;
      if ( v5 != 7 )
      {
        if ( (v3 & 0xFFFFFF8) == 0 )
          goto LABEL_51;
        goto LABEL_38;
      }
      goto LABEL_44;
    }
LABEL_42:
    if ( v7 )
    {
LABEL_43:
      v11 = 0;
      v12 = 0;
      goto LABEL_12;
    }
    if ( v5 != 7 )
    {
      if ( (v3 & 0xFFFFFF8) != 0 )
      {
LABEL_38:
        if ( v5 > 9 )
          goto LABEL_49;
      }
      else if ( --v5 > 3 )
      {
        goto LABEL_49;
      }
      goto LABEL_16;
    }
LABEL_44:
    if ( *(_BYTE *)(a2 + 16) )
      goto LABEL_49;
    goto LABEL_16;
  }
  if ( !v8 )
    goto LABEL_42;
  v11 = *(_QWORD *)(a1 + 1376);
  if ( v7 )
  {
LABEL_10:
    if ( v11 )
      v12 = *(_DWORD *)(v11 + 40);
    else
      v12 = 0;
LABEL_12:
    v13 = (*(_QWORD *)(a1 + 192) == 0) + ((__int64)(*(_QWORD *)(a1 + 192) - *(_QWORD *)(a1 + 160)) >> 3) - 1;
    v14 = 0x8E38E38E38E38E39LL
        * (((__int64)(*(_QWORD *)(a1 + 168) - *(_QWORD *)(a1 + 176)) >> 3)
         + ((__int64)(*(_QWORD *)(a1 + 152) - *(_QWORD *)(a1 + 136)) >> 3))
        + 8 * v13
        - v13;
    v15 = sub_70DA0(a2, v23, 1024);
    sub_70460(a1, (unsigned int)"GDB: continue after event %s (%zu pending, block type %d, sig#=%d)\n", v15, v14, v12);
    v5 = *(_DWORD *)(a2 + 20) & 0xFFFFFFF;
    if ( v5 != 7 )
    {
      if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFF8) != 0 )
      {
        if ( v5 <= 9 || v5 == 12 )
          goto LABEL_16;
        goto LABEL_28;
      }
LABEL_27:
      if ( v5 - 1 > 3 )
        goto LABEL_28;
      goto LABEL_16;
    }
    goto LABEL_40;
  }
LABEL_23:
  if ( v5 != 7 )
  {
    if ( (v3 & 0xFFFFFF8) != 0 )
    {
      if ( v5 > 9 )
        goto LABEL_28;
      goto LABEL_16;
    }
    goto LABEL_27;
  }
LABEL_40:
  if ( *(_BYTE *)(a2 + 16) )
  {
    v5 = 7;
LABEL_28:
    if ( v11 )
    {
      if ( *(_DWORD *)(v11 + 28) != 9 )
      {
        sub_70460(a1, (unsigned int)"GDB: event->eid=%d, erasing child_signum\n", v5, v6, v8);
        *(_DWORD *)(v11 + 28) = 0;
      }
      goto LABEL_16;
    }
    do
    {
LABEL_49:
      if ( under_debugger )
        BUG();
      interr();
LABEL_51:
      --v5;
    }
    while ( v5 > 3 );
  }
LABEL_16:
  v16 = *(_BYTE *)(a1 + 1368);
  v17 = *(_QWORD *)(a1 + 136);
  if ( *(_QWORD *)(a1 + 168) != v17 )
  {
    v18 = "more events are pending";
    if ( v16 )
      v18 = "still starting";
    goto LABEL_19;
  }
  v18 = "still starting";
  if ( v16 )
  {
LABEL_19:
    sub_70460(a1, (unsigned int)"GDB: not resuming yet because %s.\n", (_DWORD)v18, v17, v8);
    return 1;
  }
  sub_70460(a1, (unsigned int)"GDB: resuming...\n", (unsigned int)"still starting", v17, v8);
  if ( (unsigned __int8)sub_4D980(a1) )
    return 1;
  sub_70460(a1, (unsigned int)"GDB: resuming failed! returning failure\n", v20, v21, v22);
  return 0xFFFFFFFFLL;
}

