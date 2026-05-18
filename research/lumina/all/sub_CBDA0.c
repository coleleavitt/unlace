_DWORD *__fastcall sub_CBDA0(_DWORD *a1, __int64 a2, int a3)
{
  _DWORD *result; // rax
  __int64 v4; // rdx

  if ( a3 )
    return sub_CBD50(a2, 1);
  result = *(_DWORD **)a1;
  if ( *(_DWORD *)(*(_QWORD *)a1 + 20LL) > *(_DWORD *)(*(_QWORD *)a1 + 8LL) )
    return sub_CBD50(a2, 1);
  *(_QWORD *)(a2 + 48) = result + 6;
  v4 = *((_QWORD *)result + 8);
  *(_QWORD *)(a2 + 40) = v4;
  *(_QWORD *)(v4 + 48) = a2;
  *((_QWORD *)result + 8) = a2;
  ++a1[13];
  return result;
}
