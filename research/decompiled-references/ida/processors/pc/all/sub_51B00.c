__int64 __fastcall sub_51B00(__int64 a1, char a2)
{
  unsigned __int64 *v3; // rax
  int v4; // eax
  char v5; // [rsp+28h] [rbp-160h] BYREF
  unsigned __int64 v6; // [rsp+168h] [rbp-20h] BYREF

  v6 = __readfsqword(0x28u);
  if ( (unsigned __int8)segtype() != 2 )
    return 0;
  if ( (~((unsigned __int16)get_flags_ex() >> 8) & 6) != 0 )
  {
    v3 = (unsigned __int64 *)&v5;
    do
    {
      *(_WORD *)v3 = 0;
      v3 += 5;
      *((_WORD *)v3 - 19) = 0;
      *((_WORD *)v3 - 18) = 0;
      *((_DWORD *)v3 - 2) = 0;
      *((_WORD *)v3 - 17) = 0;
      *((_OWORD *)v3 - 2) = 0;
      *(v3 - 2) = 0;
    }
    while ( &v6 != v3 );
    v4 = decode_insn();
    if ( !v4 )
      return 0;
    sub_519A0(a1, v4, 0);
    create_insn();
  }
  if ( a2 )
  {
    auto_mark_range();
    auto_mark_range();
  }
  return 1;
}
