__int64 sub_C030()
{
  unsigned int v0; // ebx

  v0 = rebase_program();
  if ( !v0 )
    return 0;
  move_segm_strerror();
  sub_B690();
  sub_B5C0();
  return v0;
}

