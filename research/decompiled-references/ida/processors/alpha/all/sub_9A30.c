__int64 __fastcall sub_9A30(__int64 a1, double a2)
{
  _QWORD *segm_by_name; // rax
  __int64 v4; // rax

  netnode_check();
  if ( (unsigned __int8)netnode_exist() )
  {
    netnode_altval();
    v4 = node2ea();
    *(_QWORD *)(a1 + 200) = v4;
    if ( v4 != -1 )
      goto LABEL_4;
  }
  else
  {
    *(_QWORD *)(a1 + 200) = -1;
  }
  get_name_value();
  if ( *(_QWORD *)(a1 + 200) == -1 )
  {
    segm_by_name = (_QWORD *)get_segm_by_name();
    if ( segm_by_name )
      *(_QWORD *)(a1 + 200) = *segm_by_name;
  }
LABEL_4:
  netnode_check();
  ea2node();
  netnode_supset();
  return sub_9540((__int64)"GP is assumed to be %08a\n", a2);
}

