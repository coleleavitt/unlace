__int64 __fastcall sub_84270(_QWORD *a1, __int64 *a2)
{
  int v2; // eax
  __int64 v3; // rsi
  int v4; // ebp
  __int64 result; // rax
  __int64 v6; // rax

  if ( (a2[28] & 0x7FFFFFFFFFFFFFFFLL) == 0 || a2[28] == -1 )
  {
    if ( under_debugger )
      BUG();
    a1 = (_QWORD *)(&stru_76F8 + 22);
    interr(30478);
  }
  v2 = sub_840B0(*(_QWORD *)(*a2 + 16), a2 + 28);
  v3 = a1[5];
  v4 = v2;
  result = a1[6];
  if ( a1[7] < (unsigned __int64)(result + 1) )
  {
    v6 = qvector_reserve(a1 + 5, v3, result + 1, 4);
    a1[5] = v6;
    v3 = v6;
    result = a1[6];
  }
  *(_DWORD *)(v3 + 4 * result) = v4;
  ++a1[6];
  return result;
}

