unsigned __int64 __fastcall sub_424F0(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int16 a5,
        char a6,
        double a7,
        double a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v13; // rax
  unsigned __int64 v14; // rbx
  _QWORD *v16; // rax
  unsigned __int64 v17; // [rsp+0h] [rbp-38h]

  v13 = *(_QWORD *)(a1 + 8);
  if ( a3 < *(_QWORD *)(v13 + 312) )
  {
    if ( *(_BYTE *)(v13 + 529) != 1
      || (v17 = a3, v16 = (_QWORD *)getseg(a3), a3 = v17, v16) && a4 >= 0 && (unsigned __int64)a4 < v16[1] - *v16 )
    {
      v14 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 456LL) & (a3 + a4);
      if ( v14 < a3 )
        sub_BFC0((__int64)"Possible fixup overflow at %a (target %a)", a7, a8);
      a3 = v14;
      a4 = 0;
    }
  }
  switch ( a5 )
  {
    case 1u:
    case 0xFu:
      a3 = (unsigned __int16)a3;
      break;
    case 4u:
    case 0x10u:
      a3 = (unsigned int)a3;
      break;
    case 0xDu:
    case 0xEu:
      a3 = (unsigned __int8)a3;
      break;
    default:
      return sub_42050(a1, a2, a3, 0, a4, a5, a9, a6 == 0 ? 1610612736 : -1610612736, a10);
  }
  return sub_42050(a1, a2, a3, 0, a4, a5, a9, a6 == 0 ? 1610612736 : -1610612736, a10);
}
