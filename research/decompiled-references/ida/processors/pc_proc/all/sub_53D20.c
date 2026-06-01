__int64 __fastcall sub_53D20(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 named_type_tid; // rax
  __int64 v5; // rbx
  __int64 result; // rax

  named_type_tid = *(_QWORD *)(a1 + 5608);
  if ( !named_type_tid )
  {
    named_type_tid = get_named_type_tid();
    *(_QWORD *)(a1 + 5608) = named_type_tid;
  }
  v5 = a3 + 12;
  if ( named_type_tid == -1
    && (result = sub_53B40(
                   (__int64)"int   tpDtt;short tpMask;short tpName;void *BaseType;char  Name[] __strlit(C);",
                   "_tpidp"),
        *(_QWORD *)(a1 + 5608) = result,
        result == -1) )
  {
    *a2 += v5;
  }
  else
  {
    result = create_data();
    *a2 += v5;
  }
  return result;
}

