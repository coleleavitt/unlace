__int64 __fastcall sub_41C40(__int64 a1, __int64 a2)
{
  const char *v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rdx

  v3 = s1;
  if ( *(_QWORD *)(a1 + 16) )
    v3 = *(const char **)(a1 + 8);
  v4 = sub_4B8A0(qword_753F8 + 64, v3, 0);
  v5 = 0;
  if ( v4 )
    v5 = *(_QWORD *)(v4 + 820);
  *(_BYTE *)a2 = 2;
  *(_QWORD *)(a2 + 8) = v5;
  return 0;
}

