__int64 __fastcall sub_9080(__int64 a1, unsigned int a2, char a3)
{
  char *v3; // r12
  __int64 v4; // rdi
  __int64 v6; // rax
  unsigned __int8 *v7; // r14
  unsigned int v9; // eax
  int v10; // r13d
  __int64 v11; // rax
  const char *v12; // rdx
  __int64 *v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rbx
  unsigned __int8 *v19; // rax
  char v20; // r15
  unsigned __int8 v21; // dl
  char *v22; // rax
  const char *v23; // r9
  void *v24; // r8
  void *v25; // rcx
  char v26; // al
  size_t v27; // rdx
  void *v28; // rdi
  __int64 v29; // [rsp-10h] [rbp-4B0h]
  __int64 *v30; // [rsp-8h] [rbp-4A8h]
  unsigned __int8 *v32; // [rsp+18h] [rbp-488h] BYREF
  void *s; // [rsp+20h] [rbp-480h] BYREF
  __int128 v34; // [rsp+28h] [rbp-478h]
  void *v35; // [rsp+40h] [rbp-460h] BYREF
  __int128 v36; // [rsp+48h] [rbp-458h]
  char v37; // [rsp+60h] [rbp-440h] BYREF
  unsigned __int8 v38; // [rsp+61h] [rbp-43Fh] BYREF
  unsigned __int8 v39; // [rsp+62h] [rbp-43Eh]
  unsigned __int8 v40; // [rsp+63h] [rbp-43Dh]
  unsigned __int8 v41; // [rsp+64h] [rbp-43Ch]
  unsigned __int64 v42; // [rsp+468h] [rbp-38h]

  v3 = &v37;
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 616) + 144LL);
  v42 = __readfsqword(0x28u);
  v32 = nullptr;
  v6 = netnode_supval(v4, a2, &v37, 1024, 100);
  if ( v6 < 0
    || (v7 = (unsigned __int8 *)(&v37 + v6), &v37 >= &v37 + v6)
    || !(_DWORD)v6
    || (LOBYTE(v3) = &v38 >= v7 || (v37 & 0xF) != 7, (_BYTE)v3) )
  {
    LODWORD(v3) = 0;
    return (unsigned int)v3;
  }
  v9 = v6 - 1;
  if ( (v38 & 0x80u) != 0 )
  {
    if ( (v38 & 0xC0) == 0x80 )
    {
      if ( v9 <= 1 )
        return (unsigned int)v3;
      v10 = (v38 << 8) & 0x3F00 | v39;
      v11 = 2;
    }
    else
    {
      if ( (v38 & 0xE0) != 0xC0 || v9 <= 3 )
        return (unsigned int)v3;
      v11 = 4;
      v10 = (v38 << 24) & 0x1F000000 | v41 | (v40 << 8) | (v39 << 16);
    }
  }
  else
  {
    if ( !v9 )
      return (unsigned int)v3;
    v10 = v38;
    v11 = 1;
  }
  s = nullptr;
  v12 = &::s;
  v32 = &v38 + v11;
  if ( (a3 & 0x10) != 0 )
    v12 = "init ";
  v34 = 0;
  v13 = (__int64 *)".locals %s(";
  sub_5C00((__int64 *)&s, (__int64)".locals %s(", v12);
  if ( v10 )
  {
    v18 = 0;
    do
    {
      v19 = v32;
      if ( v32 >= v7 )
        break;
      v20 = 0;
      do
      {
        v21 = *v19;
        if ( (*v19 & 0x40) == 0 )
          break;
        v32 = ++v19;
        v20 |= v21 == 69;
      }
      while ( v7 != v19 );
      v13 = (__int64 *)&v35;
      v36 = 0;
      v35 = nullptr;
      if ( !(unsigned __int8)sub_65F0(a1, (__int64 *)&v35, &v32, (unsigned __int64)v7, v16) )
        goto LABEL_38;
      v22 = ")";
      v23 = " pinned";
      if ( v10 - 1 != (_DWORD)v18 )
        v22 = ",";
      if ( !v20 )
        v23 = &::s;
      v24 = &unk_15584;
      if ( (_QWORD)v36 )
        v24 = v35;
      v25 = &unk_15584;
      if ( (_QWORD)v34 )
        v25 = s;
      v30 = (__int64 *)v22;
      v26 = sub_4D60(a1, 4, (__int64)&unk_14DBE, v25, v24, v23, v18);
      v15 = v29;
      v13 = v30;
      if ( v26 )
      {
LABEL_38:
        if ( v35 )
        {
          *(_QWORD *)&v36 = 0;
          qfree(v35, v13, v14, v15, v16, v17);
        }
        goto LABEL_36;
      }
      if ( !(_DWORD)v18 )
      {
        v27 = v34;
        v28 = &unk_1A2B1;
        if ( (_QWORD)v34 )
        {
          v28 = s;
          v27 = v34 - 1;
        }
        v13 = &qword_20;
        memset(v28, 32, v27);
      }
      if ( v35 )
      {
        *(_QWORD *)&v36 = 0;
        qfree(v35, v13, v14, v15, v16, v17);
      }
      v18 = (unsigned int)(v18 + 1);
    }
    while ( v10 != (_DWORD)v18 );
  }
  LODWORD(v3) = 1;
LABEL_36:
  if ( s )
  {
    *(_QWORD *)&v34 = 0;
    qfree(s, v13, v14, v15, v16, v17);
  }
  return (unsigned int)v3;
}
