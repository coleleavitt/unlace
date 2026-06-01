__int64 __fastcall sub_7680(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 *v3; // rax
  unsigned __int64 v4; // rbx
  unsigned __int64 i; // rax
  char v6; // [rsp+28h] [rbp-170h] BYREF
  unsigned __int64 v7; // [rsp+168h] [rbp-30h] BYREF

  v7 = __readfsqword(0x28u);
  if ( a2 && a2[3] == -1 )
  {
    v3 = (unsigned __int64 *)&v6;
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
    while ( &v7 != v3 );
    v4 = *a2;
    if ( *a2 < a2[1] )
    {
      decode_insn();
      for ( i = a2[1]; v4 < i && (int)decode_insn() > 0; i = a2[1] )
        ;
    }
    add_frame();
  }
  return 0;
}

