__int64 __fastcall sub_76710(size_t *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rax
  int v5; // eax
  unsigned int v6; // ebp
  void *v7; // r13

  v4 = qfilesize(a2);
  a1[1] = v4;
  if ( !v4 )
    return 0;
  if ( a3 < v4 )
  {
    v5 = qopen(a2, 0);
    v6 = v5;
    if ( v5 != -1 )
    {
      v7 = mmap(nullptr, a1[1], 1, 2, v5, 0);
      qclose(v6);
      if ( v7 != (void *)-1LL )
      {
        a1[3] = (size_t)v7;
        a1[1] -= a3;
        a1[2] = (size_t)v7 + a3;
        return 1;
      }
    }
    return 0;
  }
  if ( under_debugger )
    BUG();
  interr(30627);
  return sub_767C0();
}

