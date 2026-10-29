__int64 sub_9E00()
{
  unsigned __int64 *v0; // rax
  char v2; // [rsp+5Ch] [rbp-180h] BYREF
  unsigned __int64 v3; // [rsp+19Ch] [rbp-40h] BYREF

  v0 = (unsigned __int64 *)&v2;
  v3 = __readfsqword(0x28u);
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
  while ( &v3 != v0 );
  get_func();
  func_tail_iterator_set();
  while ( (unsigned __int8)func_item_iterator_decode_prev_insn() && (unsigned int)get_spoiled_reg() == -1 )
    ;
  return 0;
}

