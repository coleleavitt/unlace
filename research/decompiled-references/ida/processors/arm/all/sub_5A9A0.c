__int64 __fastcall sub_5A9A0(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rdx
  __int64 v8; // rax
  char v9; // cl
  __int64 v10; // rbp
  __int64 v11; // rcx
  unsigned int v12; // ecx
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // r8
  __int64 *v18; // rsi
  __int64 *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // r15
  const __m128i *v22; // rdi
  __int64 v23; // rbp
  __int64 v24; // rax
  __int64 v25; // rdx
  __m128i v26; // xmm0
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rdx

  v7 = *(_QWORD *)(a1 + 136);
  if ( a2 != 13 )
  {
    v8 = *(_QWORD *)(a1 + 128);
    if ( !*(_BYTE *)(a1 + 160) )
    {
      if ( a2 > 15 )
      {
        if ( (unsigned int)(a2 - 45) <= 0x4F )
        {
          switch ( a2 )
          {
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
            case ':':
            case ';':
            case '<':
              v10 = ~(3LL << (2 * (unsigned __int8)a2 - 58));
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
              v10 = ~(3LL << (2 * ((unsigned __int8)a2 - 53)));
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
              v10 = __ROL8__(-2, (unsigned __int8)a2 - 29);
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
              v10 = __ROL8__(-2, (unsigned __int8)a2 - 77);
              break;
            default:
              v10 = ~(15LL << (4 * (unsigned __int8)a2 + 92));
              break;
          }
          goto LABEL_8;
        }
        goto LABEL_48;
      }
      if ( a2 < 0 )
      {
LABEL_48:
        v10 = -1;
        goto LABEL_8;
      }
      goto LABEL_23;
    }
    v9 = a2 + 127;
    if ( (unsigned int)(a2 - 129) > 0x1E )
    {
      v10 = 0xFFFFFFFF7FFFFFFFLL;
      if ( a2 == 161 )
        goto LABEL_8;
      if ( (unsigned int)(a2 - 163) > 0x1F )
        goto LABEL_48;
      v9 = a2 + 125;
    }
    v10 = __ROL8__(-2, v9);
LABEL_8:
    *(_QWORD *)(a1 + 152) &= v10;
    v11 = v8 + 16 * v7;
    if ( v11 == v8 )
    {
LABEL_15:
      v14 = *(_QWORD *)(a1 + 144);
      v15 = v7 + 1;
      if ( v14 < v15 )
      {
        v20 = qvector_reserve(a1 + 128, 0, v15, 16);
        v21 = *(_QWORD *)(a1 + 144);
        v22 = *(const __m128i **)(a1 + 128);
        *(_QWORD *)(a1 + 144) = v14;
        v23 = v20;
        v24 = *(_QWORD *)(a1 + 136) - 1LL;
        if ( v24 >= 0 )
        {
          v25 = v23;
          do
          {
            v26 = _mm_loadu_si128(v22);
            v25 += 16;
            ++v22;
            *(__m128i *)(v25 - 16) = v26;
          }
          while ( v24-- != 0 );
          v22 = *(const __m128i **)(a1 + 128);
        }
        qfree((__int64)v22);
        v28 = *(_QWORD *)(a1 + 136);
        *(_QWORD *)(a1 + 128) = v23;
        *(_QWORD *)(a1 + 144) = v21;
        v11 = v23 + 16 * v28;
      }
      *(_DWORD *)v11 = a2;
      *(_DWORD *)(v11 + 4) = 13;
      *(_QWORD *)(v11 + 8) = a3;
      ++*(_QWORD *)(a1 + 136);
    }
    else
    {
      while ( a2 != *(_DWORD *)v8 )
      {
        v8 += 16;
        if ( v11 == v8 )
          goto LABEL_15;
      }
      *(_DWORD *)(v8 + 4) = 13;
      *(_QWORD *)(v8 + 8) = a3;
    }
    return 1;
  }
  if ( v7 )
  {
    v8 = *(_QWORD *)(a1 + 128);
    if ( *(_DWORD *)v8 == 13 && *(_DWORD *)(v8 + 4) == 13 )
    {
      v10 = a4;
      v12 = 0;
      if ( a3 > *(_QWORD *)(v8 + 8) )
        return v12;
      if ( v10 != -1 )
      {
        v16 = *(_QWORD *)(a1 + 56);
        v17 = *(_QWORD *)(a1 + 64);
        v18 = (__int64 *)(v16 + 8 * v17);
        if ( (__int64 *)v16 == v18 )
          goto LABEL_43;
        v19 = (__int64 *)v16;
        while ( *v19 != v10 )
        {
          if ( v18 == ++v19 )
            goto LABEL_43;
        }
        if ( v18 == v19 )
        {
LABEL_43:
          if ( *(_QWORD *)(a1 + 72) < (unsigned __int64)(v17 + 1) )
          {
            v29 = qvector_reserve(a1 + 56, v16, v17 + 1, 8);
            v30 = *(_QWORD *)(a1 + 64);
            *(_QWORD *)(a1 + 56) = v29;
            v18 = (__int64 *)(v29 + 8 * v30);
          }
          *v18 = v10;
          v10 = -1;
          v8 = *(_QWORD *)(a1 + 128);
          ++*(_QWORD *)(a1 + 64);
          v7 = *(_QWORD *)(a1 + 136);
          if ( *(_BYTE *)(a1 + 160) )
            goto LABEL_8;
          goto LABEL_23;
        }
        v10 = -1;
      }
      if ( *(_BYTE *)(a1 + 160) )
        goto LABEL_8;
LABEL_23:
      v10 = __ROL8__(-2, a2);
      goto LABEL_8;
    }
  }
  sub_59630();
  return sub_5AD00();
}
