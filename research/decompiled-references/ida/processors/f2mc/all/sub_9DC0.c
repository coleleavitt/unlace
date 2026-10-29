__int64 __fastcall sub_9DC0(_QWORD *a1)
{
  unsigned __int64 *v2; // rax
  char v3; // [rsp+28h] [rbp-170h] BYREF
  unsigned __int64 v4; // [rsp+168h] [rbp-30h] BYREF

  v4 = __readfsqword(0x28u);
  if ( a1 && a1[3] == -1 && (unsigned __int64)(*a1 + 4LL) < a1[1] )
  {
    v2 = (unsigned __int64 *)&v3;
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
    while ( &v4 != v2 );
    decode_insn();
  }
  return 0;
}

