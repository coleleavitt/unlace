void __fastcall func(void *a1)
{
  __int64 (**v1)(void); // rbx
  __int64 v2; // rdi

  v1 = &free_til;
  do
  {
    v2 = (__int64)*(v1 - 3);
    v1 -= 3;
    if ( v2 )
    {
      v1[1] = 0;
      qfree();
    }
  }
  while ( v1 != &free_til - 9 );
}
