__int64 __fastcall sub_309E0(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 (*v2)(void); // rdx
  char v3; // bp
  __int64 (*v4)(void); // rax
  int v5; // eax
  unsigned int v6; // eax

  v1 = *a1;
  v2 = *(__int64 (**)(void))(*a1 + 24LL);
  if ( (char *)v2 == (char *)sub_28040 )
  {
    v3 = (*(_BYTE *)(*(_QWORD *)(a1[3] + 384LL) + 72LL) & 4) != 0;
  }
  else
  {
    v3 = v2();
    v1 = *a1;
  }
  v4 = *(__int64 (**)(void))(v1 + 48);
  if ( (char *)v4 == (char *)sub_28060 )
    v5 = *(_QWORD *)(a1[3] + 392LL) - 1;
  else
    v5 = v4();
  if ( v5 )
    v6 = v3 == 0 ? 0xFFFFFFD0 : 0;
  else
    v6 = v3 == 0 ? 0xFFFFFFE0 : 0;
  return v6 + 64;
}
