unsigned __int64 __fastcall sub_7C220(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax
  __int64 v4; // rsi
  __int64 v5; // rax
  __int128 v6; // rt0
  __int64 v8; // rax

  if ( !*(_QWORD *)(a1 + 8) && *(int *)(a1 + 16) <= 127 )
    return sub_7B4E0(a2);
  v3 = a2[1];
  v4 = *a2;
  if ( a2[2] < (unsigned __int64)(v3 + 1) )
  {
    v8 = qvector_reserve();
    *a2 = v8;
    v4 = v8;
    v3 = a2[1];
  }
  *(_BYTE *)(v4 + v3) = 0x80;
  ++a2[1];
  sub_7B4E0(a2);
  v5 = -*(_QWORD *)(a1 + 8);
  if ( *(__int64 *)(a1 + 8) > 0 )
    v5 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)&v6 = *(_QWORD *)(a1 + 8);
  *((_QWORD *)&v6 + 1) = v5;
  return sub_7B540(a2, v6 >> 63);
}

