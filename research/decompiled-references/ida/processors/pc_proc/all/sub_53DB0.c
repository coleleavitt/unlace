__int64 __fastcall sub_53DB0(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 named_type_tid; // rax
  __int64 v5; // rbx
  __int64 result; // rax

  named_type_tid = *(_QWORD *)(a1 + 5600);
  if ( !named_type_tid )
  {
    named_type_tid = get_named_type_tid();
    *(_QWORD *)(a1 + 5600) = named_type_tid;
  }
  v5 = a3 + 16;
  if ( named_type_tid == -1
    && (result = sub_53B40(
                   (__int64)"int   tpDtt;short tpMask;short tpName;void *BaseType;int   Elements __udec;char  Name[] __strlit(C);",
                   "_tpida"),
        *(_QWORD *)(a1 + 5600) = result,
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

