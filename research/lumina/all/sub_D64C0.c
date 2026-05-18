unsigned __int64 __fastcall sub_D64C0(__int64 a1, __int64 *a2)
{
  unsigned __int64 result; // rax

  sub_C91C0(*(_QWORD *)(a1 + 32), (__int64)a2);
  sub_C91C0(*(_QWORD *)(a1 + 48), (__int64)a2);
  if ( *(_QWORD *)(a1 + 64) )
  {
    a2 = nullptr;
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 24) + 144LL))(*(_QWORD *)(a1 + 24), 0);
  }
  result = sub_D6420(*(_QWORD *)(a1 + 72), a2);
  *(_OWORD *)a1 = 0;
  *(_OWORD *)(a1 + 16) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 64) = 0;
  return result;
}
