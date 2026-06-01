void __fastcall func(void *a1, __int64 a2, __int64 a3, double a4)
{
  char *i; // rbx
  __int64 v5; // rdi

  for ( i = (char *)&unk_25D68; ; i -= 24 )
  {
    v5 = *(_QWORD *)i;
    if ( *(_QWORD *)i )
    {
      *((_QWORD *)i + 1) = 0;
      qfree(v5, a2, a3, a4);
    }
    if ( i == (char *)&unk_25D68 - 6120 )
      break;
  }
}
