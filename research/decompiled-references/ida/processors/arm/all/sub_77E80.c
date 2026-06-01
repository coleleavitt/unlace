void __fastcall sub_77E80(void *a1)
{
  __int128 *v1; // rbx
  __int128 *v2; // rax

  v1 = &xmmword_AB8C0;
  do
  {
    clear_tinfo_t();
    v2 = v1;
    v1 = (__int128 *)((char *)v1 - 40);
  }
  while ( v2 != &xmmword_AB8C0 - 100 );
}
