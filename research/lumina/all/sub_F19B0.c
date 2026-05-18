__int64 __fastcall sub_F19B0(_DWORD *a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  unsigned __int64 v7; // rdx

  v6 = *(_QWORD *)a1;
  v7 = *(int *)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) + 136LL);
  if ( v7 < a2 )
  {
    a1[9] = 18;
    sub_F11D0(v6, "string or blob too big", -1, 1, nullptr, a6);
    return 18;
  }
  else
  {
    sub_C96D0(v6, a2, v7, a4, a5, a6);
    return 0;
  }
}
