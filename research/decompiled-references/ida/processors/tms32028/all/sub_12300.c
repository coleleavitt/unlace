__int64 __fastcall sub_12300(__int64 a1)
{
  __int64 result; // rax
  unsigned __int64 *v2; // rax
  char v3; // [rsp+28h] [rbp-150h] BYREF
  unsigned __int64 v4; // [rsp+168h] [rbp-10h] BYREF

  v4 = __readfsqword(0x28u);
  result = 0;
  if ( a1 )
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
    if ( (unsigned int)decode_insn() == 1 )
      return 2;
    else
      return 2;
  }
  return result;
}

