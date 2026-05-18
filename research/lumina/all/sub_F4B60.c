__int64 __fastcall sub_F4B60(__int64 a1, _QWORD *a2, unsigned __int64 a3, void (*a4)(void), __int64 a5, __int64 a6)
{
  if ( (_BYTE)a5 == 4 )
    a5 = 2;
  if ( a3 > 0x7FFFFFFF )
    return sub_F1960((__int64)a2, a4, (__int64 *)a1, (_DWORD *)(a1 + 36), a5, a6);
  else
    return sub_F48B0(a1, a2, a3, a5, (__int64 (__fastcall *)(__int64))a4, a6);
}
