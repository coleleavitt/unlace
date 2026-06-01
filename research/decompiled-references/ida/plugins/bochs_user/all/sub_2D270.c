void __fastcall sub_2D270(_BYTE *a1, unsigned int a2, __int64 a3, _QWORD *a4, __int64 a5)
{
  if ( a1[1185] )
  {
    if ( (unsigned int)sub_25BD0((__int64)(a1 + 1208), a2, (_QWORD *)a5) || !*(_DWORD *)a5 )
    {
      *a4 = a3;
      *(_DWORD *)(a5 + 4) = 0;
    }
    else
    {
      *a4 = a3 + *(unsigned int *)(a5 + 4);
    }
  }
  else if ( a1[1187] || a1[1186] )
  {
    *a4 = a3 + 16LL * a2;
    *(_DWORD *)a5 = 0;
  }
  else
  {
    *a4 = a3;
    *(_DWORD *)a5 = 0;
  }
}

