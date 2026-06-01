__int64 __fastcall sub_23340(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 result; // rax
  unsigned __int16 custom_fixup; // ax
  __int64 v10; // [rsp+0h] [rbp-18h]

  v6 = *(_QWORD *)(a2 + 4);
  v7 = *(_QWORD *)(a2 + 20);
  switch ( *(_DWORD *)a2 )
  {
    case 0:
    case 5:
    case 0xA:
    case 0xC:
    case 0xD:
    case 0xE:
    case 0xF:
    case 0x10:
    case 0x11:
    case 0x19:
    case 0x1A:
    case 0x1B:
    case 0x1C:
    case 0x1D:
      result = 3;
      break;
    case 1:
      sub_42050(
        a1,
        *(_QWORD *)(a2 + 4),
        *(_QWORD *)(a2 + 12),
        *(_QWORD *)(a2 + 20) - v6,
        *(_QWORD *)(a2 + 20) - v6 - *(_QWORD *)(a2 + 12),
        4,
        0,
        0,
        0);
      result = 0;
      break;
    case 2:
      sub_42050(a1, v6, *(_QWORD *)(a2 + 12), *(_QWORD *)(a2 + 20), v7 - *(_QWORD *)(a2 + 12), 4, 0, 0, 0);
      result = 0;
      break;
    case 3:
      sub_22FC0(a1, a2, v7 - v6, a4, a5);
      result = 0;
      break;
    case 4:
      sub_23050(a1, a2, v7, a4, a5);
      result = 0;
      break;
    case 6:
      custom_fixup = *(_WORD *)(a1 + 348);
      if ( custom_fixup == 0x8000 )
      {
        v10 = *(_QWORD *)(a2 + 20);
        custom_fixup = find_custom_fixup("HIGHA16");
        LODWORD(v7) = v10;
        *(_WORD *)(a1 + 348) = custom_fixup;
      }
      sub_23200(a1, a2, (unsigned int)(v7 + 0x8000) >> 16, custom_fixup, a5);
      result = 0;
      break;
    case 7:
      sub_23200(a1, a2, (unsigned __int16)v7, 9, a5);
      result = 0;
      break;
    case 8:
      sub_23290(a1, a2, (unsigned __int16)v7, 9, a5);
      result = 0;
      break;
    case 9:
      sub_230E0(a1, a2, v7, a4, a5);
      result = 0;
      break;
    case 0xB:
      sub_23190(a1, a2, v7 - v6, a4, a5);
      result = 0;
      break;
    default:
      result = 2;
      break;
  }
  return result;
}
