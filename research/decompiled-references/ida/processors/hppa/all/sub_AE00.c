__int64 __fastcall sub_AE00(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbx
  __int64 v3; // r13
  unsigned __int64 *v4; // rax
  char v6; // [rsp+48h] [rbp-180h] BYREF
  unsigned __int64 v7; // [rsp+188h] [rbp-40h] BYREF

  v7 = __readfsqword(0x28u);
  v2 = *a2;
  v3 = *a2 + 64;
  while ( 1 )
  {
    v4 = (unsigned __int64 *)&v6;
    do
    {
      *(_WORD *)v4 = 0;
      v4 += 5;
      *((_WORD *)v4 - 19) = 0;
      *((_WORD *)v4 - 18) = 0;
      *((_DWORD *)v4 - 2) = 0;
      *((_WORD *)v4 - 17) = 0;
      *((_OWORD *)v4 - 2) = 0;
      *(v4 - 2) = 0;
    }
    while ( &v7 != v4 );
    decode_insn();
    if ( (unsigned int)get_dword() >> 26 == 27 )
      break;
    v2 += 4;
    if ( v2 == v3 )
      return 0;
  }
  return add_frame();
}

