__int64 sub_6EB70()
{
  unsigned int v0; // eax
  unsigned int v1; // ebp
  char v3; // [rsp+11h] [rbp-27h]

  v0 = xrefblk_t_first_to();
  if ( (_BYTE)v0 )
  {
    v1 = v0;
    while ( v3 != 2 )
    {
      if ( !(unsigned __int8)xrefblk_t_next_to() )
        return 0;
    }
  }
  else
  {
    return 0;
  }
  return v1;
}

