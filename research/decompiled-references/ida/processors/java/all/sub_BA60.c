__int64 __fastcall sub_BA60(_DWORD *a1, __int64 a2)
{
  __int64 module_data; // rax
  char v4; // r12
  __int64 v6; // rsi
  __int64 v7; // r14
  __int64 v8; // rdi
  int v9; // r12d
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r13
  __int64 v13; // r12
  __int64 v14; // r13
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rax
  int v18; // r12d
  __int64 v19; // rsi
  _WORD v20[3]; // [rsp+Eh] [rbp-4Ah] BYREF
  unsigned int v21; // [rsp+14h] [rbp-44h]
  unsigned __int64 v22; // [rsp+18h] [rbp-40h]

  v22 = __readfsqword(0x28u);
  sub_10E20(a1, 4);
  module_data = get_module_data((unsigned int)dword_2D4F4);
  v4 = *(_BYTE *)(sub_19F50(module_data, -1, a2) + 184);
  if ( v4 != 2 )
  {
    if ( (v4 & 0xF7) != 1 )
      goto LABEL_3;
    if ( (*(_BYTE *)(*(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 24) + 4LL) & 1) == 0 )
      sub_10C30(a1);
    if ( v4 != 9 )
    {
LABEL_3:
      sub_114B0(a1);
      return sub_10EE0(a1);
    }
    goto LABEL_35;
  }
  a1[36] &= 0xFFFFE7FF;
  if ( (*(_BYTE *)(get_module_data((unsigned int)dword_2D4F4) + 33149) & 0x20) != 0 )
    sub_10850(a1, 1);
  if ( *(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 33177) )
  {
    v6 = 0;
    v7 = *(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 33177);
    v8 = v7;
    v9 = netnode_altval(v7, 0, 65);
    if ( !v9 )
LABEL_54:
      sub_E6A0(v8, v6);
    v10 = get_module_data((unsigned int)dword_2D4F4);
    v11 = *(_QWORD *)a1;
    if ( (*(_BYTE *)(*(_QWORD *)(v10 + 24) + 4LL) & 1) != 0 )
      (*(void (__fastcall **)(_DWORD *))(v11 + 160))(a1);
    else
      (*(void (__fastcall **)(_DWORD *, void *, _QWORD))(v11 + 136))(a1, &unk_228D2, 0);
    v12 = (unsigned int)(v9 - 1);
    v13 = 1;
    v14 = v12 + 2;
    do
    {
      v6 = v13;
      v8 = v7;
      if ( netnode_supval(v7, v13, v20, 10, 83) != 10 )
        goto LABEL_54;
      v15 = get_module_data((unsigned int)dword_2D4F4);
      v16 = (unsigned int)dword_2D4F4;
      *(_DWORD *)(v15 + 164) = 4;
      if ( (*(_BYTE *)(*(_QWORD *)(get_module_data(v16) + 24) + 4LL) & 1) != 0 )
      {
        sub_11720(a1, ".catch ", 7);
        if ( v21 )
        {
          if ( (unsigned __int8)sub_10820(a1, v21) )
            return sub_10EE0(a1);
        }
        else
        {
          sub_11720(a1, "all", 3);
        }
      }
      else
      {
        sub_11720(a1, &unk_228D9, 3);
      }
      if ( (unsigned __int8)sub_FE40(a1, " from ", 6)
        || (unsigned __int8)sub_10A50(a1, v20[0])
        || (unsigned __int8)sub_FE40(a1, " to ", 4)
        || (unsigned __int8)sub_10A50(a1, v20[1]) )
      {
        return sub_10EE0(a1);
      }
      if ( (*(_BYTE *)(*(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 24) + 4LL) & 1) != 0 )
      {
        if ( (unsigned __int8)sub_FE40(a1, " using ", 7) )
          return sub_10EE0(a1);
      }
      else
      {
        if ( v21 )
        {
          if ( (unsigned __int8)sub_FE40(a1, " catch", 6)
            || (unsigned __int8)sub_FE90(a1, 40)
            || (unsigned __int8)sub_10820(a1, v21)
            || (unsigned __int8)sub_FE90(a1, 41) )
          {
            return sub_10EE0(a1);
          }
        }
        else if ( (unsigned __int8)sub_FE40(a1, " finally", 8) )
        {
          return sub_10EE0(a1);
        }
        if ( (unsigned __int8)sub_FE40(a1, " handler ", 9) )
          return sub_10EE0(a1);
      }
      if ( (unsigned __int8)sub_10A50(a1, v20[2]) || (unsigned __int8)sub_FBC0(a1, 0) )
        return sub_10EE0(a1);
      ++v13;
    }
    while ( v14 != v13 );
    if ( (*(_BYTE *)(*(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 24) + 4LL) & 1) != 0 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 160LL))(a1);
    else
      sub_10C30(a1);
  }
  if ( !*(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 33257)
    || (v17 = get_module_data((unsigned int)dword_2D4F4),
        !(unsigned __int8)sub_AE60((__int64)a1, *(_QWORD *)(v17 + 33257), 2u)) )
  {
    if ( !*(_WORD *)(get_module_data((unsigned int)dword_2D4F4) + 33173) )
    {
LABEL_35:
      v18 = 0;
      while ( !*(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 8LL * v18 + 33209) )
      {
        if ( ++v18 == 5 )
          goto LABEL_38;
      }
      v19 = get_module_data((unsigned int)dword_2D4F4) + 33209;
      if ( !(unsigned __int8)sub_A5E0(a1, v19, 5u) )
      {
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 160LL))(a1);
LABEL_38:
        sub_10BD0(a1, 2, "method");
        goto LABEL_3;
      }
    }
  }
  return sub_10EE0(a1);
}

