char __fastcall sub_36930(__int64 a1, __int64 a2)
{
  int v2; // ebx
  char result; // al
  __int64 v4; // rdi
  int dword; // ebx
  __int64 v6[7]; // [rsp+0h] [rbp-38h] BYREF

  v6[3] = __readfsqword(0x28u);
  v6[0] = a2;
  v6[1] = -1;
  v2 = sub_4E2D0(a1);
  switch ( v2 )
  {
    case 1:
      if ( (unsigned __int8)sub_31740(v6, (__int64)&unk_7A200, 0x18u) )
        goto LABEL_10;
      result = sub_31740(v6, (__int64)&unk_7A1E0, 0x18u);
      break;
    case 2:
      result = sub_31740(v6, (__int64)&unk_7A1C0, 0x18u);
      break;
    case 3:
    case 7:
      if ( (unsigned __int8)sub_31740(v6, (__int64)&unk_7A1B0, 0x10u) )
        goto LABEL_10;
      if ( v2 != 3 )
        goto LABEL_4;
      result = sub_31740(v6, (__int64)&unk_7A198, 0xCu);
      break;
    case 4:
      if ( (unsigned __int8)sub_31740(v6, (__int64)&unk_7A180, 0x14u)
        || (unsigned __int8)sub_31740(v6, (__int64)&unk_7A160, 0x1Cu) )
      {
        v4 = a2 + 12;
        dword = (__int16)get_dword(a2 + 4);
      }
      else
      {
        if ( !(unsigned __int8)sub_31740(v6, (__int64)&unk_7A140, 0x18u) )
          goto LABEL_4;
        dword = (__int16)get_dword(a2 + 4);
        if ( (__int16)get_dword(a2 + 12) != (__int16)dword + 16 )
          goto LABEL_4;
        v4 = a2 + 16;
      }
      result = dword + 8 == (__int16)get_dword(v4);
      break;
    case 5:
      if ( (unsigned __int8)sub_31740(v6, (__int64)&unk_7A100, 0x20u)
        || (unsigned __int8)sub_31740(v6, (__int64)&unk_7A0E0, 0x20u)
        || (unsigned __int8)sub_31740(v6, (__int64)&unk_7A0D0, 0x10u) )
      {
        goto LABEL_10;
      }
      result = sub_31740(v6, (__int64)&unk_7A0C0, 0x10u);
      break;
    case 8:
      result = sub_31740(v6, (__int64)&unk_7A120, 0x20u);
      break;
    case 9:
      if ( (unsigned __int8)sub_31740(v6, (__int64)&unk_7A0B8, 8u) )
LABEL_10:
        result = 1;
      else
        result = sub_31740(v6, (__int64)&unk_7A0B0, 8u);
      break;
    default:
LABEL_4:
      result = 0;
      break;
  }
  return result;
}

