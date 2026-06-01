__int64 __fastcall sub_A700(__int64 a1, unsigned __int16 a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(a1 + 16);
  if ( a2 < *(int *)(v2 + 64) )
    return *(_QWORD *)(*(_QWORD *)(v2 + 56) + 8LL * a2);
  if ( under_debugger )
    BUG();
  interr();
  return sub_A740(10429);
}

