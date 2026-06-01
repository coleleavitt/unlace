__int64 __fastcall sub_C7D0(__int64 a1)
{
  __int64 v1; // rax
  int v2; // esi

  sub_C330((_QWORD *)(a1 + 64), *(_QWORD *)(a1 + 24));
  v1 = **(_QWORD **)a1;
  if ( *(_BYTE *)(a1 + 8) )
    v2 = (*(__int64 (**)(void))(v1 + 88))();
  else
    v2 = (*(__int64 (**)(void))(v1 + 80))();
  sub_C0A0(a1, v2);
  return a1 + 64;
}
