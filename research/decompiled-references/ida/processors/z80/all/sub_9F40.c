__int64 __fastcall sub_9F40(__int64 a1, __int64 a2)
{
  unsigned __int64 *v2; // rax
  char v4; // [rsp+28h] [rbp-150h] BYREF
  unsigned __int64 v5; // [rsp+168h] [rbp-10h] BYREF

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
  if ( a2 != -1 && (int)decode_insn() > 0 && (unsigned __int8)is_call_insn() )
    return -1;
  else
    return -1;
}

