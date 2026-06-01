void __fastcall sub_681C0(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rax

  v2 = *(__int64 **)(a1 + 8);
  if ( v2 == *(__int64 **)(a1 + 16) )
  {
    sub_57F80(a1, a2);
  }
  else
  {
    *v2 = *a2;
    *a2 = 0;
    *(_QWORD *)(a1 + 8) += 8LL;
  }
}

