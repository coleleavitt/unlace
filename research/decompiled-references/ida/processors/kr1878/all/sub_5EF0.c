__int64 __fastcall sub_5EF0(_QWORD *a1)
{
  __int64 *segm_by_name; // rax
  __int64 v2; // rax
  __int64 result; // rax

  segm_by_name = (__int64 *)get_segm_by_name();
  if ( segm_by_name )
    v2 = *segm_by_name;
  else
    v2 = -1;
  a1[22] = v2;
  result = netnode_qsupstr();
  if ( result > 0 )
    return sub_5D40(a1);
  return result;
}

