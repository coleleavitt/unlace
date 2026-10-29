_QWORD *__fastcall sub_ECA40(__int64 a1, int a2)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx

  v2 = realloc((void *)(a1 - 8), a2 + 8);
  v3 = v2;
  if ( v2 )
  {
    *v2 = a2;
    return v2 + 1;
  }
  else
  {
    sub_E8BB0(7u, "failed memory resize %u to %u bytes", *(_QWORD *)(a1 - 8), a2);
  }
  return v3;
}
