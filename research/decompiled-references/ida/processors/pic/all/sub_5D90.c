__int64 __fastcall sub_5D90(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  if ( !a2 || !(unsigned int)sub_5070(a1, a2, a3, a4, a5, a6) )
    return 0;
  if ( (unsigned __int8)getinf_flag() || (*(_BYTE *)(a1 + 244) & 1) != 0 )
    sub_4BA0(a1, a2);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 16) + 12LL) & 0x10) != 0 )
    getinf_flag();
  construct_macro();
  return *(unsigned __int16 *)(a2 + 26);
}

