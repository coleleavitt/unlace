__int64 __fastcall sub_CA4D0(__int64 a1, unsigned __int8 *a2)
{
  __int64 v2; // rax

  v2 = sub_CA450(a1, a2);
  if ( v2 )
    return *(_WORD *)(*(_QWORD *)(v2 + 8) + 40LL) & 1;
  else
    return 0xFFFFFFFFLL;
}
