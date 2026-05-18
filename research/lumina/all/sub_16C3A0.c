void __fastcall sub_16C3A0(__int64 a1)
{
  char *v2; // rdi

  if ( *(_QWORD *)(a1 + 8) > 1u )
    sub_19F810(*(char **)a1);
  v2 = *(char **)a1;
  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    j__free(v2);
  }
}
