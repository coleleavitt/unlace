__int64 __fastcall sub_83B0(unsigned __int16 *a1, __int64 a2)
{
  __int64 v2; // rdx

  v2 = *a1;
  switch ( *a1 )
  {
    case 0x8000u:
      *(_QWORD *)(a2 + 8) = **(unsigned __int8 **)(a1 + 1);
      return 1;
    case 0x8001u:
      *(_QWORD *)(a2 + 8) = **(__int16 **)(a1 + 1);
      return 1;
    case 0x8002u:
      *(_QWORD *)(a2 + 8) = **(unsigned __int16 **)(a1 + 1);
      return 1;
    case 0x8003u:
    case 0x8004u:
      *(_QWORD *)(a2 + 8) = **(unsigned int **)(a1 + 1);
      return 1;
    case 0x8005u:
      if ( (unsigned int)cpu2ieee(a2 + 8, *(_QWORD *)(a1 + 1), 4) == 1 )
        goto LABEL_7;
      return 0;
    case 0x8006u:
      if ( (unsigned int)cpu2ieee(a2 + 8, *(_QWORD *)(a1 + 1), 8) != 1 )
        return 0;
      goto LABEL_7;
    case 0x8007u:
      if ( (unsigned int)cpu2ieee(a2 + 8, *(_QWORD *)(a1 + 1), 10) != 1 )
        return 0;
LABEL_7:
      *(_BYTE *)a2 = 3;
      return 1;
    case 0x8008u:
    case 0x8009u:
    case 0x800Au:
    case 0x800Bu:
    case 0x800Cu:
    case 0x800Du:
    case 0x800Eu:
    case 0x800Fu:
    case 0x8010u:
      return 0;
    default:
      if ( (v2 & 0x8000u) == 0LL )
        *(_QWORD *)(a2 + 8) = v2;
      return 1;
  }
}
