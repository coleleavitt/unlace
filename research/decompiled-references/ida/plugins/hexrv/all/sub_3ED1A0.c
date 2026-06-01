__int64 __fastcall sub_3ED1A0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __m128 a13,
        __m128 a14)
{
  char v15; // al
  __int64 v16; // rdx
  _QWORD *v17; // rax
  __int64 v18; // rdx
  int v19; // eax
  int v20; // ecx
  int v21; // r12d
  int v22; // r13d
  int v23; // ebp
  int v24; // ebx
  int v25; // r13d
  char **v26; // rax
  __int64 result; // rax
  __int16 v28; // ax
  unsigned __int16 v29; // ax
  int v30; // eax
  int v31; // ecx
  __int64 v32; // rdx
  __int64 v33; // rax
  signed int v34; // r12d
  char v35; // al
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // r12
  int v39; // r14d
  __int64 v40; // rdi
  __int64 v41; // rax
  signed int v42; // ebx
  __int64 v43; // rdx
  __int64 v44; // rax
  int v45; // r12d
  __int64 v46; // rdx
  int v47; // r12d
  __int64 v48; // rax
  int v49; // edx
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // r14
  __int64 v53; // rdx
  __int64 v54; // rax
  int v55; // ebx
  unsigned int v56; // esi
  __int64 v57; // rdx
  __int64 v58; // rax
  __int64 v59; // r12
  unsigned int v60; // esi
  __int64 v61; // rdx
  __int64 v62; // rax
  __int64 v63; // rax
  int v64; // r13d

  v15 = *(_BYTE *)(a1 + 384);
  if ( v15 )
  {
    if ( v15 != 1 )
      return 0;
    a4 = *(_QWORD *)(a1 + 40);
    v16 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 920LL);
    v17 = *(_QWORD **)(v16 + 96);
    a3 = (__int64)&v17[*(_QWORD *)(v16 + 104)];
    if ( v17 == (_QWORD *)a3 )
      return 0;
    while ( a4 != *v17 )
    {
      if ( (_QWORD *)a3 == ++v17 )
        return 0;
    }
    if ( (_QWORD *)a3 == v17 )
      return 0;
  }
  if ( !(unsigned __int8)sub_3E87D0(a1, a7, a8, a9, a10, a11, a12, a13, a14, a2, a3, a4, a5, a6) )
    *(_WORD *)(a1 + 840) = 0;
  v18 = *(_QWORD *)(*(_QWORD *)(a1 + 800) + 8LL);
  v19 = *(unsigned __int16 *)(a1 + 48);
  v20 = *(_DWORD *)(v18 + 104);
  if ( v19 >= v20 && v19 < *(_DWORD *)(v18 + 108) )
  {
    v21 = *(_DWORD *)(*(_QWORD *)(v18 + 112) + 16LL * (v19 - v20) + 8);
    v22 = v21 & 0x400;
    if ( (v21 & 0x100) != 0 || (v23 = -1, (*(_BYTE *)(a1 + 65) & 0xFD) == 1) )
      v23 = sub_3E9CC0(a1, 0, 0, *(double *)a7.m128_u64);
    if ( (v21 & 0x200) != 0 )
      goto LABEL_19;
LABEL_18:
    if ( (*(_BYTE *)(a1 + 105) & 0xFD) == 1 )
      goto LABEL_19;
    goto LABEL_28;
  }
  if ( (*(_BYTE *)(a1 + 65) & 0xFD) == 1 )
  {
    v22 = 0;
    v21 = 0;
    v23 = sub_3E9CC0(a1, 0, 0, *(double *)a7.m128_u64);
    goto LABEL_18;
  }
  v22 = 0;
  v21 = 0;
  v23 = -1;
  if ( (*(_BYTE *)(a1 + 105) & 0xFD) == 1 )
    goto LABEL_19;
LABEL_28:
  if ( (*(_BYTE *)(a1 + 844) & 6) == 0 )
  {
    v24 = -1;
    goto LABEL_20;
  }
LABEL_19:
  v24 = sub_3E9CC0(a1, 1, 0, *(double *)a7.m128_u64);
LABEL_20:
  if ( v22 || (v25 = -1, (*(_BYTE *)(a1 + 145) & 0xFD) == 1) )
    v25 = sub_3E9CC0(a1, 2, 0, *(double *)a7.m128_u64);
  if ( !*(_WORD *)(a1 + 840) )
  {
    sub_3ECE70((_QWORD *)a1, v21, v23, v24, v25);
    return 0;
  }
  v26 = sub_3E8130(a1);
  if ( v26 )
  {
    sub_3EB2A0(a1, (__int64)v26, v23, v24, v25);
    return 0;
  }
  if ( !(unsigned __int8)sub_3E8B60(a1) )
  {
    v29 = *(_WORD *)(a1 + 48);
    if ( v29 > 0x1B8u )
    {
      if ( v29 > 0x1CFu )
      {
        switch ( *(_WORD *)(a1 + 48) )
        {
          case 0x1D0:
            goto LABEL_118;
          case 0x1D1:
          case 0x1D2:
          case 0x1D3:
          case 0x1D4:
          case 0x1D5:
          case 0x1D6:
          case 0x1D7:
          case 0x1D8:
          case 0x1D9:
          case 0x1DA:
          case 0x1DB:
          case 0x1DC:
          case 0x1DD:
          case 0x1DE:
          case 0x1DF:
          case 0x1E0:
          case 0x1E1:
          case 0x1E2:
          case 0x1E3:
          case 0x1E4:
          case 0x1E5:
          case 0x1E6:
          case 0x1EC:
          case 0x1ED:
          case 0x1EE:
          case 0x1EF:
          case 0x1F0:
          case 0x1F1:
          case 0x1F2:
          case 0x1F3:
            sub_3EABC0(a1, v23, v24, v25, *(double *)a7.m128_u64);
            goto LABEL_42;
          case 0x1E7:
          case 0x1E8:
          case 0x1E9:
          case 0x1EA:
          case 0x1EB:
            sub_3EADA0(a1, v23, v24, v25, *(double *)a7.m128_u64);
            goto LABEL_42;
          case 0x1F4:
          case 0x1F5:
          case 0x1F6:
          case 0x1F7:
          case 0x1F8:
          case 0x1F9:
            sub_3EAF60(a1, v23, v24, v25, *(double *)a7.m128_u64);
            goto LABEL_42;
          case 0x210:
          case 0x211:
          case 0x212:
          case 0x213:
          case 0x214:
          case 0x215:
          case 0x216:
          case 0x217:
          case 0x218:
          case 0x219:
          case 0x21A:
            v40 = *(_QWORD *)(a1 + 832);
            if ( *(_BYTE *)(a1 + 105) == 2 )
            {
              v42 = sub_3E6FF0(v40, *(double *)a7.m128_u64);
              sub_3E9BD0(a1, *(_QWORD *)(a1 + 120), v42);
            }
            else
            {
              v41 = *(_QWORD *)(v40 + 712);
              if ( !v41 )
                goto LABEL_127;
              v42 = *(_DWORD *)(*(_QWORD *)(v40 + 704) + 4 * v41 - 4);
              *(_QWORD *)(v40 + 712) = v41 - 1;
              v43 = *(_QWORD *)(a1 + 832);
              v44 = *(_QWORD *)(v43 + 712);
              if ( !v44 )
                goto LABEL_127;
              v45 = *(_DWORD *)(*(_QWORD *)(v43 + 704) + 4 * v44 - 4);
              *(_QWORD *)(v43 + 712) = v44 - 1;
              sub_3E9B00(
                a1,
                *(_QWORD *)(a1 + 112),
                *(unsigned __int8 *)(a1 + 104),
                v45,
                *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL));
              sub_3E8D60(
                a1,
                0xCu,
                *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL),
                **(int **)(*(_QWORD *)(a1 + 832) + 648LL),
                v45,
                v42,
                0);
              sub_3E6F70(*(_QWORD *)(a1 + 832), v45);
            }
            sub_3E9170(a1, v23, v42);
            sub_3E6F70(*(_QWORD *)(a1 + 832), v42);
            goto LABEL_42;
          case 0x21B:
            v61 = *(_QWORD *)(a1 + 832);
            v62 = *(_QWORD *)(v61 + 712);
            if ( !v62 )
              goto LABEL_127;
            v55 = *(_DWORD *)(*(_QWORD *)(v61 + 704) + 4 * v62 - 4);
            *(_QWORD *)(v61 + 712) = v62 - 1;
            sub_3E9B00(
              a1,
              *(_QWORD *)(a1 + 112),
              *(unsigned __int8 *)(a1 + 104),
              v55,
              *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL));
            sub_3E8D60(
              a1,
              0xCu,
              *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL),
              **(int **)(*(_QWORD *)(a1 + 832) + 648LL),
              v55,
              v23,
              0);
            goto LABEL_112;
          case 0x21C:
          case 0x21D:
            v35 = sub_3EA630(
                    a1,
                    v23,
                    v24,
                    *(_QWORD *)(a1 + 152),
                    *(_QWORD *)(a1 + 192),
                    v29 == 541,
                    *(double *)a7.m128_u64,
                    1);
LABEL_83:
            if ( !v35 )
              sub_3ECE70((_QWORD *)a1, v21, v23, v24, v25);
            goto LABEL_42;
          case 0x21E:
          case 0x21F:
            v57 = *(_QWORD *)(a1 + 832);
            v58 = *(_QWORD *)(v57 + 712);
            if ( !v58 )
              goto LABEL_127;
            v59 = *(int *)(*(_QWORD *)(v57 + 704) + 4 * v58 - 4);
            *(_QWORD *)(v57 + 712) = v58 - 1;
            v55 = v59;
            sub_3E9B00(
              a1,
              1LL << *(_QWORD *)(a1 + 112),
              *(unsigned __int8 *)(a1 + 104),
              v59,
              *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL));
            sub_3E8D60(a1, 0x14u, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL), v23, v59, v59, 0);
            v60 = 43;
            if ( *(_WORD *)(a1 + 48) == 542 )
              v60 = 44;
            sub_3E8D60(
              a1,
              v60,
              *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL),
              v59,
              **(int **)(*(_QWORD *)(a1 + 832) + 632LL),
              *(_QWORD *)(a1 + 160),
              0);
            goto LABEL_112;
          case 0x220:
          case 0x221:
            v53 = *(_QWORD *)(a1 + 832);
            v54 = *(_QWORD *)(v53 + 712);
            if ( !v54 )
              goto LABEL_127;
            v55 = *(_DWORD *)(*(_QWORD *)(v53 + 704) + 4 * v54 - 4);
            *(_QWORD *)(v53 + 712) = v54 - 1;
            sub_3E9B00(
              a1,
              *(_QWORD *)(a1 + 112),
              *(unsigned __int8 *)(a1 + 104),
              v55,
              *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL));
            v56 = 43;
            if ( *(_WORD *)(a1 + 48) == 544 )
              v56 = 44;
            sub_3E8D60(a1, v56, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL), v23, v55, *(_QWORD *)(a1 + 160), 0);
LABEL_112:
            sub_3E6F70(*(_QWORD *)(a1 + 832), v55);
            goto LABEL_42;
          case 0x222:
          case 0x223:
          case 0x224:
            v49 = 1;
            if ( v29 != 546 )
              v49 = (v29 != 547) + 2;
            v50 = *(_QWORD *)(a1 + 832);
            v51 = *(_QWORD *)(v50 + 712);
            if ( !v51 )
              goto LABEL_127;
            v52 = *(int *)(*(_QWORD *)(v50 + 704) + 4 * v51 - 4);
            *(_QWORD *)(v50 + 712) = v51 - 1;
            sub_3E9B00(a1, v49, *(unsigned __int8 *)(a1 + 144), v52, 1);
            sub_3E8D60(a1, 0x16u, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL), v25, v52, v52, 0);
            sub_3E8D60(a1, 0xCu, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL), v24, v52, v23, 0);
            sub_3E6F70(*(_QWORD *)(a1 + 832), v52);
            goto LABEL_42;
          case 0x225:
          case 0x226:
          case 0x227:
          case 0x228:
            v46 = *(_QWORD *)(a1 + 832);
            v47 = v29 - 549;
            if ( v29 == 552 )
              v47 = 3;
            v48 = *(_QWORD *)(v46 + 712);
            if ( !v48 )
              goto LABEL_127;
            v39 = *(_DWORD *)(*(_QWORD *)(v46 + 704) + 4 * v48 - 4);
            *(_QWORD *)(v46 + 712) = v48 - 1;
            sub_3EA150(a1, 4, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL), v25, v39, 0, *(double *)a7.m128_u64);
            if ( v47 )
            {
              v64 = sub_3E6FF0(*(_QWORD *)(a1 + 832), *(double *)a7.m128_u64);
              sub_3E9B00(a1, v47, *(unsigned __int8 *)(a1 + 144), v64, 1);
              sub_3E8D60(a1, 0x16u, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL), v39, v64, v39, 0);
              sub_3E6F70(*(_QWORD *)(a1 + 832), v64);
            }
            sub_3E8D60(a1, 0xCu, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL), v24, v39, v23, 0);
LABEL_87:
            sub_3E6F70(*(_QWORD *)(a1 + 832), v39);
            goto LABEL_42;
          default:
            goto LABEL_40;
        }
      }
      v63 = 1LL << ((unsigned __int8)v29 + 71);
      if ( (v63 & 0x555554) != 0 )
      {
        sub_3E9290(a1, v23, v24, *(double *)a7.m128_u64);
        goto LABEL_42;
      }
      if ( (v63 & 0x2AAAA8) != 0 )
      {
LABEL_118:
        sub_3E9340(a1, v23, v24, *(double *)a7.m128_u64);
        goto LABEL_42;
      }
      if ( (v63 & 3) != 0 )
      {
        sub_3E9760(a1, v23, v24, v25);
        goto LABEL_42;
      }
    }
    else if ( v29 )
    {
      switch ( v29 )
      {
        case 1u:
        case 0x70u:
        case 0x7Au:
        case 0x7Bu:
        case 0x7Fu:
        case 0xA2u:
          sub_3E8D60(a1, 4u, *(unsigned __int16 *)(a1 + 842), v24, 0x3BEA45E214ADDC55LL, v23, 0);
          goto LABEL_42;
        case 2u:
          if ( v25 == -1 )
          {
            v32 = *(_QWORD *)(a1 + 832);
            v33 = *(_QWORD *)(v32 + 712);
            if ( v33 )
            {
              v34 = *(_DWORD *)(*(_QWORD *)(v32 + 704) + 4 * v33 - 4);
              *(_QWORD *)(v32 + 712) = v33 - 1;
              sub_3E9BD0(a1, *(_QWORD *)(a1 + 40), v34);
              sub_3E8D60(a1, 0xCu, *(unsigned __int16 *)(a1 + 842), v34, v24, v23, 0);
              goto LABEL_42;
            }
LABEL_127:
            sub_3E4E50(*(double *)a7.m128_u64);
          }
          if ( !under_debugger )
            sub_37DDE0(0xCE1Cu, *(double *)a7.m128_u64);
          return result;
        case 3u:
        case 0xA3u:
          sub_3E8D60(
            a1,
            0x38u,
            *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL),
            *(_QWORD *)(a1 + 120),
            0x3BEA45E214ADDC55LL,
            0x3BEA45E214ADDC55LL,
            0);
          goto LABEL_42;
        case 4u:
          sub_3E8D60(
            a1,
            0x39u,
            *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL),
            *(int *)(*(_QWORD *)(a1 + 832) + 64LL),
            v24,
            0x3BEA45E214ADDC55LL,
            *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL));
          goto LABEL_42;
        case 5u:
        case 6u:
        case 7u:
        case 8u:
        case 9u:
        case 0xAu:
        case 0x86u:
        case 0x87u:
        case 0x88u:
        case 0x89u:
        case 0x8Au:
        case 0x8Bu:
          sub_3E8ED0(a1, v23, v24, *(double *)a7.m128_u64);
          goto LABEL_42;
        case 0x13u:
        case 0x1Cu:
        case 0x33u:
        case 0x37u:
          sub_3E8D60(a1, 0xCu, *(unsigned __int16 *)(a1 + 842), v24, v25, v23, 0);
          goto LABEL_42;
        case 0x14u:
        case 0x15u:
        case 0x1Fu:
        case 0x20u:
        case 0x3Au:
        case 0x71u:
        case 0x72u:
        case 0x73u:
        case 0x80u:
        case 0x81u:
        case 0x82u:
        case 0x83u:
          sub_3EA220(a1, v23, v24, v25, *(double *)a7.m128_u64);
          goto LABEL_42;
        case 0x16u:
        case 0x21u:
          sub_3E8D60(a1, 0x15u, *(unsigned __int16 *)(a1 + 842), v24, v25, v23, 0);
          goto LABEL_42;
        case 0x17u:
        case 0x24u:
          sub_3E8D60(a1, 0x13u, *(unsigned __int16 *)(a1 + 842), v24, v25, v23, 0);
          goto LABEL_42;
        case 0x18u:
        case 0x25u:
          sub_3E8D60(a1, 0x14u, *(unsigned __int16 *)(a1 + 842), v24, v25, v23, 0);
          goto LABEL_42;
        case 0x19u:
        case 0x1Au:
        case 0x1Bu:
        case 0x1Eu:
        case 0x22u:
        case 0x23u:
        case 0x34u:
        case 0x35u:
        case 0x36u:
        case 0x39u:
        case 0x3Bu:
        case 0x3Cu:
          sub_3E8E20(a1, v23, v24, v25, *(double *)a7.m128_u64);
          goto LABEL_42;
        case 0x1Du:
        case 0x38u:
          sub_3E8D60(a1, 0xDu, *(unsigned __int16 *)(a1 + 842), v24, v25, v23, 0);
          goto LABEL_42;
        case 0x44u:
        case 0x4Cu:
          sub_3E8D60(a1, 0xEu, *(unsigned __int16 *)(a1 + 842), v24, v25, v23, 0);
          goto LABEL_42;
        case 0x45u:
        case 0x46u:
        case 0x47u:
          sub_3EA3B0(a1, v24, v25, v23, *(double *)a7.m128_u64);
          goto LABEL_42;
        case 0x48u:
        case 0x4Du:
          sub_3E8D60(a1, 0x10u, *(unsigned __int16 *)(a1 + 842), v24, v25, v23, 0);
          goto LABEL_42;
        case 0x49u:
        case 0x4Eu:
          sub_3E8D60(a1, 0xFu, *(unsigned __int16 *)(a1 + 842), v24, v25, v23, 0);
          goto LABEL_42;
        case 0x4Au:
        case 0x4Fu:
          sub_3E8D60(a1, 0x12u, *(unsigned __int16 *)(a1 + 842), v24, v25, v23, 0);
          goto LABEL_42;
        case 0x4Bu:
        case 0x50u:
          sub_3E8D60(a1, 0x11u, *(unsigned __int16 *)(a1 + 842), v24, v25, v23, 0);
          goto LABEL_42;
        case 0x5Fu:
        case 0x60u:
        case 0x61u:
        case 0x62u:
          if ( (v21 & 0x800) != 0 || (v31 = -1, (*(_BYTE *)(a1 + 185) & 0xFD) == 1) )
            v31 = sub_3E9CC0(a1, 3, 0, *(double *)a7.m128_u64);
          sub_3E9080(a1, v24, v25, v31, v23, *(double *)a7.m128_u64);
          goto LABEL_42;
        case 0x63u:
          sub_3E8D60(a1, 0x45u, *(unsigned __int16 *)(a1 + 842), v24, v25, v23, 0);
          goto LABEL_42;
        case 0x64u:
          sub_3E8D60(a1, 0x46u, *(unsigned __int16 *)(a1 + 842), v24, v25, v23, 0);
          goto LABEL_42;
        case 0x65u:
          sub_3E8D60(a1, 0x47u, *(unsigned __int16 *)(a1 + 842), v24, v25, v23, 0);
          goto LABEL_42;
        case 0x66u:
          sub_3E8D60(a1, 0x48u, *(unsigned __int16 *)(a1 + 842), v24, v25, v23, 0);
          goto LABEL_42;
        case 0x6Du:
        case 0x6Eu:
        case 0x6Fu:
          sub_3E9580(a1, v24, v23, *(double *)a7.m128_u64);
          goto LABEL_42;
        case 0x79u:
          goto LABEL_42;
        case 0x7Cu:
          sub_3E8D60(a1, 7u, *(unsigned __int16 *)(a1 + 842), v24, 0x3BEA45E214ADDC55LL, v23, 0);
          goto LABEL_42;
        case 0x7Du:
        case 0x7Eu:
          sub_3E8D60(a1, 5u, *(unsigned __int16 *)(a1 + 842), v24, 0x3BEA45E214ADDC55LL, v23, 0);
          goto LABEL_42;
        case 0x85u:
          sub_3E8D60(a1, 0x44u, *(unsigned __int16 *)(a1 + 842), v24, 0x3BEA45E214ADDC55LL, v23, 0);
          goto LABEL_42;
        case 0x8Cu:
        case 0xA4u:
        case 0xA5u:
          sub_3E8D60(
            a1,
            0x37u,
            *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL),
            *(_QWORD *)(a1 + 80),
            0x3BEA45E214ADDC55LL,
            0x3BEA45E214ADDC55LL,
            0);
          goto LABEL_42;
        case 0x8Du:
          sub_3E8D60(
            a1,
            0x36u,
            *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL),
            0x3BEA45E214ADDC55LL,
            *(int *)(*(_QWORD *)(a1 + 832) + 64LL),
            v23,
            *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL));
          goto LABEL_42;
        case 0x8Eu:
          sub_3E8D60(a1, 0x3Au, 0, 0x3BEA45E214ADDC55LL, 0x3BEA45E214ADDC55LL, 0x3BEA45E214ADDC55LL, 0);
          goto LABEL_42;
        case 0x16Fu:
        case 0x170u:
        case 0x1AFu:
        case 0x1B0u:
          sub_3E8C90(a1, v23, v24, v25, *(double *)a7.m128_u64);
          goto LABEL_42;
        case 0x1AEu:
          v36 = *(_QWORD *)(a1 + 832);
          v37 = *(_QWORD *)(v36 + 712);
          if ( !v37 )
            goto LABEL_127;
          v38 = *(int *)(*(_QWORD *)(v36 + 704) + 4 * v37 - 4);
          *(_QWORD *)(v36 + 712) = v37 - 1;
          v39 = v38;
          sub_3E8D60(a1, 3u, 1, *(_QWORD *)(a1 + 192), 0x3BEA45E214ADDC55LL, v38, *(unsigned __int8 *)(a1 + 184));
          sub_3E8D60(a1, 0x16u, *(unsigned __int16 *)(a1 + 842), v25, v38, v38, 0);
          sub_3E8D60(a1, 0xCu, *(unsigned __int16 *)(a1 + 842), v24, v38, v23, 0);
          goto LABEL_87;
        case 0x1B1u:
        case 0x1B2u:
          v35 = sub_3EA630(
                  a1,
                  v23,
                  v24,
                  *(_QWORD *)(a1 + 152),
                  *(_QWORD *)(a1 + 192),
                  v29 == 433,
                  *(double *)a7.m128_u64,
                  0);
          goto LABEL_83;
        case 0x1B8u:
          sub_3EAAD0(a1, v23, v24, *(double *)a7.m128_u64);
          goto LABEL_42;
        default:
          goto LABEL_40;
      }
LABEL_134:
      BUG();
    }
LABEL_40:
    if ( (*(_BYTE *)(a1 + 844) & 6) != 0 )
    {
      sub_3E9170(a1, v23, v24);
LABEL_42:
      v30 = *(_DWORD *)(a1 + 844);
      if ( (v30 & 6) != 4 && (v30 & 8) == 0 )
        sub_3EB140(a1, v23, *(_WORD *)(a1 + 842), (v30 & 6) != 6, *(double *)a7.m128_u64);
      return 0;
    }
    if ( !under_debugger )
      sub_37DDE0(0xCE1Du, *(double *)a7.m128_u64);
    goto LABEL_134;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 16) + 25LL) & 0x20) == 0 )
  {
    v28 = *(_WORD *)(a1 + 48);
    if ( (unsigned __int16)(v28 - 164) > 1u && v28 != 140 )
      return 0;
    sub_3E8D60(a1, 0x3Au, 1, 0x3BEA45E214ADDC55LL, 0x3BEA45E214ADDC55LL, 0x3BEA45E214ADDC55LL, 0);
  }
  return 1;
}

