__int64 __fastcall sub_F2D80(__int64 a1)
{
  unsigned int v1; // r12d
  int v2; // ebp
  __int64 v3; // rax
  _DWORD *v4; // r14
  int v5; // ebx
  int v6; // ebx

  v1 = *(_DWORD *)(a1 + 144);
  if ( *(_QWORD *)(a1 + 440) )
  {
    v2 = 0;
    v3 = 0;
    do
    {
      v4 = (_DWORD *)(*(_QWORD *)(a1 + 432) + 104 * v3);
      if ( sub_228C90(a1, (__int64)v4) )
      {
        v5 = *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL);
        v6 = (sub_1C35C0(v4, v4[22]) + v5 - 1) & -v5;
        if ( (int)v1 < v6 )
          v1 = v6;
      }
      v3 = ++v2;
    }
    while ( (unsigned __int64)v2 < *(_QWORD *)(a1 + 440) );
  }
  return v1;
}

