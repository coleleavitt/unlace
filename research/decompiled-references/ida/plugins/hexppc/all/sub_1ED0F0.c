__int64 __fastcall sub_1ED0F0(int *a1, _QWORD *a2)
{
  unsigned int v3; // edx
  int v4; // ecx
  int v6; // esi
  unsigned int v8; // edx

  v3 = 0;
  if ( (*((_BYTE *)a1 + 25) & 1) == 0 )
    return v3;
  v4 = *a1;
  if ( ((v4 - 2) & 0xFFFFFFFD) == 0 )
    return v3;
  v6 = a1[22];
  if ( v6 >= *(unsigned __int8 *)(a2[12] + 130LL) )
    return v3;
  if ( (unsigned int)(v4 - 3) > 1 )
  {
    LOBYTE(v3) = (*((_QWORD *)a1 + 1) & (v6 - 1)) == 0;
    return v3;
  }
  LOBYTE(v8) = (*(unsigned int (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a2 + 176LL))(
                 a2,
                 (unsigned int)a1[2],
                 *(unsigned __int8 *)(a2[12] + 130LL)) != -1;
  return v8;
}

