void __fastcall sub_61F0(__int64 a1)
{
  int v1; // ebx

  if ( *(_QWORD *)(a1 + 168) )
  {
    v1 = 0;
    do
    {
      if ( (get_flags_ex() & 0x600) == 0x200 )
        del_items();
      ++v1;
      create_data();
    }
    while ( (unsigned __int64)v1 < *(_QWORD *)(a1 + 168) );
  }
}

