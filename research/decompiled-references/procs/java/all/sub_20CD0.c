__int64 __fastcall sub_20CD0(__int64 a1)
{
  int v1; // edx
  __int64 result; // rax
  __int64 v4; // rcx
  unsigned int v5; // r8d
  _WORD *v6; // rdi
  unsigned int v7; // esi
  unsigned int v8; // eax
  _WORD *v9; // r11
  char v10; // al
  int v11; // esi
  __int64 v12; // rdi
  char v13; // al
  __int16 v14; // ax
  __int16 v15; // ax
  __int16 v16; // ax
  int v17; // eax
  unsigned int v18; // esi
  char v19; // al
  unsigned int v20; // [rsp+1Ch] [rbp-43Ch] BYREF
  _BYTE v21[1032]; // [rsp+20h] [rbp-438h] BYREF
  unsigned __int64 v22; // [rsp+428h] [rbp-30h]

  v1 = *(_DWORD *)(a1 + 56);
  v22 = __readfsqword(0x28u);
  switch ( v1 )
  {
    case 0:
    case 1:
    case 2:
      if ( v1 == 1 )
      {
        if ( (*(_BYTE *)(*(_QWORD *)a1 + 148LL) & 4) != 0 )
          *(_DWORD *)(a1 + 56) = 0;
      }
      else if ( v1 != 2 && (*(_BYTE *)(*(_QWORD *)a1 + 148LL) & 1) == 0 )
      {
        *(_DWORD *)(a1 + 56) = 1;
      }
      if ( !(unsigned __int8)sub_1F840(a1) )
        return *(unsigned int *)(a1 + 20);
      while ( 2 )
      {
        if ( *(_DWORD *)(a1 + 16) )
        {
          v10 = sub_1F7A0(a1, (int *)&v20);
          LOBYTE(v11) = v20;
          if ( !v10 )
          {
            v13 = sub_1FFB0(a1, v20);
            goto LABEL_35;
          }
          if ( v20 > 0xFF )
          {
            v18 = v20;
            v12 = a1;
            if ( !(unsigned __int8)is_cp_graphical(v20) )
            {
              v13 = sub_1FFB0(a1, v18);
LABEL_35:
              if ( !v13 )
                return *(unsigned int *)(a1 + 20);
              continue;
            }
          }
          else
          {
            if ( v20 > 0x7E )
              goto LABEL_57;
            if ( v20 <= 0x1F )
            {
              if ( v20 <= 0xC )
              {
                if ( v20 > 7 && v20 != 11 )
                {
                  v11 = aBtnFr[v20 - 8];
                  if ( v11 == 110 && !*(_DWORD *)(a1 + 56) && *(_DWORD *)(a1 + 16) && *(__int64 *)(a1 + 24) > 2 )
                    *(_QWORD *)(a1 + 24) = 2;
                  goto LABEL_33;
                }
                if ( *(_DWORD *)(a1 + 16) && (unsigned __int16)(**(_WORD **)(a1 + 8) - 48) <= 7u )
                  goto LABEL_57;
                if ( v20 <= 7 )
                {
                  LOBYTE(v11) = v20 + 48;
LABEL_33:
                  v12 = a1;
LABEL_34:
                  v13 = sub_1F9F0(v12, v11);
                  goto LABEL_35;
                }
                goto LABEL_58;
              }
              if ( !*(_DWORD *)(a1 + 16) || (unsigned __int16)(**(_WORD **)(a1 + 8) - 48) > 7u )
              {
LABEL_58:
                v17 = qsnprintf(v21, 1024, "\\%o", v20);
                v13 = sub_1F8E0(a1, (__int64)v21, v17);
                goto LABEL_35;
              }
LABEL_57:
              v13 = sub_20010(a1, v20);
              goto LABEL_35;
            }
            v12 = a1;
            if ( v20 == 92 || v20 == 34 )
              goto LABEL_34;
          }
          v13 = sub_1F840(v12);
          goto LABEL_35;
        }
        break;
      }
      sub_1F840(a1);
      return *(unsigned int *)(a1 + 20);
    case 3:
      if ( (unsigned __int8)sub_20720(a1) )
        goto LABEL_42;
      return *(unsigned int *)(a1 + 20);
    case 4:
    case 5:
    case 6:
    case 7:
      v4 = *(unsigned int *)(a1 + 32);
      if ( !(_DWORD)v4 )
        goto LABEL_96;
      v5 = *(_DWORD *)(a1 + 16);
      if ( (unsigned int)v4 >= v5 )
        goto LABEL_96;
      v6 = *(_WORD **)(a1 + 8);
      if ( v6[(unsigned int)(v4 - 1)] != 41 )
        goto LABEL_96;
      v7 = *(_DWORD *)(a1 + 36);
      if ( !v7 )
      {
        if ( v1 != 6 )
        {
          result = 0;
          if ( v1 != 5 )
            return result;
          goto LABEL_69;
        }
        goto LABEL_82;
      }
      if ( (unsigned __int16)v7 >= (unsigned int)v4 || v6[(unsigned __int16)v7] != 40 )
        goto LABEL_96;
      v8 = HIWORD(v7);
      if ( !HIWORD(v7) )
      {
        result = 0;
        if ( v1 == 7 )
          return result;
        if ( v1 == 5 )
          goto LABEL_69;
        if ( v1 != 6 )
          goto LABEL_93;
        goto LABEL_81;
      }
      if ( v8 >= v5 )
        goto LABEL_96;
      if ( (unsigned int)v4 >= v8 )
        goto LABEL_96;
      v9 = &v6[v8];
      if ( *v9 != 94 )
        goto LABEL_96;
      if ( v1 == 6 )
      {
LABEL_81:
        v7 = (unsigned __int16)v7;
        v6 += (unsigned __int16)v7;
LABEL_82:
        *(_QWORD *)(a1 + 8) = v6;
        *(_DWORD *)(a1 + 16) = v4 - v7;
        v19 = sub_20630(a1);
        goto LABEL_70;
      }
      if ( v1 != 7 )
      {
        if ( v1 == 5 )
        {
          v5 = HIWORD(v7);
LABEL_69:
          *(_DWORD *)(a1 + 16) = v5 - v4;
          *(_QWORD *)(a1 + 8) = &v6[v4];
          v19 = sub_205B0(a1);
          goto LABEL_70;
        }
        if ( !(_WORD)v7 )
          return 0;
LABEL_93:
        if ( *v6 == 60 )
        {
          *(_DWORD *)(a1 + 16) = (unsigned __int16)*(_DWORD *)(a1 + 36);
          v19 = sub_20B10(a1);
          goto LABEL_70;
        }
LABEL_96:
        sub_E6A0();
      }
      *(_QWORD *)(a1 + 8) = v9;
      *(_DWORD *)(a1 + 16) = v5 - v8;
      v19 = sub_209D0(a1);
LABEL_70:
      if ( v19 && *(_DWORD *)(a1 + 56) != 6 )
LABEL_42:
        sub_1F840(a1);
      return *(unsigned int *)(a1 + 20);
    case 8:
      if ( !*(_DWORD *)(a1 + 16) )
        return *(unsigned int *)(a1 + 20);
      v14 = **(_WORD **)(a1 + 8);
      if ( v14 == 60 )
        goto LABEL_87;
      if ( v14 == 76 )
        goto LABEL_40;
      return *(unsigned int *)(a1 + 20);
    case 9:
      if ( !*(_DWORD *)(a1 + 16) )
        goto LABEL_48;
      v15 = **(_WORD **)(a1 + 8);
      if ( v15 == 60 )
      {
LABEL_87:
        sub_20C10(a1);
        return *(unsigned int *)(a1 + 20);
      }
      if ( v15 == 76 )
      {
LABEL_40:
        sub_202E0(a1, 3);
        return *(unsigned int *)(a1 + 20);
      }
      if ( v15 != 40 )
      {
LABEL_48:
        sub_20500(a1);
        return *(unsigned int *)(a1 + 20);
      }
      goto LABEL_53;
    case 10:
    case 11:
      if ( !*(_DWORD *)(a1 + 16) || **(_WORD **)(a1 + 8) != 91 )
        goto LABEL_4;
      goto LABEL_88;
    case 12:
      if ( !*(_DWORD *)(a1 + 16) )
        goto LABEL_4;
      v16 = **(_WORD **)(a1 + 8);
      switch ( v16 )
      {
        case 'L':
          goto LABEL_40;
        case '[':
LABEL_88:
          sub_207A0(a1);
          break;
        case '(':
LABEL_53:
          sub_20880(a1);
          break;
        default:
LABEL_4:
          sub_202E0(a1, 0);
          break;
      }
      return *(unsigned int *)(a1 + 20);
    case 13:
      sub_1FC40(a1);
      return *(unsigned int *)(a1 + 20);
    default:
      return *(unsigned int *)(a1 + 20);
  }
}
