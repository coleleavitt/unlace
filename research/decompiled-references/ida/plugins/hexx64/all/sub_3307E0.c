__int64 __fastcall sub_3307E0(int *a1, int *a2, double a3)
{
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rax

  v3 = *((_QWORD *)a1 + 2);
  v4 = *((_QWORD *)a2 + 2);
  if ( v4 < v3 )
    return 1;
  if ( v3 < v4 )
    return 0xFFFFFFFFLL;
  return sub_1C2AD0(a1, a2, a3);
}

