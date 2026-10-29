__int64 __fastcall sub_2ABC40(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 *v5; // rbx
  unsigned __int8 (__fastcall **v6)(_QWORD, __int64); // rdx
  __m128i v8; // kr00_16
  __int64 v9; // rax
  __int64 v10; // rbp
  __int64 v11; // rdx
  char v12; // ah
  int v13; // eax
  int v14; // esi
  int v15; // r15d
  unsigned __int64 v16; // r15
  unsigned __int64 v17; // rax
  char v18; // r15
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 i; // rax
  unsigned __int64 v22; // r13
  unsigned int v23; // ebp
  _QWORD *v24; // r12
  __int64 *v26; // rax
  __int64 v27; // rdx
  unsigned __int64 v28; // rcx
  __int64 v29; // r14
  __int64 v30; // r14
  _QWORD *v31; // rdi
  _QWORD *v32; // rdi
  _QWORD *v33; // rdi
  _QWORD *v34; // rdi
  int v35; // eax
  int v36; // [rsp+20h] [rbp-118h]
  unsigned __int8 (__fastcall *v37)(_QWORD, __int64); // [rsp+28h] [rbp-110h]
  __int64 v38; // [rsp+60h] [rbp-D8h]
  char v39; // [rsp+6Fh] [rbp-C9h]
  int v40; // [rsp+74h] [rbp-C4h] BYREF
  __int64 v41[3]; // [rsp+78h] [rbp-C0h] BYREF
  __int64 v42; // [rsp+90h] [rbp-A8h] BYREF
  __int64 v43; // [rsp+98h] [rbp-A0h] BYREF
  __int64 v44[2]; // [rsp+A0h] [rbp-98h] BYREF
  __int64 tinfo_property; // [rsp+B0h] [rbp-88h] BYREF
  __int64 v46; // [rsp+B8h] [rbp-80h]
  __m128i v47; // [rsp+C0h] [rbp-78h] BYREF
  __int64 v48; // [rsp+D0h] [rbp-68h]
  unsigned __int8 (__fastcall **v49[11])(_QWORD, __int64); // [rsp+E0h] [rbp-58h] BYREF

  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD *)(a2 + 8);
  v49[3] = (unsigned __int8 (__fastcall **)(_QWORD, __int64))__readfsqword(0x28u);
  v5 = *(__int64 **)a2;
  v38 = *(_QWORD *)(v3 + 216);
  if ( !(48 * v4) )
    return *(unsigned int *)(a1 + 76);
  v6 = *(unsigned __int8 (__fastcall ***)(_QWORD, __int64))(v3 + 216);
  v8 = 0u;
  while ( 1 )
  {
    v10 = *v5;
    v49[1] = v6;
    v49[0] = (unsigned __int8 (__fastcall **)(_QWORD, __int64))&off_4E0EB8;
    v49[2] = (unsigned __int8 (__fastcall **)(_QWORD, __int64))v10;
    v11 = *(_QWORD *)(v3 + 8);
    v41[0] = 0;
    if ( (unsigned __int8)sub_2A3210((__int64)v41, &v40, v11, (__int64)v5, v49, a3) )
    {
      sub_299900(*(_QWORD *)(*(_QWORD *)a1 + 112LL), v41, &v40);
      v37 = *(unsigned __int8 (__fastcall **)(_QWORD, __int64))v10;
      if ( *(int *)(v10 + 8) < 0 )
        goto LABEL_16;
    }
    else
    {
      v9 = *(int *)(v10 + 8);
      if ( (int)v9 < 0
        || !(unsigned __int8)sub_299900(
                               *(_QWORD *)(*(_QWORD *)a1 + 112LL),
                               (__int64 *)(**(_QWORD **)(*(_QWORD *)v10 + 32LL) + 72 * v9 + 64),
                               &v40) )
      {
        goto LABEL_4;
      }
      v37 = *(unsigned __int8 (__fastcall **)(_QWORD, __int64))v10;
      if ( *(int *)(v10 + 8) < 0 )
      {
LABEL_16:
        if ( (get_tinfo_property() & 0xF) == 0xB )
          goto LABEL_4;
        v12 = BYTE1(v41[0]);
        if ( (v41[0] & 0xF) != 0xD )
          goto LABEL_9;
        goto LABEL_18;
      }
    }
    v12 = BYTE1(v41[0]);
    if ( (v41[0] & 0xF) != 0xD )
      goto LABEL_9;
LABEL_18:
    if ( (v12 & 1) == 0 )
      goto LABEL_4;
LABEL_9:
    v36 = *(_DWORD *)(v10 + 8);
    if ( v36 >= (int)get_tinfo_property() )
    {
      v13 = get_tinfo_property() & 0xFFFFFFF0;
      if ( v13 == 64 || v13 == 208 )
        goto LABEL_4;
      if ( !under_debugger )
        sub_383060(0xCCE5u, a3);
      goto LABEL_94;
    }
    v14 = *(_DWORD *)(v10 + 8);
    tinfo_property = 0;
    if ( (unsigned int)(v14 + 1) <= 0x100 )
      tinfo_property = get_tinfo_property();
    v15 = lexcompare_tinfo();
    clear_tinfo_t();
    if ( v15 )
    {
      if ( !v8.m128i_i64[0] )
        goto LABEL_29;
      v16 = *(_QWORD *)v8.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
      if ( !v16 )
        goto LABEL_30;
      if ( (*(_BYTE *)(*(_QWORD *)v8.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
        goto LABEL_29;
      while ( 1 )
      {
        v17 = *(_QWORD *)(v16 + 24);
        if ( (unsigned __int64)v37 >= v17 )
        {
          if ( v17 >= (unsigned __int64)v37 )
          {
            if ( v16 == v8.m128i_i64[0] )
            {
LABEL_29:
              v44[1] = 0;
              v44[0] = (__int64)v37;
              copy_tinfo_t();
              v46 = 0;
              tinfo_property = v44[0];
              copy_tinfo_t();
              v47 = v8;
              v48 = v38;
              v16 = (unsigned __int64)sub_2ABAA0(&v47, &tinfo_property);
              v8 = v47;
              v38 = v48;
              clear_tinfo_t();
              clear_tinfo_t();
            }
LABEL_30:
            v41[2] = 0;
            copy_tinfo_t();
            v41[1] = 0;
            copy_tinfo_t();
            v44[0] = 0;
            copy_tinfo_t();
            sub_299470(&tinfo_property, v44);
            v42 = 0;
            copy_tinfo_t();
            sub_299470(&v43, &v42);
            v39 = compare_tinfo();
            clear_tinfo_t();
            clear_tinfo_t();
            clear_tinfo_t();
            clear_tinfo_t();
            clear_tinfo_t();
            clear_tinfo_t();
            if ( !v39 )
            {
              tinfo_property = 0;
              v46 = 0;
              v18 = sub_32DC20(v38, (__int64 *)(v16 + 32), *(_DWORD *)(v10 + 8), v41, &tinfo_property);
              cleanup_argloc();
              if ( v18 )
              {
                if ( *(int *)(v10 + 8) >= 0 )
                  copy_tinfo_t();
                break;
              }
              tinfo_property = 0;
              tinfo_property = get_tinfo_property();
              if ( (_BYTE)tinfo_property && !sub_32CB80(&tinfo_property, v38)
                || (get_tinfo_property() & 0x3F) == 9
                || ((v35 = get_tinfo_property(), v35 == 176) || v35 == 256)
                && (get_tinfo_property() || (get_tinfo_property() & 0x3F) == 0x1D) )
              {
                clear_tinfo_t();
                break;
              }
              if ( !under_debugger )
                sub_383060(0xC52Du, a3);
LABEL_94:
              BUG();
            }
            break;
          }
          v16 = *(_QWORD *)(v16 + 16);
        }
        else
        {
          v16 = *(_QWORD *)(v16 + 8);
        }
        if ( (*(_BYTE *)v16 & 2) != 0 )
          goto LABEL_29;
      }
    }
LABEL_4:
    v5 += 6;
    clear_tinfo_t();
    if ( v5 == (__int64 *)(*(_QWORD *)a2 + 48LL * *(_QWORD *)(a2 + 8)) )
      break;
    v3 = *(_QWORD *)(a1 + 8);
    v6 = *(unsigned __int8 (__fastcall ***)(_QWORD, __int64))(v3 + 216);
  }
  if ( !v8.m128i_i64[0] )
    return *(unsigned int *)(a1 + 76);
  if ( !v8.m128i_i64[1] )
  {
    v23 = *(_DWORD *)(a1 + 76);
    qfree(v8.m128i_i64[0]);
    return v23;
  }
  v19 = *(_QWORD *)(v8.m128i_i64[0] + 8);
  while ( v8.m128i_i64[0] != v19 )
  {
    if ( (unsigned int)lexcompare_tinfo() )
      sub_2A6CC0((__int64 *)a1, *(unsigned __int64 **)(v19 + 24), (__int64 *)(v19 + 32), a3);
    if ( (*(_QWORD *)v19 & 2) == 0 )
    {
      v20 = *(_QWORD *)(v19 + 16);
      if ( (*(_BYTE *)v20 & 2) != 0 )
      {
        v26 = (__int64 *)(*(_QWORD *)v19 & 0xFFFFFFFFFFFFFFFCLL);
        v27 = *v26;
        if ( (*v26 & 2) == 0 )
        {
          while ( v26[2] == v19 )
          {
            v19 = (__int64)v26;
            v28 = v27 & 0xFFFFFFFFFFFFFFFCLL;
            v27 = *(_QWORD *)(v27 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v27 & 2) != 0 )
            {
              v19 = v28;
              goto LABEL_44;
            }
            v26 = (__int64 *)v28;
          }
        }
        v19 = (__int64)v26;
      }
      else
      {
        for ( i = *(_QWORD *)(v20 + 8); (*(_BYTE *)i & 2) == 0; i = *(_QWORD *)(i + 8) )
          v20 = i;
        v19 = v20;
      }
    }
LABEL_44:
    ;
  }
  v22 = *(_QWORD *)v19;
  v23 = *(_DWORD *)(a1 + 76);
  v24 = (_QWORD *)(*(_QWORD *)v19 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (*(_BYTE *)v24 & 2) == 0 )
  {
    v29 = v24[1];
    if ( (*(_BYTE *)v29 & 2) != 0 )
    {
      v30 = v24[2];
      if ( (*(_BYTE *)v30 & 2) != 0 )
      {
LABEL_89:
        clear_tinfo_t();
        *v24 |= 2uLL;
LABEL_69:
        if ( v22 > 3 )
          qfree((__int64)v24);
        goto LABEL_46;
      }
      goto LABEL_62;
    }
    v33 = *(_QWORD **)(v29 + 8);
    if ( (*(_BYTE *)v33 & 2) != 0 )
    {
      v34 = *(_QWORD **)(v29 + 16);
      if ( (*(_BYTE *)v34 & 2) != 0 )
      {
LABEL_91:
        clear_tinfo_t();
        *(_QWORD *)v29 |= 2uLL;
LABEL_79:
        if ( v29 )
          qfree(v29);
        v30 = v24[2];
        if ( (*(_BYTE *)v30 & 2) != 0 )
        {
LABEL_68:
          if ( (*(_BYTE *)v24 & 2) != 0 )
            goto LABEL_69;
          goto LABEL_89;
        }
LABEL_62:
        v31 = *(_QWORD **)(v30 + 8);
        if ( (*(_BYTE *)v31 & 2) != 0 )
        {
          v32 = *(_QWORD **)(v30 + 16);
          if ( (*(_BYTE *)v32 & 2) != 0 )
          {
LABEL_93:
            clear_tinfo_t();
            *(_QWORD *)v30 |= 2uLL;
LABEL_66:
            if ( v30 )
              qfree(v30);
            goto LABEL_68;
          }
        }
        else
        {
          sub_299540(v31);
          v32 = *(_QWORD **)(v30 + 16);
          if ( (*(_BYTE *)v32 & 2) != 0 )
            goto LABEL_65;
        }
        sub_299540(v32);
LABEL_65:
        if ( (*(_BYTE *)v30 & 2) != 0 )
          goto LABEL_66;
        goto LABEL_93;
      }
    }
    else
    {
      sub_299540(v33);
      v34 = *(_QWORD **)(v29 + 16);
      if ( (*(_BYTE *)v34 & 2) != 0 )
        goto LABEL_78;
    }
    sub_299540(v34);
LABEL_78:
    if ( (*(_BYTE *)v29 & 2) != 0 )
      goto LABEL_79;
    goto LABEL_91;
  }
LABEL_46:
  qfree(v19);
  return v23;
}

