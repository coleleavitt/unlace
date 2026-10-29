__int64 __fastcall sub_4D890(__int64 a1, int a2, int a3, char a4)
{
  int v5; // ecx
  int v7; // edx
  int v8; // ecx

  v5 = *(_DWORD *)(a1 + 24);
  v7 = a2 + v5;
  v8 = a3 + v5;
  if ( a4 )
    return sub_4D7D0((unsigned __int64 *)a1, 0, v7, v8, 1);
  else
    return sub_4D7D0((unsigned __int64 *)a1, 1, v7, v8, 1);
}

