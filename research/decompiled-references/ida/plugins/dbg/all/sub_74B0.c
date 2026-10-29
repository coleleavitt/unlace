unsigned __int64 __fastcall sub_74B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 *a6)
{
  char v7; // bl
  __int64 v8; // rax
  unsigned __int64 v9; // r12
  unsigned int v10; // r14d
  unsigned __int64 v11; // r13
  char i; // al
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD *v15; // rdi
  __int64 v16; // rbx
  int v17; // r13d
  bool v18; // cf
  unsigned int v19; // r13d
  int *v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  int v25; // eax
  __int64 v26; // rax
  __int64 v27; // r9
  unsigned __int64 v28; // r13
  unsigned int v29; // ebp
  char j; // al
  void (*v31)(); // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // r8
  __int64 v36; // r9
  _QWORD *v37; // rdi
  __int64 v38; // r14
  int v39; // ebx
  unsigned int v40; // ebx
  unsigned __int64 v41; // r10
  unsigned __int8 v42; // al
  void (*v44)(); // rax
  _QWORD *v45; // rdi
  unsigned int v46; // ecx
  __int64 v47; // rdi
  unsigned __int16 v48; // ax
  __int64 v49; // rdi
  __int64 v50; // rdi
  __int64 v51; // r8
  __int64 v52; // rsi
  char v53; // r14
  unsigned __int8 v54; // al
  char v55; // al
  unsigned __int8 v56; // al
  void (*v57)(); // [rsp-10h] [rbp-CD8h]
  __int64 v58; // [rsp-8h] [rbp-CD0h]
  __int64 v59; // [rsp+0h] [rbp-CC8h]
  __int64 v60; // [rsp+0h] [rbp-CC8h]
  __int64 v61; // [rsp+8h] [rbp-CC0h]
  __int64 v62; // [rsp+8h] [rbp-CC0h]
  __int64 v63; // [rsp+10h] [rbp-CB8h]
  char *v64; // [rsp+10h] [rbp-CB8h]
  __int64 v65; // [rsp+18h] [rbp-CB0h]
  __int64 v66; // [rsp+18h] [rbp-CB0h]
  unsigned int v68; // [rsp+28h] [rbp-CA0h]
  char v69; // [rsp+2Fh] [rbp-C99h]
  unsigned __int64 v70; // [rsp+30h] [rbp-C98h]
  __int64 v71; // [rsp+38h] [rbp-C90h]
  int v72; // [rsp+4Ch] [rbp-C7Ch] BYREF
  __int128 v73; // [rsp+50h] [rbp-C78h] BYREF
  __m128i v74; // [rsp+60h] [rbp-C68h] BYREF
  int v75; // [rsp+80h] [rbp-C48h] BYREF
  char v76; // [rsp+84h] [rbp-C44h]
  char v77; // [rsp+85h] [rbp-C43h]
  char v78; // [rsp+86h] [rbp-C42h]
  char v79; // [rsp+87h] [rbp-C41h]
  _BYTE v80[14]; // [rsp+480h] [rbp-848h] BYREF
  char v81; // [rsp+48Eh] [rbp-83Ah]
  _BYTE v82[1032]; // [rsp+880h] [rbp-448h] BYREF
  unsigned __int64 v83; // [rsp+C88h] [rbp-40h]

  v7 = a4;
  v69 = a5;
  v83 = __readfsqword(0x28u);
  v8 = *(_QWORD *)(a1 + 40);
  *(_BYTE *)(a1 + 382) = a3;
  v9 = *(_QWORD *)(v8 + 64);
  if ( v9 )
  {
    v68 = 0;
    v10 = 0;
    v11 = 0;
    for ( i = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(
                27,
                a2,
                a3,
                &callui,
                a5,
                a6); ; i = callui(27, v20, v21, &callui, v23, v24, v59, v61, v63, v65) )
    {
      if ( i )
        return v83 - __readfsqword(0x28u);
      v15 = *(_QWORD **)(a1 + 40);
      v16 = v15[7] + 24 * v11;
      v17 = *(unsigned __int8 *)(v16 + 23);
      v18 = __CFADD__(v10, v17);
      v19 = v10 + v17;
      if ( v19 >= v9 || v18 )
      {
        sub_53E0((__int64)"Corrupt COFF symbol table: too many aux records for COFF symbol #%d.", v10);
        return v83 - __readfsqword(0x28u);
      }
      v20 = (int *)v10;
      sub_73C0(v15, v10, &v75, 1024, v13, v14);
      if ( !*(_DWORD *)(v61 + 4) )
      {
        if ( (_BYTE)v75 == 46 )
          goto LABEL_3;
        v20 = &v75;
        v25 = demangle_name(0, &v75, 0, 0) & 0x70000000;
        if ( v25 != 1342177280 )
        {
          if ( v25 != 1610612736 )
          {
            LODWORD(v65) = (v25 == 0x10000000) + (_DWORD)v65;
            goto LABEL_13;
          }
          ++v68;
        }
        if ( BYTE1(v75) != 95 )
          ++HIDWORD(v65);
      }
LABEL_13:
      if ( *(_BYTE *)(v16 + 22) != 6
        || *(_DWORD *)(v61 + 4) != 13
        || v75 != 1146045220
        || v76 != 69
        || (v77 & 0xFD) != 0x31
        || (v78 & 0xFB) != 0x32
        || v79
        || (v20 = (int *)v16,
            v26 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, v16),
            v26 == -1) )
      {
LABEL_3:
        v11 = v19 + 1;
        v10 = v11;
        if ( v11 >= v9 )
          goto LABEL_22;
        continue;
      }
      v20 = (int *)v26;
      v11 = v19 + 1;
      sub_59B0(0x57u, v26, v77 == 49);
      v10 = v11;
      if ( v11 >= v9 )
      {
LABEL_22:
        v27 = *(unsigned int *)(v61 + 4);
        if ( (_DWORD)v27 )
          goto LABEL_23;
        v51 = v68;
        v52 = HIDWORD(v65);
        if ( (int)v65 <= SHIDWORD(v65) )
        {
          v53 = 6;
          if ( (int)v65 < SHIDWORD(v65) )
          {
LABEL_58:
            if ( (getinf(57, HIDWORD(v65), v21, v22, v68, v27) & 0xF) == 0 )
            {
              v52 = 2;
              v73 = 0;
              LOBYTE(v73) = v53;
              set_compiler(&v73, 2, 0);
            }
          }
          if ( (getinf(57, v52, v21, v22, v51, v27) & 0xF) == 6 && v68 )
          {
            v54 = getinf(38, v52, v21, v22, v23, v27);
            setinf(38, v54 | 4u);
          }
LABEL_23:
          v28 = 0;
          v80[0] = 0;
          v29 = 0;
          *(_BYTE *)(a1 + 56) = v63;
          for ( j = callui(27, &callui, v21, v22, v23, v27, v59, v61, &v75, v65);
                !j;
                j = callui(27, &callui, v31, v32, v33, v34, v60, v62, v64, v66) )
          {
            v72 = 0;
            show_auto(v28, 0);
            v37 = *(_QWORD **)(a1 + 40);
            v38 = v37[7] + 24 * v28;
            v39 = *(unsigned __int8 *)(v38 + 23);
            v18 = __CFADD__(v29, v39);
            v40 = v29 + v39;
            if ( v18 || v40 >= v9 )
            {
              sub_53E0((__int64)"Corrupt COFF symbol table: too many aux records for COFF symbol #%d.", v29);
              return v83 - __readfsqword(0x28u);
            }
            sub_73C0(v37, v29, v64, 1024, v35, v36);
            v41 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, v38);
            v42 = *(_BYTE *)(v38 + 22);
            if ( v42 <= 0x6Fu )
            {
              if ( v42 <= 0x66u )
              {
                switch ( v42 )
                {
                  case 3u:
                    v47 = *(_QWORD *)(a1 + 32);
                    *(_QWORD *)&v73 = v41 + 1;
                    v71 = v41;
                    netnode_supset(v47, v28, &v73, 8, 65);
                    v48 = *(_WORD *)(v38 + 20);
                    if ( ((v48 >> 4) & 3) == 2 )
                    {
                      sub_6EF0(a1, v29, v64, v71, &v72, 0, a6);
                      v31 = v57;
                      v32 = v58;
                    }
                    else if ( ((v48 >> 4) & 1) != 0 )
                    {
                      v32 = 37888;
                      v31 = (void (*)())(v48 & 0xF);
                      if ( !_bittest64(&v32, (unsigned __int64)v31) && (~(_BYTE)v48 & 0x30) != 0 )
                        set_name(v71, v64, 23552);
                    }
                    else
                    {
                      sub_6DF0(a1, v29, v64, v71, &v72);
                      v49 = *(_QWORD *)(a1 + 32);
                      *(_QWORD *)&v73 = 1;
                      netnode_supset(v49, v28, &v73, 8, 115);
                    }
                    break;
                  case 6u:
                    if ( *(_DWORD *)(v62 + 4) != 13
                      || *(_DWORD *)v64 != 1146045220
                      || v64[4] != 69
                      || (v77 & 0xFD) != 0x31
                      || (v78 & 0xFB) != 0x32
                      || v79 )
                    {
                      v50 = *(_QWORD *)(a1 + 32);
                      v70 = v41;
                      *(_QWORD *)&v73 = v41 + 1;
                      netnode_supset(v50, v28, &v73, 8, 65);
                      set_name(v70, v64, 23552);
                    }
                    break;
                  case 2u:
                    sub_7190((__int64 *)a1, v29, v64, v41, v29, 0, 1u, &v72, a6);
                    break;
                }
              }
              else
              {
                switch ( v42 )
                {
                  case 'g':
                    v45 = *(_QWORD **)(a1 + 40);
                    if ( (unsigned __int8)sub_6570((__int64)v45, v29, &v74, &v72) )
                    {
                      if ( v74.m128i_i32[0] )
                      {
                        v81 = 0;
                        *(_QWORD *)v80 = v74.m128i_i64[0];
                        *(_QWORD *)&v80[6] = *(__int64 *)((char *)v74.m128i_i64 + 6);
                      }
                      else
                      {
                        v46 = v74.m128i_u32[1];
                        if ( *(_BYTE *)(a1 + 382) )
                          v46 = _byteswap_ulong(v74.m128i_u32[1]);
                        sub_6500(v45, v80, 1024, v46, 0, v34);
                      }
                    }
                    else
                    {
                      sub_73C0(v45, v29, v80, 1024, v33, v34);
                    }
                    break;
                  case 'h':
                  case 'k':
                    if ( v69 )
                    {
                      qsnprintf(v82, 1024, "TOKEN_%s", v64);
                      v31 = nullsub_1;
                      v44 = *(void (**)())(*(_QWORD *)a1 + 16LL);
                      if ( v44 != nullsub_1 )
                        ((void (__fastcall *)(__int64, _QWORD, _BYTE *, _QWORD, bool, __int64))v44)(
                          a1,
                          v29,
                          v82,
                          0,
                          (*(_WORD *)(v38 + 20) & 0x30) == 32,
                          -1);
                    }
                    else
                    {
                      sub_7190((__int64 *)a1, v29, v64, v41, v29, 0, 0, &v72, a6);
                    }
                    break;
                  case 'i':
                  case 'o':
                    sub_7190((__int64 *)a1, v29, v64, v41, v29, 1u, 1u, &v72, a6);
                    break;
                  default:
                    break;
                }
              }
            }
            v28 = v40 + 1;
            v29 = v40 + 1;
            if ( v28 >= v9 )
              break;
          }
          if ( *(_DWORD *)(v62 + 4) )
            return v83 - __readfsqword(0x28u);
          if ( (int)v66 <= SHIDWORD(v66) )
            goto LABEL_69;
          v55 = 1;
          goto LABEL_73;
        }
        v53 = 1;
        goto LABEL_58;
      }
    }
  }
  if ( *(_DWORD *)(a2 + 4) )
  {
    *(_BYTE *)(a1 + 56) = a4;
  }
  else
  {
    getinf(57, a2, a3, a4, a5, a6);
    *(_BYTE *)(a1 + 56) = v7;
    v80[0] = 0;
    HIDWORD(v66) = *(_DWORD *)(a2 + 4);
    if ( !HIDWORD(v66) )
    {
      v68 = 0;
      LODWORD(v66) = 0;
LABEL_69:
      if ( SHIDWORD(v66) > (int)v66 )
      {
        if ( v68 )
        {
          v56 = getinf(38, (unsigned int)v66, v31, v32, v33, v34);
          setinf(38, v56 | 4u);
        }
        v55 = 6;
LABEL_73:
        v73 = 0;
        LOBYTE(v73) = v55;
        set_compiler(&v73, 2, 0);
      }
    }
  }
  return v83 - __readfsqword(0x28u);
}

