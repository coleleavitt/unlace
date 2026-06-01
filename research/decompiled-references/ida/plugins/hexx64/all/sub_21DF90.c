__int64 __fastcall sub_21DF90(__int64 a1, int a2, unsigned int a3, double a4)
{
  int v4; // r15d
  __int64 v5; // rbp
  __int64 v7; // rbx
  int v8; // eax
  bool v9; // zf
  __int64 v10; // rbx
  __int64 v11; // r15
  __int64 v12; // rbx
  int v13; // eax
  int v15; // eax
  int v16; // edx
  unsigned int v17; // ecx
  unsigned int v18; // eax
  __int64 v19; // rdx
  int v20; // ebp
  int v21; // eax
  __int64 v22; // rbp
  int v23; // r12d
  __int64 v24; // rax
  int v25; // edx
  char v26; // al
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  int v30; // r12d
  int v31; // edx
  int v32; // [rsp+0h] [rbp-98h]
  __int64 v33; // [rsp+0h] [rbp-98h]
  unsigned int v34; // [rsp+14h] [rbp-84h]
  __int64 v35; // [rsp+18h] [rbp-80h]
  _DWORD *v36; // [rsp+20h] [rbp-78h]
  __int64 v37; // [rsp+28h] [rbp-70h]
  _QWORD v38[2]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v39[2]; // [rsp+40h] [rbp-58h] BYREF
  char v40[7]; // [rsp+51h] [rbp-47h] BYREF
  unsigned __int64 v41; // [rsp+58h] [rbp-40h]

  v41 = __readfsqword(0x28u);
  if ( (unsigned __int64)a2 >= *(_QWORD *)(a1 + 440) )
  {
    if ( !under_debugger )
      sub_383060(0xC85Fu, a4);
    goto LABEL_71;
  }
  v4 = *(_DWORD *)(a1 + 480);
  v5 = a1;
  if ( v4 != -1 )
  {
    *(_DWORD *)(a1 + 480) = -1;
    v7 = *(_QWORD *)(a1 + 432) + 104LL * v4;
    v8 = *(_DWORD *)(v7 + 24);
    v32 = v8;
    LOBYTE(v8) = v8 & 0x7F;
    v9 = *(_QWORD *)(v7 + 40) == 0;
    *(_DWORD *)(v7 + 24) = v8;
    if ( !v9 )
    {
      v15 = strcmp(*(const char **)(v7 + 32), "result");
      v16 = v32;
      if ( !(v15 | v32 & 0x20) )
      {
        LOBYTE(v16) = v32 & 0x7B;
        *(_DWORD *)(v7 + 24) = v16;
        sub_214580((_QWORD *)a1, v4, a4);
      }
    }
  }
  v10 = *(_QWORD *)(a1 + 432);
  *(_DWORD *)(a1 + 480) = a2;
  v11 = 104LL * a2;
  v12 = v11 + v10;
  v13 = *(_DWORD *)(v12 + 24);
  if ( !*(_BYTE *)(a1 + 320) && (v13 & 2) == 0 )
  {
    sub_3724B0(a1, (_QWORD *)(v12 + 80), -1);
    if ( (unsigned __int8)sub_1C67E0(a1, v12 + 80, (_DWORD *)v12, a3, a4) )
      goto LABEL_13;
    if ( (get_tinfo_property() & 0xF) == 9 )
    {
      sub_32C270(v38, *(_QWORD *)(a1 + 1504), *(_DWORD *)(v12 + 88));
      v26 = v38[0];
      goto LABEL_37;
    }
    v17 = *(_DWORD *)(a1 + 64);
    v33 = *(_QWORD *)(a1 + 1496);
    v36 = (_DWORD *)(v11 + *(_QWORD *)(a1 + 432));
    v18 = v17 - 1;
    if ( (int)(v17 - 1) <= 0 )
      goto LABEL_59;
    v19 = 8LL * (int)v18;
    v20 = a2;
    while ( 1 )
    {
      if ( v18 >= v17 )
      {
        if ( !under_debugger )
          sub_383060(0xCDEFu, a4);
        goto LABEL_71;
      }
      if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 528) + v19) + 56LL) )
        break;
LABEL_34:
      v19 -= 8;
      if ( !--v18 )
      {
        v5 = a1;
LABEL_59:
        v31 = v36[22];
        if ( v31 != 2 )
        {
          sub_32C080(v39, v33, v31);
          if ( !LOBYTE(v39[0]) )
            get_tinfo_property();
          v38[0] = 0;
          copy_tinfo_t();
          clear_tinfo_t();
          v26 = 0;
          goto LABEL_37;
        }
        goto LABEL_55;
      }
      v17 = *(_DWORD *)(a1 + 64);
    }
    v34 = v18;
    v21 = v20;
    v22 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 528) + v19) + 56LL);
    v35 = v19;
    v23 = v21;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( *(_BYTE *)(v22 + 64) == 9 )
        {
          v24 = *(_QWORD *)(v22 + 72);
          if ( v23 == *(_DWORD *)(v24 + 16) )
            break;
        }
        v22 = *(_QWORD *)(v22 + 16);
        if ( !v22 )
          goto LABEL_33;
      }
      if ( *(_DWORD *)v22 != 4 && (*(_DWORD *)v22 != 67 || *(_DWORD *)(v22 + 36) != *(_DWORD *)(v22 + 68)) )
        goto LABEL_29;
      if ( *(_QWORD *)(v24 + 8) )
      {
LABEL_50:
        v5 = a1;
        goto LABEL_48;
      }
      v25 = *(_DWORD *)(v22 + 68);
      if ( v25 == v36[22] && *(_BYTE *)(v22 + 32) == 4 )
      {
        v27 = *(_QWORD *)(v22 + 40);
        if ( (unsigned int)(*(_DWORD *)v27 - 56) <= 1 )
          break;
      }
LABEL_31:
      sub_32C080(v39, v33, v25);
      if ( !LOBYTE(v39[0]) )
      {
        v5 = a1;
        clear_tinfo_t();
LABEL_48:
        if ( (unsigned __int8)get_tinfo_property() )
          goto LABEL_49;
LABEL_55:
        v38[0] = 0;
        goto LABEL_39;
      }
      clear_tinfo_t();
      v22 = *(_QWORD *)(v22 + 16);
      if ( !v22 )
      {
LABEL_33:
        v18 = v34;
        v19 = v35;
        v20 = v23;
        goto LABEL_34;
      }
    }
    v37 = *(_QWORD *)(v27 + 72);
    if ( get_tinfo_size() == *(_DWORD *)(v22 + 68)
      && (unsigned __int8)sub_1C67E0(a1, v37 + 72, v36, *(_DWORD *)(a1 + 72), a4) )
    {
      v5 = a1;
LABEL_49:
      v38[0] = 0;
      copy_tinfo_t();
      v26 = 0;
LABEL_37:
      if ( v26 )
      {
        if ( (unsigned __int8)sub_1C67E0(v5, (__int64)v38, (_DWORD *)v12, a3, a4) )
        {
          v30 = *(_DWORD *)(v12 + 88);
          sub_1EF8F0(v12, *(_QWORD *)(v5 + 1504), v38, 0, a4);
          if ( *(_DWORD *)(v12 + 88) < v30 )
          {
            *(_DWORD *)(v12 + 24) |= 0x400u;
            sub_1F45B0(v5, *(_QWORD *)(v12 + 16), v12);
          }
        }
      }
LABEL_39:
      clear_tinfo_t();
LABEL_13:
      if ( *(_DWORD *)v12 == 3 && (get_tinfo_property() & 0x2F) == 0xD )
      {
        sub_1C7740(v38, v5, v12, *(unsigned int *)(v12 + 88), a4);
        if ( !(unsigned int)verify_argloc()
          || (sub_1C9130(v12, *(unsigned int *)(v12 + 88), v28, v29, a4),
              sub_1C7740(v39, v5, v12, *(unsigned int *)(v12 + 88), a4),
              copy_argloc(),
              cleanup_argloc(),
              !(unsigned int)verify_argloc()) )
        {
          cleanup_argloc();
          goto LABEL_14;
        }
        if ( !under_debugger )
          sub_383060(0xCDB9u, a4);
LABEL_71:
        BUG();
      }
LABEL_14:
      v12 = v11 + *(_QWORD *)(v5 + 432);
      v13 = *(_DWORD *)(v12 + 24);
      goto LABEL_5;
    }
    v24 = *(_QWORD *)(v22 + 72);
LABEL_29:
    if ( *(_QWORD *)(v24 + 8) )
      goto LABEL_50;
    v25 = *(_DWORD *)(v22 + 68);
    goto LABEL_31;
  }
LABEL_5:
  strcpy(v40, "result");
  if ( (v13 & 4) != 0 || *(_BYTE *)(v5 + 320) && (v13 & 0x100) != 0 )
    goto LABEL_10;
  if ( sub_213140(v5, v40, -10) )
  {
    v13 = *(_DWORD *)(v12 + 24);
LABEL_10:
    LOBYTE(v13) = v13 | 0x80;
    *(_DWORD *)(v12 + 24) = v13;
    return 1;
  }
  return sub_213D50((_QWORD *)v5, v12, v40, 132);
}

