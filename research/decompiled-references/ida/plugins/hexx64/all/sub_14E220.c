_BOOL8 __fastcall sub_14E220(__int64 a1)
{
  _DWORD *v2; // rdi

  v2 = *(_DWORD **)(a1 + 32);
  return *v2 == 2
      || (unsigned __int8)sub_1206E0((__int64)v2)
      || sub_11A5E0(*(_QWORD *)(a1 + 40), nullptr, 0, *(_QWORD *)(a1 + 32));
}

