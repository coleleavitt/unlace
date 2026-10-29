__int64 __fastcall sub_2A0060(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6, double a7)
{
  int v7; // eax
  __int64 v8; // rdx
  unsigned int v9; // ebp
  _DWORD *v11; // rax
  unsigned int v12; // edx
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rbp
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rdx
  int v19; // eax
  char v20; // al
  __int64 tinfo_property; // [rsp+8h] [rbp-50h] BYREF
  __int64 v22; // [rsp+10h] [rbp-48h] BYREF
  __int64 v23; // [rsp+18h] [rbp-40h]
  unsigned __int64 v24; // [rsp+28h] [rbp-30h]

  v7 = *(_DWORD *)a1;
  v24 = __readfsqword(0x28u);
  if ( v7 == 7 )
  {
    v15 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
    if ( *(_BYTE *)(v15 + 320) )
    {
      tinfo_property = get_tinfo_property();
      if ( (_BYTE)tinfo_property )
      {
        v22 = 1;
        v23 = 0;
        copy_tinfo_t();
        sub_29F770(a1, (unsigned int *)&v22, a7);
        sub_29EC30((__int64)&v22, a7);
        clear_tinfo_t();
        goto LABEL_19;
      }
      clear_tinfo_t();
    }
    if ( (*(_BYTE *)(v15 + 4) & 0x10) != 0 )
    {
      if ( *(int *)(v15 + 464) <= 0 )
      {
        if ( !under_debugger )
          sub_383060(0xCA96u, a7);
        BUG();
      }
      sub_13D280((_QWORD *)v15, 0, a7);
      v22 = 1;
      v23 = 0;
      copy_tinfo_t();
      sub_29F770(a1, (unsigned int *)&v22, a7);
      sub_29EC30((__int64)&v22, a7);
      goto LABEL_19;
    }
LABEL_20:
    v9 = 0;
    goto LABEL_7;
  }
  if ( v7 != 8 )
  {
    if ( v7 == 6 )
    {
      v8 = *(_QWORD *)(a1 + 8);
      if ( *(_DWORD *)(v8 + 8) != 57 || *(_DWORD *)(*(_QWORD *)(v8 + 24) + 8LL) != 48 )
        goto LABEL_6;
      tinfo_property = get_tinfo_property();
      if ( !(unsigned int)sub_32E340(&tinfo_property) )
      {
        clear_tinfo_t();
        v8 = *(_QWORD *)(a1 + 8);
LABEL_6:
        v9 = sub_29F9A0(a1, a2, v8, a4, a5, a6, a7);
        goto LABEL_7;
      }
      clear_tinfo_t();
      *(_DWORD *)a1 = 8;
      v16 = operator new(0x10u);
      v17 = *(_QWORD *)(a1 + 8);
      *(_DWORD *)(v16 + 8) = -1;
      *(_QWORD *)v16 = v17;
      *(_QWORD *)(a1 + 8) = v16;
LABEL_19:
      v9 = 1;
      goto LABEL_7;
    }
    goto LABEL_20;
  }
  v11 = *(_DWORD **)(a1 + 8);
  v12 = v11[2] + 1;
  tinfo_property = 0;
  if ( v12 <= 0x100 )
  {
    tinfo_property = get_tinfo_property();
    v11 = *(_DWORD **)(a1 + 8);
  }
  v13 = *(_QWORD *)(*(_QWORD *)v11 + 24LL);
  v14 = *(_DWORD *)(v13 + 8);
  if ( v14 == 48
    || v14 == 51
    && ((v18 = *(_QWORD *)(v13 + 24), v19 = *(_DWORD *)(v18 + 8), v19 == 48)
     || (unsigned int)(v19 - 35) <= 1
     && *(_DWORD *)(*(_QWORD *)(v18 + 24) + 8LL) == 48
     && (v20 = get_tinfo_property(), (v20 & 0x3E) != 0)
     && (v20 & 0xFu) <= 8)
    || !(_BYTE)tinfo_property
    || get_tinfo_size() == -1
    || (unsigned int)sub_32E340(&tinfo_property) )
  {
    v9 = 0;
  }
  else
  {
    v22 = 1;
    v23 = 0;
    copy_tinfo_t();
    sub_29F770(a1, (unsigned int *)&v22, a7);
    v9 = 1;
    sub_29EC30((__int64)&v22, a7);
  }
  clear_tinfo_t();
LABEL_7:
  *(_DWORD *)(a1 + 4) |= sub_29C0C0(a1, a2, a7);
  return v9;
}

