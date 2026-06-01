bool sub_23340()
{
  unsigned __int64 *v0; // rax
  char byte; // al
  char v2; // dl
  bool result; // al
  char v4; // [rsp+28h] [rbp-150h] BYREF
  unsigned __int64 v5; // [rsp+168h] [rbp-10h] BYREF

  v5 = __readfsqword(0x28u);
  v0 = (unsigned __int64 *)&v4;
  do
  {
    *(_WORD *)v0 = 0;
    v0 += 5;
    *((_WORD *)v0 - 19) = 0;
    *((_WORD *)v0 - 18) = 0;
    *((_DWORD *)v0 - 2) = 0;
    *((_WORD *)v0 - 17) = 0;
    *((_OWORD *)v0 - 2) = 0;
    *(v0 - 2) = 0;
  }
  while ( &v5 != v0 );
  if ( (unsigned int)decode_insn() )
  {
    byte = get_byte();
    if ( byte == -102 || byte == -24 )
    {
      v2 = get_byte();
      result = 1;
      if ( v2 == 89 )
        return result;
      if ( (unsigned __int8)get_byte() == 68 )
        return (unsigned __int8)get_byte() == 68;
    }
  }
  return 0;
}

