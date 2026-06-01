__int64 sub_6600()
{
  unsigned __int64 *v0; // rax
  char v2; // [rsp+28h] [rbp-150h] BYREF
  __int16 v3; // [rsp+2Eh] [rbp-14Ah]
  __int16 v4; // [rsp+56h] [rbp-122h]
  unsigned __int64 v5; // [rsp+168h] [rbp-10h] BYREF

  v5 = __readfsqword(0x28u);
  v0 = (unsigned __int64 *)&v2;
  do
  {
    *(_WORD *)v0 = 0;
    v0 += 5;
    *((_WORD *)v0 - 19) = 0;
    *((_WORD *)v0 - 18) = 0;
    *((_DWORD *)v0 - 2) = 0;
    *((_WORD *)v0 - 17) = 0;
    *((_OWORD *)v0 - 2) = 0;
    *(v0 - 2) = 0;
  }
  while ( &v5 != v0 );
  if ( (int)decode_insn() > 0 && v3 == 29 && v4 == 27 )
    decode_insn();
  return -1;
}

