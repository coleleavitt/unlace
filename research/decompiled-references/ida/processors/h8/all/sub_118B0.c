__int64 __fastcall sub_118B0(__int64 a1, __int64 a2)
{
  __int16 v2; // ax
  __int64 v3; // rdx

  v2 = *(_WORD *)(a1 + 224) & 0xF000;
  if ( v2 == 0x2000 )
    return a2 & 0xFFFFFF;
  v3 = a2;
  if ( v2 != 12288 && (v3 = (unsigned __int16)a2, v2 == 4096) )
    return a2 & 0xFFFFFF;
  else
    return v3;
}

