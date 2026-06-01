void __fastcall func(void *a1)
{
  __int128 *v1; // rbx
  __int128 *v2; // rax

  v1 = &xmmword_18C400;
  do
  {
    clear_tinfo_t();
    v2 = v1;
    v1 -= 2;
  }
  while ( v2 != &xmmword_18C400 - 18 );
}

