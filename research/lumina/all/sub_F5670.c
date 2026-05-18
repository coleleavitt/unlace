_QWORD *__fastcall sub_F5670(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rsi
  _QWORD *result; // rax
  __int64 v8; // rdx
  __int64 v9; // rdx
  _QWORD *v10; // rsi

  v6 = *(_QWORD *)(a1 + 16);
  if ( *(__int16 *)(v6 + 20) >= 0 )
  {
    result = sub_EF2D0((_QWORD *)(a1 + 8), v6, 0, a4, a5, a6);
    if ( !result )
      return result;
  }
  else
  {
    result = *(_QWORD **)(v6 + 8);
    if ( !result )
      return result;
  }
  v8 = *((unsigned __int8 *)result + 28);
  if ( (_BYTE)v8 == 18 )
  {
    *(_DWORD *)(a1 + 36) = 18;
    return (_QWORD *)sub_F11D0(*(_QWORD *)a1, "string or blob too big", -1, 1, nullptr, a6);
  }
  else if ( (_BYTE)v8 == 7 )
  {
    return (_QWORD *)sub_E1560(a1, v6, v8, a4, a5, a6);
  }
  else
  {
    v9 = *((unsigned int *)result + 6);
    v10 = nullptr;
    if ( (_DWORD)v9 )
    {
      *(_BYTE *)(result[1] + v9) = 0;
      v10 = (_QWORD *)result[1];
      LODWORD(v9) = *((_DWORD *)result + 6);
    }
    return (_QWORD *)sub_F48B0(a1, v10, v9, 1u, (__int64 (__fastcall *)(__int64))0xFFFFFFFFFFFFFFFFLL, a6);
  }
}
