__int64 __fastcall sub_30340(__int64 a1)
{
  unsigned __int64 *v1; // rax
  char v3; // [rsp+28h] [rbp-150h] BYREF
  unsigned __int64 v4; // [rsp+168h] [rbp-10h] BYREF

  v4 = __readfsqword(0x28u);
  v1 = (unsigned __int64 *)&v3;
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
  while ( &v4 != v1 );
  if ( a1 != -1 )
    decode_insn();
  return -1;
}

