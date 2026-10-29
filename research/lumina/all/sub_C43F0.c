_BOOL8 __fastcall sub_C43F0(unsigned __int8 *a1)
{
  unsigned __int8 v1; // al
  _BOOL8 result; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx

  while ( 1 )
  {
    v1 = *a1;
    if ( (unsigned __int8)(*a1 + 83) > 1u )
      break;
    a1 = *((unsigned __int8 **)a1 + 2);
  }
  if ( v1 == 0xB0 )
    v1 = a1[2];
  if ( v1 <= 0x9Bu )
    return v1 < 0x99u && v1 != 117;
  if ( v1 != 0xA7 )
    return 1;
  result = 1;
  if ( (a1[6] & 0x10) == 0 )
  {
    v3 = *((_QWORD *)a1 + 8);
    if ( v3 )
    {
      v4 = *((__int16 *)a1 + 24);
      result = 0;
      if ( (v4 & 0x8000u) == 0LL )
      {
        v5 = *(_QWORD *)(v3 + 8);
        if ( v5 )
          return (*(_BYTE *)(v5 + 16 * v4 + 8) & 0xF) == 0;
      }
    }
  }
  return result;
}
