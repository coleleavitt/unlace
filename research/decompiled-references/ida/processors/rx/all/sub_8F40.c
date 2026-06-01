unsigned __int64 __fastcall sub_8F40(__int64 a1, __int64 a2)
{
  unsigned __int64 *v3; // rax
  char v4; // [rsp+38h] [rbp-180h] BYREF
  unsigned __int64 v5; // [rsp+178h] [rbp-40h] BYREF

  v5 = __readfsqword(0x28u);
  if ( (unsigned __int16)(*(_WORD *)(a2 + 24) - 114) <= 1u )
  {
    netnode_supset();
    v3 = (unsigned __int64 *)&v4;
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
    while ( &v5 != v3 );
    decode_prev_insn();
  }
  return v5 - __readfsqword(0x28u);
}

