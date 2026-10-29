__int64 __fastcall sub_E8E0(__int64 a1, double a2)
{
  __int64 name_ea; // rax
  _QWORD *segm_by_name; // rax
  __int64 v5; // rax

  netnode_check();
  if ( (unsigned __int8)netnode_exist() )
  {
    netnode_altval();
    v5 = node2ea();
    *(_QWORD *)(a1 + 160) = v5;
    if ( v5 != -1 )
      return sub_E660((__int64)"DP is assumed to be %08a\n", a2);
  }
  else
  {
    *(_QWORD *)(a1 + 160) = -1;
  }
  name_ea = get_name_ea();
  *(_QWORD *)(a1 + 160) = name_ea;
  if ( name_ea == -1 )
  {
    segm_by_name = (_QWORD *)get_segm_by_name();
    if ( segm_by_name )
      *(_QWORD *)(a1 + 160) = *segm_by_name;
  }
  return sub_E660((__int64)"DP is assumed to be %08a\n", a2);
}

