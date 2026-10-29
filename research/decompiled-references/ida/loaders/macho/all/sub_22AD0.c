unsigned __int64 __fastcall sub_22AD0(__int64 a1, unsigned int *a2)
{
  __int64 v2; // rcx
  unsigned int v3; // eax

  v2 = a2[1];
  v3 = *a2;
  if ( (_DWORD)v2 != 12 )
  {
    if ( (unsigned int)v2 > 0xC )
    {
      v2 = (unsigned int)((_DWORD)v2 != 13) + 13;
    }
    else if ( (_DWORD)v2 == 10 )
    {
      if ( a2[2] == 16 )
      {
        v2 = 11;
        v3 = 1;
      }
    }
    else if ( (_DWORD)v2 == 11 )
    {
      v2 = 12 - (unsigned int)*(unsigned __int8 *)(a1 + 13692);
    }
    else
    {
      v2 = 14;
    }
  }
  return v3 | (unsigned __int64)(v2 << 32);
}

