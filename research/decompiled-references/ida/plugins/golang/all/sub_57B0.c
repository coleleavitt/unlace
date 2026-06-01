__int64 __fastcall sub_57B0(unsigned int a1)
{
  int v1; // ebx
  int idasgn_qty; // ebp
  unsigned __int64 v4; // [rsp+18h] [rbp-40h]

  v4 = __readfsqword(0x28u);
  v1 = *(_DWORD *)(get_ph() + 4);
  if ( v1 )
    return v4 - __readfsqword(0x28u);
  idasgn_qty = get_idasgn_qty();
  if ( idasgn_qty > 0 )
  {
    do
    {
      get_idasgn_desc();
      ++v1;
    }
    while ( idasgn_qty != v1 );
  }
  if ( (getinf() & 6) != 2 && a1 <= 0x75 && a1 > 0x73 )
    return v4 - __readfsqword(0x28u);
  else
    return plan_to_apply_idasgn();
}
