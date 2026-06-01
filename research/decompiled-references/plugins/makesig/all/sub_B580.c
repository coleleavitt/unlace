__int64 __fastcall sub_B580(__int64 a1, __int64 a2)
{
  const char *v2; // rcx
  __int64 v3; // r12
  __int64 v4; // rax
  int v5; // ebp
  int v6; // r14d
  __int64 v7; // r15
  unsigned int v8; // r13d
  int v9; // r12d
  __int64 v10; // r14
  _BYTE *v11; // r15
  __int64 v12; // rbp
  __int64 v13; // r15
  __int64 v14; // rbp
  const char *v15; // r9
  __int64 v16; // rax
  const char *v17; // r8
  __int64 v18; // rbp
  __int64 v19; // r15
  __int64 v20; // rbp
  const char *v21; // r9
  __int64 v22; // rax
  const char *v23; // r8
  int v24; // r14d
  __int64 v25; // r15
  __int64 v26; // rax
  const char *v27; // rcx
  int v29; // [rsp+4h] [rbp-44h]

  v2 = s1;
  v3 = a2;
  v4 = *(_QWORD *)(a2 + 176);
  if ( *(_QWORD *)(v4 + 8) )
    v2 = *(const char **)v4;
  sub_B430(a1, (__int64)"%s file:     %s\n", ";;; ", v2);
  sub_B430(a1, (__int64)"%s Tail:", ";;; ");
  if ( *(_QWORD *)(a2 + 160) )
  {
    v5 = 32;
    v6 = 0;
    sub_B430(a1, (__int64)"\n");
    v7 = a2;
    if ( *(_QWORD *)(a2 + 160) )
    {
      do
      {
        v8 = 32 * v6;
        v9 = 0;
        sub_B430(a1, (__int64)"%s", ";;; ");
        sub_B430(a1, (__int64)"\t");
        v29 = v6;
        v10 = v7;
        while ( (unsigned __int64)v8 < *(_QWORD *)(v10 + 160) )
        {
          v11 = (_BYTE *)(*(_QWORD *)(v10 + 152) + 2LL * v8);
          if ( *v11 )
          {
            ++v8;
            sub_B430(a1, (__int64)"%02X ", (unsigned __int8)v11[1]);
            v9 += (unsigned __int8)v11[1];
            if ( v5 == v8 )
              break;
          }
          else
          {
            ++v8;
            sub_B430(a1, (__int64)".. ");
            if ( v5 == v8 )
              break;
          }
        }
        v7 = v10;
        v5 += 32;
        sub_B430(a1, (__int64)"\t(%04X)\n", v9);
        v6 = v29 + 1;
      }
      while ( v29 + 1 < (unsigned __int64)((*(_QWORD *)(v7 + 160) >> 5) + 1LL) );
      v3 = v7;
    }
    else
    {
      sub_B430(a1, (__int64)"%s", ";;; ");
      sub_B430(a1, (__int64)"(no tail)\n");
    }
  }
  else
  {
    sub_B430(a1, (__int64)"(none)\n");
  }
  v12 = *(_QWORD *)(v3 + 16);
  sub_B430(a1, (__int64)"%s funcs (%d):\n", ";;; ", v12);
  if ( (int)v12 > 0 )
  {
    v13 = 0;
    v14 = ((unsigned int)(v12 - 1) + 1LL) << 6;
    do
    {
      v15 = s1;
      v16 = v13 + *(_QWORD *)(v3 + 8);
      if ( *(_QWORD *)(v16 + 8) )
        v15 = *(const char **)v16;
      v17 = "";
      if ( (*(_BYTE *)(v16 + 57) & 2) != 0 )
        v17 = "@";
      v13 += 64;
      sub_B430(a1, (__int64)"%s\t%04X%s: %s\n", ";;; ", *(_DWORD *)(v16 + 24), v17, v15);
    }
    while ( v14 != v13 );
  }
  v18 = *(_QWORD *)(v3 + 136);
  sub_B430(a1, (__int64)"%s fixups (%d):\n", ";;; ", v18);
  if ( (int)v18 > 0 )
  {
    v19 = 0;
    v20 = ((unsigned int)(v18 - 1) + 1LL) << 6;
    do
    {
      v21 = s1;
      v22 = v19 + *(_QWORD *)(v3 + 128);
      if ( *(_QWORD *)(v22 + 8) )
        v21 = *(const char **)v22;
      v23 = "";
      if ( (*(_BYTE *)(v22 + 57) & 2) != 0 )
        v23 = "@";
      v19 += 64;
      sub_B430(a1, (__int64)"%s \t%04X%s: %s\n", ";;; ", *(_DWORD *)(v22 + 24), v23, v21);
    }
    while ( v20 != v19 );
  }
  v24 = 0;
  v25 = 0;
  sub_B430(a1, (__int64)"%s alen:     %02X\n", ";;; ", *(unsigned __int8 *)(v3 + 188));
  sub_B430(a1, (__int64)"%s asum:     %04X\n", ";;; ", *(unsigned __int16 *)(v3 + 96));
  sub_B430(a1, (__int64)"%s rulebytes: ", ";;; ");
  if ( *(_QWORD *)(v3 + 112) )
  {
    while ( 1 )
    {
      ++v24;
      v26 = *(_QWORD *)(v3 + 104) + 8 * v25;
      v25 = v24;
      sub_B430(a1, (__int64)"%04X->%02X", *(_DWORD *)v26, *(unsigned __int8 *)(v26 + 4));
      if ( (unsigned __int64)v24 >= *(_QWORD *)(v3 + 112) )
        break;
      if ( v24 > 0 )
        sub_B430(a1, (__int64)", ");
    }
  }
  sub_B430(a1, (__int64)"\n");
  v27 = s1;
  if ( *(_QWORD *)(v3 + 40) )
    v27 = *(const char **)(v3 + 32);
  sub_B430(a1, (__int64)"%s rulefunc: %s\n", ";;; ", v27);
  sub_B430(a1, (__int64)"%s tlen:     %04X\n", ";;; ", *(_DWORD *)(v3 + 160));
  return sub_B430(a1, (__int64)"\n");
}
