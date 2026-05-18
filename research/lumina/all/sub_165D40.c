void __fastcall sub_165D40(void *src, _QWORD *a2)
{
  size_t v3; // rax
  size_t v4; // r12
  void *v5; // rdi
  size_t v6; // r13
  __int64 v7; // rax

  if ( src && (v3 = strlen((const char *)src), (v4 = v3) != 0) )
  {
    v5 = (void *)a2[7];
    v6 = v3 + 1;
    if ( a2[9] < v3 + 1 )
    {
      v7 = sub_1987B0(a2 + 7, a2[7], v6, 1);
      a2[7] = v7;
      v5 = (void *)v7;
    }
    a2[8] = v6;
    memmove(v5, src, v4);
    *(_BYTE *)(a2[7] + v4) = 0;
  }
  else
  {
    a2[8] = 0;
  }
}
