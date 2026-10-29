__int64 __fastcall sub_3D3010(__int64 a1, __int64 a2, double a3, __m128 a4)
{
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rax
  _QWORD *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax

  v4 = *(_QWORD *)(a2 + 64);
  if ( v4 )
  {
    if ( (unsigned int)(*(_DWORD *)(v4 + 60) - 1) >= 2 )
      v4 = 0;
  }
  v5 = *(_QWORD *)(v4 + 64);
  v6 = sub_3D2ED0(**(_QWORD **)(a1 + 16), v5);
  v7 = (_QWORD *)v6;
  if ( v6 )
  {
    if ( !(unsigned int)sub_13C380(v6, v5, a3, a4) )
    {
      *(_QWORD *)(**(_QWORD **)(a1 + 16) + 1344LL) = v7;
      v10 = sub_670E0(v7, v5, v8, v9);
      sub_3CA280(v10, 0, 0);
      sub_84290((__int64)v7);
      j__qfree((__int64)v7);
      return 1;
    }
    sub_84290((__int64)v7);
    j__qfree((__int64)v7);
  }
  return 0;
}

