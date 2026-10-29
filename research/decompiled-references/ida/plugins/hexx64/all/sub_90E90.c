__int64 __fastcall sub_90E90(unsigned __int8 *a1, __int64 *a2, double a3)
{
  __int64 v3; // rax
  int v5; // r12d
  __int64 v6; // rsi
  char v7; // r12
  __int64 v8; // rax
  __int128 v9; // rt0
  __int64 v11; // rax

  v3 = a2[1];
  v5 = *(_DWORD *)a1;
  v6 = *a2;
  if ( a2[2] < (unsigned __int64)(v3 + 1) )
  {
    v11 = qvector_reserve((__int64)a2, v6, v3 + 1, 1);
    *a2 = v11;
    v6 = v11;
    v3 = a2[1];
  }
  *(_BYTE *)(v6 + v3) = v5;
  ++a2[1];
  v7 = byte_4247A0[*(int *)a1];
  if ( (v7 & 1) != 0 )
    sub_908D0(a1 + 32, (__int64)a2, a3);
  if ( (v7 & 2) != 0 )
    sub_908D0(a1 + 48, (__int64)a2, a3);
  if ( (v7 & 4) != 0 )
    sub_908D0(a1 + 64, (__int64)a2, a3);
  sub_7F8E0(a2);
  v8 = a2[5] - *((_QWORD *)a1 + 3);
  if ( v8 < 0 )
    v8 = *((_QWORD *)a1 + 3) - a2[5];
  *(_QWORD *)&v9 = *((_QWORD *)a1 + 3) - a2[5];
  *((_QWORD *)&v9 + 1) = v8;
  return sub_7F940(a2, v9 >> 63);
}

