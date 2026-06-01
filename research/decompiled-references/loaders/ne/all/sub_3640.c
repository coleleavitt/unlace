__int64 __fastcall sub_3640(__int64 a1, __int64 a2, _WORD *a3, __int64 a4)
{
  _WORD *v4; // r10
  __int64 v6; // r12
  int v7; // ebp
  __int64 v8; // rdx
  __int64 v9; // r15
  _WORD *v10; // r14
  int v11; // esi
  int v12; // ebp
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // r12
  int v16; // eax
  int v17; // edx
  int v18; // eax
  int v19; // r15d
  char v20; // dl
  __int64 v21; // rdi
  int dword; // eax
  int v23; // ecx
  int v24; // edx
  __int64 v25; // r12
  int v26; // eax
  int v27; // edx
  int v28; // eax
  char v29; // al
  int v30; // eax
  __int64 v31; // rbp
  _WORD *v32; // r12
  int v33; // r13d
  __int64 v34; // r15
  __int64 v35; // r14
  __int64 result; // rax
  int v37; // eax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // r8
  __int64 v41; // r9
  _BYTE *v42; // rbx
  __int64 v43; // r13
  char *v44; // r15
  unsigned __int64 v45; // rbx
  __int64 v46; // rbp
  __int64 v47; // r12
  unsigned __int64 v48; // rax
  int v49; // edx
  __int64 v50; // rdx
  int v51; // eax
  const char *v52; // r8
  unsigned __int16 v54; // [rsp+0h] [rbp-578h]
  unsigned __int16 v55; // [rsp+0h] [rbp-578h]
  __int64 v57; // [rsp+10h] [rbp-568h]
  __int64 v58; // [rsp+18h] [rbp-560h]
  __int64 v59; // [rsp+18h] [rbp-560h]
  __int64 v60; // [rsp+20h] [rbp-558h]
  _WORD *v61; // [rsp+20h] [rbp-558h]
  __int64 v62; // [rsp+28h] [rbp-550h]
  __int64 v63; // [rsp+38h] [rbp-540h]
  unsigned __int16 v64; // [rsp+56h] [rbp-522h] BYREF
  unsigned __int64 v65; // [rsp+58h] [rbp-520h] BYREF
  __int64 v66; // [rsp+60h] [rbp-518h] BYREF
  unsigned __int64 v67; // [rsp+68h] [rbp-510h] BYREF
  _OWORD v68[2]; // [rsp+70h] [rbp-508h] BYREF
  __int64 v69; // [rsp+90h] [rbp-4E8h]
  __int64 v70; // [rsp+98h] [rbp-4E0h]
  __int64 v71; // [rsp+A0h] [rbp-4D8h]
  __int128 v72; // [rsp+A8h] [rbp-4D0h]
  __int128 v73; // [rsp+B8h] [rbp-4C0h]
  __int128 v74; // [rsp+C8h] [rbp-4B0h]
  __int128 v75; // [rsp+D8h] [rbp-4A0h]
  __int128 v76; // [rsp+E8h] [rbp-490h]
  __int128 v77; // [rsp+F8h] [rbp-480h]
  __int128 v78; // [rsp+108h] [rbp-470h]
  __int128 v79; // [rsp+118h] [rbp-460h]
  unsigned __int64 v80; // [rsp+128h] [rbp-450h]
  _BYTE v81[1023]; // [rsp+130h] [rbp-448h] BYREF
  char v82; // [rsp+52Fh] [rbp-49h] BYREF
  _BYTE v83[8]; // [rsp+530h] [rbp-48h] BYREF
  unsigned __int64 v84; // [rsp+538h] [rbp-40h]

  v4 = a3;
  v84 = __readfsqword(0x28u);
  v6 = (unsigned __int16)a3[20] + a2;
  v60 = a2 + (unsigned __int16)a3[21];
  if ( a3[15] )
  {
    v7 = 0;
    do
    {
      qlseek(a1, v6, 0);
      lread(a1, &v65, 2);
      qlseek(a1, v60 + (unsigned __int16)v65, 0);
      v67 = 0;
      lread(a1, &v67, 1);
      v8 = v67;
      if ( v67 )
      {
        if ( v67 > 0x400 )
        {
          v67 = 1024;
          v8 = 1024;
        }
        lread(a1, v81, v8);
        v81[v67] = 0;
        netnode_supset(a4, v7 + 1, v81, 0, 83);
        v66 = -1;
        netnode_check(&v66, 0, 0, 1);
        v67 = v66;
        netnode_supset(a4, v7 + 1, &v67, 8, 65);
      }
      ++v7;
      v6 += 2;
    }
    while ( (unsigned __int16)v7 < a3[15] );
    v4 = a3;
  }
  if ( v4[14] )
  {
    v54 = 1;
    v9 = a2 + (unsigned __int16)v4[17];
    v10 = v4;
    while ( 1 )
    {
      qlseek(a1, v9, 0);
      lread(a1, &v66, 8);
      if ( (v66 & 0x10000000000LL) == 0 )
        goto LABEL_48;
      if ( v54 != 1 && *((_BYTE *)v10 + 54) == 2 && (*((_BYTE *)v10 + 13) & 8) != 0 )
      {
        v29 = byte_B281;
        if ( !byte_B282 )
        {
          v30 = sub_3560(
                  0,
                  (__int64)"HIDECANCEL\n"
                           "This file is self-loading and possibly compressed.\n"
                           "Do you want to apply relocations to non-selfload segments?");
          byte_B282 = 1;
          v29 = v30 <= 0;
          byte_B281 = v29;
        }
        if ( v29 )
        {
LABEL_58:
          v4 = v10;
          goto LABEL_59;
        }
      }
      v58 = netnode_altval(qword_B288, v54, 65);
      v11 = WORD1(v66) ? WORD1(v66) : ((_WORD)v66 != 0) << 16;
      v12 = 0;
      qlseek(a1, ((unsigned __int64)(unsigned __int16)v66 << v10[25]) + v11, 0);
      lread(a1, &v64, 2);
      if ( v64 )
        break;
LABEL_48:
      v9 += 8;
      if ( v54 >= v10[14] )
        goto LABEL_58;
      ++v54;
    }
    v63 = v9;
    while ( 1 )
    {
      v19 = 1;
      lread(a1, &v67, 8);
      v20 = BYTE1(v67);
      if ( (v67 & 0x400) == 0 )
        goto LABEL_40;
      v21 = v58 + WORD1(v67);
      if ( (_BYTE)v67 == 5 )
        goto LABEL_35;
      if ( (unsigned __int8)v67 > 5u )
      {
        v19 = 2;
        if ( (_BYTE)v67 != 13 )
          goto LABEL_40;
        dword = get_dword(v21);
      }
      else
      {
        if ( (_BYTE)v67 )
        {
          v19 = 2;
          if ( (unsigned __int8)(v67 - 2) > 1u )
            goto LABEL_40;
LABEL_35:
          dword = (__int16)get_word(v21);
          goto LABEL_36;
        }
        dword = (char)get_byte(v21);
      }
LABEL_36:
      v20 = BYTE1(v67);
      v19 = 1;
      if ( dword )
      {
        v23 = dword - 1;
        if ( dword >= 0 )
          v23 = dword + 1;
        v19 = v23;
      }
LABEL_40:
      v24 = v20 & 0xFB;
      if ( v24 != 1 )
      {
        if ( v24 == 2 )
        {
          v57 = qlseek(a1, 0, 1);
          qlseek(a1, v60 + HIWORD(v67), 0);
          v65 = 0;
          lread(a1, &v65, 1);
          v13 = v65;
          if ( v65 )
          {
            if ( v65 > 0x400 )
            {
              v65 = 1024;
              v13 = 1024;
            }
            lread(a1, v81, v13);
            v14 = WORD2(v67);
            v81[v65] = 0;
            v15 = netnode_altval(a4, v14, 65);
            v16 = netnode_altval(v15, HIWORD(v67) + 0x10000LL, 65);
            v17 = -v16;
            if ( v16 > 0 )
              v17 = v16;
            v18 = -v19;
            if ( v19 > 0 )
              v18 = v19;
            if ( v17 < v18 )
            {
              netnode_supset(v15, HIWORD(v67) + 0x10000LL, v81, 0, 83);
              v65 = v19;
              netnode_supset(v15, HIWORD(v67) + 0x10000LL, &v65, 8, 65);
            }
          }
          qlseek(a1, v57, 0);
        }
        goto LABEL_29;
      }
      v25 = netnode_altval(a4, WORD2(v67), 65);
      v26 = netnode_altval(v25, HIWORD(v67), 65);
      v27 = -v26;
      if ( v26 > 0 )
        v27 = v26;
      v28 = -v19;
      if ( v19 > 0 )
        v28 = v19;
      if ( v27 >= v28 )
      {
LABEL_29:
        if ( (unsigned __int16)++v12 >= v64 )
          goto LABEL_47;
      }
      else
      {
        v65 = v19;
        ++v12;
        netnode_supset(v25, HIWORD(v67), &v65, 8, 65);
        if ( (unsigned __int16)v12 >= v64 )
        {
LABEL_47:
          v9 = v63;
          goto LABEL_48;
        }
      }
    }
  }
LABEL_59:
  if ( v4[15] )
  {
    v55 = 0;
    v31 = a4;
    v32 = v4;
    do
    {
      while ( 1 )
      {
        ++v55;
        v33 = 0;
        v34 = 0;
        v35 = netnode_altval(v31, v55, 65);
        if ( v35 )
          break;
        if ( v55 >= v32[15] )
          return 1;
      }
      while ( 1 )
      {
        v38 = netnode_supnext(v35, v34, 65);
        v34 = v38;
        if ( v38 == -1 )
          break;
        v37 = netnode_altval(v35, v38, 65);
        if ( v37 <= 0 )
          v37 = -v37;
        v33 += v37;
      }
      if ( v33 )
      {
        v39 = netnode_supstr(v31, v55, v81, 1024, 83);
        if ( v39 > 0 )
        {
          memset(v68, 0, sizeof(v68));
          v42 = &v81[v39];
          v69 = 0;
          v70 = 0;
          v71 = 0;
          v80 = 0xFFFFFFFF00000000LL;
          v72 = -1;
          v73 = -1;
          v74 = -1;
          v75 = -1;
          v76 = -1;
          v77 = -1;
          v78 = -1;
          v79 = -1;
          result = sub_3480((unsigned __int64 *)v68, (__int64)v81, v33, (__int64)v81, v40, v41);
          if ( !(_DWORD)result )
            return result;
          BYTE3(v70) = 0;
          LOWORD(v70) = 515;
          LOBYTE(v80) = 1;
          add_segm_ex(v68, v81, 0, (unsigned int)dword_B270);
          v43 = *(_QWORD *)&v68[0];
          if ( v42 >= v83 )
          {
            if ( !under_debugger )
              interr(518);
            BUG();
          }
          v44 = v42 + 1;
          *v42 = 95;
          if ( v42 + 1 >= v83 )
          {
            v82 = 0;
            v44 = &v82;
          }
          v61 = v32;
          v45 = 0;
          v62 = v31;
          while ( 1 )
          {
            v48 = netnode_supnext(v35, v45, 65);
            v45 = v48;
            if ( v48 == -1 )
              break;
            if ( v48 > 0xFFFF )
            {
              netnode_supstr(v35, v48, v44, v83 - v44, 83);
              netnode_supdel(v35, v45, 83);
            }
            else
            {
              qsnprintf(v44, v83 - v44, "%llu", v48);
            }
            show_auto(v43, 0);
            LODWORD(v46) = netnode_altval(v35, v45, 65);
            netnode_supdel(v35, v45, 65);
            if ( (int)v46 < 0 )
            {
              v49 = v46;
              v46 = -(int)v46;
              v50 = ~v49;
              v47 = v50 + v43;
              v59 = v50;
              put_byte(v50 + v43, 203);
              create_data(v43, 0, v59, -1);
            }
            else
            {
              put_byte(v43, 203);
              if ( (_DWORD)v46 == 1 )
              {
                v47 = v43;
                v46 = 1;
                create_insn(v43, 0);
              }
              else
              {
                v46 = (int)v46;
                v47 = v43;
                create_data(v43, 0, (int)v46, -1);
              }
            }
            set_name(v47, v81, 7168);
            if ( v45 <= 0xFFFF )
            {
              set_import_ordinal(v35, v47, v45);
              make_name_auto(v47);
            }
            else
            {
              set_import_name(v35, v47, v44);
              v67 = ea2node(v47);
              netnode_supset(v35, v45, &v67, 8, 110);
            }
            v43 += v46;
          }
          v51 = dword_B294;
          *(v44 - 1) = 0;
          v52 = "os2";
          v32 = v61;
          v31 = v62;
          if ( !v51 )
            v52 = "win";
          import_module(v81, 0, v35, sub_2C20, v52);
        }
      }
    }
    while ( v55 < v32[15] );
  }
  return 1;
}
