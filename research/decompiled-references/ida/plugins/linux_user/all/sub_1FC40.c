__int64 __fastcall sub_1FC40(__int64 a1, __int64 a2, __off64_t a3)
{
  if ( (unsigned int)sub_1F860(a1, 0xFFFFFFFF, a3, (unsigned __int64 *)(a2 + 8), 1, 0) != 1
    || !(*(unsigned int (__fastcall **)(__int64, _QWORD, __int64, __off64_t, __int64))(*(_QWORD *)a1 + 312LL))(
          a1,
          0,
          4,
          a3,
          0xFFFFFFFFLL) )
  {
    return 0;
  }
  *(_QWORD *)a2 = a3;
  *(_BYTE *)(a2 + 9) = 1;
  return 1;
}

