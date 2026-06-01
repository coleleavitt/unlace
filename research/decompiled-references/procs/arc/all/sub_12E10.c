__int64 __fastcall sub_12E10(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdx
  __int64 result; // rax
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12[3]; // [rsp+10h] [rbp-18h] BYREF

  v6 = *(unsigned __int16 *)(a2 + 24);
  v12[1] = __readfsqword(0x28u);
  if ( (unsigned __int16)v6 > 4u )
  {
    if ( (*(_BYTE *)(a2 + 28) & 0x1F) == 0 )
      goto LABEL_3;
    return 0;
  }
  if ( !(_WORD)v6 )
    return 0;
LABEL_3:
  switch ( v6 )
  {
    case 0LL:
    case 2LL:
    case 4LL:
    case 5LL:
    case 6LL:
    case 7LL:
    case 8LL:
    case 9LL:
    case 10LL:
    case 11LL:
    case 12LL:
    case 13LL:
    case 16LL:
    case 17LL:
    case 18LL:
    case 20LL:
    case 22LL:
    case 23LL:
    case 24LL:
    case 25LL:
    case 26LL:
    case 27LL:
    case 28LL:
    case 29LL:
    case 30LL:
    case 31LL:
    case 32LL:
    case 33LL:
    case 34LL:
    case 35LL:
    case 36LL:
    case 37LL:
    case 38LL:
    case 39LL:
    case 40LL:
    case 41LL:
    case 42LL:
    case 43LL:
      return 0;
    case 1LL:
    case 3LL:
      if ( (*(_QWORD *)(a2 + 80) & 0xFFFF00000000FF00LL) != 0x1C000000000400LL )
        return 0;
      if ( (((*(_DWORD *)(a2 + 28) & 0x18) - 8) & 0xFFFFFFF0) != 0 )
        return 0;
      result = *(_QWORD *)(a2 + 96);
      if ( (result & 3) != 0 )
        return 0;
      break;
    case 14LL:
    case 15LL:
      v8 = *(_QWORD *)(a2 + 56) + 16LL * *(_QWORD *)a2;
      v9 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
      if ( v8 != v9 )
      {
        v9 &= v8;
        if ( v8 == -1 )
          v9 = -1;
      }
      if ( !(unsigned __int8)sub_12690(a1, (const char *)v9, v12, a4, a5, a6) )
        return 0;
      result = v12[0];
      if ( v12[0] == -1 )
        return 0;
      break;
    case 19LL:
    case 21LL:
      if ( *(_BYTE *)(a2 + 41) != 1 )
        return 0;
      if ( *(_WORD *)(a2 + 46) != 28 )
        return 0;
      if ( *(_BYTE *)(a2 + 81) != 1 )
        return 0;
      if ( *(_WORD *)(a2 + 86) != 28 )
        return 0;
      if ( !(unsigned __int8)sub_11070(a1, a2, a2 + 120, v12, nullptr, 0, nullptr) )
        return 0;
      result = v12[0];
      if ( (v12[0] & 3) != 0 )
        return 0;
      if ( *(_WORD *)(a2 + 24) == 21 )
        result = -v12[0];
      break;
    case 44LL:
      result = 4;
      break;
    case 45LL:
      result = -4;
      break;
    default:
      if ( (unsigned __int16)(v6 - 156) > 1u )
        return 0;
      v10 = (*(_QWORD *)(a2 + 64) & 0xFLL) + ((*(_QWORD *)(a2 + 64) >> 5) & 1LL) + ((*(_QWORD *)(a2 + 64) >> 4) & 1LL);
      result = 4 * v10;
      v11 = -4 * v10;
      if ( (_WORD)v6 == 156 )
        result = v11;
      break;
  }
  return result;
}
