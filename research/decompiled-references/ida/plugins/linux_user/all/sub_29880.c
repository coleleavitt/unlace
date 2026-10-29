_BOOL8 __fastcall sub_29880(__int64 a1, _OWORD *a2)
{
  int v2; // edx
  _BOOL8 result; // rax

  *a2 = 0;
  v2 = sub_27030(*(_QWORD *)(a1 + 8), (__int64)a2, *(int *)(*(_QWORD *)(a1 + 8) + 436LL));
  result = 0;
  if ( v2 >= 0 )
    return (int)sub_27030(*(_QWORD *)(a1 + 8), (__int64)a2 + 8, *(int *)(*(_QWORD *)(a1 + 8) + 424LL)) >= 0;
  return result;
}

