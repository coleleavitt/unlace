__int64 __fastcall sub_6FC80(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, unsigned int a7)
{
  __int64 v7; // rdx
  __int64 result; // rax

  v7 = sub_85560(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 16LL) + 168LL), a7);
  result = 0;
  if ( v7 )
  {
    cleanup_argloc(a2);
    *a2 = 3;
    a2[2] = a7;
    return 1;
  }
  return result;
}

