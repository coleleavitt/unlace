void __fastcall sub_CBEC0(__int64 *a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rdi

  v3 = *a1;
  while ( *(_DWORD *)(v3 + 20) > *(_DWORD *)(v3 + 8) )
  {
    v5 = *(_QWORD *)(v3 + 72);
    if ( *(_WORD *)(v5 + 22) )
      break;
    a2 = 1;
    *(_QWORD *)(*(_QWORD *)(v5 + 48) + 40LL) = *(_QWORD *)(v5 + 40);
    *(_QWORD *)(*(_QWORD *)(v5 + 40) + 48LL) = *(_QWORD *)(v5 + 48);
    v4 = *(_QWORD *)(v5 + 32);
    *(_QWORD *)(v5 + 40) = 0;
    --*(_DWORD *)(v4 + 52);
    sub_CBD50(v5, 1);
  }
  if ( !*((_DWORD *)a1 + 14) )
  {
    v6 = a1[10];
    if ( v6 )
    {
      sub_C91C0(v6, a2);
      a1[9] = 0;
      a1[10] = 0;
    }
  }
}
