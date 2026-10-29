__int64 __fastcall sub_28C0A0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // r14
  __int64 v4; // r12
  int v5; // eax
  char v6; // al
  char tinfo_property; // al
  __int64 tinfo_size; // r14
  unsigned int v9; // ebx
  int v11; // r15d
  int v12; // r14d
  int v13; // eax
  __int64 v14; // r8
  __int64 v15; // rdx
  int v16; // edx
  __int64 v17; // r8
  __int64 v18; // r8
  __int64 v19; // rax
  const char *v20; // r14
  int v21; // eax
  bool v22; // r12
  __int64 v23; // [rsp+8h] [rbp-70h]
  int v24; // [rsp+8h] [rbp-70h]
  __int64 v25; // [rsp+8h] [rbp-70h]
  __int64 v26; // [rsp+8h] [rbp-70h]
  __int64 v27; // [rsp+8h] [rbp-70h]
  __int64 v28; // [rsp+10h] [rbp-68h]
  __int64 v29; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v30[9]; // [rsp+30h] [rbp-48h] BYREF

  v2 = *(_QWORD *)(a1 + 72);
  v30[1] = __readfsqword(0x28u);
  v29 = 0;
  v3 = *(_QWORD *)(v2 + 112);
  v4 = a2[3];
  if ( !(unsigned __int8)sub_280080((_QWORD *)a1, (int)&v29, (__int64)a2) )
  {
    v5 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *(_QWORD *)(a1 + 24) - 8) + 8LL);
    if ( v5 == 72 )
      goto LABEL_9;
    if ( (unsigned int)(v5 - 73) <= 3 )
    {
      if ( (v6 = get_tinfo_property(), (v6 & 0x3E) != 0) && (v6 & 0xFu) <= 8 || (get_tinfo_property() & 0xF) == 0xA )
      {
        tinfo_property = get_tinfo_property();
        if ( ((tinfo_property & 0x3E) == 0 || (tinfo_property & 0xFu) > 8) && (get_tinfo_property() & 0xF) != 0xA )
        {
          v9 = 0;
          goto LABEL_13;
        }
        tinfo_size = get_tinfo_size();
        if ( get_tinfo_size() == tinfo_size )
          goto LABEL_9;
      }
    }
    goto LABEL_25;
  }
  if ( *(_DWORD *)(v4 + 8) != 16
    || !(unsigned __int8)sub_27BE30(v3, *(_QWORD *)(v4 + 32), (__int64)(a2 + 6))
    && !(unsigned __int8)sub_27BE30(v3, *(_QWORD *)(v4 + 40), (__int64)(a2 + 6)) )
  {
    v11 = get_tinfo_size();
    v12 = get_tinfo_size();
    v13 = get_tinfo_size();
    v14 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *(_QWORD *)(a1 + 24) - 8);
    v15 = *(int *)(v14 + 8);
    if ( (unsigned int)(v15 - 2) <= 0xD && (*((_BYTE *)&off_4C0A60 + 16 * v15 + 11) & 8) == 0 )
    {
      v23 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *(_QWORD *)(a1 + 24) - 8);
      v13 = get_tinfo_size();
      v14 = v23;
    }
    if ( v12 == -1 || v11 == -1 || v13 == -1 )
      goto LABEL_25;
    v16 = v11;
    if ( v13 <= v11 )
      v16 = v13;
    if ( v16 > v12 )
      goto LABEL_25;
    if ( v13 > v12 )
    {
      v28 = v14;
      v24 = get_tinfo_property();
      if ( v24 != (unsigned int)get_tinfo_property() )
        goto LABEL_25;
      v14 = v28;
    }
    v25 = v14;
    if ( (get_tinfo_property() & 0x3F) == 0x2D
      || (unsigned __int8)sub_27C300(*(_QWORD *)(a1 + 72), a2[3], (__int64)&v29, v4 + 48) )
    {
      goto LABEL_25;
    }
    v17 = v25;
    if ( *(_DWORD *)(v25 + 8) == 51 )
    {
      if ( (get_tinfo_property() & 0xF) != 0xA )
        goto LABEL_25;
      v30[0] = 0;
      v30[0] = get_tinfo_property();
      if ( !sub_267C90((__int64)v30, v25) )
      {
        v9 = 0;
        clear_tinfo_t();
        goto LABEL_13;
      }
      clear_tinfo_t();
      v17 = v25;
    }
    v26 = v17;
    if ( !(unsigned __int8)sub_28B6F0(a1, (__int64)a2, (__int64)a2) )
    {
LABEL_25:
      v9 = 0;
      goto LABEL_13;
    }
    v18 = v26;
    if ( *(_DWORD *)(v26 + 8) != 57 || (v19 = *(_QWORD *)(v26 + 24), *(_DWORD *)(v19 + 8) != 68) )
    {
LABEL_40:
      sub_250FD0(a2, a2[3]);
      goto LABEL_10;
    }
    if ( v11 <= v12 )
    {
      if ( v11 < v12 )
        goto LABEL_51;
    }
    else
    {
      v20 = *(const char **)(v19 + 24);
      if ( !strcmp(v20, "__CFADD__") )
        goto LABEL_25;
      if ( !strcmp(v20, "__OFADD__") )
        goto LABEL_25;
      if ( !strcmp(v20, "__CFSUB__") )
        goto LABEL_25;
      v21 = strcmp(v20, "__OFSUB__");
      v18 = v26;
      if ( !v21 )
        goto LABEL_25;
    }
    v27 = v18;
    v22 = sub_27A7E0();
    if ( v22 == sub_27A7E0() )
      goto LABEL_40;
    v19 = *(_QWORD *)(v27 + 24);
LABEL_51:
    if ( !strncmp(*(const char **)(v19 + 24), "COERCE_", 7u) )
    {
      v9 = 0;
      goto LABEL_13;
    }
    goto LABEL_40;
  }
  sub_2422C0(*(_QWORD *)(v4 + 32), *(_QWORD *)(a1 + 72), a2 + 6);
  sub_2422C0(*(_QWORD *)(v4 + 40), *(_QWORD *)(a1 + 72), a2 + 6);
  sub_23F940(v4, v3, 0);
LABEL_9:
  sub_250FD0(a2, v4);
LABEL_10:
  if ( (unsigned __int8)sub_27F280(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL)) )
    *(_DWORD *)(a1 + 8) |= 8u;
  v9 = 1;
LABEL_13:
  clear_tinfo_t();
  return v9;
}

