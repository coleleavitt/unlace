__int64 __fastcall sub_1A1640(_QWORD *a1, __int64 a2, __int64 a3, double a4)
{
  __int64 v5; // r12
  __int64 v6; // r15
  int v7; // r13d
  bool v8; // r15
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // rax
  int v12; // eax
  char *v14; // rdi
  char *v15; // rdx
  unsigned __int64 v16; // rsi
  __int64 v17; // rdi
  int v18; // edx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  int v22; // eax
  __int64 v23; // [rsp+8h] [rbp-78h]
  int tinfo_size; // [rsp+1Ch] [rbp-64h]
  __int64 v26; // [rsp+28h] [rbp-58h]
  __int64 v27; // [rsp+28h] [rbp-58h]
  __int64 v28; // [rsp+30h] [rbp-50h] BYREF
  __int64 v29; // [rsp+38h] [rbp-48h]
  unsigned __int64 v30; // [rsp+48h] [rbp-38h]

  v30 = __readfsqword(0x28u);
  v5 = a1[187];
  tinfo_size = get_tinfo_size();
  v26 = *(_QWORD *)(a2 + 72);
  if ( (*(_BYTE *)(a2 + 8) & 0x20) != 0 )
  {
    v28 = 0;
    v29 = 0;
    cleanup_argloc();
    LODWORD(v28) = 3;
    LODWORD(v29) = v26;
    v10 = sub_1F06C0(a1 + 54, (int *)&v28, 1, -1);
    v7 = v10;
    if ( v10 != -1 )
    {
      v27 = 104LL * v10;
      v11 = a1[54] + v27;
      if ( *(_DWORD *)(v11 + 88) == tinfo_size )
      {
        *(_DWORD *)(v11 + 24) |= 0x200u;
        if ( a1[5] == a3 )
          sub_1A15A0(a2, 1, a4);
        v8 = 0;
        cleanup_argloc();
        v9 = a1[54] + v27;
        goto LABEL_14;
      }
      if ( !under_debugger )
        sub_383060(0xCBF8u, a4);
      goto LABEL_47;
    }
    v7 = sub_1F6B00(a1, v26, tinfo_size, (__int64 *)(v5 + 248), 1, a3, 2);
    v8 = 0;
    cleanup_argloc();
LABEL_7:
    if ( v7 != -1 )
    {
      v9 = a1[54] + 104LL * v7;
      goto LABEL_14;
    }
    if ( !under_debugger )
      sub_383060(0xC862u, a4);
LABEL_47:
    BUG();
  }
  if ( a3 != -1 )
  {
    v6 = a1[18];
    v23 = tinfo_size + v26;
    if ( v23 <= v6 )
    {
      v28 = 0;
      v29 = 0;
      cleanup_argloc();
      LODWORD(v28) = 1;
      v29 = v26;
      v7 = sub_1F06C0(a1 + 54, (int *)&v28, tinfo_size, -1);
      cleanup_argloc();
      if ( v7 != -1 )
      {
        v9 = a1[54] + 104LL * v7;
        if ( *(_DWORD *)v9 != 1 )
        {
          if ( !under_debugger )
            sub_383060(0xC805u, a4);
          goto LABEL_47;
        }
        if ( *(_QWORD *)(v9 + 8) == v26 )
        {
          v8 = 0;
LABEL_14:
          sub_1EF8F0(v9, a1[188], (_BYTE *)(v5 + 248), 0);
          v12 = *(_DWORD *)(v9 + 24);
          if ( (v12 & 0x100) != 0 )
          {
            v14 = (char *)a1[57];
            v15 = &v14[4 * a1[58]];
            if ( v14 != v15 )
            {
              while ( *(_DWORD *)v14 != v7 )
              {
                v14 += 4;
                if ( v15 == v14 )
                  goto LABEL_15;
              }
              if ( v14 != v15 )
              {
                memmove(v14, v14 + 4, v15 - v14 - 4);
                --a1[58];
                v12 = *(_DWORD *)(v9 + 24);
              }
            }
          }
LABEL_15:
          BYTE1(v12) &= 0x7Eu;
          *(_DWORD *)(v9 + 24) = v12 | 0x100000;
          if ( !*(_DWORD *)(v9 + 92) )
            *(_DWORD *)(v9 + 92) = 1;
          if ( v8 )
          {
            sub_3311F0(a1, *(_QWORD *)(v9 + 16), 0x1Eu);
            *(_DWORD *)(v9 + 24) |= 0x400u;
          }
          return (unsigned int)v7;
        }
      }
    }
    else if ( a1[5] == a3 )
    {
      a3 = sub_1A15A0(a2, 1, a4);
    }
    v28 = 0;
    v7 = sub_232C90((__int64)a1, v26, tinfo_size, (__int64)&v28, 1, a3, 4, nullptr);
    v8 = v23 > v6;
    clear_tinfo_t();
    goto LABEL_7;
  }
  v16 = a1[55];
  if ( v16 )
  {
    v17 = a1[54];
    v18 = 0;
    v7 = -1;
    v19 = 0;
    do
    {
      v20 = v17 + 104 * v19;
      if ( *(_DWORD *)v20 == 1 && *(_QWORD *)(v20 + 8) == v26 )
      {
        v7 = v18;
        if ( *(_DWORD *)(v20 + 92) )
          goto LABEL_36;
      }
      v19 = ++v18;
    }
    while ( v18 < v16 );
    if ( v7 != -1 )
    {
LABEL_36:
      v21 = v17 + 104LL * v7;
      v22 = *(_DWORD *)(v21 + 24);
      BYTE1(v22) &= 0x7Eu;
      *(_DWORD *)(v21 + 24) = v22 | 0x100000;
    }
  }
  else
  {
    return (unsigned int)-1;
  }
  return (unsigned int)v7;
}

