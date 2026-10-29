__int64 __fastcall sub_F48B0(
        __int64 a1,
        _QWORD *a2,
        int a3,
        unsigned __int8 a4,
        __int64 (__fastcall *a5)(__int64 a1),
        __int64 a6)
{
  __int64 v6; // rbp
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 result; // rax
  int v13; // edx

  v6 = *(_QWORD *)a1;
  v7 = sub_F11D0(*(_QWORD *)a1, a2, a3, a4, a5, a6);
  if ( v7 )
  {
    if ( v7 != 18 )
      return sub_E1560(a1, (__int64)a2, v8, v9, v10, v11);
    goto LABEL_8;
  }
  sub_E0AA0(v6, *(unsigned __int8 *)(a1 + 40));
  result = *(unsigned __int16 *)(v6 + 20);
  if ( (result & 0x12) != 0 )
  {
    v13 = *(_DWORD *)(v6 + 16);
    if ( (result & 0x400) != 0 )
      v13 += *(_DWORD *)v6;
    result = *(_QWORD *)(v6 + 24);
    if ( *(_DWORD *)(result + 136) < v13 )
    {
LABEL_8:
      *(_DWORD *)(a1 + 36) = 18;
      return sub_F11D0(*(_QWORD *)a1, "string or blob too big", -1, 1, nullptr, v11);
    }
  }
  return result;
}
