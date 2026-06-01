__int64 __fastcall sub_3E6C00(__int64 a1, __int64 a2)
{
  unsigned __int64 *v2; // rax
  __int64 v4; // [rsp+2h] [rbp-190h]
  char v5; // [rsp+32h] [rbp-160h] BYREF
  unsigned __int64 v6; // [rsp+172h] [rbp-20h] BYREF

  v6 = __readfsqword(0x28u);
  v2 = (unsigned __int64 *)&v5;
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
  while ( &v6 != v2 );
  if ( (unsigned int)decode_insn() )
  {
    v4 = *(_QWORD *)(a2 + 24);
    if ( *(char *)(get_ph() + 10) < 0 && sub_CBD70() == 1 && v4 != -1 && v4 != *(_QWORD *)(a2 + 24) )
      decode_insn();
  }
  return 0;
}

