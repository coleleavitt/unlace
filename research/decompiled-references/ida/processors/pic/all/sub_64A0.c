void __fastcall sub_64A0(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  unsigned __int8 v4; // bl
  __int16 sreg; // ax

  if ( a3 != -1 )
  {
    get_item_end();
LABEL_3:
    split_sreg_range();
    return;
  }
  *(_BYTE *)(a1 + 257) = 0;
  if ( a4 != -1 )
  {
    v4 = a4;
    sreg = get_sreg();
    sub_7730(a2, v4 | (unsigned __int64)((sreg << 8) & 0x1F00));
    add_cref();
    if ( (unsigned __int8)is_loaded() )
    {
      get_sreg();
      split_sreg_range();
    }
    if ( (unsigned __int8)is_loaded() )
    {
      get_sreg();
      goto LABEL_3;
    }
  }
}

