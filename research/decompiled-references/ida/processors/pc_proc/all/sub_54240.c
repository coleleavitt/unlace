__int64 __fastcall sub_54240(__int64 a1, _QWORD *a2)
{
  __int64 named_type_tid; // rax
  __int64 result; // rax

  named_type_tid = *(_QWORD *)(a1 + 5544);
  if ( !named_type_tid )
  {
    named_type_tid = get_named_type_tid();
    *(_QWORD *)(a1 + 5544) = named_type_tid;
  }
  if ( named_type_tid == -1
    && (result = sub_53B40((__int64)"int _unk;int spoff __dec;", "_excHdr"),
        *(_QWORD *)(a1 + 5544) = result,
        result == -1) )
  {
    *a2 += 8LL;
  }
  else
  {
    result = create_data();
    *a2 += 8LL;
  }
  return result;
}

