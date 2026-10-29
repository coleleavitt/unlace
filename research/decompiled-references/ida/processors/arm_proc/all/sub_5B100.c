__int64 __fastcall sub_5B100(_QWORD *a1, const __m128i *a2)
{
  __int64 v2; // r14
  int v3; // r15d
  const __m128i *v5; // rbx
  int v6; // eax
  __int64 v7; // r9
  int v8; // r12d
  __int16 v9; // ax
  int v10; // r13d
  int v11; // esi
  __int64 v12; // rdx
  char v13; // r11
  __int64 v14; // r10
  char v15; // cl
  __int64 v16; // rax
  __int64 v17; // r9
  __int64 v18; // rdi
  __int64 v19; // r8
  _DWORD *v20; // rax
  _QWORD *v21; // rcx
  int v22; // eax
  char v23; // cl
  __int64 v24; // rax
  __int64 result; // rax
  const __m128i *v26; // rdi
  const __m128i *v27; // r9
  char v28; // r8
  __int64 v29; // r10
  char v30; // cl
  __int64 v31; // rdx
  _DWORD *v32; // rdx
  _DWORD *v33; // rcx
  _QWORD *v34; // rsi
  __int64 v35; // rax
  int v36; // esi
  const __m128i *v37; // r15
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // r8
  int v41; // r14d
  _DWORD *v42; // rax
  _DWORD *v43; // rdx
  _QWORD *v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // r13
  int v47; // r12d
  int v48; // edx
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // r9
  const __m128i *v52; // rdx
  __int64 v53; // rcx
  const __m128i *v54; // rdx
  unsigned __int32 v55; // esi
  unsigned int v56; // edx
  __int8 v57; // dl
  const __m128i *v58; // rcx
  bool v59; // zf
  int v60; // eax
  char v61; // cl
  unsigned __int16 v62; // dx
  int v63; // esi
  char v64; // cl
  __int64 v65; // rax
  _DWORD *v66; // rax
  _DWORD *v67; // rdx
  _QWORD *v68; // rcx
  __int64 v69; // r9
  __int16 v70; // ax
  __int64 v71; // rax
  __int64 v72; // rax
  _QWORD *v73; // rax
  __m128i v74; // xmm0
  unsigned int v75; // ebx
  unsigned __int64 i; // r15
  int v77; // eax
  char v78; // cl
  unsigned __int64 v79; // r13
  __int64 v80; // rax
  const __m128i *v81; // rdi
  __int64 v82; // rdx
  __int64 v83; // r14
  __int64 v84; // rax
  const __m128i *v85; // rsi
  __int64 v86; // rcx
  __int64 v87; // rdx
  __m128i v88; // xmm0
  __int64 v90; // rsi
  __int64 v91; // rcx
  const __m128i **v92; // rdx
  const __m128i **v93; // rax
  __int64 v94; // rax
  int v95; // [rsp+0h] [rbp-98h]
  int v96; // [rsp+0h] [rbp-98h]
  int v97; // [rsp+8h] [rbp-90h]
  __int64 v98; // [rsp+8h] [rbp-90h]
  int v99; // [rsp+8h] [rbp-90h]
  __int64 v100; // [rsp+8h] [rbp-90h]
  unsigned __int64 v101; // [rsp+10h] [rbp-88h]
  int v102; // [rsp+10h] [rbp-88h]
  __int64 v103; // [rsp+18h] [rbp-80h]
  int v104; // [rsp+18h] [rbp-80h]
  int v105; // [rsp+20h] [rbp-78h]
  int v106; // [rsp+20h] [rbp-78h]
  int v107; // [rsp+24h] [rbp-74h] BYREF
  __int64 v108; // [rsp+28h] [rbp-70h] BYREF
  __int128 v109; // [rsp+30h] [rbp-68h] BYREF
  __m128i v110; // [rsp+40h] [rbp-58h]
  __int64 v111; // [rsp+50h] [rbp-48h]
  unsigned __int64 v112; // [rsp+58h] [rbp-40h]

  v112 = __readfsqword(0x28u);
  v5 = a2;
  LOBYTE(v6) = sub_32D40((__int64)a2);
  v8 = v6;
  v9 = a2[1].m128i_i16[4];
  if ( (_BYTE)v8 )
  {
    if ( v9 != 4 || (unsigned int)sub_24FC0() != 2 )
      return 1;
    if ( a1[17] )
    {
      v49 = a1[16];
      if ( *(_DWORD *)v49 == 13 && *(_DWORD *)(v49 + 4) == 13 )
      {
        v50 = a2[1].m128i_i64[0];
        v108 = *(_QWORD *)(v49 + 8) - 4LL;
        sub_5A9A0((__int64)a1, 13, v108, v50);
        sub_5AD00(
          (__int64)a1,
          &v108,
          -2,
          4,
          a2,
          v51,
          v95,
          v97,
          v101,
          v103,
          v105,
          v108,
          v109,
          SDWORD2(v109),
          v110.m128i_i32[0],
          v110.m128i_i32[2],
          v111);
        return 0;
      }
    }
    if ( under_debugger )
LABEL_298:
      BUG();
    interr();
    goto LABEL_297;
  }
  v10 = a2[2].m128i_u16[7];
  v11 = v10;
  v3 = v5[2].m128i_u16[7];
  if ( (unsigned __int16)v9 > 0x47u )
  {
    if ( v9 == 273 )
    {
      if ( v5[7].m128i_i8[9] )
      {
        v52 = v5 + 5;
        v27 = (const __m128i *)((char *)v5 + 120);
      }
      else
      {
        v52 = (const __m128i *)((char *)v5 + 40);
        v27 = v5 + 5;
      }
      if ( v52->m128i_i8[1] != 5 )
        return 2;
      if ( v52[2].m128i_i8[9] != 5 )
        return 2;
      if ( v52->m128i_i64[1] )
        return 2;
      v53 = v52[3].m128i_i64[0];
      if ( (unsigned __int64)(v53 - 3) > 3 )
        return 2;
      v26 = (const __m128i *)((char *)v5 + 40);
      v108 = (1LL << v53) - 1;
      goto LABEL_56;
    }
    if ( (unsigned __int16)v9 <= 0x111u )
    {
      v62 = v9 - 139;
      result = 2;
      if ( v62 > 2u )
        return result;
    }
    else if ( v9 != 416 )
    {
      if ( v9 != 872 )
      {
        if ( v9 != 371 )
          return 2;
        goto LABEL_81;
      }
      v55 = v5[1].m128i_u32[3];
      v56 = v55 & 0x80;
      goto LABEL_123;
    }
    v55 = v5[1].m128i_u32[3];
    v56 = v55 & 0x80;
LABEL_144:
    LOBYTE(v8) = (v56 >> 7) ^ 1;
    if ( ((v55 & 0x10) != 0) != (_BYTE)v8 )
      return 2;
    v37 = v5 + 5;
    v40 = 0;
    v41 = -1;
    LODWORD(v98) = -1;
    v36 = (v55 >> 6) & 1;
    goto LABEL_132;
  }
  if ( (unsigned __int16)v9 <= 0xBu )
    return 2;
  if ( ((1LL << ((unsigned __int8)v9 - 12)) & 0x800000080500000LL) != 0 )
  {
    if ( v9 == 43 )
    {
LABEL_81:
      LOBYTE(v36) = *((_BYTE *)a1 + 160);
      v37 = (const __m128i *)((char *)v5 + 40);
      if ( (_BYTE)v36 )
      {
        LODWORD(v98) = -1;
        LOBYTE(v8) = *((_BYTE *)a1 + 160);
        v40 = 0;
        v10 = 13;
        v41 = -1;
        goto LABEL_84;
      }
      LODWORD(v98) = -1;
      v38 = a1[19];
      v39 = 0x2000;
      LOBYTE(v8) = 1;
      LOBYTE(v36) = 1;
      v40 = 0;
      v10 = 13;
      v41 = -1;
      goto LABEL_83;
    }
    v55 = v5[1].m128i_u32[3];
    v56 = v55 & 0x80;
    if ( v9 != 34 )
    {
LABEL_123:
      if ( v56 )
        return 2;
      v57 = v5[7].m128i_i8[9];
      v58 = (const __m128i *)((char *)v5 + 120);
      if ( !v57 )
      {
        v57 = v5[5].m128i_i8[1];
        v58 = v5 + 5;
      }
      if ( v57 != 4 )
        return 2;
      v10 = v58->m128i_u16[3];
      v36 = (v55 >> 5) & 1;
      if ( v9 == 71 )
      {
        LODWORD(v98) = v5[5].m128i_u16[3];
      }
      else
      {
        v59 = v9 == 872;
        v60 = -1;
        if ( v59 )
          v60 = v3 + 1;
        LODWORD(v98) = v60;
      }
      v40 = v58[1].m128i_i64[0];
      v41 = v5[2].m128i_u16[7];
      v37 = nullptr;
LABEL_132:
      v38 = a1[19];
      if ( !*((_BYTE *)a1 + 160) )
      {
        if ( v10 <= 15 )
        {
          v39 = 1LL << v10;
        }
        else
        {
          if ( (unsigned int)(v10 - 45) > 0x4F )
            goto LABEL_84;
          switch ( v10 )
          {
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
            case ':':
            case ';':
            case '<':
              v39 = 3LL << (2 * (unsigned __int8)v10 - 58);
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
              v39 = 3LL << (2 * ((unsigned __int8)v10 - 53));
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
              v39 = 1LL << ((unsigned __int8)v10 - 29);
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
              v39 = 1LL << ((unsigned __int8)v10 - 77);
              break;
            default:
              v39 = 15LL << (4 * (unsigned __int8)v10 + 92);
              break;
          }
        }
        goto LABEL_83;
      }
      v61 = v10 + 127;
      if ( (unsigned int)(v10 - 129) > 0x1E )
      {
        v39 = 0x80000000LL;
        if ( v10 == 161 )
          goto LABEL_83;
        if ( (unsigned int)(v10 - 163) > 0x1F )
          goto LABEL_84;
        v61 = v10 + 125;
      }
      v39 = 1LL << v61;
LABEL_83:
      if ( (v39 & v38) != 0 )
      {
        *((_DWORD *)a1 + 42) = v10;
        v44 = a1 + 21;
        goto LABEL_89;
      }
LABEL_84:
      v42 = (_DWORD *)a1[16];
      v43 = &v42[4 * a1[17]];
      if ( v42 == v43 )
        return 2;
      while ( 1 )
      {
        v44 = v42;
        if ( v10 == *v42 )
          break;
        v42 += 4;
        if ( v43 == v42 )
          return 2;
      }
      if ( !v42 )
        return 2;
LABEL_89:
      if ( *((_DWORD *)v44 + 1) != 13 )
        return 2;
      v45 = v44[1];
      v108 = v45;
      if ( v37 )
      {
        LOBYTE(v103) = v36;
        if ( v37->m128i_i8[1] == 9 )
        {
          v101 = v37[1].m128i_u16[4];
          v40 = (int)(4 * bitcount());
        }
        else
        {
          v101 = 0;
          v40 = (int)sub_29380((__int64)v5);
        }
        if ( (_BYTE)v8 )
        {
          if ( (_BYTE)v36 )
          {
            v98 = v40;
            if ( !(unsigned __int8)sub_5A9A0((__int64)a1, v10, v108 - v40, -1) )
              return 1;
            v108 -= v98;
          }
          else
          {
            v108 -= v40;
          }
          goto LABEL_97;
        }
        if ( !(_BYTE)v36 )
        {
          if ( v41 != -1 )
            v108 += v40;
LABEL_97:
          if ( v37->m128i_i8[1] == 9 )
          {
            v109 = 0;
            v73 = (_QWORD *)operator new(0x18u);
            *v73 = a1;
            v74 = _mm_loadl_epi64((const __m128i *)off_A2E90);
            v73[1] = &v108;
            v73[2] = v5;
            *(_QWORD *)&v109 = v73;
            v110 = _mm_unpacklo_epi64(v74, (__m128i)(unsigned __int64)sub_5C460);
            v75 = bitcountr_zero();
            for ( i = v101 >> v75; i; i >>= 1 )
            {
              for ( ; (i & 1) == 0; ++v75 )
                i >>= 1;
              v77 = v75;
              if ( v75 > 0xF )
              {
                if ( v75 - 16 > 0x1F )
                {
                  v77 = v75 + 29;
                  if ( v75 - 48 >= 0x10 )
                    v77 = -1;
                }
                else
                {
                  v77 = v75 + 77;
                }
              }
              v107 = v77;
              if ( !v110.m128i_i64[0] )
                std::__throw_bad_function_call();
              if ( ((unsigned int (__fastcall *)(__int128 *, int *))v110.m128i_i64[1])(&v109, &v107) )
                break;
              ++v75;
            }
            if ( v110.m128i_i64[0] )
            {
              ((void (__fastcall *)(__int128 *, __int128 *, __int64))v110.m128i_i64[0])(&v109, &v109, 3);
              return 0;
            }
          }
          else
          {
            v46 = 4;
            if ( v37->m128i_i8[5] == 4 )
              v46 = 8;
            v47 = 0;
            if ( v37->m128i_i64[1] )
            {
              do
              {
                v48 = v47 + v37->m128i_u16[3];
                ++v47;
                sub_5AD00(
                  (__int64)a1,
                  &v108,
                  v48,
                  v46,
                  v5,
                  v7,
                  v95,
                  v98,
                  v101,
                  v103,
                  v105,
                  v108,
                  v109,
                  SDWORD2(v109),
                  v110.m128i_i32[0],
                  v110.m128i_i32[2],
                  v111);
              }
              while ( (unsigned __int64)v47 < v37->m128i_i64[1] );
              return 0;
            }
          }
          return 0;
        }
        v45 = v108;
      }
      else
      {
        if ( !(_BYTE)v36 )
        {
          if ( v41 != -1 || (_BYTE)v8 )
            v108 = v40 + v45;
          goto LABEL_178;
        }
        v101 = 0;
      }
      v103 = v40;
      if ( !(unsigned __int8)sub_5A9A0((__int64)a1, v10, v40 + v45, -1) )
        return 1;
      if ( v41 != -1 || (_BYTE)v8 )
        v108 += v103;
      if ( v37 )
        goto LABEL_97;
LABEL_178:
      sub_5AD00(
        (__int64)a1,
        &v108,
        v41,
        4,
        v5,
        v7,
        v95,
        v98,
        v101,
        v103,
        v105,
        v108,
        v109,
        SDWORD2(v109),
        v110.m128i_i32[0],
        v110.m128i_i32[2],
        v111);
      if ( v99 != -1 )
      {
        sub_5AD00(
          (__int64)a1,
          &v108,
          v99,
          4,
          v5,
          v69,
          v96,
          v99,
          v102,
          v104,
          v106,
          v108,
          v109,
          SDWORD2(v109),
          v110.m128i_i32[0],
          v110.m128i_i32[2],
          v111);
        return 0;
      }
      return 0;
    }
    goto LABEL_144;
  }
  v12 = (1LL << ((unsigned __int8)v9 - 12)) & 0x1007;
  if ( (_DWORD)v12 )
  {
    v26 = v5 + 5;
    if ( !v5[7].m128i_i8[9] )
      v26 = (const __m128i *)((char *)v5 + 40);
    v27 = (const __m128i *)((char *)v26 + 40);
    if ( v9 == 13 )
    {
      if ( v26[2].m128i_i8[9] != 1 )
        return 2;
      v3 = v26[2].m128i_u16[7];
      v54 = v26;
      v26 = (const __m128i *)((char *)v26 + 40);
      v27 = v54;
      v11 = v3;
    }
    else if ( v9 == 24 )
    {
      if ( v26[2].m128i_i8[9] != 5
        || (v26[3].m128i_i64[0] & 0xFFFFFFFFFFFFFFDFLL) != 0x1F && (v26[3].m128i_i64[0] & 0xFFFFFFFFFFFFFFF7LL) != 7 )
      {
        return 2;
      }
      v3 = v26->m128i_u16[3];
      v108 = v26[3].m128i_i64[0];
      v11 = v3;
    }
    else
    {
      v3 = v26->m128i_u16[3];
      v11 = v3;
    }
LABEL_56:
    v28 = *((_BYTE *)a1 + 160);
    v29 = a1[19];
    if ( !v28 )
    {
      if ( (unsigned __int16)v11 <= 0xFu )
      {
        v31 = 1LL << v3;
      }
      else
      {
        if ( (unsigned __int16)(v11 - 45) > 0x4Fu )
          goto LABEL_63;
        switch ( v11 )
        {
          case '5':
          case '6':
          case '7':
          case '8':
          case '9':
          case ':':
          case ';':
          case '<':
            v31 = 3LL << (2 * (unsigned __int8)v3 - 58);
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
            v31 = 3LL << (2 * (unsigned __int8)v3 - 106);
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
            v31 = 1LL << ((unsigned __int8)v3 - 29);
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
            v31 = 1LL << ((unsigned __int8)v3 - 77);
            break;
          default:
            v31 = 15LL << (4 * (unsigned __int8)v3 + 92);
            break;
        }
      }
      goto LABEL_62;
    }
    v30 = v3 + 127;
    if ( (unsigned int)(v3 - 129) > 0x1E )
    {
      if ( v3 == 161 )
      {
        v31 = 0x80000000LL;
LABEL_62:
        if ( (v31 & v29) != 0 )
        {
          *((_DWORD *)a1 + 42) = v3;
          v34 = a1 + 21;
          v9 = v5[1].m128i_i16[4];
LABEL_68:
          if ( *((_DWORD *)v34 + 1) == 13 )
          {
            v2 = v34[1];
LABEL_70:
            if ( v9 == 24 || v9 == 273 )
              goto LABEL_72;
            if ( (unsigned __int8)sub_839C0(*a1, &v108, v5, v27, 0) )
            {
              v70 = v5[1].m128i_i16[4];
              if ( v70 == 14 )
              {
                v72 = v108;
                if ( *(_DWORD *)(*(_QWORD *)(*a1 + 32LL) + 24LL) != 8 )
                  v72 = (int)v108;
                v2 += v72;
              }
              else if ( (unsigned __int16)v70 <= 0xEu )
              {
                if ( (unsigned __int16)(v70 - 12) <= 1u )
                {
                  v71 = v108;
                  if ( *(_DWORD *)(*(_QWORD *)(*a1 + 32LL) + 24LL) != 8 )
                    v71 = (int)v108;
                  v2 -= v71;
                }
              }
              else if ( v70 == 24 || v70 == 273 )
              {
LABEL_72:
                v2 &= ~v108;
              }
              if ( !(unsigned __int8)sub_5A9A0((__int64)a1, v10, v2, v5[1].m128i_i64[0]) )
                return 1;
LABEL_74:
              if ( v2 == 0x8000000000000000LL )
                goto LABEL_235;
              if ( (v10 == 7 || *(_DWORD *)(*a1 + 212LL) && v10 == 11) && *((_DWORD *)a1 + 51) == 1 )
              {
                a1[23] = v2;
                *((_DWORD *)a1 + 50) = v10;
                v35 = v5[1].m128i_i64[0];
                *((_DWORD *)a1 + 51) = 2;
                a1[24] = v35;
                return 0;
              }
              return 0;
            }
            return 2;
          }
LABEL_153:
          if ( v9 == 14 && v27->m128i_i8[1] != 1 )
            return 2;
          v63 = v27->m128i_u16[3];
          if ( !v28 )
          {
            if ( (unsigned __int16)v63 <= 0xFu )
            {
              v65 = 1LL << v63;
            }
            else
            {
              if ( (unsigned __int16)(v63 - 45) > 0x4Fu )
                goto LABEL_162;
              switch ( v27->m128i_i16[3] )
              {
                case '5':
                case '6':
                case '7':
                case '8':
                case '9':
                case ':':
                case ';':
                case '<':
                  v65 = 3LL << (2 * (unsigned __int8)v63 - 58);
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
                  v65 = 3LL << (2 * (unsigned __int8)v63 - 106);
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
                  v65 = 1LL << ((unsigned __int8)v63 - 29);
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
                  v65 = 1LL << ((unsigned __int8)v63 - 77);
                  break;
                default:
                  v65 = 15LL << (4 * (unsigned __int8)v63 + 92);
                  break;
              }
            }
            goto LABEL_161;
          }
          v64 = v63 + 127;
          if ( (unsigned int)(v63 - 129) > 0x1E )
          {
            if ( v63 == 161 )
            {
              v65 = 0x80000000LL;
LABEL_161:
              if ( (v65 & v29) != 0 )
              {
                *((_DWORD *)a1 + 42) = v63;
                v68 = a1 + 21;
LABEL_167:
                if ( *((_DWORD *)v68 + 1) != 13 )
                  return 2;
                v2 = v68[1];
                v9 = v5[1].m128i_i16[4];
                v27 = v26;
                goto LABEL_70;
              }
LABEL_162:
              v66 = (_DWORD *)a1[16];
              v67 = &v66[4 * a1[17]];
              if ( v66 == v67 )
                return 2;
              while ( 1 )
              {
                v68 = v66;
                if ( v63 == *v66 )
                  break;
                v66 += 4;
                if ( v67 == v66 )
                  return 2;
              }
              if ( !v66 )
                return 2;
              goto LABEL_167;
            }
            if ( (unsigned int)(v63 - 163) > 0x1F )
              goto LABEL_162;
            v64 = v63 + 125;
          }
          v65 = 1LL << v64;
          goto LABEL_161;
        }
LABEL_63:
        v32 = (_DWORD *)a1[16];
        v33 = &v32[4 * a1[17]];
        if ( v32 == v33 )
          goto LABEL_153;
        while ( 1 )
        {
          v34 = v32;
          if ( v3 == *v32 )
            break;
          v32 += 4;
          if ( v33 == v32 )
            goto LABEL_153;
        }
        if ( !v32 )
          goto LABEL_153;
        goto LABEL_68;
      }
      if ( (unsigned int)(v3 - 163) > 0x1F )
        goto LABEL_63;
      v30 = v3 + 125;
    }
    v31 = 1LL << v30;
    goto LABEL_62;
  }
  if ( v9 != 23 || v5[5].m128i_i8[1] != 1 )
    return 2;
  v8 = v5[5].m128i_u16[3];
  if ( v10 == v8 )
    return 0;
  v13 = *((_BYTE *)a1 + 160);
  v14 = a1[19];
  if ( !v13 )
  {
    if ( (unsigned __int16)v8 <= 0xFu )
    {
      v16 = 1LL << v8;
    }
    else
    {
      if ( (unsigned __int16)(v8 - 45) > 0x4Fu )
        goto LABEL_16;
      switch ( v5[5].m128i_i16[3] )
      {
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
        case ':':
        case ';':
        case '<':
          v16 = 3LL << (2 * (unsigned __int8)v8 - 58);
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
          v16 = 3LL << (2 * (unsigned __int8)v8 - 106);
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
          v16 = 1LL << ((unsigned __int8)v8 - 29);
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
          v16 = 1LL << ((unsigned __int8)v8 - 77);
          break;
        default:
          v16 = 15LL << (4 * (unsigned __int8)v8 + 92);
          break;
      }
    }
    goto LABEL_15;
  }
  v15 = v8 + 127;
  if ( (unsigned int)(v8 - 129) <= 0x1E )
    goto LABEL_14;
  if ( v8 != 161 )
  {
    if ( (unsigned int)(v8 - 163) > 0x1F )
      goto LABEL_16;
    v15 = v8 + 125;
LABEL_14:
    v16 = 1LL << v15;
    goto LABEL_15;
  }
  v16 = 0x80000000LL;
LABEL_15:
  if ( (v16 & v14) != 0 )
  {
    *((_DWORD *)a1 + 42) = v8;
    v21 = a1 + 21;
    goto LABEL_21;
  }
LABEL_16:
  v17 = a1[17];
  v18 = a1[16];
  v19 = v18 + 16LL * a1[17];
  if ( v18 == v19 )
    goto LABEL_191;
  v20 = (_DWORD *)a1[16];
  while ( 1 )
  {
    v21 = v20;
    if ( v8 == *v20 )
      break;
    v20 += 4;
    if ( (_DWORD *)v19 == v20 )
      goto LABEL_191;
  }
  if ( !v20 )
  {
LABEL_191:
    v5 = (const __m128i *)0x8000000000000000LL;
    if ( v3 != 13 )
    {
LABEL_25:
      if ( v13 )
      {
        v23 = v3 + 127;
        if ( (unsigned int)(v3 - 129) <= 0x1E )
        {
LABEL_30:
          v14 &= __ROL8__(-2, v23);
          goto LABEL_31;
        }
        if ( v3 != 161 )
        {
          if ( (unsigned int)(v3 - 163) > 0x1F )
            goto LABEL_31;
          v23 = v3 + 125;
          goto LABEL_30;
        }
        v14 &= ~0x80000000uLL;
      }
      else if ( (unsigned __int16)v10 <= 0xFu )
      {
        v14 &= __ROL8__(-2, v3);
      }
      else if ( (unsigned __int16)(v10 - 45) <= 0x4Fu )
      {
        switch ( v10 )
        {
          case '5':
          case '6':
          case '7':
          case '8':
          case '9':
          case ':':
          case ';':
          case '<':
            v14 &= ~(3LL << (2 * (unsigned __int8)v3 - 58));
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
            v14 &= ~(3LL << (2 * (unsigned __int8)v3 - 106));
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
            v14 &= __ROL8__(-2, (unsigned __int8)v3 - 29);
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
            v14 &= __ROL8__(-2, (unsigned __int8)v3 - 77);
            break;
          default:
            v14 &= ~(15LL << (4 * (unsigned __int8)v3 + 92));
            break;
        }
      }
LABEL_31:
      a1[19] = v14;
      if ( v19 != v18 )
      {
        v24 = v18;
        while ( v3 != *(_DWORD *)v24 )
        {
          v24 += 16;
          if ( v19 == v24 )
            goto LABEL_237;
        }
        *(_DWORD *)(v24 + 4) = v8;
        *(_QWORD *)(v24 + 8) = v5;
        return 0;
      }
      goto LABEL_237;
    }
    return 1;
  }
LABEL_21:
  v22 = *((_DWORD *)v21 + 1);
  if ( v22 != 13 )
  {
    if ( v3 != 13 )
    {
      if ( v22 != -1 )
      {
        v17 = a1[17];
        v18 = a1[16];
        v8 = *((_DWORD *)v21 + 1);
        v5 = (const __m128i *)v21[1];
        v19 = v18 + 16 * v17;
        goto LABEL_25;
      }
      if ( !v13 )
      {
        if ( (unsigned __int16)v10 <= 0xFu )
        {
          v12 = 1LL << v3;
        }
        else if ( (unsigned __int16)(v10 - 45) <= 0x4Fu )
        {
          switch ( v10 )
          {
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
            case ':':
            case ';':
            case '<':
              v12 = 3LL << (2 * (unsigned __int8)v3 - 58);
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
              v12 = 3LL << (2 * (unsigned __int8)v3 - 106);
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
              v12 = 1LL << ((unsigned __int8)v3 - 29);
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
              v12 = 1LL << ((unsigned __int8)v3 - 77);
              break;
            default:
              v12 = 15LL << (4 * (unsigned __int8)v3 + 92);
              break;
          }
        }
        goto LABEL_229;
      }
      v78 = v3 + 127;
      if ( (unsigned int)(v3 - 129) > 0x1E )
      {
        if ( v3 == 161 )
        {
          v12 = 0x80000000LL;
          goto LABEL_229;
        }
        if ( (unsigned int)(v3 - 163) > 0x1F )
        {
LABEL_229:
          a1[19] = v14 | v12;
          return 0;
        }
        v78 = v3 + 125;
      }
      v12 = 1LL << v78;
      goto LABEL_229;
    }
    return 1;
  }
  v2 = v21[1];
  if ( !(unsigned __int8)sub_5A9A0((__int64)a1, v3, v2, v5[1].m128i_i64[0]) )
    return 1;
  if ( v3 != 12 || v8 != 13 )
    goto LABEL_74;
  v5 = (const __m128i *)v5[1].m128i_i64[0];
  if ( v5 == *(const __m128i **)a1[1] )
  {
    v90 = a1[7];
    v91 = a1[8];
    v92 = (const __m128i **)(v90 + 8 * v91);
    if ( (const __m128i **)v90 == v92 )
      goto LABEL_293;
    v93 = (const __m128i **)a1[7];
    while ( v5 != *v93 )
    {
      if ( v92 == ++v93 )
        goto LABEL_293;
    }
    if ( v92 == v93 )
    {
LABEL_293:
      if ( a1[9] >= (unsigned __int64)(v91 + 1) )
      {
LABEL_294:
        *(_QWORD *)(v90 + 8LL * a1[8]++) = v5;
        goto LABEL_234;
      }
LABEL_297:
      v94 = qvector_reserve();
      a1[7] = v94;
      v90 = v94;
      goto LABEL_294;
    }
  }
LABEL_234:
  if ( v2 != 0x8000000000000000LL )
    return 0;
LABEL_235:
  if ( under_debugger )
    goto LABEL_298;
  interr();
LABEL_237:
  v79 = a1[18];
  if ( v79 < v17 + 1 )
  {
    v80 = qvector_reserve();
    v81 = (const __m128i *)a1[16];
    v82 = a1[17];
    v83 = v80;
    v84 = a1[18];
    a1[18] = v79;
    v85 = v81;
    v86 = v83;
    v87 = v82 - 1;
    if ( v87 >= 0 )
    {
      do
      {
        v88 = _mm_loadu_si128(v85);
        v86 += 16;
        ++v85;
        *(__m128i *)(v86 - 16) = v88;
      }
      while ( v87-- != 0 );
    }
    v100 = v84;
    qfree();
    a1[16] = v83;
    a1[18] = v100;
    v19 = v83 + 16LL * a1[17];
  }
  *(_DWORD *)v19 = v3;
  *(_DWORD *)(v19 + 4) = v8;
  *(_QWORD *)(v19 + 8) = v5;
  ++a1[17];
  return 0;
}

