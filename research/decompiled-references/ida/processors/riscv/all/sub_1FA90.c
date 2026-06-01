__int64 __fastcall sub_1FA90(__int64 a1, __int64 a2)
{
  _QWORD *first_seg; // rax

  if ( a2 != -1 )
    return get_sreg(a2, 100);
  first_seg = (_QWORD *)get_first_seg();
  if ( first_seg )
    return get_sreg(*first_seg, 100);
  else
    return -1;
}

