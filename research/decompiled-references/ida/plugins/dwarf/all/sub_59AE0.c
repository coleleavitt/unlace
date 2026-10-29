unsigned __int64 __fastcall sub_59AE0(_QWORD *a1, __int64 *a2, unsigned int a3)
{
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v9; // rdi
  __int64 v10; // rsi
  _QWORD *v11; // rdx
  _QWORD *v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rcx
  const char *numbered_type_name; // r14
  const char *v17; // rax
  int v18; // r15d
  int v19; // ebp
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 idati; // rax
  _QWORD *v25; // rdx
  __int64 v26; // rcx
  const char *v27; // rsi
  unsigned __int64 v28; // [rsp+8h] [rbp-50h] BYREF
  unsigned __int64 v29; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v30; // [rsp+18h] [rbp-40h]

  v5 = a3;
  v6 = *a2;
  v7 = a2[1];
  v30 = __readfsqword(0x28u);
  v9 = a1[2];
  v10 = *(_QWORD *)(v7 + 8LL * (v6 >= 0) + 224) + (v6 & 0x7FFFFFFFFFFFFFFFLL);
  v29 = a3;
  if ( v6 >= 0 )
    v10 |= 0xFFFFFFFF80000000LL;
  v28 = v10;
  netnode_supset(v9, v10, &v29, 8, 65);
  v11 = (_QWORD *)a1[5];
  if ( !v11 )
  {
    v12 = a1 + 4;
LABEL_13:
    v29 = (unsigned __int64)&v28;
    v12 = sub_53410(a1 + 3, v12, (unsigned __int64 **)&v29);
    goto LABEL_10;
  }
  v12 = a1 + 4;
  do
  {
    while ( 1 )
    {
      v13 = v11[2];
      v14 = v11[3];
      if ( v11[4] < v28 )
        break;
      v12 = v11;
      v11 = (_QWORD *)v11[2];
      if ( !v13 )
        goto LABEL_8;
    }
    v11 = (_QWORD *)v11[3];
  }
  while ( v14 );
LABEL_8:
  if ( a1 + 4 == v12 || v28 < v12[4] )
    goto LABEL_13;
LABEL_10:
  v12[5] = v5;
  if ( (debug & 0x400000) != 0 )
  {
    numbered_type_name = (const char *)get_numbered_type_name(a1[1], a3);
    if ( (debug & 0x400000) != 0 )
    {
      v18 = v28;
      v19 = sub_81860(a2, 0, 0);
      idati = get_idati(a2, 0, v20, v21, v22, v23);
      v25 = (_QWORD *)a1[1];
      v26 = 33;
      if ( v25 == (_QWORD *)idati )
        v26 = 61;
      sub_20160(
        &qword_CB430,
        (__int64)"dwarf_til_t(til=%p (%c=idati), til->name=%s, mappings=%a)",
        v25,
        v26,
        *v25,
        a1[2]);
      v27 = src;
      if ( (_QWORD)xmmword_CB438 )
        LODWORD(v27) = qword_CB430;
      sub_88B80(
        (unsigned int)"%s::set_ordinal_mapping(offset=%s (mapping_key=%llu), ordinal=%d, %s)\n",
        (_DWORD)v27,
        v19,
        v18,
        a3,
        (_DWORD)numbered_type_name);
    }
    if ( numbered_type_name && !strncmp(numbered_type_name, "<unnamed>_", 0xAu) )
    {
      v17 = (const char *)sub_81860(a2, 0, 0);
      sub_1E060((__int64)"Bad type name: \"%s\" for offset %s", numbered_type_name, v17);
    }
  }
  return v30 - __readfsqword(0x28u);
}

