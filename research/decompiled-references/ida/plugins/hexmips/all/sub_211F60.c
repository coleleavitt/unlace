__int64 __fastcall sub_211F60(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  __int64 i; // rax
  int v5; // eax

  v3 = 0;
  for ( i = 0; (unsigned __int64)(int)v3 < *(_QWORD *)(a1 + 440); i = (int)v3 )
  {
    a3 = *(_QWORD *)(a1 + 432) + 104 * i;
    a2 = *(unsigned int *)(a3 + 92);
    v5 = *(_DWORD *)(a3 + 24);
    if ( !(_DWORD)a2 )
    {
      v5 &= 0xFFFBFF9F;
      *(_DWORD *)(a3 + 24) = v5;
    }
    if ( (v5 & 0x80u) != 0 )
      *(_DWORD *)(a3 + 24) = v5 & 0xFFFFFFBF;
    v3 = (unsigned int)(v3 + 1);
  }
  return sub_2B5380(a1, a2, a3, v3);
}

