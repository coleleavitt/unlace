__int64 __fastcall sub_216A0(__int64 a1, __int64 a2, _BYTE *a3)
{
  unsigned int _32bit; // eax
  unsigned int v5; // ebx

  _32bit = get_32bit();
  sub_211A0(a1, a2, a3, _32bit);
  v5 = get_32bit();
  if ( (unsigned int)get_32bit() < v5 )
  {
    get_max_strlit_length();
    create_strlit();
    set_cmt();
  }
  return *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) & (a2 + v5);
}

