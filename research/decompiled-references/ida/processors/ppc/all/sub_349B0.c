__int64 sub_349B0()
{
  __int64 v0; // rax

  v0 = (unsigned int)sub_4E2D0() - 1;
  if ( (unsigned int)v0 <= 8 )
    return dword_79F60[v0];
  if ( under_debugger )
    BUG();
  interr(10254);
  return sub_349F0();
}

