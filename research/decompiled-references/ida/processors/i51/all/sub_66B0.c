__int64 __fastcall sub_66B0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // rdx
  __int64 v4; // rcx

  if ( (~(_WORD)a2 & 0x600) != 0 || (result = a2, (a2 & 0x40000000) == 0) )
  {
    set_immd();
    result = get_flags_ex();
  }
  v3 = *(unsigned __int16 *)(a1 + 24);
  if ( (unsigned __int16)v3 <= 0x2Cu )
  {
    v4 = 0x100020000020LL;
    if ( _bittest64(&v4, v3) )
    {
      if ( (result & 0xF000000) == 0 )
      {
        num_flag();
        set_op_type();
        return get_flags_ex();
      }
    }
  }
  return result;
}

