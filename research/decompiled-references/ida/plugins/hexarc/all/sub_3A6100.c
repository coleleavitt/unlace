__int64 __fastcall sub_3A6100(__int64 *a1, __int64 a2, int a3)
{
  int v4; // ebp
  __int64 v5; // rax
  __int64 v6; // rsi
  unsigned __int64 *v7; // rax
  __int64 v8; // rax
  __int64 v10; // [rsp+0h] [rbp-1C8h]
  char v11; // [rsp+10h] [rbp-1B8h]
  char v12; // [rsp+48h] [rbp-180h] BYREF
  unsigned __int64 v13; // [rsp+188h] [rbp-40h] BYREF

  v13 = __readfsqword(0x28u);
  if ( !(unsigned __int8)xrefblk_t_first_to() )
    return 0;
  v4 = 0;
  do
  {
    if ( v11 )
      goto LABEL_8;
    if ( (~((unsigned __int16)get_flags_ex() >> 8) & 6) != 0 )
      goto LABEL_8;
    v7 = (unsigned __int64 *)&v12;
    do
    {
      *(_WORD *)v7 = 0;
      v7 += 5;
      *((_WORD *)v7 - 19) = 0;
      *((_WORD *)v7 - 18) = 0;
      *((_DWORD *)v7 - 2) = 0;
      *((_WORD *)v7 - 17) = 0;
      *((_OWORD *)v7 - 2) = 0;
      *(v7 - 2) = 0;
    }
    while ( &v13 != v7 );
    if ( (unsigned int)decode_insn() && ((unsigned __int8)is_call_insn() || (unsigned __int8)is_indirect_jump_insn()) )
    {
LABEL_8:
      if ( a1 )
      {
        v5 = a1[1];
        v6 = *a1;
        if ( a1[2] < (unsigned __int64)(v5 + 1) )
        {
          v8 = qvector_reserve();
          *a1 = v8;
          v6 = v8;
          v5 = a1[1];
        }
        *(_QWORD *)(v6 + 8 * v5) = v10;
        ++a1[1];
      }
      if ( ++v4 >= a3 )
      {
        if ( a3 )
          break;
      }
    }
  }
  while ( (unsigned __int8)xrefblk_t_next_to() );
  return v4;
}

