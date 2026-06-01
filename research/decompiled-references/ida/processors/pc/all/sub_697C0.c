bool sub_697C0()
{
  __int64 v1; // rbp
  __int64 v2; // rax
  __int64 segm_para; // rbp

  get_flags_ex();
  if ( !(unsigned __int8)is_off() )
    return 1;
  if ( (unsigned __int8)get_refinfo() )
    calc_reference_data();
  v1 = getseg();
  v2 = getseg();
  if ( !v1 || v1 == v2 )
    return 1;
  segm_para = get_segm_para();
  return segm_para == get_segm_para();
}
