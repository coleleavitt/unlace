__int64 __fastcall sub_238D0(__int64 a1, __int64 *a2, unsigned int a3)
{
  if ( !(unsigned __int8)sub_23680(*(_QWORD *)(a1 + 16), *a2, 1) )
    return 0xFFFFFFFFLL;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64 *, _QWORD))(**(_QWORD **)(a1 + 8) + 272LL))(
         *(_QWORD *)(a1 + 8),
         a2,
         a3) )
  {
    ++*(_QWORD *)(*(_QWORD *)(a1 + 16) + 104LL);
  }
  return 0;
}
