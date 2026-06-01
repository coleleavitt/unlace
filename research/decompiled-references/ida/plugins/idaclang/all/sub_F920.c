__int64 __fastcall sub_F920(__int64 a1, __int64 a2, __int64 a3)
{
  const char *v4; // rax
  const char *v5; // rbp
  size_t v6; // rax
  size_t v7; // r15
  size_t v8; // r14
  const char *v9; // rcx
  __int64 v10; // r13
  __int64 v11; // rax
  unsigned int v12; // eax
  int v13; // eax
  const char *v15; // [rsp+8h] [rbp-1090h] BYREF
  const char *v16; // [rsp+10h] [rbp-1088h] BYREF
  __int128 v17; // [rsp+18h] [rbp-1080h]
  void *v18; // [rsp+30h] [rbp-1068h] BYREF
  __int128 v19; // [rsp+38h] [rbp-1060h]
  char v20[4104]; // [rsp+50h] [rbp-1048h] BYREF
  unsigned __int64 v21; // [rsp+1058h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a3 + 104) & 1) != 0 )
  {
    v15 = nullptr;
    v16 = nullptr;
    v17 = 0;
    v4 = (const char *)qbasename(a2);
    v18 = nullptr;
    v5 = v4;
    v19 = 0;
    if ( v4 )
    {
      v6 = strlen(v4);
      v7 = v6 + 1;
      v8 = v6;
      v18 = (void *)qvector_reserve(&v18, 0, v6 + 1, 1);
      *(_QWORD *)&v19 = v7;
      memmove(v18, v5, v8);
      *((_BYTE *)v18 + v8) = 0;
      v5 = (const char *)v18;
    }
    qsplitfile(v5, &v15, 0);
    sub_67C0((__int64 *)&v16, (__int64)"%s.pch", v15);
    qdirname(v20, 4096, a2);
    v9 = s1;
    if ( (_QWORD)v17 )
      v9 = v16;
    qmakepath(v20, 4096, v20, v9, 0);
    if ( v18 )
    {
      *(_QWORD *)&v19 = 0;
      qfree(v18);
    }
    if ( v16 )
    {
      *(_QWORD *)&v17 = 0;
      qfree(v16);
    }
  }
  else
  {
    qtmpnam(v20, 4096);
  }
  v10 = sub_BB20();
  v11 = sub_BB20();
  v12 = sub_B700(v11, a1);
  v13 = sub_B730(v10, a1, (__int64)v20, v12);
  if ( v13 )
  {
    sub_67C0((__int64 *)(a3 + 80), (__int64)"failed to save %s, errcode=%d\n", v20, v13);
    ++*(_QWORD *)(a3 + 136);
    return 0;
  }
  else
  {
    sub_7470((__int64)"saved pch: %s\n", v20);
    return 1;
  }
}

