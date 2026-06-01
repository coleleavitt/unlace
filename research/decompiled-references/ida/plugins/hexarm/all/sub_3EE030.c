__int64 __fastcall sub_3EE030(__int64 a1, __int64 a2)
{
  unsigned int v2; // edx
  int v3; // eax

  v2 = 0;
  if ( *(_BYTE *)(a2 + 1) == 12 )
  {
    v3 = *(unsigned __int16 *)(a2 + 6);
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) == 8 )
    {
      if ( (unsigned __int16)(v3 - 163) <= 0x1Fu && *(char *)(a2 + 32) > 0 )
        LOBYTE(v2) = *(_BYTE *)(a2 + 34) == 0;
    }
    else if ( (unsigned int)(v3 - 61) <= 0x1F )
    {
      LOBYTE(v2) = (unsigned __int8)(*(_BYTE *)(a2 + 34) + 1) <= 1u;
    }
  }
  return v2;
}

