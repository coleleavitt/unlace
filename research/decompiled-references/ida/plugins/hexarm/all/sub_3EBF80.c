__int64 __fastcall sub_3EBF80(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 *v2; // rdx
  char v4; // [rsp+28h] [rbp-170h] BYREF
  unsigned __int64 v5; // [rsp+168h] [rbp-30h] BYREF

  v5 = __readfsqword(0x28u);
  v2 = (unsigned __int64 *)&v4;
  do
  {
    *(_WORD *)v2 = 0;
    v2 += 5;
    *((_WORD *)v2 - 19) = 0;
    *((_WORD *)v2 - 18) = 0;
    *((_DWORD *)v2 - 2) = 0;
    *((_WORD *)v2 - 17) = 0;
    *((_OWORD *)v2 - 2) = 0;
    *(v2 - 2) = 0;
  }
  while ( &v5 != v2 );
  get_ph();
  if ( a1 < a2 )
  {
    do
      decode_insn();
    while ( next_that() < a2 );
  }
  return 0;
}

