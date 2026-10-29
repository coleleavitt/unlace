__int64 __fastcall sub_8B910(
        __int64 *a1,
        __int64 a2,
        __int64 *a3,
        _DWORD *a4,
        __int64 (__fastcall *a5)(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4))
{
  __int64 v8; // rax
  unsigned int v9; // ebp
  const char *v11; // rcx
  __int64 v12; // r15
  char v13; // al
  unsigned __int64 v14; // rcx
  const char *v15; // rdi
  const char *v16; // rdx
  const char *v17; // rsi
  const char *v18; // rdx
  __int64 v19; // rax
  __int64 v21; // [rsp+10h] [rbp-78h]
  const char *v22; // [rsp+18h] [rbp-70h]
  unsigned int v23; // [rsp+18h] [rbp-70h]
  __int64 v24; // [rsp+18h] [rbp-70h]
  __int64 v25; // [rsp+20h] [rbp-68h]
  unsigned __int64 v26; // [rsp+28h] [rbp-60h]
  const char *v27; // [rsp+30h] [rbp-58h] BYREF
  __int128 v28; // [rsp+38h] [rbp-50h]
  unsigned __int64 v29; // [rsp+48h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  if ( (debug & 0x400000) != 0 )
    sub_88B80((__int64)"bfd_load_section(obj=%p, section_index=%llu).\n", a1, a2);
  if ( !a2 )
    return 1;
  if ( a2 - 1 < (unsigned __int64)a1[14] )
  {
    v8 = *a1;
    if ( !*a1 || *(_DWORD *)(v8 + 8) != 1 )
    {
      sub_1D740((__int64)"Input source is not local file.\n");
      return 1;
    }
    v11 = src;
    if ( *(_QWORD *)(v8 + 24) )
      v11 = *(const char **)(v8 + 16);
    v22 = v11;
    v25 = a1[13];
    v21 = open_linput(v11, 0);
    if ( !v21 )
    {
      sub_1D740((__int64)"Cannot open file: %s.\n", v22);
      return 1;
    }
    v12 = v25 + 120 * (a2 - 1);
    v23 = *(_DWORD *)(v12 + 8);
    if ( a5 )
    {
      v27 = nullptr;
      v28 = 0;
      v13 = qgetenv("IDA_DWARF_MAX_ZIP_RATIO", &v27);
      v14 = 1000;
      if ( v13 )
      {
        v15 = src;
        if ( (_QWORD)v28 )
          v15 = v27;
        v14 = (int)strtol(v15, nullptr, 10);
      }
      if ( v27 )
      {
        v26 = v14;
        *(_QWORD *)&v28 = 0;
        qfree(v27);
        v14 = v26;
      }
    }
    else
    {
      v14 = 1;
    }
    LODWORD(v27) = v23 / v14;
    if ( (unsigned __int8)sub_8B860(v21, &v27, 1u, *(_QWORD *)(v12 + 48), -1) )
    {
      v18 = src;
      if ( *(_QWORD *)(v12 + 24) )
        v18 = *(const char **)(v12 + 16);
      v19 = sub_832E0(a1, a2, v18, v23);
      if ( v19 )
      {
        v24 = v19;
        qlseek(v21, *(_QWORD *)(v12 + 48), 0);
        if ( !a5 )
          a5 = sub_89150;
        v9 = a5(v21, v12, v24, a4);
        if ( v9 )
          sub_83540((__int64)a1, v24);
        else
          *a3 = v24;
        goto LABEL_30;
      }
      if ( (debug & 0x400000) != 0 )
        sub_88B80((__int64)"Couldn't allocate %u bytes of data for section.\n", v23);
      *a4 = 8;
    }
    else
    {
      if ( (debug & 0x400000) != 0 )
      {
        v16 = src;
        if ( *(_QWORD *)(v12 + 24) )
          v16 = *(const char **)(v12 + 16);
        v17 = "Seemingly wrong";
        if ( !a5 )
          v17 = "Wrong";
        sub_88B80((__int64)"%s section '%s' size %u bytes\n", v17, v16, v23);
      }
      *a4 = 435;
    }
    v9 = 1;
LABEL_30:
    close_linput(v21);
    return v9;
  }
  if ( (debug & 0x400000) != 0 )
    sub_88B80((__int64)"No such section.\n");
  return (unsigned int)-1;
}

