__int64 __fastcall sub_1A1080(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r12
  __int64 v5; // r15
  int v6; // r13d
  bool v7; // r15
  __int64 v8; // rbx
  int v9; // eax
  __int64 v10; // rax
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  int v14; // eax
  char *v16; // rdi
  char *v17; // rdx
  unsigned __int64 v18; // rsi
  __int64 v19; // rdi
  int v20; // edx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  int v24; // eax
  __int64 v25; // [rsp+8h] [rbp-78h]
  unsigned int tinfo_size; // [rsp+1Ch] [rbp-64h]
  __int64 v28; // [rsp+28h] [rbp-58h]
  __int64 v29; // [rsp+28h] [rbp-58h]
  __int64 v30; // [rsp+30h] [rbp-50h] BYREF
  __int64 v31; // [rsp+38h] [rbp-48h]
  unsigned __int64 v32; // [rsp+48h] [rbp-38h]

  v32 = __readfsqword(0x28u);
  v4 = a1[187];
  tinfo_size = get_tinfo_size();
  v28 = *(_QWORD *)(a2 + 72);
  if ( (*(_BYTE *)(a2 + 8) & 0x20) != 0 )
  {
    v30 = 0;
    v31 = 0;
    cleanup_argloc();
    LODWORD(v30) = 3;
    LODWORD(v31) = v28;
    v9 = sub_1F0A80(a1 + 54, &v30, 1, 0xFFFFFFFFLL);
    v6 = v9;
    if ( v9 != -1 )
    {
      v29 = 104LL * v9;
      v10 = a1[54] + v29;
      if ( *(_DWORD *)(v10 + 88) == tinfo_size )
      {
        *(_DWORD *)(v10 + 24) |= 0x200u;
        if ( a1[5] == a3 )
          sub_1A0FE0(a2, 1);
        v7 = 0;
        cleanup_argloc();
        v8 = a1[54] + v29;
        goto LABEL_14;
      }
      if ( !under_debugger )
        sub_3835A0(52216);
      goto LABEL_47;
    }
    v6 = sub_1F6EC0((_DWORD)a1, v28, tinfo_size, (int)v4 + 248, 1, a3, 2);
    v7 = 0;
    cleanup_argloc();
LABEL_7:
    if ( v6 != -1 )
    {
      v8 = a1[54] + 104LL * v6;
      goto LABEL_14;
    }
    if ( !under_debugger )
      sub_3835A0(51298);
LABEL_47:
    BUG();
  }
  if ( a3 != -1 )
  {
    v5 = a1[18];
    v25 = (int)tinfo_size + v28;
    if ( v25 <= v5 )
    {
      v30 = 0;
      v31 = 0;
      cleanup_argloc();
      LODWORD(v30) = 1;
      v31 = v28;
      v6 = sub_1F0A80(a1 + 54, &v30, tinfo_size, 0xFFFFFFFFLL);
      cleanup_argloc();
      if ( v6 != -1 )
      {
        v8 = a1[54] + 104LL * v6;
        if ( *(_DWORD *)v8 != 1 )
        {
          if ( !under_debugger )
            sub_3835A0(51205);
          goto LABEL_47;
        }
        if ( *(_QWORD *)(v8 + 8) == v28 )
        {
          v7 = 0;
LABEL_14:
          sub_1EFCB0(v8, a1[188], v4 + 248, 0);
          v14 = *(_DWORD *)(v8 + 24);
          if ( (v14 & 0x100) != 0 )
          {
            v16 = (char *)a1[57];
            v17 = &v16[4 * a1[58]];
            if ( v16 != v17 )
            {
              while ( *(_DWORD *)v16 != v6 )
              {
                v16 += 4;
                if ( v17 == v16 )
                  goto LABEL_15;
              }
              if ( v16 != v17 )
              {
                memmove(v16, v16 + 4, v17 - v16 - 4);
                --a1[58];
                v14 = *(_DWORD *)(v8 + 24);
              }
            }
          }
LABEL_15:
          BYTE1(v14) &= 0x7Eu;
          *(_DWORD *)(v8 + 24) = v14 | 0x100000;
          if ( !*(_DWORD *)(v8 + 92) )
            *(_DWORD *)(v8 + 92) = 1;
          if ( v7 )
          {
            sub_331510((_DWORD)a1, *(_QWORD *)(v8 + 16), 30, v11, v12, v13);
            *(_DWORD *)(v8 + 24) |= 0x400u;
          }
          return (unsigned int)v6;
        }
      }
    }
    else if ( a1[5] == a3 )
    {
      LODWORD(a3) = sub_1A0FE0(a2, 1);
    }
    v30 = 0;
    v6 = sub_233050((_DWORD)a1, v28, tinfo_size, (unsigned int)&v30, 1, a3, 4, 0);
    v7 = v25 > v5;
    clear_tinfo_t();
    goto LABEL_7;
  }
  v18 = a1[55];
  if ( v18 )
  {
    v19 = a1[54];
    v20 = 0;
    v6 = -1;
    v21 = 0;
    do
    {
      v22 = v19 + 104 * v21;
      if ( *(_DWORD *)v22 == 1 && *(_QWORD *)(v22 + 8) == v28 )
      {
        v6 = v20;
        if ( *(_DWORD *)(v22 + 92) )
          goto LABEL_36;
      }
      v21 = ++v20;
    }
    while ( v20 < v18 );
    if ( v6 != -1 )
    {
LABEL_36:
      v23 = v19 + 104LL * v6;
      v24 = *(_DWORD *)(v23 + 24);
      BYTE1(v24) &= 0x7Eu;
      *(_DWORD *)(v23 + 24) = v24 | 0x100000;
    }
  }
  else
  {
    return (unsigned int)-1;
  }
  return (unsigned int)v6;
}

