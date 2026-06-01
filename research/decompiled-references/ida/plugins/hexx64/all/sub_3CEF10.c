__int64 __fastcall sub_3CEF10(__int64 a1, __int64 a2, double a3, __m128 a4)
{
  __int64 v4; // rdx
  _QWORD *v5; // rdi
  __int64 v6; // rax

  v4 = *(_QWORD *)(a2 + 64);
  if ( !v4 || (unsigned int)(*(_DWORD *)(v4 + 60) - 1) > 1 )
    return 0;
  v5 = *(_QWORD **)(v4 + 64);
  *(_QWORD *)(**(_QWORD **)(a2 + 48) + 1344LL) = v5;
  v6 = sub_670E0(v5, a2, v4, 0);
  sub_1107E0(v6, a3, a4);
  return 1;
}

