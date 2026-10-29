__int64 __fastcall sub_21A310(__int64 a1, int a2, unsigned int a3, int a4, __int64 a5, int a6)
{
  int v6; // r15d
  __int64 v7; // rbp
  __int64 v9; // rbx
  int v10; // eax
  bool v11; // zf
  __int64 v12; // rbx
  __int64 v13; // r15
  __int64 v14; // rbx
  int v15; // eax
  int v17; // eax
  int v18; // edx
  unsigned int v19; // ecx
  unsigned int v20; // eax
  __int64 v21; // rdx
  int v22; // ebp
  int v23; // eax
  __int64 v24; // rbp
  int v25; // r12d
  __int64 v26; // rax
  char v27; // al
  __int64 v28; // rcx
  int v29; // r12d
  int v30; // [rsp+0h] [rbp-98h]
  __int64 v31; // [rsp+0h] [rbp-98h]
  unsigned int v32; // [rsp+14h] [rbp-84h]
  __int64 v33; // [rsp+18h] [rbp-80h]
  _DWORD *v34; // [rsp+20h] [rbp-78h]
  __int64 v35; // [rsp+28h] [rbp-70h]
  _QWORD v36[2]; // [rsp+30h] [rbp-68h] BYREF
  _DWORD v37[4]; // [rsp+40h] [rbp-58h] BYREF
  char v38[7]; // [rsp+51h] [rbp-47h] BYREF
  unsigned __int64 v39; // [rsp+58h] [rbp-40h]

  v39 = __readfsqword(0x28u);
  if ( (unsigned __int64)a2 >= *(_QWORD *)(a1 + 440) )
  {
    if ( !under_debugger )
      sub_37EEE0(51295);
    goto LABEL_70;
  }
  v6 = *(_DWORD *)(a1 + 480);
  v7 = a1;
  if ( v6 != -1 )
  {
    *(_DWORD *)(a1 + 480) = -1;
    v9 = *(_QWORD *)(a1 + 432) + 104LL * v6;
    v10 = *(_DWORD *)(v9 + 24);
    v30 = v10;
    LOBYTE(v10) = v10 & 0x7F;
    v11 = *(_QWORD *)(v9 + 40) == 0;
    *(_DWORD *)(v9 + 24) = v10;
    if ( !v11 )
    {
      v17 = strcmp(*(const char **)(v9 + 32), "result");
      v18 = v30;
      a4 = v17;
      if ( !(v17 | v30 & 0x20) )
      {
        LOBYTE(v18) = v30 & 0x7B;
        *(_DWORD *)(v9 + 24) = v18;
        sub_210900((_QWORD *)a1, v6);
      }
    }
  }
  v12 = *(_QWORD *)(a1 + 432);
  *(_DWORD *)(a1 + 480) = a2;
  v13 = 104LL * a2;
  v14 = v13 + v12;
  v15 = *(_DWORD *)(v14 + 24);
  if ( !*(_BYTE *)(a1 + 320) && (v15 & 2) == 0 )
  {
    sub_36E330(a1, v14 + 80, -1, a4, 13 * a2, a6, v30);
    if ( (unsigned __int8)sub_1C2DA0(a1, v14 + 80, (_DWORD *)v14, a3) )
      goto LABEL_13;
    if ( (get_tinfo_property() & 0xF) == 9 )
    {
      sub_327F40(v36, *(_QWORD *)(a1 + 1504), *(unsigned int *)(v14 + 88));
      v27 = v36[0];
      goto LABEL_36;
    }
    v19 = *(_DWORD *)(a1 + 64);
    v31 = *(_QWORD *)(a1 + 1496);
    v34 = (_DWORD *)(v13 + *(_QWORD *)(a1 + 432));
    v20 = v19 - 1;
    if ( (int)(v19 - 1) <= 0 )
      goto LABEL_58;
    v21 = 8LL * (int)v20;
    v22 = a2;
    while ( 1 )
    {
      if ( v20 >= v19 )
      {
        if ( !under_debugger )
          sub_37EEE0(52719);
        goto LABEL_70;
      }
      if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 528) + v21) + 56LL) )
        break;
LABEL_33:
      v21 -= 8;
      if ( !--v20 )
      {
        v7 = a1;
LABEL_58:
        if ( v34[22] != 2 )
        {
          sub_327D50(v37, v31);
          if ( !LOBYTE(v37[0]) )
            get_tinfo_property();
          v36[0] = 0;
          copy_tinfo_t();
          clear_tinfo_t();
          v27 = 0;
          goto LABEL_36;
        }
        goto LABEL_54;
      }
      v19 = *(_DWORD *)(a1 + 64);
    }
    v32 = v20;
    v23 = v22;
    v24 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 528) + v21) + 56LL);
    v33 = v21;
    v25 = v23;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( *(_BYTE *)(v24 + 64) == 9 )
        {
          v26 = *(_QWORD *)(v24 + 72);
          if ( v25 == *(_DWORD *)(v26 + 16) )
            break;
        }
        v24 = *(_QWORD *)(v24 + 16);
        if ( !v24 )
          goto LABEL_32;
      }
      if ( *(_DWORD *)v24 != 4 && (*(_DWORD *)v24 != 67 || *(_DWORD *)(v24 + 36) != *(_DWORD *)(v24 + 68)) )
        goto LABEL_29;
      if ( *(_QWORD *)(v26 + 8) )
      {
LABEL_49:
        v7 = a1;
        goto LABEL_47;
      }
      if ( *(_DWORD *)(v24 + 68) == v34[22] && *(_BYTE *)(v24 + 32) == 4 )
      {
        v28 = *(_QWORD *)(v24 + 40);
        if ( (unsigned int)(*(_DWORD *)v28 - 56) <= 1 )
          break;
      }
LABEL_30:
      sub_327D50(v37, v31);
      if ( !LOBYTE(v37[0]) )
      {
        v7 = a1;
        clear_tinfo_t();
LABEL_47:
        if ( (unsigned __int8)get_tinfo_property() )
          goto LABEL_48;
LABEL_54:
        v36[0] = 0;
        goto LABEL_38;
      }
      clear_tinfo_t();
      v24 = *(_QWORD *)(v24 + 16);
      if ( !v24 )
      {
LABEL_32:
        v20 = v32;
        v21 = v33;
        v22 = v25;
        goto LABEL_33;
      }
    }
    v35 = *(_QWORD *)(v28 + 72);
    if ( get_tinfo_size() == *(_DWORD *)(v24 + 68)
      && (unsigned __int8)sub_1C2DA0(a1, v35 + 72, v34, *(_DWORD *)(a1 + 72)) )
    {
      v7 = a1;
LABEL_48:
      v36[0] = 0;
      copy_tinfo_t();
      v27 = 0;
LABEL_36:
      if ( v27 )
      {
        if ( (unsigned __int8)sub_1C2DA0(v7, (__int64)v36, (_DWORD *)v14, a3) )
        {
          v29 = *(_DWORD *)(v14 + 88);
          sub_1EBC70(v14, *(_QWORD *)(v7 + 1504), v36, 0);
          if ( *(_DWORD *)(v14 + 88) < v29 )
          {
            *(_DWORD *)(v14 + 24) |= 0x400u;
            sub_1F0930(v7, *(_QWORD *)(v14 + 16), v14);
          }
        }
      }
LABEL_38:
      clear_tinfo_t();
LABEL_13:
      if ( *(_DWORD *)v14 == 3 && (get_tinfo_property() & 0x2F) == 0xD )
      {
        sub_1C3D00(v36, v7, v14, *(_DWORD *)(v14 + 88));
        if ( !(unsigned int)verify_argloc()
          || (sub_1C56F0(v14, *(_DWORD *)(v14 + 88)),
              sub_1C3D00(v37, v7, v14, *(_DWORD *)(v14 + 88)),
              copy_argloc(),
              cleanup_argloc(),
              !(unsigned int)verify_argloc()) )
        {
          cleanup_argloc();
          goto LABEL_14;
        }
        if ( !under_debugger )
          sub_37EEE0(52665);
LABEL_70:
        BUG();
      }
LABEL_14:
      v14 = v13 + *(_QWORD *)(v7 + 432);
      v15 = *(_DWORD *)(v14 + 24);
      goto LABEL_5;
    }
    v26 = *(_QWORD *)(v24 + 72);
LABEL_29:
    if ( *(_QWORD *)(v26 + 8) )
      goto LABEL_49;
    goto LABEL_30;
  }
LABEL_5:
  strcpy(v38, "result");
  if ( (v15 & 4) != 0 || *(_BYTE *)(v7 + 320) && (v15 & 0x100) != 0 )
    goto LABEL_10;
  if ( sub_20F4C0(v7, v38, -10) )
  {
    v15 = *(_DWORD *)(v14 + 24);
LABEL_10:
    LOBYTE(v15) = v15 | 0x80;
    *(_DWORD *)(v14 + 24) = v15;
    return 1;
  }
  return sub_2100D0((_QWORD *)v7, v14, v38, 132);
}

