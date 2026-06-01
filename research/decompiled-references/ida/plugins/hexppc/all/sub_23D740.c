_QWORD *__fastcall sub_23D740(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  _QWORD *v3; // rax
  _QWORD *v4; // rdx
  _QWORD *result; // rax

  if ( *(_DWORD *)(a1 + 8) != 71 )
  {
    if ( !under_debugger )
      sub_37EEE0(50372);
    BUG();
  }
  v2 = *(_QWORD *)(a1 + 24);
  if ( !*(_QWORD *)(v2 + 16) && *(_QWORD *)a1 == -1 )
    *(_QWORD *)a1 = a2;
  v3 = (_QWORD *)qalloc_or_throw();
  v3[3] = -4294967226LL;
  v3[2] = -1;
  v3[4] = 0xFFFFFFFFLL;
  v3[5] = 0;
  *v3 = v2;
  v4 = *(_QWORD **)(v2 + 8);
  v3[1] = v4;
  *v4 = v3;
  *(_QWORD *)(v2 + 8) = v3;
  result = v3 + 2;
  ++*(_QWORD *)(v2 + 16);
  *result = a2;
  return result;
}

