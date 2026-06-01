void __fastcall sub_5DC90(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 24) = -1;
  if ( a3 )
  {
    if ( a2 >= 0 )
    {
      *(_QWORD *)(a1 + 8) = a3;
      *(_QWORD *)(a1 + 16) = a4;
      *(_DWORD *)(a1 + 24) = a2;
    }
  }
}

