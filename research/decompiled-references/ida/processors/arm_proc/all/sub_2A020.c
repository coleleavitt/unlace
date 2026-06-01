__int64 __fastcall sub_2A020(__int64 a1, __int64 a2)
{
  unsigned int v2; // ecx

  v2 = 0;
  if ( *(_BYTE *)(a1 + 1) == *(_BYTE *)(a2 + 1) )
  {
    switch ( *(_BYTE *)(a1 + 1) )
    {
      case 1:
        v2 = 0;
        if ( (unsigned int)(*(_DWORD *)(a2 + 4) ^ *(_DWORD *)(a1 + 4)) <= 0xFF )
          LOBYTE(v2) = ((*(_DWORD *)(a2 + 32) ^ *(_DWORD *)(a1 + 32)) & 0xFF00FF) == 0;
        return v2;
      case 2:
      case 6:
      case 7:
        LOBYTE(v2) = *(_QWORD *)(a1 + 16) == *(_QWORD *)(a2 + 16);
        return v2;
      case 3:
      case 8:
        goto LABEL_6;
      case 4:
        v2 = 0;
        if ( *(_QWORD *)(a1 + 16) != *(_QWORD *)(a2 + 16) )
          return v2;
LABEL_6:
        v2 = 0;
        if ( *(_WORD *)(a1 + 6) == *(_WORD *)(a2 + 6) && ((*(_DWORD *)(a2 + 32) ^ *(_DWORD *)(a1 + 32)) & 0xFF00FF) == 0 )
        {
          v2 = 0;
          if ( *(_BYTE *)(a1 + 33) == *(_BYTE *)(a2 + 33) )
LABEL_9:
            LOBYTE(v2) = *(_QWORD *)(a1 + 8) == *(_QWORD *)(a2 + 8);
        }
        break;
      case 5:
        goto LABEL_9;
      default:
        return 0;
    }
  }
  return v2;
}

