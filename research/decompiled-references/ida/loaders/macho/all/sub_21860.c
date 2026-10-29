__int64 __fastcall sub_21860(__int64 a1, __int64 a2, signed int a3)
{
  char *v3; // r13
  __int64 v5; // rbx
  unsigned int _32bit; // eax
  unsigned int v7; // ebx

  v3 = "";
  sub_119D0(a3);
  v5 = a3 + (a3 < 0 ? 0x80000000 : 0) - 1;
  if ( (unsigned int)v5 <= 0x34 )
    v3 = (&off_64A20)[v5];
  _32bit = get_32bit();
  sub_211A0(a1, a2, v3, _32bit);
  v7 = get_32bit();
  if ( (unsigned int)get_32bit() < v7 )
  {
    get_max_strlit_length();
    create_strlit();
    set_cmt();
  }
  return *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) & (a2 + v7);
}

