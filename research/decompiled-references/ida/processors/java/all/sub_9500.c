unsigned __int64 __fastcall sub_9500(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // r13
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // r15
  __int64 v6; // rax
  unsigned __int8 v7; // cl
  __int64 module_data; // rax
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rax
  unsigned int v12; // r15d
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v16; // [rsp+0h] [rbp-80h]
  unsigned __int8 v17; // [rsp+17h] [rbp-69h] BYREF
  __int64 v18; // [rsp+18h] [rbp-68h] BYREF
  __int128 v19; // [rsp+20h] [rbp-60h]
  __int64 v20; // [rsp+30h] [rbp-50h]
  int v21; // [rsp+38h] [rbp-48h]
  unsigned __int64 v22; // [rsp+40h] [rbp-40h]

  v22 = __readfsqword(0x28u);
  v18 = 0x20800000500LL;
  v21 = 0;
  v20 = 0;
  v19 = 0;
  if ( (*(_BYTE *)(*(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 24) + 4LL) & 1) == 0
    && (unsigned __int8)sub_10B90(a1, 4) )
  {
    return v22 - __readfsqword(0x28u);
  }
  v1 = *(_QWORD *)(a1 + 352);
  v17 = 0;
  v2 = *(_QWORD *)(a1 + 320);
  if ( v1 )
  {
    while ( 1 )
    {
      *(_DWORD *)(get_module_data((unsigned int)dword_2D4F4) + 164) = 8;
      if ( *(_WORD *)(a1 + 248) == 171 )
      {
        module_data = get_module_data((unsigned int)dword_2D4F4);
        *(_QWORD *)&v19 = (unsigned int)get_dword(v2 + *(_QWORD *)(module_data + 33157));
        if ( !(unsigned __int8)sub_10360(a1, &v18, 76, 0) )
          return v22 - __readfsqword(0x28u);
        if ( (unsigned __int8)sub_117A0(a1) )
          return v22 - __readfsqword(0x28u);
        if ( (unsigned __int8)sub_FF20(a1, 58) )
          return v22 - __readfsqword(0x28u);
        v9 = get_module_data((unsigned int)dword_2D4F4);
        if ( !(unsigned __int8)sub_FD50(a1, 9LL - (((unsigned __int8)*(_QWORD *)(v9 + 176) + 1) & 7)) )
          return v22 - __readfsqword(0x28u);
        v10 = *(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 176) & 7;
        if ( v10 )
          (*(void (__fastcall **)(__int64, char *, _QWORD))(*(_QWORD *)a1 + 56LL))(a1, &asc_24710[v10 - 1], 0);
        v2 += 4;
      }
      v3 = get_module_data((unsigned int)dword_2D4F4);
      v4 = *(_QWORD *)(a1 + 232);
      v5 = v3;
      v6 = get_module_data((unsigned int)dword_2D4F4);
      *(_QWORD *)&v19 = *(_QWORD *)(*(_QWORD *)(v5 + 32) + 16LL)
                      & ((unsigned int)get_dword(v2 + *(_QWORD *)(v6 + 33157)) + v4);
      if ( (unsigned __int64)v19 >= *(unsigned int *)(get_module_data((unsigned int)dword_2D4F4) + 33153) )
        break;
      v16 = v19;
      v11 = get_module_data((unsigned int)dword_2D4F4);
      v12 = (unsigned __int8)v18;
      v13 = *(_QWORD *)(v11 + 33157);
      v14 = get_module_data((unsigned int)dword_2D4F4);
      if ( !(unsigned __int8)sub_10290(a1, v2 + *(_QWORD *)(v14 + 33157), v12, v13, v16, &v17) )
      {
        v7 = v17;
        if ( v17 )
          return v22 - __readfsqword(0x28u);
        goto LABEL_6;
      }
LABEL_7:
      if ( (unsigned __int8)sub_FBC0(a1, 0) )
        return v22 - __readfsqword(0x28u);
      v2 += 4;
      if ( !--v1 )
        goto LABEL_22;
    }
    v7 = ++v17;
LABEL_6:
    if ( !(unsigned __int8)sub_10360(a1, &v18, 73, v7) )
      return v22 - __readfsqword(0x28u);
    goto LABEL_7;
  }
LABEL_22:
  *(_DWORD *)(get_module_data((unsigned int)dword_2D4F4) + 164) = 6;
  sub_11720(a1, "default ", 8);
  if ( !(unsigned __int8)sub_FF20(a1, 58)
    && (unsigned __int8)sub_119D0(a1, a1 + 344)
    && !(unsigned __int8)sub_FBC0(a1, 0)
    && (*(_BYTE *)(*(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 24) + 4LL) & 1) == 0 )
  {
    sub_10BB0(a1, 4);
  }
  return v22 - __readfsqword(0x28u);
}

