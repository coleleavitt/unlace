__int64 __fastcall sub_20130(__int64 a1)
{
  int v1; // eax
  __int16 *v3; // rdx
  __int16 v4; // bp

  v1 = *(_DWORD *)(a1 + 16);
  if ( !v1 )
    return sub_204B0();
  v3 = *(__int16 **)(a1 + 8);
  v4 = *v3;
  if ( ((*v3 - 43) & 0xFFFD) != 0 )
  {
    if ( v4 != 42 )
      return sub_204B0();
    *(_DWORD *)(a1 + 16) = v1 - 1;
    *(_QWORD *)(a1 + 8) = v3 + 1;
    return sub_1F840(a1);
  }
  else
  {
    *(_DWORD *)(a1 + 16) = v1 - 1;
    *(_QWORD *)(a1 + 8) = v3 + 1;
    if ( (unsigned __int8)sub_1F840(a1) && (unsigned __int8)sub_200B0(a1, v4 == 45) )
      return sub_204B0();
    return 0;
  }
}
