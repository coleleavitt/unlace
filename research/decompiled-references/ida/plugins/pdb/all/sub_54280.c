__int64 __fastcall sub_54280(__int64 a1, const char *a2)
{
  __int64 v3; // rdi
  const char *v4; // rbx
  char v5; // al
  __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 v8; // rax
  char v9; // al
  __int64 v10; // rdi
  const char *v12; // rax
  __int64 *v13; // rbp
  const char *v14; // rcx
  const char *v15; // rdx
  __m128i v16; // [rsp+0h] [rbp-38h] BYREF
  __int64 v17; // [rsp+10h] [rbp-28h]
  unsigned __int64 v18; // [rsp+18h] [rbp-20h]

  v3 = *(_QWORD *)a2;
  v18 = __readfsqword(0x28u);
  v4 = a2;
  v5 = sub_7AD90(v3);
  v7 = *(_QWORD *)a2;
  if ( v5 )
  {
    if ( (*(_DWORD *)debug & 0x400000) != 0 )
    {
      a2 = src;
      if ( *(_QWORD *)(v7 + 32) )
        a2 = *(const char **)(v7 + 24);
      sub_29350();
      v7 = *(_QWORD *)v4;
    }
    v8 = *(_QWORD *)(v7 + 88);
    v16 = _mm_loadu_si128((const __m128i *)(v7 + 72));
    v17 = v8;
    v9 = sub_79D30(v7, a2, v6);
    v10 = *(_QWORD *)v4;
    if ( !v9 && *(_BYTE *)(v10 + 224) )
    {
      v13 = (__int64 *)(a1 + 48);
      v14 = src;
      if ( *(_QWORD *)(v10 + 160) )
        v14 = *(const char **)(v10 + 152);
      v15 = src;
      if ( *(_QWORD *)(v10 + 32) )
        v15 = *(const char **)(v10 + 24);
      sub_37FD0(
        v13,
        (__int64)"Failed to load %s:\n"
                 "%s\n"
                 "You can change the PDB provider in pdb.cfg:\n"
                 "PDB_PROVIDER = PDB_PROVIDER_MSDIA\n"
                 "or with the '-Opdb:msdia' command line option",
        v15,
        v14);
    }
    else if ( (unsigned __int8)sub_79D60(v10, &v16) || (unsigned int)sub_29C90() == 1 )
    {
      return 0;
    }
    return 2147500037LL;
  }
  else
  {
    v12 = src;
    if ( *(_QWORD *)(v7 + 32) )
      v12 = *(const char **)(v7 + 24);
    qbasename(v12, a2, v6);
    sub_244A0();
    if ( (*(_DWORD *)debug & 0x400000) != 0 )
      sub_29350();
    return 1;
  }
}

