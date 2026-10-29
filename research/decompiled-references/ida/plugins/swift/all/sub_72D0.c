void __fastcall sub_72D0(__int64 *a1)
{
  __int64 v1; // rax

  v1 = *a1;
  if ( *a1 )
  {
    a1[1] = 0;
    qfree(v1);
  }
}

