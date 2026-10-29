__int64 sub_2AB00()
{
  unsigned __int64 *v1; // rax
  char v2; // [rsp+48h] [rbp-180h] BYREF
  unsigned __int64 v3; // [rsp+188h] [rbp-40h] BYREF

  v3 = __readfsqword(0x28u);
  if ( (unsigned __int8)equal_bytes() )
  {
    v1 = (unsigned __int64 *)&v2;
    do
    {
      *(_WORD *)v1 = 0;
      v1 += 5;
      *((_WORD *)v1 - 19) = 0;
      *((_WORD *)v1 - 18) = 0;
      *((_DWORD *)v1 - 2) = 0;
      *((_WORD *)v1 - 17) = 0;
      *((_OWORD *)v1 - 2) = 0;
      *(v1 - 2) = 0;
    }
    while ( &v3 != v1 );
    decode_insn();
  }
  return 0;
}

