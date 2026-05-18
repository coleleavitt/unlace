__int64 __fastcall sub_F1F70(__int64 a1, unsigned int a2, _QWORD *a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 result; // rax

  sub_E1710(a1, 83, 0, 0, 0);
  sub_E1710(a1, 84, a2, 1u, 0);
  sub_DE530(a1, 1, v4, v5, v6, v7);
  result = *(_QWORD *)a1;
  if ( !*(_BYTE *)(*(_QWORD *)a1 + 103LL) )
    return sub_F1A30(a1, 0, 0, a3, nullptr);
  return result;
}
