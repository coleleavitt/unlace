unsigned __int64 __fastcall sub_3EB290(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  unsigned __int64 result; // rax
  int v7; // ebx
  int v8; // ebp

  sub_5E0C0((__int64 *)a2, a1 + 3, a3, a4, a5, a6);
  result = sub_5E3E0((_QWORD *)a2, 0);
  if ( (_DWORD)result != *(_DWORD *)(a2 + 8) )
  {
    v7 = result;
    do
    {
      v8 = sub_5E620((_QWORD *)a2, v7);
      sub_3EB180(a1, v7, v8);
      result = sub_5E3E0((_QWORD *)a2, v8 + v7);
      v7 = result;
    }
    while ( (_DWORD)result != *(_DWORD *)(a2 + 8) );
  }
  return result;
}

