__int64 __fastcall sub_5AD00(
        __int64 a1,
        __int64 *a2,
        int a3,
        __int64 a4,
        const __m128i *a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        char a12,
        int a13,
        int a14,
        int a15,
        int a16,
        __int64 a17)
{
  __int64 v20; // r12
  int v21; // ebx
  __int64 v22; // rsi
  int v23; // edi
  char v24; // cl
  __int64 result; // rax
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  char v29; // cl
  __int64 v30; // rax
  __int64 v31; // rsi
  __int64 v32; // rdx
  __m128i v33; // xmm0
  __m128i *v34; // rsi
  __int64 v35; // rax
  int v36; // edx
  int v37; // ecx
  int v38; // r8d
  int v39; // r9d

  v20 = *a2;
  v21 = a3;
  *a2 += a4;
  v22 = *(_QWORD *)(a1 + 152);
  v23 = *(unsigned __int8 *)(a1 + 160);
  if ( (_BYTE)v23 )
  {
    v24 = a3 + 127;
    if ( (unsigned int)(a3 - 129) > 0x1E )
    {
      if ( a3 == 161 )
      {
        result = 0x80000000LL;
      }
      else
      {
        if ( (unsigned int)(a3 - 163) > 0x1F )
          goto LABEL_5;
        result = 1LL << ((unsigned __int8)a3 + 125);
      }
    }
    else
    {
LABEL_3:
      result = 1LL << v24;
    }
  }
  else if ( a3 <= 15 )
  {
    result = 1LL << a3;
    if ( a3 < 0 )
      goto LABEL_5;
  }
  else
  {
    if ( (unsigned int)(a3 - 45) > 0x4F )
      goto LABEL_5;
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
        result = 3LL << (2 * (unsigned __int8)a3 - 58);
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
        result = 3LL << (2 * ((unsigned __int8)a3 - 53));
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
        v24 = a3 - 29;
        goto LABEL_3;
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
        result = 1LL << ((unsigned __int8)a3 - 77);
        break;
      default:
        result = 15LL << (4 * (unsigned __int8)a3 + 92);
        break;
    }
  }
  if ( (result & v22) == 0 )
  {
LABEL_5:
    v26 = *(_QWORD *)(a1 + 136);
    result = *(_QWORD *)(a1 + 128);
    v27 = result + 16 * v26;
    if ( result == v27 )
      goto LABEL_13;
    while ( 1 )
    {
      v28 = result;
      if ( v21 == *(_DWORD *)result )
        break;
      result += 16;
      if ( v27 == result )
        goto LABEL_13;
    }
    if ( !result )
      goto LABEL_13;
    goto LABEL_10;
  }
  *(_DWORD *)(a1 + 168) = a3;
  v28 = a1 + 168;
LABEL_10:
  v21 = *(_DWORD *)(v28 + 4);
  if ( v21 == -1 || v21 == 13 && *(_QWORD *)(v28 + 8) )
    return result;
  v26 = *(_QWORD *)(a1 + 136);
LABEL_13:
  if ( !v26 || (result = *(_QWORD *)(a1 + 128), *(_DWORD *)result != 13) || *(_DWORD *)(result + 4) != 13 )
  {
    sub_59630();
    return sub_5B100(v23, v22, v36, v37, v38, v39, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17);
  }
  if ( v20 >= *(_QWORD *)(result + 8) && v20 < 0 )
  {
    if ( v21 == 7 || *(_DWORD *)(*(_QWORD *)a1 + 212LL) && v21 == 11 )
    {
      if ( !*(_DWORD *)(a1 + 204) )
        *(_DWORD *)(a1 + 204) = 1;
      if ( (_BYTE)v23 )
        goto LABEL_26;
    }
    else
    {
      if ( v21 == 13 )
      {
LABEL_27:
        v30 = *(_QWORD *)(a1 + 24);
        v31 = *(_QWORD *)(a1 + 16);
        v32 = v30 + 1;
        if ( *(_QWORD *)(a1 + 32) < (unsigned __int64)(v30 + 1) )
        {
          v35 = qvector_reserve();
          *(_QWORD *)(a1 + 16) = v35;
          v31 = v35;
          v30 = *(_QWORD *)(a1 + 24);
          v32 = v30 + 1;
        }
        result = 32 * v30;
        *(_QWORD *)(a1 + 24) = v32;
        v33 = _mm_loadl_epi64(a5 + 1);
        v34 = (__m128i *)(result + v31);
        v34[1].m128i_i64[0] = a4;
        v34[1].m128i_i32[2] = v21;
        *v34 = _mm_unpacklo_epi64(v33, (__m128i)(unsigned __int64)(-v20 - a4));
        return result;
      }
      if ( (_BYTE)v23 )
      {
        v29 = v21 + 127;
        if ( (unsigned int)(v21 - 129) > 0x1E )
        {
          if ( v21 == 161 )
          {
            v22 |= 0x80000000uLL;
            goto LABEL_26;
          }
          if ( (unsigned int)(v21 - 163) > 0x1F )
            goto LABEL_26;
          v29 = v21 + 125;
        }
        *(_QWORD *)(a1 + 152) = (1LL << v29) | v22;
        goto LABEL_27;
      }
      if ( v21 > 15 )
      {
        if ( (unsigned int)(v21 - 45) <= 0x4F )
        {
          switch ( v21 )
          {
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
            case ':':
            case ';':
            case '<':
              v22 |= 3LL << (2 * (unsigned __int8)v21 - 58);
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
              v22 |= 3LL << (2 * ((unsigned __int8)v21 - 53));
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
              v22 |= 1LL << ((unsigned __int8)v21 - 29);
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
              v22 |= 1LL << ((unsigned __int8)v21 - 77);
              break;
            default:
              v22 |= 15LL << (4 * (unsigned __int8)v21 + 92);
              break;
          }
        }
        goto LABEL_26;
      }
      if ( v21 < 0 )
      {
LABEL_26:
        *(_QWORD *)(a1 + 152) = v22;
        goto LABEL_27;
      }
    }
    v22 |= 1LL << v21;
    goto LABEL_26;
  }
  return result;
}

