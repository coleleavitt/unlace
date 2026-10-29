unsigned __int64 __fastcall sub_13D280(_QWORD *a1, int a2, double a3)
{
  unsigned __int64 v3; // rax

  if ( (unsigned __int64)a2 >= a1[58] || (v3 = *(int *)(a1[57] + 4LL * a2), v3 >= a1[55]) )
  {
    if ( !under_debugger )
      sub_383060(0xC50Au, a3);
    BUG();
  }
  return a1[54] + 104 * v3;
}

