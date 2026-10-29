size_t __fastcall sub_D4C30(char *a1)
{
  char *v1; // rax
  char *v2; // rbx

  if ( !a1 )
    return 0;
  v1 = sub_D4B90(a1);
  v2 = v1;
  if ( v1 )
    return (size_t)&v1[(strlen(v1) & 0x3FFFFFFF) + 1];
  return (size_t)v2;
}
