__int64 __fastcall sub_533F0(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax
  __int64 named_type_tid; // rax

  v1 = *(_QWORD *)(a1 + 5536);
  if ( !v1 )
  {
    named_type_tid = get_named_type_tid();
    *(_QWORD *)(a1 + 5536) = named_type_tid;
    v1 = named_type_tid;
  }
  if ( v1 != -1 )
    return create_data();
  result = sub_52B40((__int64)"void *RttiPtr;int Flags;int spoff __dec;", "_excInfo");
  *(_QWORD *)(a1 + 5536) = result;
  if ( result != -1 )
    return create_data();
  return result;
}
