__int64 __fastcall sub_29720(__int64 a1)
{
  int v1; // eax
  int v2; // ebx

  v1 = *(unsigned __int16 *)(a1 + 24);
  v2 = v1 - 338;
  if ( (unsigned __int16)(v1 - 339) > 3u )
  {
    if ( (unsigned __int16)(v1 - 412) > 3u )
      return 0;
    v2 = v1 - 411;
  }
  if ( *(_BYTE *)(a1 + 41) == 12 )
  {
    if ( *(_BYTE *)(a1 + 74) )
      return v2 * (unsigned int)get_dtype_size();
    else
      return 8 * (unsigned int)*(_QWORD *)(a1 + 48);
  }
  else
  {
    if ( under_debugger )
      BUG();
    interr(10509);
    return sub_29790();
  }
}
