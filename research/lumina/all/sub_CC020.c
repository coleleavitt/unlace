void __fastcall sub_CC020(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbx
  int v3; // ebp

  if ( *((_DWORD *)a1 + 7) )
  {
    v2 = *a1;
    v3 = *(_DWORD *)(*a1 + 8);
    *(_DWORD *)(*a1 + 8) = 0;
    sub_CBEC0(a1, a2);
    *(_DWORD *)(v2 + 8) = v3;
  }
}
