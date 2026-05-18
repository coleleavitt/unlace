__int64 *__fastcall sub_C36A0(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx

  if ( (*(_BYTE *)(a1 + 52) & 0x20) == 0 )
    return sub_C3110(a1);
  v2 = *(_QWORD *)(a1 + 40);
  v3 = *(_QWORD *)(v2 + 168);
  --*(_DWORD *)(v2 + 152);
  *(_QWORD *)(a1 + 32) = v3;
  *(_QWORD *)(v2 + 168) = a1;
  return (__int64 *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(v2 + 72) + 144LL))(
                      *(_QWORD *)(v2 + 72),
                      *(_QWORD *)(v2 + 200) * (unsigned int)(*(_DWORD *)(a1 + 48) - 1),
                      *(_QWORD *)(a1 + 8));
}
