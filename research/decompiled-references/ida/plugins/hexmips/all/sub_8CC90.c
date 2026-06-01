__int64 __fastcall sub_8CC90(unsigned __int8 *a1, __int64 *a2)
{
  __int64 v2; // rax
  int v4; // r12d
  __int64 v5; // rsi
  char v6; // r12
  __int64 v7; // rax
  __int128 v8; // rt0
  __int64 v10; // rax

  v2 = a2[1];
  v4 = *(_DWORD *)a1;
  v5 = *a2;
  if ( a2[2] < (unsigned __int64)(v2 + 1) )
  {
    v10 = qvector_reserve();
    *a2 = v10;
    v5 = v10;
    v2 = a2[1];
  }
  *(_BYTE *)(v5 + v2) = v4;
  ++a2[1];
  v6 = byte_4071E0[*(int *)a1];
  if ( (v6 & 1) != 0 )
    sub_8C6D0(a1 + 32, (__int64)a2);
  if ( (v6 & 2) != 0 )
    sub_8C6D0(a1 + 48, (__int64)a2);
  if ( (v6 & 4) != 0 )
    sub_8C6D0(a1 + 64, (__int64)a2);
  sub_7B6E0(a2);
  v7 = a2[5] - *((_QWORD *)a1 + 3);
  if ( v7 < 0 )
    v7 = *((_QWORD *)a1 + 3) - a2[5];
  *(_QWORD *)&v8 = *((_QWORD *)a1 + 3) - a2[5];
  *((_QWORD *)&v8 + 1) = v7;
  return sub_7B740(a2, v8 >> 63);
}

