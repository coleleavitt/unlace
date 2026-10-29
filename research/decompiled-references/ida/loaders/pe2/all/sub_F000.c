void __fastcall sub_F000(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v5; // rbx

  if ( a4 != a3 )
  {
    v5 = a3;
    if ( (unsigned int)get_segm_qty() )
      set_segm_end();
    else
      add_segm();
    set_name();
    if ( v5 < a4 )
    {
      do
      {
        ++v5;
        create_data();
      }
      while ( a4 != v5 );
    }
  }
}

