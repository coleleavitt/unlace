__int64 __fastcall sub_6F440(__int64 a1, __int64 a2)
{
  unsigned __int64 *v3; // rax
  int v4; // ebp
  _BYTE v5[16]; // [rsp+28h] [rbp-170h] BYREF
  unsigned __int64 v6; // [rsp+168h] [rbp-30h] BYREF

  v6 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a2 + 1) & 0x40) != 0 )
  {
    v3 = (unsigned __int64 *)v5;
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
    decode_insn();
    if ( *(_WORD *)(a2 + 4) )
    {
      v4 = 0;
      do
      {
        add_cref();
        decode_insn();
        if ( v5[1] == 7 )
          add_cref();
        ++v4;
      }
      while ( *(unsigned __int16 *)(a2 + 4) > v4 );
    }
  }
  return 1;
}
