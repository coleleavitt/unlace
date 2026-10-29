void __fastcall sub_C48E0(__int64 a1, int *a2)
{
  _DWORD *v2; // rbx
  int v3; // r12d
  int v4; // eax
  __int64 v5; // rax

  if ( a2 && *a2 > 0 )
  {
    v2 = a2 + 2;
    v3 = 0;
    do
    {
      if ( (int)v2[16] < 0 )
      {
        v4 = *(_DWORD *)(a1 + 52);
        *(_DWORD *)(a1 + 52) = v4 + 1;
        v2[16] = v4;
        v5 = *((_QWORD *)v2 + 5);
        if ( v5 )
          sub_C48E0(a1, *(_QWORD *)(v5 + 40));
      }
      ++v3;
      v2 += 26;
    }
    while ( *a2 > v3 );
  }
}
