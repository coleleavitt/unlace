__int64 __fastcall sub_1BFC0(__int64 a1, _QWORD *a2)
{
  char *v2; // rax
  bool v3; // zf
  unsigned __int64 v4; // r12
  unsigned __int64 *v5; // rax
  char v7; // [rsp+48h] [rbp-180h] BYREF
  unsigned __int64 v8; // [rsp+188h] [rbp-40h] BYREF

  v2 = &byte_7FAF1;
  v3 = a2[47] == 0;
  v8 = __readfsqword(0x28u);
  if ( !v3 )
    v2 = (char *)a2[46];
  if ( *v2 != 86 )
  {
    v4 = a2[42];
    v5 = (unsigned __int64 *)&v7;
    do
    {
      *(_WORD *)v5 = 0;
      v5 += 5;
      *((_WORD *)v5 - 19) = 0;
      *((_WORD *)v5 - 18) = 0;
      *((_DWORD *)v5 - 2) = 0;
      *((_WORD *)v5 - 17) = 0;
      *((_OWORD *)v5 - 2) = 0;
      *(v5 - 2) = 0;
    }
    while ( &v8 != v5 );
    if ( v4 < a2[43] )
    {
      while ( (unsigned int)decode_insn() && v4 < a2[43] )
        ;
    }
  }
  return 0;
}

