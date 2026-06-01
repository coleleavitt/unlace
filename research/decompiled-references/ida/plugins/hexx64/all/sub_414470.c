unsigned __int64 __fastcall sub_414470(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  unsigned __int64 result; // rax
  int v7; // ebx
  int v8; // ebp

  sub_64640((__int64 *)a2, a1 + 3, a3, a4, a5, a6);
  result = sub_64960((_QWORD *)a2, 0);
  if ( (_DWORD)result != *(_DWORD *)(a2 + 8) )
  {
    v7 = result;
    do
    {
      v8 = sub_64BA0((_QWORD *)a2, v7);
      sub_414360(a1, v7, v8);
      result = sub_64960((_QWORD *)a2, v8 + v7);
      v7 = result;
    }
    while ( (_DWORD)result != *(_DWORD *)(a2 + 8) );
  }
  return result;
}

