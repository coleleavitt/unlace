__int64 __fastcall sub_37DA0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rdi
  __int64 v6; // rax
  __int16 v7; // si

  if ( *(_QWORD *)(a1 + 820) != a2 )
  {
    *(_QWORD *)(a1 + 820) = a2;
    v3 = *(_QWORD *)(a1 + 716);
    v4 = *(_QWORD *)(a1 + 612);
    v5 = *(_QWORD *)(a1 + 708);
    v6 = v5;
    if ( 20 * v3 )
    {
      do
      {
        v7 = *(_WORD *)(v6 + 16);
        if ( v7 == 12288 )
        {
          *(_DWORD *)(v4 + *(unsigned int *)(v6 + 4)) = *(_DWORD *)(v6 + 8) + *(_QWORD *)(a1 + 820);
          v5 = *(_QWORD *)(a1 + 708);
          v3 = *(_QWORD *)(a1 + 716);
        }
        else if ( v7 == -24576 )
        {
          *(_QWORD *)(v4 + *(unsigned int *)(v6 + 4)) = *(_QWORD *)(v6 + 8) + *(_QWORD *)(a1 + 820);
          v5 = *(_QWORD *)(a1 + 708);
          v3 = *(_QWORD *)(a1 + 716);
        }
        v6 += 20;
      }
      while ( v6 != v5 + 20 * v3 );
    }
  }
  return 1;
}

