__int64 sub_22510()
{
  unsigned int v0; // ebx
  char v2; // [rsp+11h] [rbp-27h]

  v0 = op_offset();
  if ( (_BYTE)v0 && (unsigned __int8)xrefblk_t_first_to() )
  {
    do
    {
      if ( (unsigned __int8)(v2 - 2) <= 1u )
        auto_mark_range();
    }
    while ( (unsigned __int8)xrefblk_t_next_to() );
  }
  return v0;
}

