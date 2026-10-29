void __fastcall sub_11960(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 i; // rbx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 < a2 )
  {
    do
    {
      if ( (unsigned __int8)get_byte() )
        break;
      ++v2;
    }
    while ( v2 < a2 );
    if ( a2 == v2 )
      goto LABEL_12;
    for ( i = *(_QWORD *)(a1 + 8); i < a2; ++i )
    {
      if ( (unsigned __int8)get_byte() != 0x90 )
        break;
    }
    if ( a2 == i )
LABEL_12:
      *(_QWORD *)(a1 + 8) = a2;
  }
}

