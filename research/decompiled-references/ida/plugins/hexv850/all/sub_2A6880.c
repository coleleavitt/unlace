__int64 __fastcall sub_2A6880(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 *v4; // rbx
  unsigned __int8 (__fastcall **v5)(_QWORD, __int64); // rdx
  __m128i v7; // kr00_16
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 v10; // rdx
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  char v14; // ah
  int v15; // eax
  int v16; // esi
  int v17; // r15d
  unsigned __int64 v18; // r15
  unsigned __int64 v19; // rax
  int v20; // r9d
  char v21; // r15
  unsigned __int64 *v22; // rbx
  unsigned __int64 *v23; // rdx
  unsigned __int64 *i; // rax
  unsigned __int64 v25; // r13
  unsigned int v26; // ebp
  _QWORD *v27; // r12
  unsigned __int64 *v29; // rax
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rcx
  __int64 v32; // r14
  __int64 v33; // r14
  _QWORD *v34; // rdi
  _QWORD *v35; // rdi
  _QWORD *v36; // rdi
  _QWORD *v37; // rdi
  int v38; // eax
  int v39; // [rsp+20h] [rbp-118h]
  unsigned __int8 (__fastcall *v40)(_QWORD, __int64); // [rsp+28h] [rbp-110h]
  __int64 v41; // [rsp+60h] [rbp-D8h]
  char v42; // [rsp+6Fh] [rbp-C9h]
  int v43; // [rsp+74h] [rbp-C4h] BYREF
  __int64 v44[3]; // [rsp+78h] [rbp-C0h] BYREF
  __int64 v45; // [rsp+90h] [rbp-A8h] BYREF
  __int64 v46; // [rsp+98h] [rbp-A0h] BYREF
  __int64 v47[2]; // [rsp+A0h] [rbp-98h] BYREF
  __int64 tinfo_property; // [rsp+B0h] [rbp-88h] BYREF
  __int64 v49; // [rsp+B8h] [rbp-80h]
  __m128i v50; // [rsp+C0h] [rbp-78h] BYREF
  __int64 v51; // [rsp+D0h] [rbp-68h]
  unsigned __int8 (__fastcall **v52[11])(_QWORD, __int64); // [rsp+E0h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(a2 + 8);
  v52[3] = (unsigned __int8 (__fastcall **)(_QWORD, __int64))__readfsqword(0x28u);
  v4 = *(__int64 **)a2;
  v41 = *(_QWORD *)(v2 + 216);
  if ( !(48 * v3) )
    return *(unsigned int *)(a1 + 76);
  v5 = *(unsigned __int8 (__fastcall ***)(_QWORD, __int64))(v2 + 216);
  v7 = 0u;
  while ( 1 )
  {
    v9 = *v4;
    v52[1] = v5;
    v52[0] = (unsigned __int8 (__fastcall **)(_QWORD, __int64))&off_4B4858;
    v52[2] = (unsigned __int8 (__fastcall **)(_QWORD, __int64))v9;
    v10 = *(_QWORD *)(v2 + 8);
    v44[0] = 0;
    if ( (unsigned __int8)sub_29DE50((__int64)v44, &v43, v10, (__int64)v4, v52) )
    {
      sub_294540(*(_QWORD *)(*(_QWORD *)a1 + 112LL), v44, &v43, v11, v12, v13);
      v40 = *(unsigned __int8 (__fastcall **)(_QWORD, __int64))v9;
      if ( *(int *)(v9 + 8) < 0 )
        goto LABEL_16;
    }
    else
    {
      v8 = *(int *)(v9 + 8);
      if ( (int)v8 < 0
        || !(unsigned __int8)sub_294540(
                               *(_QWORD *)(*(_QWORD *)a1 + 112LL),
                               (__int64 *)(**(_QWORD **)(*(_QWORD *)v9 + 32LL) + 72 * v8 + 64),
                               &v43,
                               *(_QWORD *)(*(_QWORD *)v9 + 32LL),
                               v12,
                               v13) )
      {
        goto LABEL_4;
      }
      v40 = *(unsigned __int8 (__fastcall **)(_QWORD, __int64))v9;
      if ( *(int *)(v9 + 8) < 0 )
      {
LABEL_16:
        if ( (get_tinfo_property() & 0xF) == 0xB )
          goto LABEL_4;
        v14 = BYTE1(v44[0]);
        if ( (v44[0] & 0xF) != 0xD )
          goto LABEL_9;
        goto LABEL_18;
      }
    }
    v14 = BYTE1(v44[0]);
    if ( (v44[0] & 0xF) != 0xD )
      goto LABEL_9;
LABEL_18:
    if ( (v14 & 1) == 0 )
      goto LABEL_4;
LABEL_9:
    v39 = *(_DWORD *)(v9 + 8);
    if ( v39 >= (int)get_tinfo_property() )
    {
      v15 = get_tinfo_property() & 0xFFFFFFF0;
      if ( v15 == 64 || v15 == 208 )
        goto LABEL_4;
      if ( !under_debugger )
        sub_37CFE0(52453);
      goto LABEL_95;
    }
    v16 = *(_DWORD *)(v9 + 8);
    tinfo_property = 0;
    if ( (unsigned int)(v16 + 1) <= 0x100 )
      tinfo_property = get_tinfo_property();
    v17 = lexcompare_tinfo();
    clear_tinfo_t();
    if ( v17 )
    {
      if ( !v7.m128i_i64[0] )
        goto LABEL_29;
      v18 = *(_QWORD *)v7.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
      if ( !v18 )
        goto LABEL_30;
      if ( (*(_BYTE *)(*(_QWORD *)v7.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
        goto LABEL_29;
      while ( 1 )
      {
        v19 = *(_QWORD *)(v18 + 24);
        if ( (unsigned __int64)v40 >= v19 )
        {
          if ( v19 >= (unsigned __int64)v40 )
          {
            if ( v18 == v7.m128i_i64[0] )
            {
LABEL_29:
              v47[1] = 0;
              v47[0] = (__int64)v40;
              copy_tinfo_t();
              v49 = 0;
              tinfo_property = v47[0];
              copy_tinfo_t();
              v50 = v7;
              v51 = v41;
              LODWORD(v18) = sub_2A66E0(&v50, &tinfo_property);
              v7 = v50;
              v41 = v51;
              clear_tinfo_t();
              clear_tinfo_t();
            }
LABEL_30:
            v44[2] = 0;
            copy_tinfo_t();
            v44[1] = 0;
            copy_tinfo_t();
            v47[0] = 0;
            copy_tinfo_t();
            sub_2940B0(&tinfo_property, v47);
            v45 = 0;
            copy_tinfo_t();
            sub_2940B0(&v46, &v45);
            v42 = compare_tinfo();
            clear_tinfo_t();
            clear_tinfo_t();
            clear_tinfo_t();
            clear_tinfo_t();
            clear_tinfo_t();
            clear_tinfo_t();
            if ( !v42 )
            {
              tinfo_property = 0;
              v49 = 0;
              v21 = sub_3281A0(
                      v41,
                      (int)v18 + 32,
                      *(_DWORD *)(v9 + 8),
                      (unsigned int)v44,
                      (unsigned int)&tinfo_property,
                      v20);
              cleanup_argloc();
              if ( v21 )
              {
                if ( *(int *)(v9 + 8) >= 0 )
                  copy_tinfo_t();
                break;
              }
              tinfo_property = 0;
              tinfo_property = get_tinfo_property();
              if ( (_BYTE)tinfo_property && !(unsigned __int8)sub_327100(&tinfo_property, v41, -1)
                || (get_tinfo_property() & 0x3F) == 9
                || ((v38 = get_tinfo_property(), v38 == 176) || v38 == 256)
                && (get_tinfo_property() || (get_tinfo_property() & 0x3F) == 0x1D) )
              {
                clear_tinfo_t();
                break;
              }
              if ( !under_debugger )
                sub_37CFE0(50477);
LABEL_95:
              BUG();
            }
            break;
          }
          v18 = *(_QWORD *)(v18 + 16);
        }
        else
        {
          v18 = *(_QWORD *)(v18 + 8);
        }
        if ( (*(_BYTE *)v18 & 2) != 0 )
          goto LABEL_29;
      }
    }
LABEL_4:
    v4 += 6;
    clear_tinfo_t();
    if ( v4 == (__int64 *)(*(_QWORD *)a2 + 48LL * *(_QWORD *)(a2 + 8)) )
      break;
    v2 = *(_QWORD *)(a1 + 8);
    v5 = *(unsigned __int8 (__fastcall ***)(_QWORD, __int64))(v2 + 216);
  }
  if ( !v7.m128i_i64[0] )
    return *(unsigned int *)(a1 + 76);
  if ( !v7.m128i_i64[1] )
  {
    v26 = *(_DWORD *)(a1 + 76);
    goto LABEL_48;
  }
  v22 = *(unsigned __int64 **)(v7.m128i_i64[0] + 8);
  while ( (unsigned __int64 *)v7.m128i_i64[0] != v22 )
  {
    if ( (unsigned int)lexcompare_tinfo() )
      sub_2A1900((__int64 *)a1, (unsigned __int64 *)v22[3], (__int64)(v22 + 4));
    if ( (*v22 & 2) == 0 )
    {
      v23 = (unsigned __int64 *)v22[2];
      if ( (*(_BYTE *)v23 & 2) != 0 )
      {
        v29 = (unsigned __int64 *)(*v22 & 0xFFFFFFFFFFFFFFFCLL);
        v30 = *v29;
        if ( (*v29 & 2) == 0 )
        {
          while ( (unsigned __int64 *)v29[2] == v22 )
          {
            v22 = v29;
            v31 = v30 & 0xFFFFFFFFFFFFFFFCLL;
            v30 = *(_QWORD *)(v30 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v30 & 2) != 0 )
            {
              v22 = (unsigned __int64 *)v31;
              goto LABEL_44;
            }
            v29 = (unsigned __int64 *)v31;
          }
        }
        v22 = v29;
      }
      else
      {
        for ( i = (unsigned __int64 *)v23[1]; (*(_BYTE *)i & 2) == 0; i = (unsigned __int64 *)i[1] )
          v23 = i;
        v22 = v23;
      }
    }
LABEL_44:
    ;
  }
  v25 = *v22;
  v26 = *(_DWORD *)(a1 + 76);
  v27 = (_QWORD *)(*v22 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (*(_BYTE *)v27 & 2) == 0 )
  {
    v32 = v27[1];
    if ( (*(_BYTE *)v32 & 2) != 0 )
    {
      v33 = v27[2];
      if ( (*(_BYTE *)v33 & 2) != 0 )
      {
LABEL_90:
        clear_tinfo_t();
        *v27 |= 2uLL;
LABEL_70:
        if ( v25 > 3 )
          qfree();
        goto LABEL_48;
      }
      goto LABEL_63;
    }
    v36 = *(_QWORD **)(v32 + 8);
    if ( (*(_BYTE *)v36 & 2) != 0 )
    {
      v37 = *(_QWORD **)(v32 + 16);
      if ( (*(_BYTE *)v37 & 2) != 0 )
      {
LABEL_92:
        clear_tinfo_t();
        *(_QWORD *)v32 |= 2uLL;
LABEL_80:
        if ( v32 )
          qfree();
        v33 = v27[2];
        if ( (*(_BYTE *)v33 & 2) != 0 )
        {
LABEL_69:
          if ( (*(_BYTE *)v27 & 2) != 0 )
            goto LABEL_70;
          goto LABEL_90;
        }
LABEL_63:
        v34 = *(_QWORD **)(v33 + 8);
        if ( (*(_BYTE *)v34 & 2) != 0 )
        {
          v35 = *(_QWORD **)(v33 + 16);
          if ( (*(_BYTE *)v35 & 2) != 0 )
          {
LABEL_94:
            clear_tinfo_t();
            *(_QWORD *)v33 |= 2uLL;
LABEL_67:
            if ( v33 )
              qfree();
            goto LABEL_69;
          }
        }
        else
        {
          sub_294180(v34);
          v35 = *(_QWORD **)(v33 + 16);
          if ( (*(_BYTE *)v35 & 2) != 0 )
            goto LABEL_66;
        }
        sub_294180(v35);
LABEL_66:
        if ( (*(_BYTE *)v33 & 2) != 0 )
          goto LABEL_67;
        goto LABEL_94;
      }
    }
    else
    {
      sub_294180(v36);
      v37 = *(_QWORD **)(v32 + 16);
      if ( (*(_BYTE *)v37 & 2) != 0 )
        goto LABEL_79;
    }
    sub_294180(v37);
LABEL_79:
    if ( (*(_BYTE *)v32 & 2) != 0 )
      goto LABEL_80;
    goto LABEL_92;
  }
LABEL_48:
  qfree();
  return v26;
}

