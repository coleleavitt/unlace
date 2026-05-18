__int64 __fastcall sub_D0ED0(__int64 a1, _BYTE *a2)
{
  if ( *a2 != 0xA8 || (unsigned __int8)a2[2] < *(int *)(a1 + 32) )
    return 0;
  ++a2[2];
  return 0;
}
