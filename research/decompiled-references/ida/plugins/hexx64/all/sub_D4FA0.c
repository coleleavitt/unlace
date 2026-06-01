__int64 __fastcall sub_D4FA0(_DWORD *a1, __int64 a2, _QWORD *a3, char a4, double a5)
{
  unsigned int v5; // ebp
  int v8; // ebx
  __int64 v9; // rax

  v5 = 1;
  if ( *a1 != 1 && a3[1] )
  {
    v8 = 0;
    v9 = 0;
    do
    {
      ++v8;
      v5 &= sub_D4BC0((__int64)a1, a2, (_DWORD *)(*(_QWORD *)(a2 + 432) + 104LL * *(int *)(*a3 + 4 * v9)), a4, a5);
      v9 = v8;
    }
    while ( (unsigned __int64)v8 < a3[1] );
  }
  return v5;
}

