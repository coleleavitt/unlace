size_t *__fastcall sub_BED0(size_t *a1, __int64 a2)
{
  bool v2; // cc
  _DWORD *v4; // rax

  v2 = *(_QWORD *)(a2 + 8) <= 1u;
  *a1 = 0;
  *(_OWORD *)(a1 + 1) = 0;
  if ( v2 )
  {
    v4 = (_DWORD *)qvector_reserve(a1, 0, 8, 1);
    *a1 = (size_t)v4;
    a1[1] = 8;
    *v4 = 1852534389;
    *(_DWORD *)((char *)v4 + 3) = 1853321070;
    *(_BYTE *)(*a1 + 7) = 0;
  }
  else
  {
    sub_BCC0(a1, *(const char **)a2);
    sub_BB40(a1);
  }
  return a1;
}

