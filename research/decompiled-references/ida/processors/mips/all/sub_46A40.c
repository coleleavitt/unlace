bool __fastcall sub_46A40(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  unsigned __int64 v4; // r12
  int word; // ebp
  char v6; // cl
  unsigned int v7; // eax
  unsigned int v8; // ebp

  v3 = 4026531840LL;
  v4 = *(_QWORD *)(a3 + 32) + *(_QWORD *)(a3 + 24);
  word = get_word(a2);
  get_word(a2 + 2);
  v6 = 2;
  v7 = (word << 16) & 0xFC000000;
  if ( v7 != -268435456 )
  {
    v3 = 4160749568LL;
    v6 = 1;
  }
  v8 = v7 | (v4 >> v6) & 0x3FFFFFF;
  put_word(a2, HIWORD(v8));
  put_word(a2 + 2, v8);
  split_sreg_range(a2, 67, 1, 2, 0);
  return (v3 & (v4 ^ (a2 + 4))) == 0;
}

