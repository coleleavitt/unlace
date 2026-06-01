__int64 __fastcall sub_3EAD10(__int64 a1, int a2, int a3, int a4, int a5, double a6)
{
  unsigned __int16 v6; // ax
  __int64 v7; // rbp
  unsigned __int16 v9; // ax
  unsigned int v10; // esi
  __int64 result; // rax
  __int64 v12; // [rsp-10h] [rbp-28h]

  v6 = *(_WORD *)(a1 + 890);
  if ( ((v6 - 4) & 0xFFFB) != 0 )
  {
    if ( !under_debugger )
      sub_37E160(0xCD00u, a6);
    BUG();
  }
  v7 = a5;
  sub_3EAB70(a1, 0x47u, v6, a2, a3, a5, 0);
  v9 = *(_WORD *)(a1 + 48);
  if ( v9 > 0xE0u )
  {
    v10 = (unsigned __int16)(v9 - 225) < 2u ? 0x46 : 0;
  }
  else
  {
    v10 = 69;
    if ( v9 <= 0xDEu )
    {
      if ( v9 > 0xD4u )
        v10 = (unsigned __int16)(v9 - 213) < 2u ? 0x46 : 0;
      else
        v10 = v9 >= 0xD3u ? 0x45 : 0;
    }
  }
  sub_3EAB70(a1, v10, *(unsigned __int16 *)(a1 + 890), v7, a4, v7, 0);
  result = (unsigned int)*(unsigned __int16 *)(a1 + 48) - 223;
  if ( (unsigned int)result <= 3 )
  {
    sub_3EAB70(a1, 0x44u, *(unsigned __int16 *)(a1 + 890), v7, 0x3BEA45E214ADDC55LL, v7, 0);
    return v12;
  }
  return result;
}

