__int64 __fastcall sub_E2F10(__int64 a1, int a2, unsigned __int8 *a3)
{
  __int64 v4; // rax
  __int64 result; // rax
  __int64 v6; // rcx
  int v7; // edi
  int v8; // edi
  unsigned __int8 *v9; // [rsp+8h] [rbp-10h]

  v4 = *(int *)(a1 + 144);
  if ( (int)v4 + a2 > *(_DWORD *)(a1 + 148) )
  {
    v9 = a3;
    if ( (unsigned int)sub_E15B0(a1) )
      return 0;
    v4 = *(int *)(a1 + 144);
    a3 = v9;
  }
  result = *(_QWORD *)(a1 + 136) + 24 * v4;
  v6 = result;
  do
  {
    *(_BYTE *)v6 = *a3;
    *(_DWORD *)(v6 + 4) = (char)a3[1];
    v7 = (char)a3[2];
    *(_DWORD *)(v6 + 8) = v7;
    if ( (byte_1BEE40[*a3] & 1) != 0 && (char)a3[2] > 0 )
      *(_DWORD *)(v6 + 8) = *(_DWORD *)(a1 + 144) + v7;
    v8 = (char)a3[3];
    v6 += 24;
    *(_BYTE *)(v6 - 23) = 0;
    *(_QWORD *)(v6 - 8) = 0;
    a3 += 4;
    *(_DWORD *)(v6 - 12) = v8;
    *(_WORD *)(v6 - 22) = 0;
  }
  while ( v6 != result + 8 * (3LL * (unsigned int)(a2 - 1) + 3) );
  *(_DWORD *)(a1 + 144) += a2;
  return result;
}
