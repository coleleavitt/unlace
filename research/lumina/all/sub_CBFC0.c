void __fastcall sub_CBFC0(__int64 *a1, __int64 a2)
{
  _DWORD *v2; // rcx
  int v3; // r8d
  int v4; // edx
  unsigned int v5; // eax
  int v6; // eax

  if ( *((_DWORD *)a1 + 7) )
  {
    v2 = (_DWORD *)*a1;
    v3 = *((_DWORD *)a1 + 9);
    v4 = *(_DWORD *)(*a1 + 8);
    v5 = v3 + 2147418112 - v4;
    if ( v5 <= (unsigned int)a2 )
      a2 = v5;
    v6 = v4 - v3 + a2;
    v2[2] = v6;
    v2[4] = v6 - v2[3] + 10;
    *((_DWORD *)a1 + 9) = a2;
    *((_DWORD *)a1 + 10) = 9 * (int)a2 / 0xAu;
    sub_CBEC0(a1, a2);
  }
}
