__int64 __fastcall sub_2F280(_QWORD *a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned __int64 v11; // rdi
  int v12; // r14d
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  __int64 result; // rax
  __int64 flags; // rax
  unsigned __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rax
  char v21; // dl
  unsigned int v22; // eax
  int v23; // edx
  __int64 v24; // rax
  void *v25; // r14
  int v26; // ecx
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  bool v31; // zf
  __int64 v32; // [rsp+0h] [rbp-1C8h]
  __int64 v33; // [rsp+0h] [rbp-1C8h]
  __int64 v34; // [rsp+10h] [rbp-1B8h] BYREF
  char v35; // [rsp+18h] [rbp-1B0h]
  __int128 v36; // [rsp+20h] [rbp-1A8h] BYREF
  unsigned __int64 v37; // [rsp+30h] [rbp-198h]
  __int64 v38; // [rsp+38h] [rbp-190h]
  __int64 v39; // [rsp+40h] [rbp-188h]
  _BYTE v40[6]; // [rsp+48h] [rbp-180h] BYREF
  unsigned __int16 v41; // [rsp+4Eh] [rbp-17Ah]
  char v42; // [rsp+71h] [rbp-157h]
  unsigned __int16 v43; // [rsp+76h] [rbp-152h]
  char v44; // [rsp+99h] [rbp-12Fh]
  __int64 v45; // [rsp+A0h] [rbp-128h]
  unsigned __int64 v46; // [rsp+188h] [rbp-40h] BYREF

  v46 = __readfsqword(0x28u);
  v6 = (unsigned __int64 *)v40;
  v36 = -1;
  v38 = 0;
  v39 = 0;
  do
  {
    *(_WORD *)v6 = 0;
    v6 += 5;
    *((_WORD *)v6 - 19) = 0;
    *((_WORD *)v6 - 18) = 0;
    *((_DWORD *)v6 - 2) = 0;
    *((_WORD *)v6 - 17) = 0;
    *((_OWORD *)v6 - 2) = 0;
    *(v6 - 2) = 0;
  }
  while ( v6 != &v46 );
  v7 = a1[73];
  v37 = a2;
  if ( !v7 )
    goto LABEL_66;
  v8 = (__int64)(a1 + 72);
  do
  {
    while ( 1 )
    {
      v9 = *(_QWORD *)(v7 + 16);
      v10 = *(_QWORD *)(v7 + 24);
      if ( a3 > *(_DWORD *)(v7 + 32) )
        break;
      v8 = v7;
      v7 = *(_QWORD *)(v7 + 16);
      if ( !v9 )
        goto LABEL_8;
    }
    v7 = *(_QWORD *)(v7 + 24);
  }
  while ( v10 );
LABEL_8:
  if ( a1 + 72 == (_QWORD *)v8 )
  {
LABEL_66:
    v33 = (__int64)(a1 + 71);
    v30 = operator new(0x40u);
    v31 = a1[76] == 0;
    *(_DWORD *)(v30 + 32) = a3;
    v25 = (void *)v30;
    *(_DWORD *)(v30 + 56) = 0;
    *(_BYTE *)(v30 + 60) = 0;
    *(_OWORD *)(v30 + 40) = -1;
    if ( !v31 )
    {
      v27 = a1[75];
      v8 = 0;
      if ( a3 > *(_DWORD *)(v27 + 32) )
      {
LABEL_46:
        if ( v27 )
        {
LABEL_47:
          v8 = (__int64)v25;
          std::_Rb_tree_insert_and_rebalance();
          ++*(_QWORD *)(v33 + 40);
LABEL_48:
          v11 = v37;
          goto LABEL_10;
        }
LABEL_53:
        if ( v25 )
          operator delete(v25, 0x40u);
        goto LABEL_48;
      }
    }
    goto LABEL_68;
  }
  v11 = a2;
  if ( a3 < *(_DWORD *)(v8 + 32) )
  {
    v33 = (__int64)(a1 + 71);
    v24 = operator new(0x40u);
    *(_DWORD *)(v24 + 32) = a3;
    v25 = (void *)v24;
    *(_DWORD *)(v24 + 56) = 0;
    *(_BYTE *)(v24 + 60) = 0;
    *(_OWORD *)(v24 + 40) = -1;
    v26 = *(_DWORD *)(v8 + 32);
    if ( a3 >= v26 )
    {
      if ( a3 <= v26 )
        goto LABEL_53;
      if ( a1[75] != v8 )
      {
        v29 = std::_Rb_tree_increment();
        v27 = v29;
        if ( a3 >= *(_DWORD *)(v29 + 32) )
          goto LABEL_68;
        if ( *(_QWORD *)(v8 + 24) )
        {
          v8 = v29;
          goto LABEL_46;
        }
      }
      if ( v8 )
        goto LABEL_47;
      goto LABEL_53;
    }
    v27 = v8;
    if ( a1[74] == v8 )
      goto LABEL_46;
    v28 = std::_Rb_tree_decrement();
    v27 = v28;
    if ( a3 > *(_DWORD *)(v28 + 32) )
    {
      if ( *(_QWORD *)(v28 + 24) )
        v27 = v8;
      else
        v8 = 0;
      goto LABEL_46;
    }
LABEL_68:
    v8 = sub_225C0(v33, a3);
    goto LABEL_46;
  }
LABEL_10:
  v12 = 0;
  while ( 1 )
  {
    v13 = *(_QWORD *)(v8 + 40);
    if ( v11 >= v13 )
    {
      v14 = *(_QWORD *)(v8 + 48);
      if ( v11 < v14 )
        break;
    }
    flags = get_flags_ex(v11, 4);
    v17 = v37;
    if ( (flags & 0x1000) != 0 || (flags & 0x10000) == 0 )
      goto LABEL_26;
    if ( decode_prev_insn() == -1 )
    {
      v17 = v37;
LABEL_26:
      v21 = 0;
      result = 0;
LABEL_27:
      *(_QWORD *)(v8 + 48) = a2;
      *(_QWORD *)(v8 + 40) = v17 + 1;
      *(_DWORD *)(v8 + 56) = v12;
      *(_BYTE *)(v8 + 60) = v21;
      return result;
    }
    ++v12;
    if ( (_WORD)v38 == 23 )
    {
      v22 = v41;
      if ( v41 == a3 )
        goto LABEL_29;
    }
    else if ( (unsigned __int16)v38 <= 0x16u )
    {
      v18 = 4217024;
      if ( _bittest64(&v18, (unsigned __int16)v38) )
      {
        if ( v40[1] == 1 )
        {
          v22 = v41;
          if ( a3 == v41 && v44 == 5 && !v45 )
          {
LABEL_29:
            v17 = v37;
            if ( v42 != 1 )
              goto LABEL_26;
            v23 = v43;
            LOBYTE(v22) = v43 == 13;
            LOBYTE(v23) = v43 == 161;
            result = v23 | v22;
            v21 = result;
            goto LABEL_27;
          }
        }
      }
    }
    if ( (v39 & 0x40000) != 0 || (getinf(3) & 0x1006) == 0x1002 )
    {
      v35 = 1;
      if ( (unsigned int)(a3 - 129) > 0x1E )
      {
        v19 = 0x80000000LL;
        if ( (unsigned int)(a3 - 163) <= 0x1F )
          v19 = (1LL << ((unsigned __int8)a3 + 125)) | 0x80000000LL;
      }
      else
      {
        v19 = (1LL << ((unsigned __int8)a3 + 127)) | 0x80000000LL;
      }
      goto LABEL_25;
    }
    v35 = 0;
    if ( a3 > 15 )
    {
      if ( (unsigned int)(a3 - 45) <= 0x4F )
      {
        switch ( a3 )
        {
          case '5':
          case '6':
          case '7':
          case '8':
          case '9':
          case ':':
          case ';':
          case '<':
            v19 = (3LL << (2 * (unsigned __int8)a3 - 58)) | 0x2000;
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
            v19 = (3LL << (2 * ((unsigned __int8)a3 - 53))) | 0x2000;
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
            v19 = (1LL << ((unsigned __int8)a3 - 29)) | 0x2000;
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
            v19 = (1LL << ((unsigned __int8)a3 - 77)) | 0x2000;
            break;
          default:
            v19 = (15LL << (4 * (unsigned __int8)a3 + 92)) | 0x2000;
            break;
        }
        goto LABEL_25;
      }
LABEL_65:
      v19 = 0x2000;
      goto LABEL_25;
    }
    if ( a3 < 0 )
      goto LABEL_65;
    v19 = (1LL << a3) | 0x2000;
LABEL_25:
    v34 = v19;
    v32 = v19;
    v20 = sub_2B2B0(a1, &v36, &v34, 1);
    v17 = v37;
    v11 = v37;
    if ( (v20 & v32) != 0 )
      goto LABEL_26;
  }
  if ( v11 < a2 && (a2 - 1 < v13 || a2 - 1 >= v14) )
  {
    *(_DWORD *)(v8 + 56) += v12;
    *(_QWORD *)(v8 + 48) = a2;
  }
  return *(unsigned __int8 *)(v8 + 60);
}
