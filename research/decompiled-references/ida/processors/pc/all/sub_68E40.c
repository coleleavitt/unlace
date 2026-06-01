void __fastcall sub_68E40(void *a1)
{
  int *v1; // rbx

  v1 = &dword_1774A0;
  do
  {
    v1 -= 4;
    clear_tinfo_t();
  }
  while ( v1 != &dword_1774A0 - 24 );
}
