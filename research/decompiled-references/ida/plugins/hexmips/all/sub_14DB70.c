char __fastcall sub_14DB70(__int64 a1, __int64 a2)
{
  char result; // al
  __int64 v4; // rsi
  unsigned __int64 v5; // rdx

  switch ( *(_BYTE *)a1 )
  {
    case 1:
    case 5:
    case 6:
    case 9:
    case 0xA:
    case 0xE:
      result = *(_DWORD *)(a1 + 4) == *(_DWORD *)(a2 + 84);
      break;
    case 2:
      v4 = *(unsigned int *)(a1 + 4);
      if ( (_DWORD)v4 != *(_DWORD *)(a2 + 84) )
        goto LABEL_5;
      v5 = sub_325C90(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL), v4, 0);
      if ( v5 <= 0xFFF )
        goto LABEL_5;
      result = v5 != -1 && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 96) + 24LL) + 16LL) != v5;
      break;
    case 4:
      result = sub_14DC70(*(_QWORD *)(a1 + 8));
      break;
    case 0xF:
      result = (unsigned int)visit_subtypes() != 0;
      break;
    default:
LABEL_5:
      result = 0;
      break;
  }
  return result;
}

