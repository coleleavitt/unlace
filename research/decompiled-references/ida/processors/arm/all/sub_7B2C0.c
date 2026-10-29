__int64 __fastcall sub_7B2C0(__int64 a1, __int64 a2, __int128 **a3)
{
  unsigned int v3; // ebx
  unsigned __int64 *v5; // rax
  __int64 v7; // r14
  bool v8; // si
  __int128 *v9; // rax
  __int128 *v10; // rdx
  __int128 *v11; // rdi
  unsigned int v12; // eax
  bool v13; // zf
  __int64 v14; // rsi
  unsigned __int16 v15; // cx
  __int64 v16; // rax
  char v17; // cl
  __int128 *v18; // rsi
  __int64 v19; // rdi
  __int64 v20; // rax
  bool v21; // dl
  bool v22; // r15
  __int64 v23; // r10
  unsigned __int64 v24; // r9
  unsigned __int64 v25; // rax
  __int64 v26; // r8
  unsigned int v27; // edx
  __int64 v28; // kr00_8
  __int64 v29; // rdx
  __int64 v30; // r15
  __int64 v31; // r8
  char v32; // cl
  char v34; // cl
  __int64 v35; // rax
  int v36; // ebp
  __int64 *func; // rax
  __int64 dtype_size; // [rsp+0h] [rbp-288h]
  int v40; // [rsp+Ch] [rbp-27Ch]
  __int64 v41; // [rsp+28h] [rbp-260h] BYREF
  __int64 v42; // [rsp+30h] [rbp-258h]
  __int64 v43; // [rsp+38h] [rbp-250h]
  __int64 v44; // [rsp+40h] [rbp-248h] BYREF
  bool v45; // [rsp+48h] [rbp-240h]
  __int128 v46; // [rsp+50h] [rbp-238h] BYREF
  __int64 v47; // [rsp+60h] [rbp-228h]
  __int128 v48; // [rsp+68h] [rbp-220h]
  __int64 v49; // [rsp+78h] [rbp-210h]
  __int128 v50; // [rsp+80h] [rbp-208h]
  __int128 v51; // [rsp+90h] [rbp-1F8h]
  __int64 v52; // [rsp+C0h] [rbp-1C8h]
  int v53; // [rsp+C8h] [rbp-1C0h]
  __int64 v54; // [rsp+D0h] [rbp-1B8h]
  char v55; // [rsp+D8h] [rbp-1B0h]
  __int128 v56; // [rsp+E0h] [rbp-1A8h] BYREF
  __int64 v57; // [rsp+F0h] [rbp-198h]
  __int64 v58; // [rsp+F8h] [rbp-190h]
  __int64 v59; // [rsp+100h] [rbp-188h]
  char v60; // [rsp+108h] [rbp-180h] BYREF
  unsigned __int16 v61; // [rsp+10Eh] [rbp-17Ah]
  char v62; // [rsp+130h] [rbp-158h] BYREF
  char v63; // [rsp+131h] [rbp-157h]
  unsigned __int16 v64; // [rsp+136h] [rbp-152h]
  char v65; // [rsp+159h] [rbp-12Fh]
  unsigned __int64 v66; // [rsp+248h] [rbp-40h] BYREF

  v5 = (unsigned __int64 *)&v60;
  v66 = __readfsqword(0x28u);
  v56 = -1;
  v57 = -1;
  v58 = 0;
  v59 = 0;
  do
  {
    v7 = 0;
    *(_WORD *)v5 = 0;
    v5 += 5;
    *((_WORD *)v5 - 19) = 0;
    *((_WORD *)v5 - 18) = 0;
    *((_DWORD *)v5 - 2) = 0;
    *((_WORD *)v5 - 17) = 0;
    *((_OWORD *)v5 - 2) = 0;
    *(v5 - 2) = 0;
  }
  while ( &v66 != v5 );
  if ( (int)decode_insn() <= 0
    || (v59 & 0xF) != 0xE && (unsigned __int8)sub_299D0((__int64)&v56, &v46, 1) && SBYTE1(v46) < 0 )
  {
    return (unsigned int)-1;
  }
  if ( sub_2CF00(a1, (__int64)&v56) )
    return (unsigned int)-2;
  v8 = 1;
  if ( (v59 & 0x40000) == 0 )
    v8 = (getinf(3) & 0x1006) == 4098;
  v9 = a3[1];
  v10 = *a3;
  v45 = v8;
  v44 = 0;
  v11 = &v10[5 * (_QWORD)v9];
  if ( v10 != v11 )
  {
    v12 = *((unsigned __int16 *)v10 + 4);
    v13 = !v8;
    v14 = 0;
    v15 = *((_WORD *)v10 + 4);
    if ( v13 )
    {
      while ( 1 )
      {
        if ( v12 <= 0xF )
          goto LABEL_18;
        while ( v12 - 45 > 0x4F )
        {
          while ( 1 )
          {
            v10 += 5;
            if ( v11 == v10 )
              goto LABEL_27;
            v12 = *((unsigned __int16 *)v10 + 4);
            v15 = *((_WORD *)v10 + 4);
            if ( v12 > 0xF )
              break;
LABEL_18:
            v16 = 1;
LABEL_15:
            v14 |= v16 << v15;
          }
        }
        switch ( v12 )
        {
          case '5':
          case '6':
          case '7':
          case '8':
          case '9':
          case ':':
          case ';':
          case '<':
            v34 = 2 * v15 - 58;
            goto LABEL_65;
          case '=':
          case '>':
          case '?':
          case '@':
          case 'A':
          case 'B':
          case 'C':
          case 'D':
          case 'E':
          case 'F':
          case 'G':
          case 'H':
          case 'I':
          case 'J':
          case 'K':
          case 'L':
            v34 = 2 * v15 - 106;
LABEL_65:
            v35 = 3;
            break;
          case 'M':
          case 'N':
          case 'O':
          case 'P':
          case 'Q':
          case 'R':
          case 'S':
          case 'T':
          case 'U':
          case 'V':
          case 'W':
          case 'X':
          case 'Y':
          case 'Z':
          case '[':
          case '\\':
            v34 = v15 - 29;
            v35 = 1;
            break;
          case ']':
          case '^':
          case '_':
          case '`':
          case 'a':
          case 'b':
          case 'c':
          case 'd':
          case 'e':
          case 'f':
          case 'g':
          case 'h':
          case 'i':
          case 'j':
          case 'k':
          case 'l':
          case 'm':
          case 'n':
          case 'o':
          case 'p':
          case 'q':
          case 'r':
          case 's':
          case 't':
          case 'u':
          case 'v':
          case 'w':
          case 'x':
          case 'y':
          case 'z':
          case '{':
          case '|':
            v34 = v15 - 77;
            v35 = 1;
            break;
          default:
            LOBYTE(v15) = 4 * v15 + 92;
            v16 = 15;
            goto LABEL_15;
        }
        v10 += 5;
        v14 |= v35 << v34;
        if ( v11 == v10 )
          goto LABEL_27;
        v15 = *((_WORD *)v10 + 4);
        v12 = v15;
      }
    }
    while ( 1 )
    {
      v17 = v12 + 127;
      if ( v12 - 129 <= 0x1E )
        goto LABEL_22;
      if ( v12 == 161 )
      {
        v10 += 5;
        v14 |= 0x80000000uLL;
        if ( v11 == v10 )
          goto LABEL_27;
      }
      else
      {
        if ( v12 - 163 <= 0x1F )
        {
          v17 = v12 + 125;
LABEL_22:
          v10 += 5;
          v14 |= 1LL << v17;
          if ( v11 == v10 )
            goto LABEL_27;
          goto LABEL_23;
        }
        v10 += 5;
        if ( v11 == v10 )
        {
LABEL_27:
          v44 = v14;
          break;
        }
      }
LABEL_23:
      v12 = *((unsigned __int16 *)v10 + 4);
    }
  }
  v18 = &v56;
  v19 = a1;
  v20 = sub_2BE50(a1, (__int64)&v56, &v44, 1u);
  v22 = v21;
  v23 = v20;
  v44 = v20;
  v45 = v21;
  if ( !v20 )
    return (unsigned int)-1;
  v24 = (unsigned __int64)a3[1];
  if ( v24 )
  {
    v18 = *a3;
    v3 = 0;
    v25 = 0;
    v7 = 1;
    goto LABEL_31;
  }
  do
  {
    while ( 1 )
    {
      while ( 1 )
      {
LABEL_38:
        if ( under_debugger )
          BUG();
        v19 = 10514;
        v25 = interr(10514);
LABEL_40:
        if ( v27 == 161 )
        {
          v29 = 0x80000000LL;
          goto LABEL_36;
        }
        if ( v27 - 163 <= 0x1F )
          break;
        v25 = (int)++v3;
        if ( (int)v3 < v24 )
        {
          v26 = 4LL * (int)v3;
          v27 = WORD4(v18[5 * (int)v3]);
          goto LABEL_44;
        }
      }
      v29 = 1LL << ((unsigned __int8)v27 + 125);
LABEL_36:
      if ( (v29 & v23) != 0 )
        break;
      while ( 1 )
      {
        v25 = (int)++v3;
        if ( (int)v3 >= v24 )
          break;
LABEL_31:
        v26 = 4 * v25;
        v27 = WORD4(v18[5 * v25]);
        if ( !v22 )
        {
          while ( 1 )
          {
            if ( v27 <= 0xF )
            {
              v19 = 1LL << v27;
              v29 = 1LL << v27;
              goto LABEL_36;
            }
            if ( v27 - 45 <= 0x4F )
              break;
            v25 = (int)++v3;
            if ( (int)v3 >= v24 )
              goto LABEL_38;
            v26 = 4LL * (int)v3;
            v27 = WORD4(v18[5 * (int)v3]);
          }
          v28 = v19;
          v19 = v27 - 53;
          switch ( v27 )
          {
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
            case ':':
            case ';':
            case '<':
              v29 = 3LL << (2 * (unsigned __int8)v27 - 58);
              break;
            case '=':
            case '>':
            case '?':
            case '@':
            case 'A':
            case 'B':
            case 'C':
            case 'D':
            case 'E':
            case 'F':
            case 'G':
            case 'H':
            case 'I':
            case 'J':
            case 'K':
            case 'L':
              v29 = 3LL << (2 * ((unsigned __int8)v27 - 53));
              break;
            case 'M':
            case 'N':
            case 'O':
            case 'P':
            case 'Q':
            case 'R':
            case 'S':
            case 'T':
            case 'U':
            case 'V':
            case 'W':
            case 'X':
            case 'Y':
            case 'Z':
            case '[':
            case '\\':
              v29 = 1LL << ((unsigned __int8)v27 - 29);
              break;
            case ']':
            case '^':
            case '_':
            case '`':
            case 'a':
            case 'b':
            case 'c':
            case 'd':
            case 'e':
            case 'f':
            case 'g':
            case 'h':
            case 'i':
            case 'j':
            case 'k':
            case 'l':
            case 'm':
            case 'n':
            case 'o':
            case 'p':
            case 'q':
            case 'r':
            case 's':
            case 't':
            case 'u':
            case 'v':
            case 'w':
            case 'x':
            case 'y':
            case 'z':
            case '{':
            case '|':
              v29 = 1LL << ((unsigned __int8)v27 - 77);
              break;
            default:
              v19 = v28;
              v29 = 15LL << (4 * (unsigned __int8)v27 + 92);
              break;
          }
          goto LABEL_36;
        }
LABEL_44:
        if ( v27 - 129 > 0x1E )
          goto LABEL_40;
        if ( ((v7 << ((unsigned __int8)v27 + 127)) & v23) != 0 )
          goto LABEL_46;
      }
    }
LABEL_46:
    ;
  }
  while ( v25 >= v24 );
  v41 = 0;
  v30 = v25 + v26;
  v40 = DWORD2(v18[v30]);
  copy_tinfo_t();
  v31 = *(_QWORD *)&(*a3)[v30 + 1];
  v42 = v31;
  if ( (_WORD)v58 == 14 )
    goto LABEL_71;
  if ( (unsigned __int16)v58 <= 0xEu )
  {
    if ( (_WORD)v58 == 11 )
    {
      if ( v61 == (unsigned __int16)v40 && v63 == 1 && v61 == v64 )
        goto LABEL_53;
    }
    else if ( (_WORD)v58 == 12 )
    {
LABEL_71:
      if ( v63 == 1 )
      {
        v36 = v64;
        if ( v64 == 13 || v64 == 161 || (func = (__int64 *)get_func(a2), sub_301E0(a1, func, v36)) )
        {
          if ( v65 && (unsigned __int8)remove_tinfo_pointer() )
            apply_tinfo_to_stkarg();
        }
      }
      goto LABEL_53;
    }
LABEL_52:
    v3 |= 0x80000000;
    goto LABEL_53;
  }
  v32 = v58 - 22;
  if ( (unsigned __int16)(v58 - 22) > 0x3Bu )
    goto LABEL_52;
  if ( ((1LL << v32) & 0xC0000000040010ALL) != 0 )
  {
    if ( (_WORD)v58 == 30 )
    {
      get_tinfo_property();
      if ( v63 == 2 )
      {
        dtype_size = get_dtype_size();
        if ( v3 )
        {
          if ( (get_tinfo_property() & 0x2F) == 0xD )
          {
            copy_tinfo_t();
            v54 = 0;
            v47 = 0;
            v49 = 0;
            v52 = 1;
            v53 = -1;
            v55 = 0;
            v46 = (unsigned __int64)(8 * dtype_size);
            v48 = 0;
            v50 = 0;
            v51 = 0;
            if ( (unsigned int)find_tinfo_udt_member() != -1 && 8 * dtype_size == (_QWORD)v46 )
            {
              copy_tinfo_t();
              remove_tinfo_pointer();
            }
            else
            {
              v43 = 0;
              copy_tinfo_t();
              clear_tinfo_t();
            }
            clear_tinfo_t();
            if ( v49 )
            {
              *(_QWORD *)&v50 = 0;
              qfree(v49);
            }
            if ( v47 )
            {
              *(_QWORD *)&v48 = 0;
              qfree(v47);
            }
          }
        }
      }
      v31 = v42;
    }
    sub_7B240(a1, &v56, (__int64)&v62, &v41, v31, 0);
  }
  else if ( ((1LL << v32) & 1) == 0 )
  {
    goto LABEL_52;
  }
LABEL_53:
  clear_tinfo_t();
  return v3;
}
