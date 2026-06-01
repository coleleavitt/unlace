__int64 __fastcall sub_6B60(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rdx
  int v4; // eax
  int v5; // ecx
  int v6; // ebx
  int v7; // r12d
  int v8; // ebp
  int v9; // r10d
  unsigned __int16 v10; // ax
  int v11; // r13d
  __int16 v12; // cx
  int v13; // ebx
  unsigned __int16 v15; // ax
  int flags; // eax
  __int64 v17; // rax
  int v18; // [rsp+4h] [rbp-54h]
  int v19; // [rsp+8h] [rbp-50h]
  int v20; // [rsp+8h] [rbp-50h]
  int v21; // [rsp+8h] [rbp-50h]
  int v22; // [rsp+8h] [rbp-50h]
  int v23; // [rsp+18h] [rbp-40h]
  int v24; // [rsp+1Ch] [rbp-3Ch]

  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(unsigned __int16 *)(a2 + 24);
  v5 = *(_DWORD *)(v3 + 104);
  if ( v4 >= v5 && v4 < *(_DWORD *)(v3 + 108) )
  {
    v6 = *(_DWORD *)(*(_QWORD *)(v3 + 112) + 16LL * (v4 - v5) + 8);
    *(_BYTE *)(a1 + 280) = ~(_BYTE)v6;
    v7 = v6 & 4;
    v8 = v6 & 8;
    v9 = v6 & 0x100;
    *(_BYTE *)(a1 + 280) &= 1u;
    v10 = *(_WORD *)(a2 + 24);
    v11 = v6 & 0x4000;
    v18 = v6 & 0x200;
    v12 = v6;
    v13 = v6 & 0x10;
    v23 = v12 & 0x400;
    if ( v10 == 31 )
    {
      v22 = v9;
      sub_6640(a2, -1);
      v9 = v22;
    }
    else
    {
      if ( v10 > 0x1Fu )
      {
        if ( v10 == 53 )
        {
          v20 = v9;
          add_cref();
          v9 = v20;
        }
        goto LABEL_8;
      }
      if ( v10 != 24 )
      {
        if ( v10 == 30 )
        {
          v19 = v9;
          sub_6640(a2, 1);
          v9 = v19;
        }
        goto LABEL_8;
      }
      if ( *(_BYTE *)(a2 + 41) == 2 && *(_QWORD *)(a2 + 56) == 129 && *(_BYTE *)(a2 + 81) == 5 )
      {
LABEL_38:
        v21 = v9;
        flags = get_flags_ex();
        v9 = v21;
        if ( (flags & 0xF000000) == 0 )
        {
          if ( *(_QWORD *)(a1 + 264) != -1 || (v17 = calc_offset_base(), v9 = v21, v17 != -1) )
          {
            v24 = v9;
            get_default_reftype();
            op_offset();
            v9 = v24;
          }
        }
      }
    }
LABEL_8:
    if ( v9 )
      sub_6930(a1, a2, (unsigned __int8 *)(a2 + 40), 1, a3);
    if ( v18 )
      sub_6930(a1, a2, (unsigned __int8 *)(a2 + 80), 1, a3);
    if ( v23 )
      sub_6930(a1, a2, (unsigned __int8 *)(a2 + 120), 1, a3);
    if ( v11 )
      remember_problem();
LABEL_16:
    if ( v7 )
      sub_6930(a1, a2, (unsigned __int8 *)(a2 + 40), 0, a3);
    if ( v8 )
      sub_6930(a1, a2, (unsigned __int8 *)(a2 + 80), 0, a3);
    if ( v13 )
      sub_6930(a1, a2, (unsigned __int8 *)(a2 + 120), 0, a3);
    goto LABEL_22;
  }
  *(_BYTE *)(a1 + 280) = 1;
  v15 = *(_WORD *)(a2 + 24);
  if ( v15 == 31 )
  {
    sub_6640(a2, -1);
    goto LABEL_22;
  }
  if ( v15 > 0x1Fu )
  {
    if ( v15 == 53 )
      add_cref();
  }
  else
  {
    if ( v15 == 24 )
    {
      if ( *(_BYTE *)(a2 + 41) != 2 || *(_QWORD *)(a2 + 56) != 129 )
        goto LABEL_22;
      v13 = 0;
      v8 = 0;
      v7 = 0;
      if ( *(_BYTE *)(a2 + 81) != 5 )
        goto LABEL_16;
      v23 = 0;
      v11 = 0;
      v9 = 0;
      v18 = 0;
      goto LABEL_38;
    }
    if ( v15 == 30 )
    {
      sub_6640(a2, 1);
      if ( !*(_BYTE *)(a1 + 280) )
        return 1;
LABEL_29:
      add_cref();
      return 1;
    }
  }
LABEL_22:
  if ( *(_BYTE *)(a1 + 280) )
    goto LABEL_29;
  return 1;
}

