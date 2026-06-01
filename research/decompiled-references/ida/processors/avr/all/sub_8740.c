_QWORD *__fastcall sub_8740(__int64 a1)
{
  _QWORD *result; // rax

  if ( netnode_qsupstr() > 0 )
    sub_7270((__int64 *)(a1 + 128), 0);
  result = (_QWORD *)get_segm_by_name();
  if ( result )
  {
    result = (_QWORD *)*result;
    *(_QWORD *)(a1 + 328) = result;
  }
  return result;
}

