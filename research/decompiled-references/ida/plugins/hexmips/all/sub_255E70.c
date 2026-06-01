int __fastcall sub_255E70(__int64 a1, __int64 a2)
{
  int result; // eax

  result = sub_254FD0(a1, a2, 0);
  if ( !result )
    return sub_254E20(*(_QWORD *)(a1 + 64), *(_QWORD *)(a2 + 64));
  return result;
}

