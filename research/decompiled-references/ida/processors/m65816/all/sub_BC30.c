__int64 __fastcall sub_BC30(unsigned __int64 head, int a2)
{
  int flags; // eax
  unsigned __int8 byte; // al

  do
  {
    if ( head <= 3 )
      return -1;
    head = prev_head();
    if ( head == -1 )
      return -1;
    flags = get_flags_ex();
    if ( (~(_WORD)flags & 0x600) != 0 || (flags & 0x10000000) != 0 )
      return -1;
    byte = get_byte();
  }
  while ( a2 != (unsigned __int8)*sub_4930(byte) );
  return head;
}

