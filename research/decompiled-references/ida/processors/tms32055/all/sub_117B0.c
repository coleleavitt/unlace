__int16 __fastcall sub_117B0(__int64 a1)
{
  __int16 result; // ax
  unsigned __int16 v2; // dx
  int v3; // edx

  result = *(_WORD *)(a1 + 24);
  if ( (unsigned __int16)(result - 201) <= 1u && *(_BYTE *)(a1 + 81) == 1 && *(_BYTE *)(a1 + 41) == 5 )
  {
    v2 = *(_WORD *)(a1 + 86);
    if ( v2 == 74 )
    {
      v3 = *((_DWORD *)qword_18CE0 + *(int *)(a1 + 48));
    }
    else if ( v2 > 0x4Au )
    {
      if ( v2 != 75 )
        return result;
      v3 = *((_DWORD *)qword_18CA0 + *(int *)(a1 + 48));
    }
    else if ( v2 == 72 )
    {
      v3 = *((_DWORD *)qword_18D60 + *(int *)(a1 + 48));
    }
    else
    {
      if ( v2 != 73 )
        return result;
      v3 = *((_DWORD *)qword_18D20 + *(int *)(a1 + 48));
    }
    if ( v3 != -1 )
    {
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 46) = v3;
      *(_BYTE *)(a1 + 81) = 0;
      result = (result != 201) + 207;
      *(_WORD *)(a1 + 24) = result;
    }
  }
  return result;
}

