__int64 __fastcall sub_294420(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int tinfo_property; // r14d
  __int64 v4; // r13
  __int64 v5; // r12
  __int64 v6; // r12
  __int64 v7; // rax
  int v8; // r13d
  _QWORD v9[9]; // [rsp+0h] [rbp-48h] BYREF

  v9[1] = __readfsqword(0x28u);
  if ( *(_DWORD *)(a2 + 8) != 61 )
    return 0;
  if ( (unsigned int)get_tinfo_size() != 8 )
    return 0;
  if ( (get_tinfo_property() & 0xF) == 0xA )
    return 0;
  tinfo_property = get_tinfo_property();
  v4 = **(_QWORD **)(a2 + 24);
  v5 = sub_32AEF0(v4, 8, tinfo_property == 1);
  if ( v5 != sub_32AEF0(v4, 4, tinfo_property == 1)
    || (unsigned __int8)is_enum()
    || (unsigned __int8)is_char()
    || (unsigned __int8)is_stroff() )
  {
    return 0;
  }
  v6 = *(_QWORD *)(a1[2] + 8LL * a1[3] - 8);
  switch ( *(_DWORD *)(v6 + 8) )
  {
    case 2:
    case 0x3A:
      if ( *(_QWORD *)(v6 + 32) != a2 )
        return 0;
      goto LABEL_12;
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 0xC:
    case 0xD:
    case 0xE:
    case 0xF:
      if ( *(_QWORD *)(v6 + 32) != a2 || (unsigned int)lexcompare_tinfo() )
        return 0;
      goto LABEL_12;
    case 0x16:
    case 0x17:
    case 0x50:
      goto LABEL_12;
    case 0x18:
    case 0x19:
    case 0x1A:
    case 0x1B:
    case 0x1C:
    case 0x1D:
    case 0x1E:
    case 0x1F:
      if ( get_tinfo_size() != 8 )
        return 0;
      v8 = get_tinfo_property();
      if ( (v8 == 1) != ((unsigned int)sub_2553C0(*(_DWORD *)(v6 + 8)) == 1) )
        return 0;
      goto LABEL_12;
    case 0x39:
      v7 = a1[9];
      if ( *(_DWORD *)(*(_QWORD *)(v7 + 112) + 80LL) == 8 )
        goto LABEL_13;
      if ( *(_BYTE *)(sub_284720(v6, a2, nullptr) + 60) )
        return 0;
LABEL_12:
      v7 = a1[9];
LABEL_13:
      sub_32C760(v9, *(_QWORD *)(v7 + 112), 4, tinfo_property);
      copy_tinfo_t();
      clear_tinfo_t();
      result = 1;
      break;
    default:
      return 0;
  }
  return result;
}

