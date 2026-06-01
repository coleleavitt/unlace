void __fastcall sub_11A80(__int64 a1, _DWORD *a2)
{
  unsigned int v3; // edi
  bool (__fastcall *v4)(__int64, _DWORD *, unsigned int); // rax
  __int64 v5; // rdx
  _QWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // rax
  unsigned int v13; // edi
  bool (__fastcall *v14)(__int64, _DWORD *, unsigned int); // rax
  __int64 v15; // rdx
  _QWORD *v16; // rax
  char v17; // [rsp-8h] [rbp-48h]

  if ( (*(_BYTE *)(a1 + 94) & 1) != 0
    || !*(_DWORD *)(a1 + 232)
    || !*(_DWORD *)(a1 + 236)
    || (unsigned __int8)is_debugger_on() )
  {
    return;
  }
  v3 = *(_DWORD *)(a1 + 232);
  v4 = **(bool (__fastcall ***)(__int64, _DWORD *, unsigned int))a1;
  if ( v4 == sub_DC30 )
  {
    if ( !a2 || *a2 != 3 )
    {
      v5 = *(_QWORD *)(a1 + 16) - 1LL;
      if ( v5 < 0 )
        goto LABEL_13;
      v6 = (_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL * *(_QWORD *)(a1 + 16) - 32);
      while ( (unsigned __int64)v3 < *v6 || (unsigned __int64)v3 >= v6[1] )
      {
        --v5;
        v6 -= 4;
        if ( v5 == -1 )
          goto LABEL_13;
      }
      if ( v3 + v6[2] - *v6 == -1 )
      {
LABEL_13:
        if ( v3 >= (__int64)(*(_QWORD *)(a1 + 592) + *(unsigned int *)(a1 + 156)) )
        {
          if ( *(_BYTE *)(a1 + 985)
            || (int)sub_D140(
                      1u,
                      (__int64)"HIDECANCEL\nCan't find translation for relative virtual address %08X, continue?",
                      v3) > 0 )
          {
            *(_BYTE *)(a1 + 985) = 1;
            qlseek();
            return;
          }
          goto LABEL_45;
        }
      }
    }
    if ( qlseek() == -1 )
      return;
  }
  else if ( !v4(a1, a2, v3) )
  {
    return;
  }
  v11 = qlsize();
  v12 = qlseek();
  if ( v11 < v12 || v11 - v12 < *(unsigned int *)(a1 + 236) )
    sub_A980((__int64)"AUTOHIDE REGISTRY\nThe relocation file seems to be truncated", 0);
  if ( qalloc() )
  {
    v13 = *(_DWORD *)(a1 + 232);
    v14 = **(bool (__fastcall ***)(__int64, _DWORD *, unsigned int))a1;
    if ( v14 != sub_DC30 )
    {
      if ( !v14(a1, a2, v13) )
        goto LABEL_36;
      goto LABEL_42;
    }
    if ( a2 && *a2 == 3 )
      goto LABEL_41;
    v15 = *(_QWORD *)(a1 + 16) - 1LL;
    if ( v15 >= 0 )
    {
      v16 = (_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL * *(_QWORD *)(a1 + 16) - 32);
      while ( (unsigned __int64)v13 < *v16 || (unsigned __int64)v13 >= v16[1] )
      {
        --v15;
        v16 -= 4;
        if ( v15 == -1 )
          goto LABEL_32;
      }
      if ( v13 + v16[2] - *v16 != -1 )
        goto LABEL_41;
    }
LABEL_32:
    if ( v13 < (__int64)(*(_QWORD *)(a1 + 592) + *(unsigned int *)(a1 + 156)) )
    {
LABEL_41:
      if ( qlseek() != -1 )
      {
LABEL_42:
        lread();
        netnode_setblob();
      }
LABEL_36:
      qfree();
      return;
    }
    if ( *(_BYTE *)(a1 + 985)
      || (int)sub_D140(
                1u,
                (__int64)"HIDECANCEL\nCan't find translation for relative virtual address %08X, continue?",
                v13) > 0 )
    {
      *(_BYTE *)(a1 + 985) = 1;
      qlseek();
      goto LABEL_36;
    }
LABEL_45:
    sub_DB80(
      0,
      (__int64)"HIDECANCEL\nCan't find translation for relative virtual address %08X, continue?",
      v7,
      v8,
      v9,
      v10,
      v17);
  }
}

