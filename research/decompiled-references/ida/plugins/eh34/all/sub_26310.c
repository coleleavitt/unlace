void __fastcall sub_26310(__int64 a1, int *a2)
{
  int v2; // edx
  int v3; // eax

  if ( *((_BYTE *)a2 + 4) )
  {
    v2 = *(_DWORD *)(a1 + 116);
    v3 = *a2;
    *((_BYTE *)a2 + 4) = 1;
    if ( v3 < v2 )
      v3 = v2;
    *a2 = v3;
  }
}

