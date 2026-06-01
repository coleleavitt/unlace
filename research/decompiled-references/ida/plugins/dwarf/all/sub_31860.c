__int64 __fastcall sub_31860(__int64 a1, char *a2, _QWORD *a3)
{
  const char *v5; // rax
  unsigned __int64 v6; // r13
  char v7; // bp
  const char *v8; // r12
  __int64 v9; // rdx
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  unsigned __int64 v13; // rax
  _DWORD *v14; // rcx
  void (__fastcall *v15)(_QWORD *); // rdx
  void (__fastcall *v16)(_QWORD *); // rax
  _QWORD *v17; // rax
  void *v18; // r15
  _QWORD **v19; // rax
  void *v20; // rdi
  __int64 v21; // rax
  void *v22; // rcx
  void *v23; // r15
  __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rdi
  unsigned __int8 v27; // bl
  const char *v28; // rdi
  unsigned int v29; // r12d
  __int64 v31; // rax
  __int64 v32; // rbx
  __int64 v33; // rsi
  unsigned __int8 v34; // r12
  const char **v35; // r15
  int v36; // ebp
  __int64 v37; // rbp
  _WORD *v38; // rax
  __int16 v39; // dx
  unsigned __int64 v41; // [rsp+10h] [rbp-A8h]
  char v42; // [rsp+10h] [rbp-A8h]
  int v43; // [rsp+2Ch] [rbp-8Ch]
  void *v44; // [rsp+30h] [rbp-88h]
  _QWORD **v45; // [rsp+30h] [rbp-88h]
  _DWORD *v46; // [rsp+30h] [rbp-88h]
  _QWORD *v47; // [rsp+30h] [rbp-88h]
  void *v48; // [rsp+30h] [rbp-88h]
  _DWORD *v49; // [rsp+30h] [rbp-88h]
  _DWORD *v50; // [rsp+30h] [rbp-88h]
  _DWORD *v51; // [rsp+38h] [rbp-80h]
  _DWORD *v52; // [rsp+38h] [rbp-80h]
  __int64 v53; // [rsp+38h] [rbp-80h]
  __int64 v54; // [rsp+38h] [rbp-80h]
  unsigned __int64 v55; // [rsp+40h] [rbp-78h] BYREF
  char v56; // [rsp+48h] [rbp-70h]
  __int64 v57; // [rsp+50h] [rbp-68h] BYREF
  char v58; // [rsp+58h] [rbp-60h]
  __int128 v59; // [rsp+60h] [rbp-58h] BYREF
  unsigned __int64 v60; // [rsp+78h] [rbp-40h]

  v60 = __readfsqword(0x28u);
  LODWORD(v57) = 0;
  *(_QWORD *)&v59 = 0;
  (*(__int64 (__fastcall **)(_QWORD, __int64))(a3[32] + 112LL))(*(_QWORD *)(*a3 + 24LL), 62);
  v5 = (const char *)sub_986B0(a3);
  if ( v5 && !strcmp(v5, "void") )
  {
    *(_QWORD *)&v59 = 1;
    copy_tinfo_t(a1, &v59);
    v7 = 1;
    clear_tinfo_t(&v59);
    goto LABEL_33;
  }
  v55 = 0;
  v6 = sub_97A10(a3);
  v56 = 0;
  v7 = sub_96EC0(a3, &v55, 62);
  if ( v7 )
  {
    v8 = nullptr;
    v41 = v55;
    if ( !(unsigned __int8)sub_84C30(a3) )
    {
LABEL_5:
      v13 = v41;
LABEL_6:
      switch ( v13 )
      {
        case 2uLL:
          if ( v6 == (unsigned __int8)getinf(60) )
          {
            v33 = 8;
            goto LABEL_43;
          }
          if ( v6 == 4 )
          {
            v33 = 56;
            goto LABEL_43;
          }
          if ( v6 > 4 )
          {
            if ( v6 == 8 && (unsigned __int8)getinf_flag(3, 4) )
              goto LABEL_53;
          }
          else
          {
            if ( v6 == 1 )
            {
              v33 = 24;
              goto LABEL_43;
            }
            if ( v6 == 2 && !(unsigned __int8)getinf_flag(3, 4) )
            {
LABEL_53:
              v33 = 40;
              goto LABEL_43;
            }
          }
          sub_17110((__int64)"base type: unknown boolean size=%llu, using int instead\n");
          break;
        case 3uLL:
        case 0xFuLL:
          v7 = 0;
          goto LABEL_33;
        case 4uLL:
          v34 = sub_28090(v6);
          if ( v34 == 0xFF )
          {
            sub_81C40(a3);
            sub_17110((__int64)"unknown float byte size=%llu @ %s\n");
            v33 = 9;
          }
          else
          {
            if ( !*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*a3 + 16LL) + 128LL) + 2792LL) && (v34 & 0x20) != 0 )
            {
              setinf(66, (unsigned __int8)v6);
              *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*a3 + 16LL) + 128LL) + 2792LL) = 1;
            }
            v33 = v34 | 9u;
          }
          goto LABEL_43;
        case 6uLL:
        case 8uLL:
          v27 = 50;
          if ( v41 != 6 )
            v27 = 34;
          if ( !v8 || (v28 = v8, v29 = 50, strcmp(v28, "char")) )
            v29 = v27;
          if ( v6 != 1 && (debug & 0x400000) != 0 )
            sub_88B80(
              (unsigned int)"got a char with bte size=%llu (!= 1), assuming 1 anyway...\n",
              v6,
              v9 * 8,
              v10,
              v11,
              v12);
          create_tinfo(a1, v29, 7, 0);
          goto LABEL_33;
        default:
          goto LABEL_63;
      }
      goto LABEL_61;
    }
    v8 = (const char *)sub_9AC00(a3);
    if ( !v8 )
    {
LABEL_62:
      v13 = v41;
      v7 = 0;
      if ( v41 > 0xF )
      {
LABEL_63:
        v42 = 32 * (v41 != 5);
        goto LABEL_9;
      }
      goto LABEL_6;
    }
LABEL_55:
    v35 = (const char **)&off_C81A0;
    v36 = 0;
    while ( strcmp(v8, *v35) )
    {
      ++v36;
      v35 += 2;
      if ( v36 == 34 )
        goto LABEL_62;
    }
    v9 = 2LL * v36;
    v37 = LODWORD((&off_C81A0)[v9 + 1]);
    if ( (_DWORD)v37 )
    {
      v59 = 0;
      getinf_buf(98, &v59, 16);
      switch ( v37 )
      {
        case 1LL:
          if ( BYTE3(v59) == v6 || !v6 )
            goto LABEL_59;
          BYTE3(v59) = v6;
          break;
        case 2LL:
          if ( BYTE6(v59) == v6 || !v6 )
            goto LABEL_59;
          BYTE6(v59) = v6;
          break;
        case 3LL:
          if ( BYTE2(v59) == v6 || !v6 )
            goto LABEL_59;
          BYTE2(v59) = v6;
          break;
        case 4LL:
          if ( BYTE7(v59) == v6 || !v6 )
            goto LABEL_59;
          BYTE7(v59) = v6;
          break;
        case 5LL:
          if ( BYTE8(v59) == v6 || !v6 )
            goto LABEL_59;
          BYTE8(v59) = v6;
          break;
        default:
          if ( !under_debugger )
            interr(30511);
          BUG();
      }
      set_compiler(&v59, 1, 0);
    }
LABEL_59:
    v7 = 1;
    goto LABEL_5;
  }
  if ( (unsigned __int8)sub_84C30(a3) )
  {
    v41 = 0;
    v8 = (const char *)sub_9AC00(a3);
    if ( !v8 )
    {
LABEL_61:
      v42 = 32;
      goto LABEL_9;
    }
    goto LABEL_55;
  }
  v42 = 32;
  v8 = nullptr;
  v7 = 1;
LABEL_9:
  v14 = *(_DWORD **)(sub_87DA0(a3) + 216);
  if ( v14 )
  {
    v43 = v14[31];
    if ( !v14[2] )
    {
      v15 = **(void (__fastcall ***)(_QWORD *))v14;
      if ( v15 == sub_15E30 )
      {
        v16 = *(void (__fastcall **)(_QWORD *))(*(_QWORD *)v14 + 16LL);
        if ( v16 == sub_15D70 )
        {
          *(_QWORD *)v14 = &off_C71D8;
          v17 = *((_QWORD **)v14 + 16);
          v18 = v17;
          if ( v17 )
          {
            v19 = (_QWORD **)v17[2];
            if ( v19 )
            {
              do
              {
                v51 = v14;
                v44 = v19;
                sub_293E0(v19[3]);
                v20 = v44;
                v45 = *((_QWORD ***)v44 + 2);
                operator delete(v20, 0x30u);
                v19 = v45;
                v14 = v51;
              }
              while ( v45 );
            }
            v46 = v14;
            operator delete(v18, 0x30u);
            v14 = v46;
          }
          v21 = *((_QWORD *)v14 + 19);
          if ( v21 )
          {
            do
            {
              v52 = v14;
              v47 = (_QWORD *)v21;
              sub_29E10(*(_QWORD **)(v21 + 24));
              v22 = v52;
              v23 = v47;
              v24 = v47[2];
              v25 = v47[4];
              if ( v25 )
              {
                v47[5] = 0;
                v53 = v24;
                v48 = v22;
                qfree(v25);
                v24 = v53;
                v22 = v48;
              }
              v54 = v24;
              v49 = v22;
              operator delete(v23, 0x48u);
              v21 = v54;
              v14 = v49;
            }
            while ( v54 );
          }
          v26 = *((_QWORD *)v14 + 12);
          if ( v26 )
          {
            *((_QWORD *)v14 + 13) = 0;
            v50 = v14;
            qfree(v26);
            v14 = v50;
          }
          operator delete(v14, 0xC0u);
        }
        else
        {
          v16(v14);
        }
      }
      else
      {
        v15(v14);
      }
    }
  }
  else
  {
    v43 = 5;
  }
  if ( v43 != 8 && v6 == (unsigned __int8)getinf(59) )
  {
LABEL_42:
    v33 = (unsigned __int8)v42 | 7u;
  }
  else
  {
    switch ( v6 )
    {
      case 0uLL:
        if ( v8 && !strcmp(v8, "void") )
          goto LABEL_74;
        v31 = sub_87DA0(a3);
        v58 = 0;
        v32 = v31;
        v57 = 0;
        v59 = 0;
        if ( !(unsigned __int8)sub_945B0(v31, &v59, 19) )
          goto LABEL_41;
        if ( !(unsigned __int8)sub_96D10(v32, &v57, &v59) )
          goto LABEL_41;
        v38 = word_ABD3C;
        v39 = word_ABD3C[0];
        if ( !word_ABD3C[0] )
          goto LABEL_41;
        break;
      case 1uLL:
        v33 = (unsigned __int8)v42 | 2u;
        goto LABEL_43;
      case 2uLL:
        v33 = (unsigned __int8)v42 | 3u;
        goto LABEL_43;
      case 4uLL:
        v33 = (unsigned __int8)v42 | 4u;
        goto LABEL_43;
      case 8uLL:
        v33 = (unsigned __int8)v42 | 5u;
        goto LABEL_43;
      case 0x10uLL:
        v33 = (unsigned __int8)v42 | 6u;
        goto LABEL_43;
      default:
        goto LABEL_42;
    }
    while ( v39 != (_WORD)v57 )
    {
      v39 = v38[1];
      ++v38;
      if ( !v39 )
      {
LABEL_41:
        sub_84A10(&v59);
        goto LABEL_42;
      }
    }
    sub_84A10(&v59);
LABEL_74:
    v33 = 1;
  }
LABEL_43:
  create_tinfo(a1, v33, 7, 0);
LABEL_33:
  *a2 = v7;
  return 1;
}

