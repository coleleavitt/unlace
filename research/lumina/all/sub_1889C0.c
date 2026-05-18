__int64 __fastcall sub_1889C0(__int64 a1)
{
  __int64 v1; // rax
  __int64 *v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v7; // rax

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 112) + 8LL * *(_QWORD *)(a1 + 120) - 8);
  if ( *(_DWORD *)v1 != 3 )
    sub_1889A0();
  v2 = *(__int64 **)(v1 + 8);
  v3 = v2[1];
  v4 = *v2;
  if ( v3 && !*(_DWORD *)(v4 + 40 * v3 - 16) )
  {
    if ( !unk_2439A0 )
      sub_198E10(1275);
    BUG();
  }
  if ( v2[2] < (unsigned __int64)(v3 + 1) )
  {
    v7 = sub_1987B0(v2, v4, v3 + 1, 40);
    v3 = v2[1];
    *v2 = v7;
    v4 = v7;
  }
  v5 = v4 + 40 * v3;
  *(_QWORD *)v5 = 0;
  *(_DWORD *)(v5 + 24) = 0;
  *(_QWORD *)(v5 + 32) = 0;
  *(_OWORD *)(v5 + 8) = 0;
  ++v2[1];
  return 0;
}
