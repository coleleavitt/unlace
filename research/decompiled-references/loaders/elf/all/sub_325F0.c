__int64 __fastcall sub_325F0(__int64 a1, __int64 a2, __int64 a3, __int16 a4)
{
  unsigned __int16 v4; // ax
  __int64 v5; // rax
  unsigned int v6; // edx
  __int64 v8; // rdx

  v4 = *(_WORD *)(a2 + 54);
  if ( v4 )
  {
    if ( v4 == 0xFFF1 )
    {
      v5 = 2;
    }
    else if ( v4 == 0xFFF2 )
    {
      v5 = 1;
    }
    else
    {
      v6 = -1;
      if ( v4 <= 0xFEFFu )
        return v6;
      v8 = 0;
      while ( v4 != *(_WORD *)(a1 + 2 * v8 + 328) )
      {
        if ( ++v8 == 4 )
          return 0xFFFFFFFFLL;
      }
      v5 = (int)v8;
      if ( !(_DWORD)v8 && a4 == 6 )
        v5 = 3;
    }
    v6 = 0;
    *(_WORD *)(a2 + 54) = *(_WORD *)(*(_QWORD *)(a1 + 8) + 40 * v5 + 24);
    return v6;
  }
  return 0xFFFFFFFFLL;
}
