__int64 __fastcall sub_5CC00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v9; // r11
  __m128i *v10; // rdi
  __int64 v11; // rbx
  __m128i *v12; // r14
  __int64 v13; // r15
  unsigned __int64 v14; // rdx
  __m128i *v15; // rbx
  const __m128i *v16; // rdi
  __int64 v17; // r8
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // esi
  __int64 v23; // kr00_8
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rbx
  __int64 v27; // rbx
  int v28; // esi
  __int64 v29; // r11
  int v30; // eax
  __int64 v31; // rdx
  int v32; // r9d
  __int64 v33; // rcx

  if ( !*(_QWORD *)(a1 + 136) || (v6 = *(_QWORD *)(a1 + 128), *(_DWORD *)v6 != 13) || *(_DWORD *)(v6 + 4) != 13 )
  {
    if ( under_debugger )
      BUG();
    interr(10512);
    return sub_5D380();
  }
  if ( *(__int64 *)(v6 + 8) >= 0 )
    return 1;
  v9 = *(_QWORD *)(a1 + 24);
  v10 = *(__m128i **)(a1 + 16);
  v11 = 2LL * *(_QWORD *)(a1 + 24);
  v12 = &v10[v11];
  if ( &v10[v11] == v10 )
  {
LABEL_96:
    *(_QWORD *)(a1 + 24) = v9;
    v26 = 0;
    goto LABEL_64;
  }
  v13 = (__int64)sub_595D0;
  if ( !((v11 * 16) >> 5) )
  {
    sub_5C940(v10, &v10[v11], -2, (__int64 (__fastcall *)(__int64, __int64))sub_595D0, a5, a6);
    goto LABEL_27;
  }
  _BitScanReverse64(&v14, (v11 * 16) >> 5);
  sub_5C940(v10, &v10[v11], 2LL * (int)v14, (__int64 (__fastcall *)(__int64, __int64))sub_595D0, a5, a6);
  if ( v11 <= 32 )
  {
LABEL_27:
    sub_5C520(v10, v12, (__int64 (__fastcall *)(__m128i *, const __m128i *))sub_595D0);
    goto LABEL_11;
  }
  v15 = v10 + 32;
  sub_5C520(v10, v10 + 32, (__int64 (__fastcall *)(__m128i *, const __m128i *))sub_595D0);
  do
  {
    v16 = v15;
    v15 += 2;
    sub_5C490(v16, (__int64 (__fastcall *)(__m128i *, const __m128i *))sub_595D0);
  }
  while ( v12 != v15 );
LABEL_11:
  v9 = *(_QWORD *)(a1 + 24);
  v17 = *(_QWORD *)(a1 + 16);
  v18 = v17 + 32 * v9;
  if ( v17 == v18 )
    goto LABEL_96;
  v19 = *(_QWORD *)(a1 + 16);
  v20 = 0;
  while ( 1 )
  {
    v22 = *(_DWORD *)(v19 + 24);
    if ( byte_AA668 )
    {
      if ( (unsigned int)(v22 - 129) > 0x1E )
      {
        if ( v22 == 161 )
        {
          v21 = 0x80000000LL;
        }
        else
        {
          if ( (unsigned int)(v22 - 163) > 0x1F )
            break;
          v13 = 1LL << ((unsigned __int8)v22 + 125);
          v21 = v13;
        }
      }
      else
      {
        v21 = 1LL << ((unsigned __int8)v22 + 127);
      }
    }
    else if ( v22 <= 15 )
    {
      if ( v22 < 0 )
        break;
      v13 = 1LL << v22;
      v21 = 1LL << v22;
    }
    else
    {
      if ( (unsigned int)(v22 - 45) > 0x4F )
        break;
      v23 = v13;
      v13 = (unsigned int)(v22 - 53);
      switch ( v22 )
      {
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
        case ':':
        case ';':
        case '<':
          v21 = 3LL << (2 * (unsigned __int8)v22 - 58);
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
          v21 = 3LL << (2 * ((unsigned __int8)v22 - 53));
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
          v13 = 1LL << ((unsigned __int8)v22 - 29);
          v21 = v13;
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
          v13 = 1LL << ((unsigned __int8)v22 - 77);
          v21 = v13;
          break;
        default:
          v13 = v23;
          v21 = 15LL << (4 * (unsigned __int8)v22 + 92);
          break;
      }
    }
    if ( (v21 & qword_AA660) == 0 || *(_QWORD *)(v19 + 8) != v20 )
      break;
    v20 += *(_QWORD *)(v19 + 16);
    v19 += 32;
    if ( v19 == v18 )
      goto LABEL_77;
  }
  if ( v19 == v18 )
  {
LABEL_77:
    v26 = v20;
    *(_QWORD *)(a1 + 24) = v9;
    goto LABEL_63;
  }
  if ( *(_QWORD *)(v19 + 8) != v20 + 4 )
    goto LABEL_43;
  v32 = *(_DWORD *)(v19 + 24);
  if ( byte_AA678 )
  {
    if ( (unsigned int)(v32 - 129) > 0x1E )
    {
      if ( v32 == 161 )
      {
        v33 = 0x80000000LL;
      }
      else
      {
        if ( (unsigned int)(v32 - 163) > 0x1F )
          goto LABEL_43;
        v33 = 1LL << ((unsigned __int8)v32 + 125);
      }
    }
    else
    {
      v33 = 1LL << ((unsigned __int8)v32 + 127);
    }
  }
  else if ( v32 <= 15 )
  {
    v33 = 1LL << v32;
    if ( v32 < 0 )
      goto LABEL_43;
  }
  else
  {
    if ( (unsigned int)(v32 - 45) > 0x4F )
      goto LABEL_43;
    switch ( v32 )
    {
      case '5':
      case '6':
      case '7':
      case '8':
      case '9':
      case ':':
      case ';':
      case '<':
        v33 = 3LL << (2 * (unsigned __int8)v32 - 58);
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
        v33 = 3LL << (2 * ((unsigned __int8)v32 - 53));
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
        v33 = 1LL << ((unsigned __int8)v32 - 29);
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
        v33 = 1LL << ((unsigned __int8)v32 - 77);
        break;
      default:
        v33 = 15LL << (4 * (unsigned __int8)v32 + 92);
        break;
    }
  }
  if ( (v33 & qword_AA670) != 0 )
    v20 = *(_QWORD *)(v19 + 8);
  while ( 1 )
  {
LABEL_43:
    v28 = *(_DWORD *)(v19 + 24);
    if ( byte_AA678 )
    {
      if ( (unsigned int)(v28 - 129) > 0x1E )
      {
        if ( v28 == 161 )
        {
          v24 = 0x80000000LL;
        }
        else
        {
          if ( (unsigned int)(v28 - 163) > 0x1F )
            break;
          v24 = 1LL << ((unsigned __int8)v28 + 125);
        }
      }
      else
      {
        v24 = 1LL << ((unsigned __int8)v28 + 127);
      }
      goto LABEL_39;
    }
    if ( v28 > 15 )
    {
      if ( (unsigned int)(v28 - 45) > 0x4F )
        break;
      switch ( v28 )
      {
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
        case ':':
        case ';':
        case '<':
          v24 = 3LL << (2 * (unsigned __int8)v28 - 58);
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
          v24 = 3LL << (2 * ((unsigned __int8)v28 - 53));
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
          v24 = 1LL << ((unsigned __int8)v28 - 29);
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
          v24 = 1LL << ((unsigned __int8)v28 - 77);
          break;
        default:
          v24 = 15LL << (4 * (unsigned __int8)v28 + 92);
          break;
      }
      goto LABEL_39;
    }
    if ( v28 < 0 )
      break;
    v24 = 1LL << v28;
LABEL_39:
    if ( (v24 & qword_AA670) == 0 )
      break;
    v25 = *(_QWORD *)(v19 + 8);
    if ( v25 == v20 + 4
      && ((unsigned int)(v28 - 45) <= 0x4F || (unsigned int)(v28 - 163) <= 0x1F)
      && *(_QWORD *)(v19 + 16) == 8 )
    {
      v26 = v25 + 8;
      v19 += 32;
      v20 = v25 + 8;
      if ( v19 == v18 )
        goto LABEL_55;
    }
    else
    {
      v26 = v20;
      if ( v25 != v20 )
        goto LABEL_60;
      v27 = *(_QWORD *)(v19 + 16);
      v19 += 32;
      v26 = v25 + v27;
      v20 = v26;
      if ( v19 == v18 )
        goto LABEL_55;
    }
  }
  v26 = v20;
LABEL_60:
  if ( v19 == v18 )
  {
LABEL_55:
    *(_QWORD *)(a1 + 24) = v9;
    goto LABEL_63;
  }
  if ( *(_DWORD *)(v19 + 24) == -2 && *(_QWORD *)(v19 + 8) == v20 )
  {
    v31 = *(_QWORD *)(v19 + 16) + v20;
    v19 += 32;
    v26 = v31;
  }
  v29 = v9 - ((v18 - v19) >> 5);
  *(_QWORD *)(a1 + 24) = v29;
  v18 = v17 + 32 * v29;
  if ( v17 != v18 )
  {
LABEL_63:
    v30 = *(_DWORD *)(v17 + 24);
    if ( v30 == 3 )
    {
      while ( 1 )
      {
        v17 += 32;
        if ( v18 == v17 || *(_DWORD *)(v17 + 24) != v30 - 1 )
          break;
        --v30;
      }
      *(_DWORD *)(a1 + 40) |= (2 * (_BYTE)v30) & 6 | 1;
    }
  }
LABEL_64:
  *(_QWORD *)(a1 + 48) = v26;
  if ( !(unsigned __int8)set_frame_size() )
    return 0;
  if ( *(_DWORD *)(a1 + 200) == -1 )
    return 1;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) |= 0x10uLL;
  sub_30140();
  if ( (unsigned __int8)update_func() )
    return update_fpd();
  return 0;
}
