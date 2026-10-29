__int64 __fastcall sub_6FE20(__int128 a1, char a2)
{
  __int64 result; // rax

  *(_QWORD *)(*((_QWORD *)&a1 + 1) + 16LL) &= ~0x400uLL;
  update_func();
  sub_25040(a1, *((_QWORD *)&a1 + 1));
  if ( a2 )
    del_frame();
  if ( *((_QWORD *)&a1 + 1) )
    sub_6FB80(a1, 0);
  result = get_func();
  if ( result )
  {
    delete_wrong_frame_info();
    return reanalyze_function();
  }
  return result;
}

