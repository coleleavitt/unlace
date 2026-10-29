__int64 __fastcall sub_17530(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rbp
  __int64 v6; // rdi
  unsigned int v7; // ebp
  __int64 v8; // r14
  __int64 v9; // rdi
  __int64 v10; // r15
  __int64 v11; // rdi
  int v12; // eax
  __int64 v13; // rdx
  int flags; // eax
  unsigned int dword; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  bool v20; // [rsp+16h] [rbp-42h]
  bool v21; // [rsp+17h] [rbp-41h]
  __int64 v22; // [rsp+18h] [rbp-40h]

  v3 = 0;
  v4 = a2 + 4;
  if ( (unsigned __int8)sub_17230(*(_QWORD *)(a1 + 8), a2 + 4, 1u) )
  {
    dword = get_dword(v4);
    v3 = dword;
    if ( dword > 1 )
    {
      v6 = *(_QWORD *)(a1 + 8);
      if ( (*(_BYTE *)(v6 + 124) & 2) == 0 )
        goto LABEL_4;
      goto LABEL_32;
    }
  }
  if ( !(unsigned __int8)get_fixups(0, v4, 4) )
    return 0;
  v6 = *(_QWORD *)(a1 + 8);
  if ( (*(_BYTE *)(v6 + 124) & 2) != 0 )
LABEL_32:
    v3 += *(_QWORD *)(a1 + 24);
LABEL_4:
  v7 = sub_17230(v6, v3 - 1, 1u);
  if ( !(_BYTE)v7 )
    return 0;
  v20 = v3 == -1 || a3 >= v3;
  if ( v20 )
    return 0;
  v8 = 0;
  if ( !(unsigned __int8)sub_17230(*(_QWORD *)(a1 + 8), a2 + 8, 1u) || (v17 = get_dword(a2 + 8), v8 = v17, v17 <= 1) )
  {
    if ( !(unsigned __int8)get_fixups(0, a2 + 8, 4) )
      goto LABEL_38;
  }
  v9 = *(_QWORD *)(a1 + 8);
  if ( (*(_BYTE *)(v9 + 124) & 2) != 0 )
    v8 += *(_QWORD *)(a1 + 24);
  if ( (unsigned __int8)sub_17230(v9, v8, 1u) )
  {
    v21 = v8 != -1;
  }
  else
  {
LABEL_38:
    v21 = 0;
    v8 = -1;
  }
  v10 = 0;
  v22 = a2 + 12;
  if ( !(unsigned __int8)sub_17230(*(_QWORD *)(a1 + 8), a2 + 12, 1u) || (v18 = get_dword(v22), v10 = v18, v18 <= 1) )
  {
    if ( !(unsigned __int8)get_fixups(0, v22, 4) )
      goto LABEL_39;
  }
  v11 = *(_QWORD *)(a1 + 8);
  if ( (*(_BYTE *)(v11 + 124) & 2) != 0 )
    v10 += *(_QWORD *)(a1 + 24);
  if ( !(unsigned __int8)sub_17230(v11, v10, 1u) )
  {
LABEL_39:
    if ( (*(_BYTE *)(a1 + 72) & 1) != 0 )
    {
      if ( *(_DWORD *)(a1 + 76) || (get_aflags(a3) & 0x20000000) != 0 )
        return v7;
      v10 = -1;
LABEL_43:
      sub_16AF0(a3, v3);
      goto LABEL_19;
    }
    v10 = -1;
    goto LABEL_47;
  }
  v20 = v21 && v10 != -1;
  if ( (*(_BYTE *)(a1 + 72) & 1) == 0 )
  {
LABEL_47:
    sub_13520(*(_QWORD *)(a1 + 8), a2, 13, 20, 0);
    if ( *(_DWORD *)(a1 + 76) )
      goto LABEL_19;
    goto LABEL_48;
  }
  if ( !*(_DWORD *)(a1 + 76) )
  {
LABEL_48:
    if ( (get_aflags(a3) & 0x20000000) != 0 )
      goto LABEL_19;
    goto LABEL_43;
  }
LABEL_19:
  if ( v20 && ((*(_BYTE *)(a1 + 72) & 1) == 0 || !sub_114F0(a3)) )
  {
    v12 = *(_DWORD *)(a1 + 76);
    if ( !v12 )
    {
      sub_EFD0(*(_QWORD *)(a1 + 8), a3, v3, v8);
      v12 = *(_DWORD *)(a1 + 76);
    }
    if ( v12 == 1 )
    {
      if ( (unsigned __int64)(v8 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
      {
        if ( (unsigned __int8)is_mapped(v8) )
        {
          if ( !(unsigned __int8)is_spec_ea(v8) )
          {
            flags = get_flags_ex(v8, 4, v13);
            if ( (~(_WORD)flags & 0x600) != 0 || (flags & 0x10000000) == 0 )
            {
              auto_mark_range(v8, v8 + 1, 20);
              auto_mark_range(v8, v8 + 1, 20);
              auto_mark_range(v8, v8 + 1, 30);
            }
          }
        }
      }
      sub_160D0(*(_QWORD *)(a1 + 8), a3, v3, v8, v10, 0, 0, *(_DWORD *)(a1 + 72));
    }
  }
  return v7;
}
