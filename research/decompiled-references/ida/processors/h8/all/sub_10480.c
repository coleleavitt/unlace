__int64 __fastcall sub_10480(unsigned __int64 *a1)
{
  unsigned __int64 v2; // rbp
  unsigned __int64 *v3; // rax
  char v4; // [rsp+28h] [rbp-180h] BYREF
  unsigned __int64 v5; // [rsp+168h] [rbp-40h] BYREF

  v5 = __readfsqword(0x28u);
  if ( a1[3] == -1 )
  {
    v2 = *a1;
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
    while ( v3 != &v5 );
    if ( v2 < a1[1] )
      decode_insn();
  }
  return 0;
}

