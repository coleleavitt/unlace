void __fastcall sub_63AF0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx

  v2 = *(_QWORD *)(a2 + 8);
  if ( a2 == *(_QWORD *)(a1 + 520) )
    *(_QWORD *)(a1 + 520) = v2;
  if ( v2 )
    *(_QWORD *)(v2 + 16) = *(_QWORD *)(a2 + 16);
  v3 = *(_QWORD *)(a2 + 16);
  if ( v3 )
    *(_QWORD *)(v3 + 8) = v2;
  if ( (*(_BYTE *)(a2 + 24) & 8) != 0 )
    sub_63A50((_QWORD *)a1);
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  --*(_DWORD *)(a1 + 64);
}

