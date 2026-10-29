__int64 __fastcall sub_6FF40(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 named_type_tid; // rax

  v4 = *(_QWORD *)(a1 + 5336);
  if ( v4 == -1 )
  {
    h2ti();
    h2ti();
    named_type_tid = get_named_type_tid();
    *(_QWORD *)(a1 + 5336) = named_type_tid;
    v4 = named_type_tid;
  }
  return sub_6A5B0(a2, 12 * a3 + 16, v4);
}

