__int64 __fastcall sub_1D1380(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax

  if ( *(_QWORD *)(a1 + 40) + *(unsigned __int16 *)(a1 + 50) != *(_QWORD *)(a1 + 80) + 16LL * *(_QWORD *)(a1 + 24) )
    return 0;
  v2 = *(_QWORD *)(a1 + 8);
  v3 = sub_32B3E0(v2);
  return sub_32CDA0(v2 + 8, v3);
}

