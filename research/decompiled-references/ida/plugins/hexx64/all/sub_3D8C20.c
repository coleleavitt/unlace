__int64 __fastcall sub_3D8C20(_QWORD *a1, int a2, int *a3, __m128 a4)
{
  unsigned int v5; // eax
  __int64 *v6; // rcx

  if ( a2 != 116 )
    return 0;
  v5 = *a3;
  if ( (unsigned int)*a3 > 0x2F )
  {
    v6 = *((__int64 **)a3 + 1);
    *((_QWORD *)a3 + 1) = v6 + 1;
  }
  else
  {
    v6 = (__int64 *)(*((_QWORD *)a3 + 2) + v5);
    *a3 = v5 + 8;
  }
  sub_3D8900(a1, *v6, a4);
  return 0;
}

