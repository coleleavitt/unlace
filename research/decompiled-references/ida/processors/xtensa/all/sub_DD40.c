__int64 __fastcall sub_DD40(__int64 a1, __int64 a2)
{
  unsigned __int64 *v2; // rax
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 i; // r12
  char v7; // [rsp+28h] [rbp-160h] BYREF
  unsigned __int64 v8; // [rsp+168h] [rbp-20h] BYREF

  v8 = __readfsqword(0x28u);
  v2 = (unsigned __int64 *)&v7;
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
  while ( &v8 != v2 );
  if ( (unsigned int)decode_insn() - 2 <= 1 )
    return 0;
  if ( (unsigned __int8)get_byte() )
    return 0;
  if ( (~((unsigned __int16)get_flags_ex() >> 8) & 6) == 0 )
    return 0;
  v4 = a2 + 1;
  v5 = getseg();
  if ( !v5 )
    return 0;
  for ( i = *(_QWORD *)(v5 + 8); v4 < i; ++v4 )
  {
    if ( (v4 & 3) == 0 )
      break;
    if ( (get_flags_ex() & 0xD400) != 0 )
      break;
    if ( (unsigned __int8)get_byte() )
      break;
  }
  return (unsigned int)(v4 - a2);
}

