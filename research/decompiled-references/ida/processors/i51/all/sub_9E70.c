__int64 __fastcall sub_9E70(__int64 a1)
{
  __int64 segm_by_name; // rbx
  __int64 v2; // rbx
  __int64 result; // rax

  segm_by_name = get_segm_by_name();
  if ( segm_by_name || (segm_by_name = get_segm_by_name()) != 0 )
  {
    if ( *(_BYTE *)(segm_by_name + 184) != 12 )
    {
      *(_BYTE *)(segm_by_name + 184) = 12;
      update_segm();
    }
    *(_QWORD *)(a1 + 264) = *(_QWORD *)segm_by_name;
  }
  v2 = get_segm_by_name();
  if ( v2 || (result = get_segm_by_name(), (v2 = result) != 0) )
  {
    if ( *(_BYTE *)(v2 + 184) != 12 )
    {
      *(_BYTE *)(v2 + 184) = 12;
      update_segm();
    }
    result = *(_QWORD *)v2 - 128LL;
    *(_QWORD *)(a1 + 272) = result;
  }
  return result;
}

