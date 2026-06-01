const char *__fastcall sub_14640(__int64 a1, __int64 a2, _BYTE *a3)
{
  int v5; // eax
  __int64 v6; // rdi
  int v7; // eax
  int v9; // [rsp+4h] [rbp-24h]

  v5 = qsscanf();
  v6 = *(_QWORD *)(a1 + 96);
  if ( v5 == 1 )
  {
    *(_DWORD *)(v6 + 592) = v9;
  }
  else
  {
    if ( *(_DWORD *)(v6 + 600) == 1 )
      return sub_143A0((__int64 *)(v6 + 128), a3);
    v7 = qsscanf();
    v6 = *(_QWORD *)(a1 + 96);
    if ( v7 != 1 )
      return sub_143A0((__int64 *)(v6 + 128), a3);
    *(_DWORD *)(v6 + 596) = v9;
  }
  sub_13BD0((__int64 *)(*(_QWORD *)(a1 + 96) + 184LL));
  return nullptr;
}

