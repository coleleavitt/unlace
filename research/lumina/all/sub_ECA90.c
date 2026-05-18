_QWORD *__fastcall sub_ECA90(int a1)
{
  _QWORD *v1; // rax
  _QWORD *v2; // rbx

  v1 = malloc(a1 + 8);
  v2 = v1;
  if ( v1 )
  {
    *v1 = a1;
    return v1 + 1;
  }
  else
  {
    sub_E8BB0(7u, "failed to allocate %u bytes of memory", a1);
  }
  return v2;
}
