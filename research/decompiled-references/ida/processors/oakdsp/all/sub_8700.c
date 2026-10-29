__int64 __fastcall sub_8700(unsigned __int64 *a1)
{
  unsigned __int64 v2; // r13
  unsigned __int64 *v3; // rax
  unsigned __int64 v4; // r15
  char v5; // [rsp+28h] [rbp-180h] BYREF
  unsigned __int64 v6; // [rsp+168h] [rbp-40h] BYREF

  v6 = __readfsqword(0x28u);
  if ( a1 && a1[3] == -1 )
  {
    v2 = *a1;
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
    if ( v2 < a1[1] )
    {
      decode_insn();
      v4 = *a1;
      while ( v4 < a1[1] )
        decode_insn();
    }
    a1[2] |= 0x10u;
    update_func();
    add_frame();
  }
  return 0;
}

