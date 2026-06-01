__int64 __fastcall sub_1B0D0(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  char v5; // al

  *(_BYTE *)a1 = getinf_flag(3, 32);
  if ( a3 == 25 )
  {
    v5 = getinf_flag(3, 4);
    switch ( *(_DWORD *)(a2 + 4) )
    {
      case 0:
        result = v5 == 0 ? 7 : 16777223;
        break;
      case 2:
        result = 15;
        break;
      case 7:
        result = 6;
        break;
      case 0xC:
        result = 8;
        break;
      case 0xD:
        result = v5 == 0 ? 12 : 16777228;
        break;
      case 0xF:
        result = v5 == 0 ? 18 : 16777234;
        break;
      case 0x17:
        result = 14;
        break;
      case 0x19:
        result = 11;
        break;
      default:
        result = 0;
        break;
    }
    *(_DWORD *)(a1 + 5132) = result;
    *(_DWORD *)(a1 + 5136) = 0;
  }
  else
  {
    result = *(unsigned int *)(a2 + 4);
    *(_DWORD *)(a1 + 4) = result;
  }
  return result;
}
