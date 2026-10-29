_BOOL8 __fastcall sub_3EE9B0(
        __int64 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  _BOOL8 result; // rax
  __int64 v10; // rdx
  int v11; // eax
  int v12; // ecx
  int v13; // r12d
  int v14; // r14d
  __int64 v15; // r13
  __int64 v16; // rbp
  signed int v17; // r12d
  char **v18; // rax
  int v19; // eax
  int v20; // eax
  int v21; // r10d
  int v22; // ebp
  __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // r12
  int v26; // ecx
  char v27; // al
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __m128 v31; // xmm4
  __m128 v32; // xmm5
  int v33; // eax
  int v34; // edx
  int v35; // ecx
  __int64 v36; // r14
  char v37; // cl
  __int64 v38; // rax
  int v39; // edx
  char v40; // dl
  __int64 v41; // rax
  __int64 v42; // rcx
  int v43; // eax
  __int64 v44; // rbp
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rax
  int v48; // [rsp+1Ch] [rbp-4Ch]
  int v49; // [rsp+24h] [rbp-44h] BYREF
  unsigned __int64 v50; // [rsp+28h] [rbp-40h]

  v50 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 384) )
    return 0;
  if ( (unsigned __int8)sub_3E8230(a1, *(double *)a2.m128_u64) )
  {
    if ( *(_WORD *)(a1 + 840) && !*(_BYTE *)(a1 + 145) && (*(_BYTE *)(a1 + 844) & 8) != 0 )
    {
      v19 = *(_DWORD *)(a1 + 136);
      *(__m128i *)(a1 + 144) = _mm_loadu_si128((const __m128i *)(a1 + 104));
      a2 = (__m128)_mm_loadu_si128((const __m128i *)(a1 + 120));
      *(_DWORD *)(a1 + 176) = v19;
      *(__m128 *)(a1 + 160) = a2;
    }
  }
  else
  {
    *(_WORD *)(a1 + 840) = 0;
  }
  v10 = *(_QWORD *)(*(_QWORD *)(a1 + 800) + 8LL);
  v11 = *(unsigned __int16 *)(a1 + 48);
  v12 = *(_DWORD *)(v10 + 104);
  if ( v12 <= v11 && v11 < *(_DWORD *)(v10 + 108) )
  {
    v14 = *(_DWORD *)(*(_QWORD *)(v10 + 112) + 16LL * (v11 - v12) + 8);
    v13 = v14 & 0x400;
    if ( (v14 & 0x100) != 0 || (v15 = -1, (*(_BYTE *)(a1 + 65) & 0xFD) == 1) )
      v15 = (int)sub_3EC1D0(a1, 0, 0, *(double *)a2.m128_u64);
    if ( (v14 & 0x200) != 0 )
      goto LABEL_9;
LABEL_8:
    if ( (*(_BYTE *)(a1 + 105) & 0xFD) == 1 )
      goto LABEL_9;
    goto LABEL_27;
  }
  if ( (*(_BYTE *)(a1 + 65) & 0xFD) == 1 )
  {
    v13 = 0;
    v14 = 0;
    v15 = (int)sub_3EC1D0(a1, 0, 0, *(double *)a2.m128_u64);
    goto LABEL_8;
  }
  v13 = 0;
  v14 = 0;
  v15 = -1;
  if ( (*(_BYTE *)(a1 + 105) & 0xFD) == 1 )
    goto LABEL_9;
LABEL_27:
  if ( (*(_BYTE *)(a1 + 844) & 6) == 0 )
  {
    v16 = -1;
    goto LABEL_10;
  }
LABEL_9:
  v16 = (int)sub_3EC1D0(a1, 1, 0, *(double *)a2.m128_u64);
LABEL_10:
  if ( v13 || (v17 = -1, (*(_BYTE *)(a1 + 145) & 0xFD) == 1) )
    v17 = sub_3EC1D0(a1, 2, 0, *(double *)a2.m128_u64);
  if ( !*(_WORD *)(a1 + 840) )
    goto LABEL_16;
  v18 = sub_3E7370(a1);
  if ( v18 )
  {
    if ( (unsigned __int8)sub_3E95A0(a1, (__int64)v18, v15, v16, v17) )
      return 0;
LABEL_16:
    sub_3EE680((_QWORD *)a1, v14, v15, v16, v17);
    return 0;
  }
  if ( (unsigned __int8)sub_3E8320(a1) )
    return (*(_BYTE *)(*(_QWORD *)(a1 + 16) + 25LL) & 0x20) != 0;
  v20 = sub_CB3B0();
  if ( v20 != 6 )
  {
    if ( v20 )
      return 0;
    v21 = v16;
    if ( *(_BYTE *)(a1 + 145) )
      v21 = v17;
    v49 = v21;
    switch ( *(_WORD *)(a1 + 48) )
    {
      case 2:
      case 3:
        sub_3E8420(a1, 0x15u, *(unsigned __int16 *)(a1 + 842), (int)v16, (int)v15, v17, 0);
        goto LABEL_38;
      case 4:
      case 0x15:
      case 0x1F:
      case 0x33:
        if ( *(_BYTE *)(a1 + 65) != 5 )
          goto LABEL_16;
        sub_3E8990(a1, v16, *(double *)a2.m128_u64);
        goto LABEL_38;
      case 5:
        v33 = sub_3E6370(*(_QWORD *)(a1 + 832), *(double *)a2.m128_u64);
        v34 = *(unsigned __int16 *)(a1 + 842);
        v49 = v33;
        sub_3E8420(a1, 0x14u, v34, (int)v16, (int)v15, v33, 0);
        goto LABEL_38;
      case 7:
        sub_3E8420(a1, 0x23u, *(unsigned __int16 *)(a1 + 842), v15, v16, 0, 0);
        sub_3E8420(a1, 0x1Eu, *(unsigned __int16 *)(a1 + 842), v15, v16, 3, 0);
        sub_3E8420(a1, 0xDu, *(unsigned __int16 *)(a1 + 842), v15, v16, v16, 0);
        goto LABEL_38;
      case 8:
        sub_3E8420(a1, 0x23u, *(unsigned __int16 *)(a1 + 842), v16, v15, 0, 0);
        sub_3E8420(a1, 0x1Eu, *(unsigned __int16 *)(a1 + 842), v16, v15, 3, 0);
        sub_3E8420(a1, 0xDu, *(unsigned __int16 *)(a1 + 842), v16, v15, v16, 0);
        goto LABEL_38;
      case 0x13:
        sub_3E8420(a1, 0x1Cu, *(unsigned __int16 *)(a1 + 842), v16, v15, 0, 0);
        sub_3E8420(a1, 0x17u, *(unsigned __int16 *)(a1 + 842), v16, v15, v17, 0);
        goto LABEL_38;
      case 0x14:
        sub_3E8420(a1, 0x1Bu, *(unsigned __int16 *)(a1 + 842), v16, v15, 0, 0);
        sub_3E8420(a1, 0x16u, *(unsigned __int16 *)(a1 + 842), v16, v15, v17, 0);
        goto LABEL_38;
      case 0x16:
        sub_3EDAB0(a1, v16, *(double *)a2.m128_u64);
        goto LABEL_38;
      case 0x1B:
        sub_3E8420(a1, 0x1Cu, *(unsigned __int16 *)(a1 + 842), v16, v15, 0, 0);
        sub_3E8420(a1, 0x18u, *(unsigned __int16 *)(a1 + 842), v16, v15, v17, 0);
        goto LABEL_38;
      case 0x1D:
      case 0x1E:
        sub_3E8420(a1, 0x13u, *(unsigned __int16 *)(a1 + 842), (int)v16, (int)v15, v17, 0);
        goto LABEL_38;
      case 0x20:
        sub_3E8420(a1, 7u, *(unsigned __int16 *)(a1 + 842), (int)v15, 0x3BEA45E214ADDC55LL, (int)v16, 0);
        goto LABEL_38;
      case 0x21:
        goto LABEL_38;
      case 0x22:
      case 0x23:
      case 0x56:
      case 0x57:
        sub_3ECE80(a1, v15, v16, v17, *(double *)a2.m128_u64);
        goto LABEL_38;
      case 0x24:
      case 0x25:
        goto LABEL_50;
      case 0x26:
        sub_3E8420(a1, 4u, *(unsigned __int16 *)(a1 + 842), (int)v15, 0x3BEA45E214ADDC55LL, (int)v16, 0);
        goto LABEL_38;
      case 0x2B:
        goto LABEL_73;
      case 0x2C:
        v40 = is_call_insn();
        v41 = *(_QWORD *)(a1 + 832);
        v42 = *(int *)(v41 + 64);
        v43 = *(_DWORD *)(v41 + 84);
        if ( v40 )
          sub_3E8420(a1, 0x39u, 0, v42, (int)v15, 0x3BEA45E214ADDC55LL, v43);
        else
          sub_3E8420(a1, 0x36u, 0, 0x3BEA45E214ADDC55LL, v42, (int)v15, v43);
        goto LABEL_38;
      case 0x2D:
        v37 = is_call_insn();
        v38 = *(_QWORD *)(a1 + 832);
        v39 = *(_DWORD *)(v38 + 84);
        if ( v37 )
        {
          if ( *(_BYTE *)(a1 + 65) == 7 )
            sub_3E8420(a1, 0x38u, v39, *(_QWORD *)(a1 + 80), 0x3BEA45E214ADDC55LL, 0x3BEA45E214ADDC55LL, 0);
          else
            sub_3E8420(a1, 0x39u, v39, *(int *)(v38 + 64), (int)v15, 0x3BEA45E214ADDC55LL, v39);
        }
        else
        {
          sub_1D14D0(
            a1,
            3u,
            v39,
            *(_QWORD *)(a1 + 40) + *(unsigned __int16 *)(a1 + 50),
            0x3BEA45E214ADDC55LL,
            (int)v16,
            1);
LABEL_73:
          if ( !(unsigned __int8)sub_1D1380(a1) )
            sub_3E8420(
              a1,
              0x37u,
              *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL),
              *(_QWORD *)(a1 + 80),
              0x3BEA45E214ADDC55LL,
              0x3BEA45E214ADDC55LL,
              0);
        }
        goto LABEL_38;
      case 0x30:
      case 0x58:
      case 0x59:
      case 0x5A:
      case 0x5B:
      case 0x6E:
      case 0x6F:
        sub_3EC9C0(a1, &v49, v15, v16, v17, *(double *)a2.m128_u64);
        goto LABEL_38;
      case 0x32:
        v36 = (int)sub_3E6370(*(_QWORD *)(a1 + 832), *(double *)a2.m128_u64);
        sub_3E8420(a1, 0x23u, *(unsigned __int16 *)(a1 + 842), v16, v15, 0, 0);
        sub_3E8420(a1, 0x1Eu, *(unsigned __int16 *)(a1 + 842), v16, v15, 3, 0);
        sub_3E8420(a1, 0x21u, *(unsigned __int16 *)(a1 + 842), v16, v15, 1, 0);
        sub_3E8420(a1, 0xDu, *(unsigned __int16 *)(a1 + 842), v16, v15, v36, 0);
        sub_3E8420(a1, 0x1Du, *(unsigned __int16 *)(a1 + 842), v36, 0x3BEA45E214ADDC55LL, 2, 0);
        sub_3E62F0(*(_QWORD *)(a1 + 832), v36);
        goto LABEL_38;
      case 0x34:
      case 0x35:
      case 0x36:
      case 0x37:
      case 0x38:
      case 0x39:
      case 0x3A:
      case 0x3B:
      case 0x3C:
      case 0x3D:
      case 0x3E:
      case 0x3F:
      case 0x40:
      case 0x41:
      case 0x42:
      case 0x43:
        sub_3EDB30(a1, *(double *)a2.m128_u64);
        goto LABEL_38;
      case 0x44:
      case 0x45:
        sub_3E8420(a1, 0x14u, *(unsigned __int16 *)(a1 + 842), (int)v16, (int)v15, v17, 0);
        goto LABEL_38;
      case 0x46:
      case 0x47:
        sub_3E8420(a1, 0x19u, *(unsigned __int16 *)(a1 + 842), v16, v15, 0, 0);
        sub_3E8420(a1, 0x1Au, *(unsigned __int16 *)(a1 + 842), v16, v15, 3, 0);
LABEL_50:
        sub_3E8420(a1, 0xCu, *(unsigned __int16 *)(a1 + 842), v16, v15, v17, 0);
        goto LABEL_38;
      case 0x49:
      case 0x4B:
        sub_3EC660(
          a1,
          *(unsigned __int16 *)(a1 + 842),
          *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL),
          v15,
          v15,
          0,
          *(double *)a2.m128_u64);
        goto LABEL_38;
      case 0x4A:
      case 0x4C:
        sub_3EC660(
          a1,
          *(unsigned __int16 *)(a1 + 842),
          *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL),
          v15,
          v15,
          1u,
          *(double *)a2.m128_u64);
        goto LABEL_38;
      case 0x4D:
      case 0x4E:
        if ( (_DWORD)v16 == -1 )
        {
          sub_3E8E20(a1, 0, a1 + 104, v15, *(double *)a2.m128_u64);
          if ( *(_WORD *)(a1 + 48) == 78 )
            sub_3E8420(
              a1,
              0x36u,
              *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL),
              0x3BEA45E214ADDC55LL,
              *(int *)(*(_QWORD *)(a1 + 832) + 64LL),
              v17,
              *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL));
          goto LABEL_38;
        }
        if ( !under_debugger )
          sub_37CFE0(0xCEDDu, *(double *)a2.m128_u64);
        break;
      case 0x4F:
        if ( *(_BYTE *)(a1 + 65) != 7 )
          goto LABEL_70;
        sub_3E8420(
          a1,
          0x3Du,
          *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL),
          0x3BEA45E214ADDC55LL,
          0x3BEA45E214ADDC55LL,
          *(int *)(*(_QWORD *)(a1 + 832) + 480LL),
          0);
        sub_3E8420(
          a1,
          0x3Du,
          *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL),
          0x3BEA45E214ADDC55LL,
          0x3BEA45E214ADDC55LL,
          *(int *)(*(_QWORD *)(a1 + 832) + 484LL),
          0);
        sub_3E8420(
          a1,
          0x38u,
          *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL),
          *(_QWORD *)(a1 + 80),
          0x3BEA45E214ADDC55LL,
          0x3BEA45E214ADDC55LL,
          0);
        goto LABEL_38;
      case 0x52:
        sub_3E8420(
          a1,
          0x36u,
          0,
          0x3BEA45E214ADDC55LL,
          *(int *)(*(_QWORD *)(a1 + 832) + 64LL),
          *(int *)(*(_QWORD *)(a1 + 832) + 480LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL));
        goto LABEL_38;
      case 0x53:
        sub_3EDC20(a1, v16, *(double *)a2.m128_u64);
        goto LABEL_38;
      case 0x54:
      case 0x55:
        if ( (_DWORD)v15 == -1 )
        {
          sub_3E8E20(a1, 1u, a1 + 64, v16, *(double *)a2.m128_u64);
          if ( *(_WORD *)(a1 + 48) == 84 )
            sub_3E8420(
              a1,
              4u,
              *(unsigned __int16 *)(a1 + 842),
              v17,
              0x3BEA45E214ADDC55LL,
              **(int **)(*(_QWORD *)(a1 + 832) + 552LL),
              0);
          goto LABEL_38;
        }
        if ( !under_debugger )
          sub_37CFE0(0xCEDEu, *(double *)a2.m128_u64);
        break;
      case 0x5F:
        if ( (v14 & 0x800) != 0 || (v35 = -1, (*(_BYTE *)(a1 + 185) & 0xFD) == 1) )
          v35 = sub_3EC1D0(a1, 3, 0, *(double *)a2.m128_u64);
        sub_3EDD40(a1, v16, v17, v35, *(double *)a2.m128_u64);
        goto LABEL_38;
      case 0x64:
      case 0x68:
        if ( (v14 & 0x800) != 0 || (v26 = -1, (*(_BYTE *)(a1 + 185) & 0xFD) == 1) )
          v26 = sub_3EC1D0(a1, 3, 0, *(double *)a2.m128_u64);
        sub_3EE060(a1, v16, v17, v26, *(double *)a2.m128_u64);
        goto LABEL_38;
      case 0x65:
        v48 = v21;
        sub_3E8420(a1, 4u, *(unsigned __int16 *)(a1 + 842), (int)v15, 0x3BEA45E214ADDC55LL, v16, 0);
        sub_3E8420(a1, 0x21u, 2, v48, **(int **)(*(_QWORD *)(a1 + 832) + 528LL), 0, 0);
        sub_3E8420(a1, 0x21u, 2, v48, **(int **)(*(_QWORD *)(a1 + 832) + 528LL), 1, 0);
        sub_3E8420(a1, 0x1Du, *(unsigned __int16 *)(a1 + 842), v16, 0x3BEA45E214ADDC55LL, 2, 0);
        goto LABEL_38;
      case 0x66:
      case 0x67:
        v27 = sub_3ED200(a1, v15, v16, v17, *(double *)a2.m128_u64) ^ 1;
        goto LABEL_69;
      case 0xCC:
        v27 = sub_3E86B0(a1, v15, v16, *(double *)a2.m128_u64) ^ 1;
LABEL_69:
        if ( !v27 )
          goto LABEL_38;
LABEL_70:
        sub_3EE680((_QWORD *)a1, v14, v15, v16, v17);
        sub_32B650(*(_QWORD **)(a1 + 8), *(_QWORD *)(a1 + 40), 0x31u, v28, v29, v30, a2, a3, a4, a5, v31, v32, a8, a9);
        return 0;
      case 0xCD:
        if ( *(_WORD *)(a1 + 842) == 4 )
        {
          sub_1D19B0(a1, 0, 2, v16, v15, v17);
          v44 = (int)sub_3E6370(*(_QWORD *)(a1 + 832), *(double *)a2.m128_u64);
          sub_1D14D0(a1, 3u, 1, 1, 0x3BEA45E214ADDC55LL, v44, 2);
          sub_3E8420(a1, 0x14u, 1, v44, v17, 0, 0);
          goto LABEL_38;
        }
        if ( !under_debugger )
          sub_37CFE0(0xCEDFu, *(double *)a2.m128_u64);
        return result;
      case 0xCE:
        sub_3E8C70(a1, v15, *(double *)a2.m128_u64);
        goto LABEL_38;
      case 0xD6:
      case 0xD7:
        sub_3E9230(a1, a1 + 64, *(double *)a2.m128_u64);
        goto LABEL_38;
      default:
        if ( (*(_BYTE *)(a1 + 844) & 6) != 0 )
        {
          sub_3EC730(a1, v15, v16, *(double *)a2.m128_u64);
LABEL_38:
          if ( (*(_BYTE *)(a1 + 844) & 0x10) != 0 )
          {
            v22 = v49;
            if ( v49 == -1 )
              goto LABEL_43;
            v23 = *(_QWORD *)(a1 + 832);
            v24 = **(int **)(v23 + 528);
            if ( v49 == (_DWORD)v24 )
            {
              v45 = *(_QWORD *)(v23 + 584);
              if ( !v45 )
                sub_3E4140(*(double *)a2.m128_u64);
              v25 = *(int *)(*(_QWORD *)(v23 + 576) + 4 * v45 - 4);
              v46 = v49;
              *(_QWORD *)(v23 + 584) = v45 - 1;
              v22 = v25;
              sub_1D14D0(a1, 4u, *(unsigned __int16 *)(a1 + 842), v46, 0x3BEA45E214ADDC55LL, v25, 0);
              v47 = *(_QWORD *)(a1 + 832);
              v49 = v25;
              v24 = **(int **)(v47 + 528);
            }
            else
            {
              v25 = v49;
            }
            sub_3E8420(a1, 0x21u, *(unsigned __int16 *)(a1 + 842), v25, v24, 1, 0);
            sub_3E8420(a1, 0x1Du, *(unsigned __int16 *)(a1 + 842), v25, 0x3BEA45E214ADDC55LL, 2, 0);
            sub_3E62F0(*(_QWORD *)(a1 + 832), v22);
            if ( (*(_BYTE *)(a1 + 844) & 0x10) != 0 )
LABEL_43:
              sub_1D14D0(a1, 3u, 1, 0, 0x3BEA45E214ADDC55LL, 3, 4);
          }
          return 0;
        }
        if ( !under_debugger )
          sub_37CFE0(0xCEE0u, *(double *)a2.m128_u64);
        return result;
    }
    BUG();
  }
  sub_3E8420(a1, 0x3Au, 1, 0x3BEA45E214ADDC55LL, 0x3BEA45E214ADDC55LL, 0x3BEA45E214ADDC55LL, 0);
  return 1;
}

