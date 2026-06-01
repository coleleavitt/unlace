__int64 __fastcall sub_54480(__int64 a1)
{
  __int64 named_type_tid; // rax
  __int64 result; // rax

  named_type_tid = *(_QWORD *)(a1 + 5512);
  if ( !named_type_tid )
  {
    named_type_tid = get_named_type_tid();
    *(_QWORD *)(a1 + 5512) = named_type_tid;
  }
  if ( named_type_tid != -1 )
    return create_data();
  result = sub_53B40((__int64)"int spoff __dec;int _unk;void *finEntry;void *RttiInfo;int zArg[4];", "_excInfo2");
  *(_QWORD *)(a1 + 5512) = result;
  if ( result != -1 )
    return create_data();
  return result;
}

