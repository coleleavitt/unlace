__int64 __fastcall sub_172630(__int64 a1, int a2)
{
  __int64 v2; // r12
  __int64 v3; // rbx

  v2 = qword_242890;
  sub_19A520(qword_242890);
  if ( (unsigned __int64)a2 >= *(_QWORD *)(a1 + 96) )
  {
    if ( !unk_2439A0 )
      sub_198E10(288);
    BUG();
  }
  v3 = *(_QWORD *)(a1 + 88) + 56LL * a2 + 24;
  sub_19A570(v2);
  return v3;
}
