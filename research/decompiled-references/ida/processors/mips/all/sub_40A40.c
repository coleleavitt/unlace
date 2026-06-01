unsigned __int16 *__fastcall sub_40A40(unsigned int a1, unsigned __int16 *a2)
{
  unsigned int v2; // r11d
  unsigned __int16 *v3; // rcx
  unsigned __int16 v4; // ax
  unsigned __int64 v5; // rax
  unsigned __int16 *v6; // rdx
  unsigned __int16 *v8; // rax
  unsigned __int16 *v9; // rdx
  unsigned int v10; // eax
  int v11; // eax
  int v12; // eax
  __int64 v13; // rdx

  if ( a2 )
  {
    v2 = a1;
    v3 = a2;
    while ( 1 )
    {
      v4 = *v3;
      if ( !*v3 )
        return nullptr;
      if ( v4 <= 0xFFEDu )
        return v3;
      switch ( v4 )
      {
        case 0xFFEE:
          v12 = (v2 >> 6) & 7;
          if ( v12 == 3 )
          {
            v3 = (unsigned __int16 *)((__int64 (__fastcall *)(_QWORD, char *, void *, __int64, __int64))loc_40900)(
                                       v2,
                                       (char *)&unk_5B130 - 80,
                                       &unk_5B130,
                                       31,
                                       6);
          }
          else
          {
            if ( v12 != 4 )
              return nullptr;
            v3 = (unsigned __int16 *)((__int64 (__fastcall *)(_QWORD, char *, void *, __int64, __int64))loc_40900)(
                                       v2,
                                       (char *)&unk_5B0E0 - 320,
                                       &unk_5B0E0,
                                       1023,
                                       6);
          }
          goto LABEL_11;
        case 0xFFEF:
        case 0xFFF0:
          return nullptr;
        case 0xFFF1:
          return v3;
        case 0xFFF2:
          if ( (unsigned __int8)v2 >> 6 )
          {
            if ( (unsigned __int8)v2 >> 6 != 1 )
              return nullptr;
            v3 = (unsigned __int16 *)((__int64 (__fastcall *)(_QWORD, char *, void *, __int64, __int64))loc_40900)(
                                       v2,
                                       (char *)&unk_5BDF8 - 280,
                                       &unk_5BDF8,
                                       127,
                                       6);
          }
          else
          {
            v3 = (unsigned __int16 *)((__int64 (__fastcall *)(_QWORD, char *, void *, __int64, __int64))loc_40900)(
                                       v2,
                                       (char *)&unk_5C198 - 920,
                                       &unk_5C198,
                                       255,
                                       6);
          }
          goto LABEL_11;
        case 0xFFF3:
          v11 = (v2 >> 6) & 7;
          if ( v11 == 3 )
          {
            v3 = (unsigned __int16 *)((__int64 (__fastcall *)(_QWORD, char *, void *, __int64, __int64))loc_40900)(
                                       v2,
                                       (char *)&unk_5CE70 - 80,
                                       &unk_5CE70,
                                       31,
                                       6);
          }
          else if ( (v2 & 0x100) != 0 )
          {
            if ( (unsigned int)(v11 - 4) > 1 )
              return nullptr;
            v3 = (unsigned __int16 *)((__int64 (__fastcall *)(_QWORD, char *, void *, __int64, __int64))loc_40900)(
                                       v2,
                                       (char *)&unk_5CE20 - 1760,
                                       &unk_5CE20,
                                       1023,
                                       6);
          }
          else
          {
            if ( v11 )
              return nullptr;
            v3 = (unsigned __int16 *)((__int64 (__fastcall *)(_QWORD, char *, void *, __int64, __int64))loc_40900)(
                                       v2,
                                       (char *)&unk_5CF70 - 240,
                                       &unk_5CF70,
                                       63,
                                       6);
          }
          goto LABEL_11;
        case 0xFFF4:
          if ( (v2 & 7) != 0 )
          {
            if ( (v2 & 7) != 4 )
              return nullptr;
            v3 = (unsigned __int16 *)((__int64 (__fastcall *)(_QWORD, char *, void *, __int64, _QWORD))loc_40900)(
                                       v2,
                                       (char *)&unk_5B280 - 320,
                                       &unk_5B280,
                                       63,
                                       0);
          }
          else
          {
            v3 = (unsigned __int16 *)((__int64 (__fastcall *)(_QWORD, char *, void *, __int64, _QWORD))loc_40900)(
                                       v2,
                                       (char *)&unk_5B500 - 640,
                                       &unk_5B500,
                                       511,
                                       0);
          }
          goto LABEL_11;
        case 0xFFF5:
          if ( (v2 & 7) != 0 )
          {
            if ( (v2 & 7) - 1 > 3 )
              return nullptr;
            v3 = (unsigned __int16 *)((__int64 (__fastcall *)(_QWORD, char *, void *, __int64, _QWORD))loc_40900)(
                                       v2,
                                       (char *)&unk_5C3F8 - 600,
                                       &unk_5C3F8,
                                       63,
                                       0);
          }
          else if ( ((v2 >> 3) & 7) - 6 <= 1 )
          {
            v3 = (unsigned __int16 *)((__int64 (__fastcall *)(_QWORD, char *, void *, __int64, _QWORD))loc_40900)(
                                       v2,
                                       (char *)&unk_5C730 - 240,
                                       &unk_5C730,
                                       255,
                                       0);
          }
          else
          {
            v3 = (unsigned __int16 *)((__int64 (__fastcall *)(_QWORD, char *, void *, __int64, _QWORD))loc_40900)(
                                       v2,
                                       (char *)&unk_5C630 - 560,
                                       &unk_5C630,
                                       511,
                                       0);
          }
          goto LABEL_11;
        case 0xFFF6:
          v3 = (unsigned __int16 *)((__int64 (__fastcall *)(_QWORD, char *, void *, __int64, _QWORD))loc_40900)(
                                     v2,
                                     (char *)&unk_5ABF0 - 80,
                                     &unk_5ABF0,
                                     1,
                                     0);
          goto LABEL_11;
        case 0xFFF7:
          v3 = (unsigned __int16 *)((__int64 (__fastcall *)(_QWORD, char *, void *, __int64, _QWORD))loc_40900)(
                                     v2,
                                     (char *)&unk_5AC50 - 80,
                                     &unk_5AC50,
                                     1,
                                     0);
          goto LABEL_11;
        case 0xFFF8:
          v3 = (unsigned __int16 *)((__int64 (__fastcall *)(_QWORD, char *, void *, __int64, _QWORD))loc_40900)(
                                     v2,
                                     (char *)&unk_5AB88 - 40,
                                     &unk_5AB88,
                                     1,
                                     0);
          goto LABEL_11;
        case 0xFFF9:
          v10 = (v2 >> 7) & 7;
          if ( v10 == 5 )
          {
            v3 = (unsigned __int16 *)((__int64 (__fastcall *)(_QWORD, char *, void *, __int64, __int64))loc_40900)(
                                       v2,
                                       (char *)&unk_5ACB0 - 80,
                                       &unk_5ACB0,
                                       63,
                                       4);
          }
          else
          {
            if ( v10 > 5 )
            {
              if ( v10 != 6 )
                return nullptr;
            }
            else if ( v10 <= 2 )
            {
              v3 = (unsigned __int16 *)((__int64 (__fastcall *)(_QWORD, char *, void *, __int64, __int64))loc_40900)(
                                         v2,
                                         (char *)&unk_5AED0 - 240,
                                         &unk_5AED0,
                                         15,
                                         6);
              goto LABEL_11;
            }
            v3 = (unsigned __int16 *)((__int64 (__fastcall *)(_QWORD, char *, void *, __int64, __int64))loc_40900)(
                                       v2,
                                       (char *)&unk_5ADD8 - 280,
                                       &unk_5ADD8,
                                       31,
                                       5);
          }
          goto LABEL_11;
        case 0xFFFA:
          v3 = (unsigned __int16 *)((__int64 (__fastcall *)(_QWORD, char *, void *, __int64, _QWORD))loc_40900)(
                                     v2,
                                     (char *)&unk_5AF30 - 80,
                                     &unk_5AF30,
                                     1,
                                     0);
          goto LABEL_11;
        case 0xFFFB:
          v3 = (unsigned __int16 *)((__int64 (__fastcall *)(_QWORD, char *, void *, __int64, _QWORD))loc_40900)(
                                     v2,
                                     (char *)&unk_5AF90 - 80,
                                     &unk_5AF90,
                                     1,
                                     0);
          goto LABEL_11;
        case 0xFFFC:
          v3 = (unsigned __int16 *)((__int64 (__fastcall *)(_QWORD, char *, void *, __int64, __int64))loc_40900)(
                                     v2,
                                     (char *)&unk_5BAB0 - 560,
                                     &unk_5BAB0,
                                     15,
                                     12);
          goto LABEL_11;
        case 0xFFFD:
          v8 = (unsigned __int16 *)((__int64 (__fastcall *)(_QWORD, char *, void *, __int64, __int64))loc_40900)(
                                     v2,
                                     (char *)&unk_5B870 - 880,
                                     &unk_5B870,
                                     31,
                                     21);
          v3 = v8;
          if ( v8 == v9 )
            return nullptr;
          if ( (*v8 & 0xFFF7) != 0x53 || (v2 & 0x10000) == 0 )
            continue;
          return nullptr;
        case 0xFFFE:
          v3 = (unsigned __int16 *)((__int64 (__fastcall *)(_QWORD, char *, void *, __int64, __int64))loc_40900)(
                                     v2,
                                     (char *)&unk_5BCC8 - 520,
                                     &unk_5BCC8,
                                     15,
                                     12);
          goto LABEL_11;
        case 0xFFFF:
          v5 = v2 & 7;
          if ( (_DWORD)v5 == 2 )
            return (unsigned __int16 *)&unk_5AB20;
          if ( (unsigned int)v5 > 2 )
          {
            v13 = -145;
            if ( _bittest64(&v13, v5) )
              return nullptr;
            v3 = (unsigned __int16 *)((__int64 (__fastcall *)(_QWORD, char *, void *, __int64, _QWORD))loc_40900)(
                                       v2,
                                       (char *)&unk_5D020 - 160,
                                       &unk_5D020,
                                       63,
                                       0);
          }
          else
          {
            if ( (v2 & 7) != 0 )
              return nullptr;
            v3 = (unsigned __int16 *)((__int64 (__fastcall *)(_QWORD, char *, void *, __int64, _QWORD))loc_40900)(
                                       v2,
                                       (char *)&unk_5D390 - 880,
                                       &unk_5D390,
                                       1023,
                                       0);
          }
LABEL_11:
          if ( v3 == v6 )
            return nullptr;
          break;
      }
    }
  }
  return nullptr;
}

