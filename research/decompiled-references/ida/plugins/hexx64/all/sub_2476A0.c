__int64 __fastcall sub_2476A0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        signed __int64 a4,
        _QWORD *a5,
        int a6,
        double a7,
        char a8)
{
  unsigned __int64 v9; // r12
  int v10; // ebp
  int v12; // edx
  int v13; // r15d
  int v14; // r15d
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  bool v18; // r10
  __int64 v19; // rax
  __int64 v20; // r8
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  int tinfo_size; // eax
  signed __int64 v25; // rdx
  int v26; // eax
  __int64 v27; // rax
  char v28; // al
  bool v30; // r11
  char v31; // al
  __int64 v32; // rsi
  __int64 v33; // r12
  __int64 v34; // rax
  int v35; // eax
  int v36; // eax
  __int64 v37; // [rsp-10h] [rbp-A8h]
  __int64 v38; // [rsp-8h] [rbp-A0h]
  int v39; // [rsp+8h] [rbp-90h]
  __int64 v40; // [rsp+8h] [rbp-90h]
  __int64 v41; // [rsp+8h] [rbp-90h]
  __int64 v42; // [rsp+8h] [rbp-90h]
  char v43; // [rsp+10h] [rbp-88h]
  __int64 v44; // [rsp+10h] [rbp-88h]
  __int64 v45; // [rsp+10h] [rbp-88h]
  __int64 tinfo_property; // [rsp+20h] [rbp-78h]
  bool v47; // [rsp+2Bh] [rbp-6Dh]
  bool v49; // [rsp+3Fh] [rbp-59h]
  __int64 v50; // [rsp+48h] [rbp-50h] BYREF
  _QWORD v51[9]; // [rsp+50h] [rbp-48h] BYREF

  v9 = a4;
  v10 = a6;
  v51[1] = __readfsqword(0x28u);
  v43 = *(_BYTE *)(a1 + 145);
  if ( a4 >= 0 )
  {
    v12 = 1;
    if ( a6 != -1 )
      v12 = a6;
    v13 = v12;
    if ( *(_DWORD *)(a3 + 8) == 65 )
    {
      v9 = sub_1F0E60(*(_QWORD *)(*(_QWORD *)(a3 + 24) + 432LL) + 104LL * *(int *)(a3 + 32), a1, a4, v12);
    }
    else if ( v43 )
    {
      if ( !(unsigned __int8)sub_2566C0(a3, a1) )
      {
        tinfo_size = get_tinfo_size();
        if ( tinfo_size > 0 )
        {
          v25 = v9 + v13;
          if ( v25 <= tinfo_size )
            v9 = tinfo_size - v25;
        }
      }
    }
  }
  v14 = 2;
  if ( (get_tinfo_property() & 0xF) != 0xE )
    v14 = v9 != 0;
  v15 = 6;
  tinfo_property = get_tinfo_property();
  v18 = v10 != -1;
  if ( !tinfo_property && v10 == -1 )
  {
    *(_DWORD *)(a3 + 40) = -1;
    v39 = 0;
    goto LABEL_11;
  }
  v47 = v9 == 0;
  if ( v10 != -1 || (v39 = 0, !v9) )
  {
    v26 = get_tinfo_size();
    v18 = v10 != -1;
    v39 = v26;
    if ( v10 != -1 )
    {
      if ( (unsigned __int8)*a5 )
      {
        v27 = get_tinfo_size();
        v18 = v10 != -1;
        if ( v10 != v27 )
        {
          if ( !under_debugger )
            sub_383060(0xC721u, a7);
          BUG();
        }
      }
    }
  }
  v15 = v9;
  v49 = v18;
  v21 = sub_2423C0(a3, v9, a5, v10, v39, (a8 & 5) != 0);
  v18 = v49;
  if ( v21 )
  {
    if ( !v43 )
      goto LABEL_23;
    v17 = (unsigned int)v39;
    v30 = v47 && v39 > v10;
    if ( v21 == 1 && v49 )
    {
      v16 = v39;
      if ( v9 + v10 == v39 && (a8 & 5) == 0 )
      {
        v15 = 0;
        v36 = sub_2423C0(a3, 0, a5, v10, v39, 0);
        v18 = v49;
        v14 = v36;
        if ( v47 && v39 > v10 )
          goto LABEL_23;
LABEL_64:
        *(_DWORD *)(a3 + 40) = v10;
        goto LABEL_11;
      }
      if ( v30 )
        goto LABEL_23;
      if ( (a8 & 4) != 0 )
      {
        if ( (a8 & 2) != 0 )
        {
LABEL_26:
          if ( !v9 )
            goto LABEL_27;
          v14 = 2;
          goto LABEL_68;
        }
LABEL_54:
        a3 = sub_247510(*(_QWORD *)(a1 + 112), a3, v16, v17, a7);
        goto LABEL_26;
      }
      *(_DWORD *)(a3 + 40) = v10;
      if ( (a8 & 2) != 0 )
        goto LABEL_26;
    }
    else
    {
      if ( v30 )
        goto LABEL_23;
      if ( (a8 & 4) != 0 )
      {
        if ( (a8 & 2) != 0 )
          goto LABEL_26;
        goto LABEL_54;
      }
      *(_DWORD *)(a3 + 40) = v10;
      if ( (a8 & 2) != 0 )
        goto LABEL_26;
    }
    v14 = 2;
LABEL_72:
    v20 = sub_247510(*(_QWORD *)(a1 + 112), a3, v16, v17, a7);
    goto LABEL_56;
  }
  if ( v43 && v39 > v10 && !v9 )
  {
LABEL_23:
    v17 = a8 & 4;
    if ( (a8 & 4) == 0 )
      *(_DWORD *)(a3 + 40) = v10;
    if ( (a8 & 2) != 0 )
      goto LABEL_26;
    goto LABEL_54;
  }
  if ( (a8 & 4) == 0 )
    goto LABEL_64;
LABEL_11:
  if ( !v14 )
  {
    if ( !(unsigned __int8)*a5 )
      return a3;
    if ( (a8 & 2) != 0 )
    {
      v20 = a3;
      goto LABEL_60;
    }
    if ( v39 > v10 && v18 )
    {
      v19 = j__qalloc_or_throw(64, v15, v16, v17);
      *(_QWORD *)v19 = -1;
      *(_DWORD *)(v19 + 8) = 48;
      *(_QWORD *)(v19 + 12) = -1;
      *(_QWORD *)(v19 + 24) = a3;
      *(_QWORD *)(v19 + 32) = 0;
      *(_QWORD *)(v19 + 40) = 0;
      *(_QWORD *)(v19 + 48) = 0;
      *(_DWORD *)(v19 + 56) = 0;
      v40 = v19;
      *(_QWORD *)v19 = *(_QWORD *)a3;
      copy_tinfo_t();
      return v40;
    }
    v28 = sub_246B40(a3, a1, a5, a7);
    if ( (a8 & 5) == 0 || !v28 || *(_DWORD *)(a3 + 8) != 48 )
      return a3;
    sub_255850((__int64 *)a3, *(_QWORD *)(a3 + 24));
    goto LABEL_54;
  }
  v20 = a3;
  if ( (a8 & 2) == 0 )
    goto LABEL_72;
LABEL_56:
  a3 = v20;
  if ( v9 )
  {
LABEL_68:
    v32 = v9;
    v33 = sub_240F50(a1, v9, 0, a2, 0, 0, 0);
    v34 = j__qalloc_or_throw(64, v32, v37, v38);
    *(_QWORD *)v34 = -1;
    *(_DWORD *)(v34 + 8) = 35;
    *(_QWORD *)(v34 + 12) = -1;
    *(_QWORD *)(v34 + 24) = a3;
    *(_QWORD *)(v34 + 32) = v33;
    *(_QWORD *)(v34 + 40) = 0;
    *(_QWORD *)(v34 + 48) = 0;
    *(_DWORD *)(v34 + 56) = 0;
    v45 = v34;
    *(_QWORD *)v34 = *(_QWORD *)a3;
    sub_2441C0(v34, *(_QWORD *)(a1 + 112), 0, a7);
    v20 = v45;
  }
  if ( v14 != 2 )
    goto LABEL_58;
  a3 = v20;
LABEL_27:
  if ( *(_BYTE *)a5 )
  {
    v50 = 0;
    copy_tinfo_t();
  }
  else
  {
    sub_32C270(&v50, *(_QWORD *)(a1 + 112), v10);
  }
  if ( !tinfo_property )
  {
    sub_32C540(v51, *(_QWORD *)(a1 + 112), &v50);
    copy_tinfo_t();
    clear_tinfo_t();
  }
  v44 = sub_244E70(a3, (__int64)&v50, v22, v23);
  clear_tinfo_t();
  v20 = v44;
LABEL_58:
  if ( tinfo_property && v39 <= 0 )
    return v20;
LABEL_60:
  if ( v10 == -1 )
  {
    v42 = v20;
    v35 = get_tinfo_size();
    v20 = v42;
    v10 = v35;
  }
  v41 = v20;
  v31 = get_tinfo_property();
  return sub_244320(*(_QWORD *)(a1 + 112), v41, (unsigned int)v10, (v31 & 0xF) == 9, a7);
}

