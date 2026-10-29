__int64 __fastcall sub_2422E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5, int a6, char a7)
{
  __int64 v8; // r12
  int v9; // ebp
  int v11; // edx
  int v12; // r15d
  int v13; // r15d
  bool v14; // r10
  __int64 v15; // rax
  __int64 v16; // r8
  int v17; // eax
  int tinfo_size; // eax
  __int64 v19; // rdx
  int v20; // eax
  __int64 v21; // rax
  char v22; // al
  bool v24; // r11
  char v25; // al
  int v26; // r9d
  __int64 v27; // r12
  __int64 v28; // rax
  int v29; // eax
  int v30; // eax
  int v31; // [rsp+8h] [rbp-90h]
  __int64 v32; // [rsp+8h] [rbp-90h]
  __int64 v33; // [rsp+8h] [rbp-90h]
  __int64 v34; // [rsp+8h] [rbp-90h]
  char v35; // [rsp+10h] [rbp-88h]
  __int64 v36; // [rsp+10h] [rbp-88h]
  __int64 v37; // [rsp+10h] [rbp-88h]
  __int64 tinfo_property; // [rsp+20h] [rbp-78h]
  bool v39; // [rsp+2Bh] [rbp-6Dh]
  bool v40; // [rsp+3Fh] [rbp-59h]
  __int64 v41; // [rsp+48h] [rbp-50h] BYREF
  _BYTE v42[8]; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int64 v43; // [rsp+58h] [rbp-40h]

  v8 = a4;
  v9 = a6;
  v43 = __readfsqword(0x28u);
  v35 = *(_BYTE *)(a1 + 145);
  if ( a4 >= 0 )
  {
    v11 = 1;
    if ( a6 != -1 )
      v11 = a6;
    v12 = v11;
    if ( *(_DWORD *)(a3 + 8) == 65 )
    {
      v8 = sub_1EBAA0(*(_QWORD *)(*(_QWORD *)(a3 + 24) + 432LL) + 104LL * *(int *)(a3 + 32), a1, a4, v11);
    }
    else if ( v35 )
    {
      if ( !(unsigned __int8)sub_251300(a3, a1) )
      {
        tinfo_size = get_tinfo_size();
        if ( tinfo_size > 0 )
        {
          v19 = v8 + v12;
          if ( v19 <= tinfo_size )
            v8 = tinfo_size - v19;
        }
      }
    }
  }
  v13 = 2;
  if ( (get_tinfo_property() & 0xF) != 0xE )
    v13 = v8 != 0;
  tinfo_property = get_tinfo_property();
  v14 = v9 != -1;
  if ( !tinfo_property && v9 == -1 )
  {
    *(_DWORD *)(a3 + 40) = -1;
    v31 = 0;
    goto LABEL_11;
  }
  v39 = v8 == 0;
  if ( v9 != -1 || (v31 = 0, !v8) )
  {
    v20 = get_tinfo_size();
    v14 = v9 != -1;
    v31 = v20;
    if ( v9 != -1 )
    {
      if ( (unsigned __int8)*a5 )
      {
        v21 = get_tinfo_size();
        v14 = v9 != -1;
        if ( v9 != v21 )
        {
          if ( !under_debugger )
            sub_37CFE0(50977);
          BUG();
        }
      }
    }
  }
  v40 = v14;
  v17 = sub_23D000(a3, v8, a5, v9, v31, (a7 & 5) != 0);
  v14 = v40;
  if ( v17 )
  {
    if ( !v35 )
      goto LABEL_23;
    v24 = v39 && v31 > v9;
    if ( v17 == 1 && v40 )
    {
      if ( v8 + v9 == v31 && (a7 & 5) == 0 )
      {
        v30 = sub_23D000(a3, 0, a5, v9, v31, 0);
        v14 = v40;
        v13 = v30;
        if ( v39 && v31 > v9 )
          goto LABEL_23;
LABEL_64:
        *(_DWORD *)(a3 + 40) = v9;
        goto LABEL_11;
      }
      if ( v24 )
        goto LABEL_23;
      if ( (a7 & 4) != 0 )
      {
        if ( (a7 & 2) != 0 )
        {
LABEL_26:
          if ( !v8 )
            goto LABEL_27;
          v13 = 2;
          goto LABEL_68;
        }
LABEL_54:
        a3 = sub_242150(*(_QWORD *)(a1 + 112), a3);
        goto LABEL_26;
      }
      *(_DWORD *)(a3 + 40) = v9;
      if ( (a7 & 2) != 0 )
        goto LABEL_26;
    }
    else
    {
      if ( v24 )
        goto LABEL_23;
      if ( (a7 & 4) != 0 )
      {
        if ( (a7 & 2) != 0 )
          goto LABEL_26;
        goto LABEL_54;
      }
      *(_DWORD *)(a3 + 40) = v9;
      if ( (a7 & 2) != 0 )
        goto LABEL_26;
    }
    v13 = 2;
LABEL_72:
    v16 = sub_242150(*(_QWORD *)(a1 + 112), a3);
    goto LABEL_56;
  }
  if ( v35 && v31 > v9 && !v8 )
  {
LABEL_23:
    if ( (a7 & 4) == 0 )
      *(_DWORD *)(a3 + 40) = v9;
    if ( (a7 & 2) != 0 )
      goto LABEL_26;
    goto LABEL_54;
  }
  if ( (a7 & 4) == 0 )
    goto LABEL_64;
LABEL_11:
  if ( !v13 )
  {
    if ( !(unsigned __int8)*a5 )
      return a3;
    if ( (a7 & 2) != 0 )
    {
      v16 = a3;
      goto LABEL_60;
    }
    if ( v31 > v9 && v14 )
    {
      v15 = j__qalloc_or_throw();
      *(_QWORD *)v15 = -1;
      *(_DWORD *)(v15 + 8) = 48;
      *(_QWORD *)(v15 + 12) = -1;
      *(_QWORD *)(v15 + 24) = a3;
      *(_QWORD *)(v15 + 32) = 0;
      *(_QWORD *)(v15 + 40) = 0;
      *(_QWORD *)(v15 + 48) = 0;
      *(_DWORD *)(v15 + 56) = 0;
      v32 = v15;
      *(_QWORD *)v15 = *(_QWORD *)a3;
      copy_tinfo_t();
      return v32;
    }
    v22 = sub_241780(a3, a1, a5);
    if ( (a7 & 5) == 0 || !v22 || *(_DWORD *)(a3 + 8) != 48 )
      return a3;
    sub_250490(a3, *(_QWORD *)(a3 + 24));
    goto LABEL_54;
  }
  v16 = a3;
  if ( (a7 & 2) == 0 )
    goto LABEL_72;
LABEL_56:
  a3 = v16;
  if ( v8 )
  {
LABEL_68:
    v27 = sub_23BB90(a1, v8, 0, a2, 0, 0, 0);
    v28 = j__qalloc_or_throw();
    *(_QWORD *)v28 = -1;
    *(_DWORD *)(v28 + 8) = 35;
    *(_QWORD *)(v28 + 12) = -1;
    *(_QWORD *)(v28 + 24) = a3;
    *(_QWORD *)(v28 + 32) = v27;
    *(_QWORD *)(v28 + 40) = 0;
    *(_QWORD *)(v28 + 48) = 0;
    *(_DWORD *)(v28 + 56) = 0;
    v37 = v28;
    *(_QWORD *)v28 = *(_QWORD *)a3;
    sub_23EE00(v28, *(_QWORD *)(a1 + 112), 0);
    v16 = v37;
  }
  if ( v13 != 2 )
    goto LABEL_58;
  a3 = v16;
LABEL_27:
  if ( *(_BYTE *)a5 )
  {
    v41 = 0;
    copy_tinfo_t();
  }
  else
  {
    sub_326800(&v41, *(_QWORD *)(a1 + 112), (unsigned int)v9);
  }
  if ( !tinfo_property )
  {
    sub_326AD0(v42, *(_QWORD *)(a1 + 112), &v41);
    copy_tinfo_t();
    clear_tinfo_t();
  }
  v36 = sub_23FAB0(a3);
  clear_tinfo_t();
  v16 = v36;
LABEL_58:
  if ( tinfo_property && v31 <= 0 )
    return v16;
LABEL_60:
  if ( v9 == -1 )
  {
    v34 = v16;
    v29 = get_tinfo_size();
    v16 = v34;
    v9 = v29;
  }
  v33 = v16;
  v25 = get_tinfo_property();
  return sub_23EF60(*(_QWORD *)(a1 + 112), v33, v9, (v25 & 0xF) == 9, v33, v26);
}

