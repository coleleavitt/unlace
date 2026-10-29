unsigned __int16 *__fastcall sub_49BC0(unsigned __int64 a1, unsigned __int16 *a2)
{
  unsigned __int64 v2; // r11
  unsigned __int16 *result; // rax
  unsigned __int16 v4; // dx
  unsigned __int16 *v5; // rdx
  unsigned __int16 *v6; // rdx
  __int64 v7; // rax
  _QWORD v8[3]; // [rsp+0h] [rbp-18h] BYREF

  v8[1] = __readfsqword(0x28u);
  if ( !a2 )
    return nullptr;
  v2 = a1;
  result = a2;
  while ( 1 )
  {
LABEL_3:
    v4 = *result;
    if ( !*result )
      return nullptr;
    if ( v4 <= 0xFFC6u )
      return result;
    if ( v4 >= 0xFFC8u )
      break;
    v8[0] = (v2 >> 10) & 0x7FF;
    result = (unsigned __int16 *)sub_49A80((__int64)&unk_60100 - 160, (__int64)&unk_60100, (unsigned int *)v8);
LABEL_8:
    if ( result == v5 )
      return nullptr;
  }
  switch ( v4 )
  {
    case 0xFFC8:
      result = (unsigned __int16 *)&unk_5F7E0;
      if ( (v2 & 0x40000) != 0 )
        return nullptr;
      return result;
    case 0xFFC9:
      v8[0] = (v2 >> 1) & 1;
      result = (unsigned __int16 *)sub_49A80((__int64)&unk_5E670 - 80, (__int64)&unk_5E670, (unsigned int *)v8);
      goto LABEL_8;
    case 0xFFCA:
      v8[0] = (v2 >> 18) & 7;
      result = (unsigned __int16 *)sub_49A80((__int64)&unk_5E7C0 - 320, (__int64)&unk_5E7C0, (unsigned int *)v8);
      goto LABEL_8;
    case 0xFFCB:
      v8[0] = (unsigned __int16)v2 >> 14;
      result = (unsigned __int16 *)sub_49A80((__int64)&unk_5E838 - 120, (__int64)&unk_5E838, (unsigned int *)v8);
      goto LABEL_8;
    case 0xFFCC:
      v8[0] = v2 & 3;
      result = (unsigned __int16 *)sub_49A80((__int64)&unk_5E950 - 80, (__int64)&unk_5E950, (unsigned int *)v8);
      goto LABEL_8;
    case 0xFFCD:
      v8[0] = v2 & 3;
      result = (unsigned __int16 *)sub_49A80((__int64)&unk_5E9B0 - 80, (__int64)&unk_5E9B0, (unsigned int *)v8);
      goto LABEL_8;
    case 0xFFCE:
      result = (unsigned __int16 *)&unk_60C20;
      if ( (~(_DWORD)v2 & 0x3E00000) == 0 )
        return (unsigned __int16 *)&unk_60C60;
      return result;
    case 0xFFCF:
      v8[0] = v2 & 3;
      result = (unsigned __int16 *)sub_49A80((__int64)&unk_5EBF0 - 80, (__int64)&unk_5EBF0, (unsigned int *)v8);
      goto LABEL_8;
    case 0xFFD0:
      v8[0] = v2 & 3;
      result = (unsigned __int16 *)sub_49A80((__int64)&unk_5EC50 - 80, (__int64)&unk_5EC50, (unsigned int *)v8);
      goto LABEL_8;
    case 0xFFD1:
      result = (unsigned __int16 *)&unk_60CA0;
      if ( (~(_DWORD)v2 & 0x3E00000) == 0 )
        return (unsigned __int16 *)&unk_60CE0;
      return result;
    case 0xFFD2:
      v8[0] = (v2 >> 11) & 1;
      result = (unsigned __int16 *)sub_49A80((__int64)&unk_5E890 - 80, (__int64)&unk_5E890, (unsigned int *)v8);
      goto LABEL_8;
    case 0xFFD3:
      v8[0] = (v2 >> 11) & 1;
      result = (unsigned __int16 *)sub_49A80((__int64)&unk_5E8F0 - 80, (__int64)&unk_5E8F0, (unsigned int *)v8);
      goto LABEL_8;
    case 0xFFD4:
      v8[0] = (v2 >> 11) & 0xF;
      result = (unsigned __int16 *)sub_49A80((__int64)&unk_5EBA0 - 480, (__int64)&unk_5EBA0, (unsigned int *)v8);
      goto LABEL_8;
    case 0xFFD5:
      v8[0] = (v2 >> 11) & 0xF;
      result = (unsigned __int16 *)sub_49A80((__int64)&unk_5EEA8 - 200, (__int64)&unk_5EEA8, (unsigned int *)v8);
      goto LABEL_8;
    case 0xFFD6:
      v8[0] = (v2 >> 11) & 0xF;
      result = (unsigned __int16 *)sub_49A80((__int64)&unk_5EDC8 - 360, (__int64)&unk_5EDC8, (unsigned int *)v8);
      goto LABEL_8;
    case 0xFFD7:
      v8[0] = (v2 >> 8) & 7;
      result = (unsigned __int16 *)sub_49A80((__int64)&unk_61048 - 200, (__int64)&unk_61048, (unsigned int *)v8);
      goto LABEL_8;
    case 0xFFD8:
      v8[0] = v2 & 9;
      result = (unsigned __int16 *)sub_49A80((__int64)&unk_5EFB8 - 120, (__int64)&unk_5EFB8, (unsigned int *)v8);
      goto LABEL_8;
    case 0xFFD9:
      result = (unsigned __int16 *)&unk_5E4A0;
      if ( (v2 & 0x40) == 0 )
        return nullptr;
      return result;
    case 0xFFDA:
      v8[0] = (v2 >> 2) & 3;
      result = (unsigned __int16 *)sub_49A80((__int64)&unk_5F038 - 120, (__int64)&unk_5F038, (unsigned int *)v8);
      goto LABEL_8;
    case 0xFFDB:
      if ( (v2 & 2) != 0 )
        return nullptr;
      v8[0] = (v2 >> 2) & 3;
      result = (unsigned __int16 *)sub_49A80((__int64)&unk_5F0E0 - 160, (__int64)&unk_5F0E0, (unsigned int *)v8);
      goto LABEL_8;
    case 0xFFDC:
      v8[0] = v2 & 1;
      result = (unsigned __int16 *)sub_49A80((__int64)&unk_5F130 - 80, (__int64)&unk_5F130, (unsigned int *)v8);
      goto LABEL_8;
    case 0xFFDD:
      v8[0] = (v2 >> 3) & 0x21;
      result = (unsigned __int16 *)sub_49A80((__int64)&unk_5F190 - 80, (__int64)&unk_5F190, (unsigned int *)v8);
      goto LABEL_8;
    case 0xFFDE:
      v8[0] = (v2 >> 3) & 1;
      result = (unsigned __int16 *)sub_49A80((__int64)&unk_5F1F0 - 80, (__int64)&unk_5F1F0, (unsigned int *)v8);
      goto LABEL_8;
    case 0xFFDF:
      v8[0] = (v2 >> 8) & 1;
      result = (unsigned __int16 *)sub_49A80((__int64)&unk_5F250 - 80, (__int64)&unk_5F250, (unsigned int *)v8);
      goto LABEL_8;
    case 0xFFE0:
      result = (unsigned __int16 *)&unk_5E5E0;
      if ( (v2 & 4) != 0 )
        return nullptr;
      return result;
    case 0xFFE1:
      if ( (v2 & 0x3E0) != 0 )
        return (unsigned __int16 *)&unk_5E5A0;
      v8[0] = (v2 >> 3) & 3;
      result = (unsigned __int16 *)sub_49A80((__int64)&unk_5EF38 - 120, (__int64)&unk_5EF38, (unsigned int *)v8);
      goto LABEL_8;
    case 0xFFE2:
      if ( (v2 & 0xF) == 0 )
      {
        v8[0] = (v2 >> 4) & 1;
        result = (unsigned __int16 *)sub_49A80((__int64)&unk_5F2B0 - 80, (__int64)&unk_5F2B0, (unsigned int *)v8);
        goto LABEL_8;
      }
      result = (unsigned __int16 *)&unk_5E420;
      if ( ((v2 >> 4) & 7) < ((v2 >> 7) & 7) )
        return (unsigned __int16 *)&unk_5E460;
      return result;
    case 0xFFE3:
      v8[0] = v2 & 1;
      result = (unsigned __int16 *)sub_49A80((__int64)&unk_60F70 - 80, (__int64)&unk_60F70, (unsigned int *)v8);
      goto LABEL_8;
    case 0xFFE4:
      result = (unsigned __int16 *)&unk_5E560;
      if ( (v2 & 8) != 0 )
      {
        result = (unsigned __int16 *)&unk_5E4E0;
        if ( (v2 & 0x3E0) == 0 )
          return (unsigned __int16 *)&unk_5E520;
      }
      return result;
    case 0xFFE5:
      v8[0] = (unsigned __int16)v2 >> 14;
      result = (unsigned __int16 *)sub_49A80((__int64)&unk_60C18 - 120, (__int64)&unk_60C18, (unsigned int *)v8);
      goto LABEL_8;
    case 0xFFE6:
      result = (unsigned __int16 *)&unk_60D20;
      if ( (~(_DWORD)v2 & 0x3E00000) == 0 )
        return (unsigned __int16 *)&unk_60D60;
      return result;
    case 0xFFE7:
      v8[0] = (unsigned __int16)v2 >> 12;
      result = (unsigned __int16 *)sub_49A80((__int64)&unk_60F08 - 360, (__int64)&unk_60F08, (unsigned int *)v8);
      goto LABEL_8;
    case 0xFFE8:
      v8[0] = (unsigned __int16)v2 >> 12;
      result = (unsigned __int16 *)sub_49A80((__int64)&unk_5F760 - 480, (__int64)&unk_5F760, (unsigned int *)v8);
      goto LABEL_8;
    case 0xFFE9:
      v8[0] = (v2 >> 5) & 0xF;
      result = (unsigned __int16 *)sub_49A80((__int64)&unk_5F4C0 - 160, (__int64)&unk_5F4C0, (unsigned int *)v8);
      goto LABEL_8;
    case 0xFFEA:
      if ( (v2 & 0x3E00000) == 0 )
      {
        v8[0] = v2 & 0x1F;
        result = (unsigned __int16 *)sub_49A80((__int64)&unk_5F420 - 160, (__int64)&unk_5F420, (unsigned int *)v8);
        if ( result != v6 )
          goto LABEL_3;
      }
      return (unsigned __int16 *)&unk_5F340;
    case 0xFFEB:
      result = (unsigned __int16 *)&unk_5F4C0;
      if ( (v2 & 0x820) != 0 )
        return nullptr;
      return result;
    case 0xFFEC:
      result = (unsigned __int16 *)&unk_5F500;
      if ( (v2 & 0x820) != 0 )
        return nullptr;
      return result;
    case 0xFFED:
      result = (unsigned __int16 *)&unk_5F540;
      if ( (v2 & 0x820) != 0 )
        return nullptr;
      return result;
    case 0xFFEE:
      if ( (v2 & 0x100000) != 0 )
        return nullptr;
      v8[0] = v2 & 3;
      result = (unsigned __int16 *)sub_49A80((__int64)&unk_5F338 - 120, (__int64)&unk_5F338, (unsigned int *)v8);
      goto LABEL_8;
    case 0xFFEF:
      v8[0] = BYTE4(v2) & 0x1F;
      result = (unsigned __int16 *)sub_49A80((__int64)&unk_60B90 - 240, (__int64)&unk_60B90, (unsigned int *)v8);
      goto LABEL_8;
    case 0xFFF0:
      result = (unsigned __int16 *)&unk_5E3A0;
      if ( (v2 & 0x3E00000) == 0 )
        return (unsigned __int16 *)&unk_5E3E0;
      return result;
    case 0xFFF1:
      v8[0] = (unsigned __int16)v2 >> 12;
      result = (unsigned __int16 *)sub_49A80((__int64)&unk_60A98 - 120, (__int64)&unk_60A98, (unsigned int *)v8);
      goto LABEL_8;
    case 0xFFF2:
      v8[0] = v2 & 1;
      result = (unsigned __int16 *)sub_49A80((__int64)&unk_60828 - 40, (__int64)&unk_60828, (unsigned int *)v8);
      goto LABEL_8;
    case 0xFFF3:
      v8[0] = v2 & 1;
      result = (unsigned __int16 *)sub_49A80((__int64)&unk_60890 - 80, (__int64)&unk_60890, (unsigned int *)v8);
      goto LABEL_8;
    case 0xFFF4:
      v8[0] = (v2 >> 18) & 7;
      result = (unsigned __int16 *)sub_49A80((__int64)&unk_60990 - 240, (__int64)&unk_60990, (unsigned int *)v8);
      goto LABEL_8;
    case 0xFFF5:
      v8[0] = v2 & 3;
      result = (unsigned __int16 *)sub_49A80((__int64)&unk_60A18 - 120, (__int64)&unk_60A18, (unsigned int *)v8);
      goto LABEL_8;
    case 0xFFF6:
      v8[0] = (v2 >> 25) & 1;
      result = (unsigned __int16 *)sub_49A80((__int64)&unk_5F8D0 - 80, (__int64)&unk_5F8D0, (unsigned int *)v8);
      goto LABEL_8;
    case 0xFFF7:
      v8[0] = (v2 >> 16) & 1;
      result = (unsigned __int16 *)sub_49A80((__int64)&unk_5F9D0 - 80, (__int64)&unk_5F9D0, (unsigned int *)v8);
      goto LABEL_8;
    case 0xFFF8:
      v7 = v2 & 0x1C0;
      if ( v7 == 256 )
      {
        v8[0] = (unsigned __int16)v2 >> 9;
        result = (unsigned __int16 *)sub_49A80((__int64)&unk_5FC90 - 80, (__int64)&unk_5FC90, (unsigned int *)v8);
      }
      else
      {
        if ( v7 != 320 )
          return nullptr;
        v8[0] = (unsigned __int16)v2 >> 9;
        result = (unsigned __int16 *)sub_49A80((__int64)&unk_5FC38 - 600, (__int64)&unk_5FC38, (unsigned int *)v8);
      }
      goto LABEL_8;
    case 0xFFF9:
      v8[0] = (v2 >> 6) & 0x1F;
      result = (unsigned __int16 *)sub_49A80((__int64)&unk_5FEA8 - 520, (__int64)&unk_5FEA8, (unsigned int *)v8);
      goto LABEL_8;
    case 0xFFFA:
      v8[0] = (v2 >> 10) & 7;
      result = (unsigned __int16 *)sub_49A80((__int64)&unk_60050 - 240, (__int64)&unk_60050, (unsigned int *)v8);
      goto LABEL_8;
    case 0xFFFB:
      if ( (v2 & 0xF800) != 0 )
        return (unsigned __int16 *)&unk_5F7A0;
      v8[0] = (v2 >> 10) & 1;
      result = (unsigned __int16 *)sub_49A80((__int64)&unk_60330 - 80, (__int64)&unk_60330, (unsigned int *)v8);
      goto LABEL_8;
    case 0xFFFC:
      v8[0] = (v2 >> 10) & 1;
      result = (unsigned __int16 *)sub_49A80((__int64)&unk_60390 - 80, (__int64)&unk_60390, (unsigned int *)v8);
      goto LABEL_8;
    case 0xFFFD:
      v8[0] = (v2 >> 10) & 1;
      result = (unsigned __int16 *)sub_49A80((__int64)&unk_5F870 - 80, (__int64)&unk_5F870, (unsigned int *)v8);
      goto LABEL_8;
    case 0xFFFE:
      if ( (v2 & 7) != 0 )
      {
        if ( (v2 & 7) != 7 )
          return nullptr;
        v8[0] = (v2 >> 3) & 7;
        result = (unsigned __int16 *)sub_49A80((__int64)&unk_5FF60 - 160, (__int64)&unk_5FF60, (unsigned int *)v8);
      }
      else
      {
        v8[0] = (v2 >> 3) & 0x7B;
        if ( (v2 & 0x20) != 0 )
          result = (unsigned __int16 *)sub_49A80((__int64)&unk_602E0 - 480, (__int64)&unk_602E0, (unsigned int *)v8);
        else
          result = (unsigned __int16 *)sub_49A80((__int64)&unk_60800 - 1120, (__int64)&unk_60800, (unsigned int *)v8);
      }
      goto LABEL_8;
    case 0xFFFF:
      if ( (v2 & 0x3E00000) != 0 )
        return (unsigned __int16 *)&unk_5F760;
      v8[0] = (v2 >> 19) & 3;
      result = (unsigned __int16 *)sub_49A80((__int64)&unk_5F980 - 160, (__int64)&unk_5F980, (unsigned int *)v8);
      goto LABEL_8;
  }
}

