__int64 __fastcall sub_3EAE90(__int64 a1, double a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(a1 + 392);
  if ( v2 == -1 )
  {
    if ( !under_debugger )
      sub_3835A0(0xC946u, a2);
    BUG();
  }
  return v2 - *(_DWORD *)(a1 + 24) * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 280) + 1504LL) + 80LL);
}

