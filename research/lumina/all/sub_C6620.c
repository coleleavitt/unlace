__int64 __fastcall sub_C6620(unsigned __int8 *a1, __int64 a2)
{
  __int64 v2; // r11
  int v3; // eax
  unsigned __int8 *v4; // r8
  unsigned int v5; // r10d
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rax
  int v11; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v12; // [rsp+8h] [rbp-10h]

  v2 = a2;
  v12 = __readfsqword(0x28u);
  v3 = 0;
  v4 = nullptr;
  v5 = 67;
LABEL_2:
  while ( 2 )
  {
    while ( 2 )
    {
      v6 = *a1;
      if ( !(_BYTE)v6 )
      {
LABEL_10:
        if ( !a2 )
          return v5;
        v11 = 0;
        LOBYTE(v7) = 1;
        if ( (char)v5 > 66 || (LOBYTE(v7) = 5, !v4) )
        {
LABEL_19:
          *(_BYTE *)(v2 + 10) = v7;
          return v5;
        }
        v8 = *v4;
        if ( (_BYTE)v8 )
        {
          if ( (byte_1BEF00[v8] & 4) != 0 )
          {
LABEL_36:
            sub_C6480(v4, &v11);
            v7 = v11 / 4 + 1;
            if ( v7 > 255 )
              LOBYTE(v7) = -1;
            goto LABEL_19;
          }
          while ( 1 )
          {
            v9 = *++v4;
            if ( !(_BYTE)v9 )
              break;
            if ( (byte_1BEF00[v9] & 4) != 0 )
              goto LABEL_36;
          }
        }
LABEL_18:
        LOBYTE(v7) = 1;
        goto LABEL_19;
      }
      while ( 1 )
      {
        ++a1;
        v3 = byte_1BF000[v6] + (v3 << 8);
        if ( v3 == 1667785074 )
        {
          v4 = a1;
          v5 = 66;
          goto LABEL_2;
        }
        if ( v3 == 1668050786 || v3 == 1952807028 )
        {
          v5 = 66;
          goto LABEL_2;
        }
        if ( v3 == 1651273570 )
          break;
        if ( v3 != 1919246700 || (_BYTE)v5 != 67 )
        {
          if ( v3 == 1718382433 && (_BYTE)v5 == 67 )
          {
            v5 = 69;
            v3 = 1718382433;
            goto LABEL_2;
          }
          if ( v3 == 1685026146 && (_BYTE)v5 == 67 )
          {
            v5 = 69;
            v3 = 1685026146;
            goto LABEL_2;
          }
          goto LABEL_24;
        }
        v6 = *a1;
        v5 = 69;
        v3 = 1919246700;
        if ( !(_BYTE)v6 )
          goto LABEL_10;
      }
      if ( (((_BYTE)v5 - 67) & 0xFD) == 0 )
      {
        v5 = 65;
        if ( *a1 == 40 )
          v4 = a1;
        continue;
      }
      break;
    }
LABEL_24:
    if ( (v3 & 0xFFFFFF) != 0x696E74 )
      continue;
    break;
  }
  v5 = 68;
  if ( a2 )
    goto LABEL_18;
  return v5;
}
