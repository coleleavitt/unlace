__int64 __fastcall sub_4E5C0(__int64 a1, char **a2, char a3)
{
  int v3; // eax
  __int64 v4; // rbx
  void *v5; // r13

  v3 = *(unsigned __int8 *)(a1 + 72) ^ 1;
  if ( (a2 == nullptr) | *(_BYTE *)(a1 + 72) ^ 1 )
  {
    if ( !unk_2439A0 )
      sub_198E10(3158);
LABEL_10:
    BUG();
  }
  if ( (a3 & 2) != 0 )
  {
    if ( !unk_2439A0 )
      sub_198E10(57005);
    goto LABEL_10;
  }
  LOBYTE(v3) = (a2 == nullptr) | *(_BYTE *)(a1 + 72) ^ 1;
  LODWORD(v4) = v3;
  sub_4C840(a1);
  v5 = sub_4E170(a1, a1 + 40, a2);
  if ( v5 )
  {
    v4 = operator new(0xA8u);
    sub_5DBA0(v4, v5);
    *(_QWORD *)(a1 + 432) = v4;
    LOBYTE(v4) = (unsigned int)sub_5DC10(v4, a2) == 0;
  }
  return (unsigned int)v4;
}
