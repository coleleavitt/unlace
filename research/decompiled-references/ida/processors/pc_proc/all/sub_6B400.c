__int64 __fastcall sub_6B400(__int64 a1, int a2)
{
  __int64 qword; // rbx
  int flags; // eax
  __int64 v5; // rbp
  unsigned __int64 *v6; // rax
  char v7; // [rsp+28h] [rbp-160h] BYREF
  unsigned __int64 v8; // [rsp+168h] [rbp-20h] BYREF

  v8 = __readfsqword(0x28u);
  if ( a2 == 8 )
    qword = get_qword();
  else
    qword = (unsigned int)get_dword();
  if ( (unsigned __int64)(qword - 1) > 0xFFFFFFFFFFFFFFFDLL || (unsigned __int8)segtype() != 2 )
    return 0;
  flags = get_flags_ex();
  v5 = flags & 0x600;
  if ( v5 == 1536 && (flags & 0x10000000) != 0 )
    return 1;
  if ( (flags & 0x100) == 0 )
    return 0;
  v6 = (unsigned __int64 *)&v7;
  do
  {
    *(_WORD *)v6 = 0;
    v6 += 5;
    *((_WORD *)v6 - 19) = 0;
    *((_WORD *)v6 - 18) = 0;
    *((_DWORD *)v6 - 2) = 0;
    *((_WORD *)v6 - 17) = 0;
    *((_OWORD *)v6 - 2) = 0;
    *(v6 - 2) = 0;
  }
  while ( &v8 != v6 );
  if ( !(unsigned int)decode_insn() || v5 != 1536 && sub_23600() < 0 )
    return 0;
  auto_mark_range();
  auto_mark_range();
  return 1;
}

