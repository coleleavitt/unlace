signed __int64 __fastcall sub_13180(__int64 a1)
{
  __int64 *segm_by_name; // rax
  __int64 v2; // rax
  bool v3; // zf
  signed __int64 result; // rax
  __int64 *v5; // rax
  __int64 v6; // rax

  segm_by_name = (__int64 *)get_segm_by_name();
  if ( segm_by_name )
    v2 = *segm_by_name;
  else
    v2 = -1;
  v3 = *(_DWORD *)(a1 + 600) == 1;
  *(_QWORD *)(a1 + 232) = v2;
  if ( !v3 )
  {
    v5 = (__int64 *)get_segm_by_name();
    if ( v5 )
      v6 = *v5;
    else
      v6 = -1;
    *(_QWORD *)(a1 + 240) = v6;
  }
  result = netnode_qsupstr();
  if ( result > 0 )
    return sub_12140((__int64 *)(a1 + 128), 0);
  return result;
}

