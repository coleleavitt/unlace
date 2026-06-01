unsigned __int64 __fastcall sub_12350(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 *a6)
{
  char v7; // bp
  __int64 v8; // rax
  unsigned __int64 v9; // r12
  unsigned int v10; // r14d
  unsigned __int64 v11; // r13
  char i; // al
  _QWORD *v13; // rdi
  __int64 v14; // rbp
  int v15; // r13d
  bool v16; // cf
  unsigned int v17; // r13d
  int *v18; // rsi
  void (*v19)(); // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // eax
  __int64 v24; // rax
  char v25; // bp
  __int64 v26; // r9
  unsigned __int64 v27; // r13
  unsigned int v28; // ebp
  _QWORD *v29; // rdi
  __int64 v30; // r14
  int v31; // ebx
  unsigned int v32; // ebx
  unsigned __int64 v33; // r10
  unsigned __int8 v34; // al
  __int64 v36; // rdi
  char v37; // al
  unsigned __int8 v38; // r9
  void (*v39)(); // rax
  unsigned int v40; // ecx
  __int64 v41; // rdi
  unsigned __int16 v42; // ax
  __int64 v43; // rdi
  __int64 v44; // rdi
  unsigned __int64 v45; // rsi
  __int64 v46; // r8
  __int64 v47; // rsi
  char v48; // r14
  __int64 v49; // rcx
  unsigned __int8 v50; // [rsp-20h] [rbp-CE8h]
  __int64 *v51; // [rsp-10h] [rbp-CD8h]
  void (*v52)(); // [rsp-10h] [rbp-CD8h]
  __int64 v53; // [rsp-8h] [rbp-CD0h]
  __int64 v54; // [rsp+0h] [rbp-CC8h]
  __int64 v55; // [rsp+8h] [rbp-CC0h]
  __int64 v56; // [rsp+10h] [rbp-CB8h]
  char *v57; // [rsp+10h] [rbp-CB8h]
  __int64 v58; // [rsp+18h] [rbp-CB0h]
  unsigned int v60; // [rsp+28h] [rbp-CA0h]
  char v61; // [rsp+2Fh] [rbp-C99h]
  unsigned __int64 v62; // [rsp+30h] [rbp-C98h]
  __int64 v63; // [rsp+38h] [rbp-C90h]
  int v64; // [rsp+4Ch] [rbp-C7Ch] BYREF
  __int128 v65; // [rsp+50h] [rbp-C78h] BYREF
  __m128i v66; // [rsp+60h] [rbp-C68h] BYREF
  int v67; // [rsp+80h] [rbp-C48h] BYREF
  char v68; // [rsp+84h] [rbp-C44h]
  char v69; // [rsp+85h] [rbp-C43h]
  char v70; // [rsp+86h] [rbp-C42h]
  char v71; // [rsp+87h] [rbp-C41h]
  _BYTE v72[14]; // [rsp+480h] [rbp-848h] BYREF
  char v73; // [rsp+48Eh] [rbp-83Ah]
  _BYTE v74[1032]; // [rsp+880h] [rbp-448h] BYREF
  unsigned __int64 v75; // [rsp+C88h] [rbp-40h]

  v7 = a4;
  v61 = a5;
  v75 = __readfsqword(0x28u);
  v8 = a1[5];
  *((_BYTE *)a1 + 382) = a3;
  v9 = *(_QWORD *)(v8 + 64);
  if ( !v9 )
  {
    if ( *(_DWORD *)(a2 + 4) )
    {
      *((_BYTE *)a1 + 56) = a4;
    }
    else
    {
      getinf(57, a2, a3, a4, a5, a6);
      *((_BYTE *)a1 + 56) = v7;
      v72[0] = 0;
      v60 = *(_DWORD *)(a2 + 4);
      if ( !v60 )
      {
        v58 = 0;
        goto LABEL_40;
      }
    }
    return v75 - __readfsqword(0x28u);
  }
  v60 = 0;
  v10 = 0;
  v11 = 0;
  for ( i = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(
              27,
              a2,
              a3,
              &callui,
              a5,
              a6); ; i = callui(27, v18, v19, &callui, v21, v22, v54, v55, v56, v58) )
  {
    if ( i )
      return v75 - __readfsqword(0x28u);
    v13 = (_QWORD *)a1[5];
    v14 = v13[7] + 24 * v11;
    v15 = *(unsigned __int8 *)(v14 + 23);
    v16 = __CFADD__(v10, v15);
    v17 = v10 + v15;
    if ( v17 >= v9 || v16 )
    {
      sub_5A70((__int64)"Corrupt COFF symbol table: too many aux records for COFF symbol #%d.", v10);
      return v75 - __readfsqword(0x28u);
    }
    v18 = (int *)v10;
    sub_91E0(v13, v10, &v67, 1024);
    if ( !*(_DWORD *)(v55 + 4) )
    {
      if ( (_BYTE)v67 == 46 )
        goto LABEL_3;
      v18 = &v67;
      v23 = demangle_name(0, &v67, 0, 0, v21) & 0x70000000;
      if ( v23 != 1342177280 )
      {
        if ( v23 != 1610612736 )
        {
          LODWORD(v58) = (v23 == 0x10000000) + (_DWORD)v58;
          goto LABEL_13;
        }
        ++v60;
      }
      if ( BYTE1(v67) != 95 )
        ++HIDWORD(v58);
    }
LABEL_13:
    if ( *(_BYTE *)(v14 + 22) == 6
      && *(_DWORD *)(v55 + 4) == 13
      && v67 == 1146045220
      && v68 == 69
      && (v69 & 0xFD) == 0x31
      && (v70 & 0xFB) == 0x32
      && !v71 )
    {
      v18 = (int *)v14;
      v24 = (*(__int64 (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, v14);
      if ( v24 != -1 )
        break;
    }
LABEL_3:
    v11 = v17 + 1;
    v10 = v11;
    if ( v11 >= v9 )
      goto LABEL_22;
LABEL_4:
    ;
  }
  v18 = (int *)v24;
  v11 = v17 + 1;
  sub_5F40(0x57u, v24, v69 == 49);
  v10 = v11;
  if ( v11 < v9 )
    goto LABEL_4;
LABEL_22:
  v25 = v56;
  v26 = *(unsigned int *)(v55 + 4);
  if ( (_DWORD)v26 )
    goto LABEL_23;
  v46 = v60;
  v47 = HIDWORD(v58);
  if ( (int)v58 > SHIDWORD(v58) )
  {
    v48 = 1;
    goto LABEL_72;
  }
  v48 = 6;
  if ( (int)v58 < SHIDWORD(v58) )
  {
LABEL_72:
    if ( (getinf(57, HIDWORD(v58), v19, v20, v60, v26) & 0xF) == 0 )
    {
      v47 = 2;
      v65 = 0;
      LOBYTE(v65) = v48;
      set_compiler(&v65, 2, 0);
    }
  }
  if ( (getinf(57, v47, v19, v20, v46, v26) & 0xF) == 6 && v60 )
  {
    getinf(38, v47, v19, v20, v21, v26);
    setinf(38);
  }
LABEL_23:
  v72[0] = 0;
  v27 = 0;
  v57 = (char *)&v67;
  *((_BYTE *)a1 + 56) = v25;
  v28 = 0;
  while ( 1 )
  {
    a2 = (__int64)&callui;
    if ( (unsigned __int8)callui(27, &callui, v19, v20, v21, v26, v54, v55, v57, v58) )
      break;
    v64 = 0;
    show_auto(v27, 0);
    v29 = (_QWORD *)a1[5];
    v30 = v29[7] + 24 * v27;
    v31 = *(unsigned __int8 *)(v30 + 23);
    v16 = __CFADD__(v28, v31);
    v32 = v28 + v31;
    if ( v16 || v32 >= v9 )
    {
      sub_5A70((__int64)"Corrupt COFF symbol table: too many aux records for COFF symbol #%d.", v28);
      return v75 - __readfsqword(0x28u);
    }
    sub_91E0(v29, v28, v57, 1024);
    a2 = v30;
    v33 = (*(__int64 (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, v30);
    v34 = *(_BYTE *)(v30 + 22);
    if ( v34 > 0x6Fu )
      goto LABEL_37;
    if ( v34 > 0x63u )
    {
      switch ( v34 )
      {
        case 'd':
        case 'e':
          v36 = a1[5];
          a2 = v28;
          goto LABEL_36;
        case 'f':
          goto LABEL_52;
        case 'g':
          if ( (unsigned __int8)sub_9170(a1[5], v28, &v66, &v64) )
          {
            a2 = v66.m128i_u32[0];
            if ( v66.m128i_i32[0] )
            {
              v73 = 0;
              *(_QWORD *)v72 = v66.m128i_i64[0];
              *(_QWORD *)&v72[6] = *(__int64 *)((char *)v66.m128i_i64 + 6);
            }
            else
            {
              v40 = v66.m128i_u32[1];
              if ( *((_BYTE *)a1 + 382) )
                v40 = _byteswap_ulong(v66.m128i_u32[1]);
              a2 = (__int64)v72;
              sub_9030((_QWORD *)a1[5], v72, 1024, v40, 0);
            }
          }
          else
          {
            a2 = v28;
            sub_91E0((_QWORD *)a1[5], v28, v72, 1024);
          }
          goto LABEL_37;
        case 'h':
        case 'k':
          if ( !v61 )
          {
            v38 = 0;
            v51 = a6;
            v50 = 0;
            goto LABEL_46;
          }
          a2 = 1024;
          qsnprintf(v74, 1024, "TOKEN_%s", v57);
          v19 = nullsub_1;
          v39 = *(void (**)())(*a1 + 16);
          if ( v39 != nullsub_1 )
          {
            a2 = v28;
            ((void (__fastcall *)(__int64 *, _QWORD, _BYTE *, _QWORD, bool, __int64))v39)(
              a1,
              v28,
              v74,
              0,
              (*(_WORD *)(v30 + 20) & 0x30) == 32,
              -1);
          }
          break;
        case 'i':
        case 'o':
          v38 = 1;
          v51 = a6;
          v50 = 1;
          goto LABEL_46;
        default:
          goto LABEL_37;
      }
      goto LABEL_37;
    }
    if ( v34 == 6 )
    {
      if ( *(_DWORD *)(v55 + 4) == 13
        && *(_DWORD *)v57 == 1146045220
        && v57[4] == 69
        && (v69 & 0xFD) == 0x31
        && (v70 & 0xFB) == 0x32
        && !v71 )
      {
        goto LABEL_37;
      }
      v44 = a1[4];
      v45 = v27;
      v62 = v33;
      v27 = v32 + 1;
      *(_QWORD *)&v65 = v33 + 1;
      v28 = v32 + 1;
      netnode_supset(v44, v45, &v65, 8, 65);
      a2 = (__int64)v57;
      set_name(v62, v57, 23552);
      if ( v27 >= v9 )
        break;
    }
    else
    {
      if ( v34 > 6u )
      {
        if ( v34 != 10 )
          goto LABEL_37;
        goto LABEL_52;
      }
      if ( v34 != 2 )
      {
        if ( v34 != 3 )
          goto LABEL_37;
        v41 = a1[4];
        *(_QWORD *)&v65 = v33 + 1;
        v63 = v33;
        netnode_supset(v41, v27, &v65, 8, 65);
        v42 = *(_WORD *)(v30 + 20);
        if ( ((v42 >> 4) & 3) == 2 )
        {
          a2 = v28;
          sub_11B90((__int64)a1, v28, v57, v63, &v64, 0, a6);
          v19 = v52;
          v20 = v53;
          goto LABEL_37;
        }
        if ( (*(_WORD *)(v30 + 20) & 0x10) == 0 )
        {
          sub_119A0((__int64)a1, v28, v57, v63, &v64);
          v43 = a1[4];
          a2 = v27;
          *(_QWORD *)&v65 = 1;
          netnode_supset(v43, v27, &v65, 8, 115);
          goto LABEL_37;
        }
        v49 = 37888;
        if ( !_bittest64(&v49, v42 & 0xF) && (~(_BYTE)v42 & 0x30) != 0 )
        {
          a2 = (__int64)v57;
          set_name(v63, v57, 23552);
          goto LABEL_37;
        }
LABEL_52:
        v36 = a1[5];
        a2 = v28;
LABEL_36:
        sub_9170(v36, a2, &v66, &v64);
LABEL_37:
        v27 = v32 + 1;
        v28 = v32 + 1;
        if ( v27 >= v9 )
          break;
        continue;
      }
      v38 = 0;
      v51 = a6;
      v50 = 1;
LABEL_46:
      a2 = v28;
      v27 = v32 + 1;
      sub_12120(a1, v28, v57, v33, v28, v38, v50, &v64, v51);
      v28 = v32 + 1;
      if ( v27 >= v9 )
        break;
    }
  }
  if ( *(_DWORD *)(v55 + 4) )
    return v75 - __readfsqword(0x28u);
  if ( (int)v58 > SHIDWORD(v58) )
  {
    v37 = 1;
    goto LABEL_44;
  }
LABEL_40:
  if ( (int)v58 < SHIDWORD(v58) )
  {
    if ( v60 )
    {
      getinf(38, a2, v19, v20, v21, v26);
      setinf(38);
    }
    v37 = 6;
LABEL_44:
    v65 = 0;
    LOBYTE(v65) = v37;
    set_compiler(&v65, 2, 0);
  }
  return v75 - __readfsqword(0x28u);
}
