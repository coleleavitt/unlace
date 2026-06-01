__int64 __fastcall sub_7EDF0(__int64 a1, _QWORD *a2, __int64 a3, double a4)
{
  int v6; // eax
  unsigned int v7; // edx
  __int64 v8; // rdx
  unsigned __int64 v9; // rax
  __int64 v10; // rdi

  if ( *a2 >= a2[1] )
    sub_7A510(a4);
  v6 = unpack_dd();
  v7 = 0;
  if ( *(_DWORD *)(a3 + 64) > v6 )
  {
    v8 = 0;
    if ( v6 > 0 )
      v8 = *(_QWORD *)(*(_QWORD *)(a3 + 528) + 8LL * (unsigned int)v6);
    *(_QWORD *)a1 = v8;
    *(_DWORD *)(a1 + 8) = sub_7CD20(a2, a4);
    *(_QWORD *)(a1 + 32) = sub_7D020((__int64)a2, 1u, a4);
    *(_DWORD *)(a1 + 40) = sub_7CD20(a2, a4) - 1;
    *(_QWORD *)(a1 + 56) = sub_7D020((__int64)a2, 1u, a4);
    *(_DWORD *)(a1 + 64) = sub_7CD20(a2, a4) - 1;
    *(_QWORD *)(a1 + 72) = sub_7D020((__int64)a2, 1u, a4);
    *(_QWORD *)(a1 + 80) = sub_7D020((__int64)a2, 1u, a4);
    v9 = sub_7D020((__int64)a2, 1u, a4);
    v10 = *(_QWORD *)(a1 + 96);
    *(_QWORD *)(a1 + 88) = v9;
    if ( v10 )
    {
      *(_QWORD *)(a1 + 104) = 0;
      qfree(v10);
      *(_QWORD *)(a1 + 96) = 0;
      *(_QWORD *)(a1 + 112) = 0;
    }
    *(_QWORD *)(a1 + 120) = 0;
    return 1;
  }
  return v7;
}

