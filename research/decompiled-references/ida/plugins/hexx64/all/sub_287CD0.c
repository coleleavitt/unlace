__int64 __fastcall sub_287CD0(__int64 a1, double a2)
{
  __int64 v3; // rdi

  v3 = *(_QWORD *)(a1 + 32);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 40) = 0;
    qfree(v3);
  }
  return sub_255050(a1, a2);
}

