__int64 __fastcall sub_BF70(__int64 a1, int a2)
{
  __int64 v2; // rsi
  char v4; // [rsp+Fh] [rbp-19h] BYREF
  __int64 v5; // [rsp+10h] [rbp-18h]
  unsigned __int64 v6; // [rsp+18h] [rbp-10h]

  v2 = *(_QWORD *)(a1 + 16) + 9LL * a2;
  v6 = __readfsqword(0x28u);
  qfseek(*(_QWORD *)(a1 + 8), v2, 0);
  if ( qfread(*(_QWORD *)(a1 + 8), &v4, 9) != 9 )
  {
    if ( !under_debugger )
      interr(30724);
    BUG();
  }
  return v5;
}

