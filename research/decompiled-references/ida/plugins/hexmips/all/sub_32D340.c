const char *__fastcall sub_32D340(const char **a1, size_t a2)
{
  const char *v2; // rbp
  const char *v3; // rbx
  size_t v4; // rax

  v2 = (const char *)a2;
  v3 = *a1;
  v4 = (size_t)&v3[strlen(*a1) + 1];
  if ( a2 > v4 )
    v2 = (const char *)v4;
  *a1 = v2;
  if ( !*v3 )
    return nullptr;
  return v3;
}

