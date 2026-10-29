const char *__fastcall sub_246F0(__int64 a1, int *a2, __int64 a3, __int64 a4, __int64 *a5, double a6)
{
  int v8; // edi
  __int64 v9; // r12
  int v10; // r15d
  __int64 v11; // r14
  __int64 v12; // r13
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  const char *result; // rax
  int v17; // r9d
  __int64 v18; // rax
  int v19; // ecx
  __int64 qword; // rax
  __int64 v21; // rax
  __int64 segm_name; // rax
  char *v23; // rbp
  int v24; // r15d
  __int64 v25; // rbp
  __int64 v26; // rax
  int v27; // ecx
  int v28; // edx
  int v29; // ecx
  int v30; // r8d
  int v31; // r9d
  __int64 v32; // rbp
  unsigned int v35; // [rsp+18h] [rbp-80h]
  unsigned __int16 v36; // [rsp+2Eh] [rbp-6Ah]
  __int64 v37; // [rsp+38h] [rbp-60h] BYREF
  char *s1; // [rsp+40h] [rbp-58h] BYREF
  __int128 v39; // [rsp+48h] [rbp-50h]
  unsigned __int64 v40; // [rsp+58h] [rbp-40h]

  v8 = a2[7];
  v40 = __readfsqword(0x28u);
  if ( !v8 && *(_BYTE *)(*(_QWORD *)(a1 + 16) + 617LL) )
    return "Illegal relocation entry for 64-bit x86";
  v9 = *(_QWORD *)(a2 + 1);
  v10 = *a2;
  v11 = 0;
  v12 = *(_QWORD *)(a2 + 3);
  v35 = 0;
  if ( (unsigned __int8)is_loaded(v9) )
  {
    qword = get_qword(v9);
    v35 = qword;
    v11 = qword;
    if ( *(_WORD *)(a1 + 350) != 0x8000 )
      goto LABEL_5;
  }
  else if ( *(_WORD *)(a1 + 350) != 0x8000 )
  {
    goto LABEL_5;
  }
  *(_WORD *)(a1 + 350) = find_custom_fixup("RIP");
LABEL_5:
  if ( (v10 & 0xF0) == 0 )
  {
    if ( (_BYTE)v10 )
    {
      switch ( (char)v10 )
      {
        case 1:
          goto LABEL_13;
        case 2:
        case 3:
        case 4:
        case 9:
        case 10:
        case 11:
          goto LABEL_31;
        case 6:
        case 7:
        case 8:
          goto LABEL_12;
        case 12:
        case 13:
          v11 = (unsigned __int16)v35;
          v36 = 1;
          break;
        case 14:
        case 15:
          v11 = (unsigned __int8)v35;
          v36 = 13;
          break;
        default:
          goto LABEL_35;
      }
      goto LABEL_14;
    }
    goto LABEL_35;
  }
  if ( (unsigned int)(unsigned __int8)v10 - 24 > 0x12 )
    goto LABEL_35;
  v36 = 12;
  if ( ((1LL << v10) & 0x42BB000000LL) == 0 )
  {
    if ( ((1LL << v10) & 0x60504000000LL) != 0 )
      goto LABEL_31;
    if ( (unsigned __int8)v10 == 37 )
    {
LABEL_12:
      if ( *(_BYTE *)(*(_QWORD *)(a1 + 16) + 617LL) )
      {
LABEL_13:
        v36 = 12;
        goto LABEL_14;
      }
LABEL_31:
      v11 = v35;
      v36 = 4;
      goto LABEL_14;
    }
LABEL_35:
    v36 = 4;
  }
LABEL_14:
  if ( a2[7] )
    v11 = *(_QWORD *)(a4 + 16);
  if ( !(unsigned __int8)sub_24660(a1, (unsigned __int8)v10, v9, v12, v11, a3, a4, (__int64)a5) )
  {
    switch ( (char)v10 )
    {
      case 0:
        return &byte_4;
      case 1:
        LODWORD(v25) = v11 + v12;
        v17 = v36;
        v19 = v11 + v12;
        goto LABEL_53;
      case 2:
        v21 = getseg(v9);
        if ( !v21 || *(_BYTE *)(v21 + 184) == 2 )
          goto LABEL_82;
        s1 = nullptr;
        v39 = 0;
        segm_name = get_segm_name(&s1, v21, 0);
        v23 = s1;
        if ( segm_name <= 0 )
        {
          if ( s1 )
          {
            *(_QWORD *)&v39 = 0;
            qfree(s1);
          }
        }
        else if ( (_QWORD)v39 )
        {
          v24 = strcmp(s1, ".eh_frame");
          if ( v23 )
          {
            *(_QWORD *)&v39 = 0;
            qfree(v23);
          }
          if ( !v24 )
          {
            sub_42050(a1, v9, v11 + v12, 0, 0, v36, v9, 1342177280, 0);
            return nullptr;
          }
        }
        else if ( s1 )
        {
          qfree(s1);
        }
LABEL_82:
        v17 = v36;
        v19 = v11 + v12 - v9;
        LODWORD(v11) = v11 + 4;
        v18 = 0;
        goto LABEL_27;
      case 3:
      case 27:
        result = &byte_5;
        if ( !a3 )
          return result;
        if ( !(unsigned __int8)sub_43F30(v9, v11, 0)
          || !(unsigned __int8)sub_54F40(a1, (unsigned int)&v37, (unsigned int)&s1, v9, v12, a3, (__int64)a5) )
        {
          return nullptr;
        }
        LODWORD(v12) = (_DWORD)s1;
        v18 = v37;
        LODWORD(v11) = 0;
        v17 = v36;
        v19 = (_DWORD)s1 - v37;
        goto LABEL_27;
      case 4:
        v32 = v9 - 1;
        if ( (unsigned int)(unsigned __int8)get_byte(v9 - 1) - 232 >= 2 )
          v32 = v9;
        sub_40E20(a1, v32, 0);
        goto LABEL_82;
      case 5:
        sub_40E20(a1, v9, 2);
        return nullptr;
      case 6:
        LODWORD(v12) = v11 + v12;
        goto LABEL_41;
      case 7:
        v12 += v11;
        if ( (*(_BYTE *)(a1 + 346) & 3) == 0 || (unsigned __int8)sub_19710(a1, a5, 1, v9, v12) )
          goto LABEL_41;
        sub_EAA0(
          (__int64)"%a: could not patch the PLT stub; unexpected PLT format or the file has been modified after linking!\n",
          a6);
        if ( *(_BYTE *)(a1 + 348) )
          return nullptr;
        sub_BFC0((__int64)"Unexpected entries in the PLT stub.\nThe file might have been modified after linking.", v9);
        *(_BYTE *)(a1 + 348) = 1;
        return nullptr;
      case 8:
      case 38:
        LODWORD(v12) = v11;
LABEL_41:
        v17 = v36;
        v19 = v12;
        v18 = 0;
        LODWORD(v11) = 0;
        goto LABEL_27;
      case 9:
      case 28:
      case 41:
      case 42:
        result = &byte_5;
        if ( !a3 )
          return result;
        if ( !(unsigned __int8)sub_43F70(v9, v11, -8, -4) )
          return nullptr;
        if ( *(_WORD *)(*(_QWORD *)(a1 + 16) + 520LL) == 1
          && ((unsigned __int8)(v10 - 41) <= 1u || (_BYTE)v10 == 9)
          && (unsigned __int8)sub_24570(a1, (unsigned __int8)v10, v9, v12) )
        {
          return nullptr;
        }
        if ( (unsigned __int8)sub_54F40(a1, 0, (unsigned int)&s1, v9, v12, a3, (__int64)a5) )
        {
          LODWORD(v12) = (_DWORD)s1;
          v17 = v36;
          v18 = 0;
          v19 = v11 + (_DWORD)s1 - v9;
          LODWORD(v11) = 0;
LABEL_27:
          sub_42050(a1, v9, v12, v19, v11, v17, v18, 0, 0);
        }
        break;
      case 10:
        LODWORD(v25) = v11 + v12;
        if ( (unsigned __int64)(v11 + v12) >> 32 )
          sub_40E00(v9, v11 + v12, v13, v14, v15);
        v17 = v36;
        v19 = v11 + v12;
        goto LABEL_53;
      case 11:
        v25 = (int)v11 + v12;
        if ( (int)v25 != v25 )
          sub_40E00(v9, (int)v11 + v12, v13, v14, v15);
        v17 = 16;
        v19 = v11 + v12;
        goto LABEL_53;
      case 12:
        v25 = v11 + v12;
        if ( (unsigned __int64)(v11 + v12) > 0xFFFF )
          goto LABEL_75;
        goto LABEL_76;
      case 13:
        LODWORD(v11) = (__int16)v11;
        v25 = (__int16)v11 + v12;
        if ( (__int16)v25 != v25 )
LABEL_75:
          sub_40E00(v9, v25, v13, v14, v15);
LABEL_76:
        v17 = v36;
        v19 = v35 ^ (unsigned __int16)(v25 ^ v35);
        goto LABEL_53;
      case 14:
        v25 = v11 + v12;
        if ( (unsigned __int64)(v11 + v12) <= 0xFF )
          goto LABEL_52;
        goto LABEL_59;
      case 15:
        LODWORD(v11) = (char)v11;
        v25 = (char)v11 + v12;
        if ( (char)v25 != v25 )
LABEL_59:
          sub_40E00(v9, v25, v13, v14, v15);
LABEL_52:
        v17 = v36;
        v19 = v35 ^ (unsigned __int8)(v25 ^ v35);
LABEL_53:
        v18 = 0;
        if ( *(_BYTE *)(*(_QWORD *)(a1 + 8) + 529LL) == 1 )
        {
          LODWORD(v12) = v25;
          LODWORD(v11) = 0;
        }
        goto LABEL_27;
      case 25:
        v26 = sub_4A750(a5 + 2, a5[1], 1);
        if ( !v26 )
          return nullptr;
        sub_424F0(a1, v9, v12, v11, 12, 0, v26, 0);
        return nullptr;
      case 29:
        v12 = sub_4A750(a5 + 2, a5[1], 1);
        if ( !v12 )
          return nullptr;
        v17 = v36;
        v27 = v11 - v9;
        v18 = v9 - v11;
        LODWORD(v11) = 0;
        v19 = v12 + v27;
        goto LABEL_27;
      case 37:
        v12 += v11;
        sub_40E20(a1, v9, 4);
        LODWORD(v11) = 0;
        sub_1A230(a1, 1, v9, v12, (__int64)a5);
        sub_47DB0(a1, v12, v28, v29, v30, v31);
        v17 = v36;
        v19 = v12;
        v18 = 0;
        goto LABEL_27;
      default:
        return (_BYTE *)(&dword_0 + 2);
    }
  }
  return nullptr;
}
