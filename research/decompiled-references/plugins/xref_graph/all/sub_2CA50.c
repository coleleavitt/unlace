__int64 __fastcall toggle_bottom_line_ah_t__::vfunc_4(__int64 a1, __int64 a2)
{
  (*(void (__fastcall **)(_QWORD, bool))(**(_QWORD **)(a2 + 48) + 104LL))(
    *(_QWORD *)(a2 + 48),
    !(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 48) + 32LL) + 9LL) >> 7));
  (*(void (__fastcall **)(_QWORD, bool))(**(_QWORD **)(a2 + 40) + 104LL))(
    *(_QWORD *)(a2 + 40),
    !(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 40) + 32LL) + 9LL) >> 7));
  return 1;
}
