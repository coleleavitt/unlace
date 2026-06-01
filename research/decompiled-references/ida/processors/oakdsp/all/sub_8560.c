__int64 __fastcall sub_8560(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbp

  if ( *(_BYTE *)(a2 + 41) == 7 )
  {
    sub_7B50(a1, (_QWORD *)a2, a2 + 40);
    if ( !(unsigned __int8)is_mapped() )
      return 0;
  }
  v2 = *(_QWORD *)(a2 + 16);
  v3 = v2 + 32;
  while ( !(unsigned __int8)get_byte() )
  {
    if ( ++v2 == v3 )
      return 0;
  }
  return 1;
}

