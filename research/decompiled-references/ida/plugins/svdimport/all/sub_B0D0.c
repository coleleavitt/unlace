size_t __fastcall sub_B0D0(__int64 a1, void *a2, int a3)
{
  FILE *v3; // rcx

  v3 = *(FILE **)(a1 + 8);
  if ( v3 )
    return fread(a2, 1u, a3, v3);
  else
    return 0;
}

