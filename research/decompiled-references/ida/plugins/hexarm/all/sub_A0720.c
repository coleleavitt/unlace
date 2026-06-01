__int64 __fastcall sub_A0720(__int64 a1)
{
  __int64 *v1; // rax
  __int64 v2; // rbx
  __int64 v3; // r12
  __int64 v5; // rsi

  if ( (unsigned __int8)sub_11E300(*(_QWORD *)(a1 + 32)) )
  {
    v1 = *(__int64 **)(a1 + 40);
    v2 = *v1;
    v3 = *v1 + 24 * v1[1];
    if ( *v1 != v3 )
    {
      do
      {
        v5 = *(_QWORD *)(a1 + 32);
        if ( *(_QWORD *)(v2 + 16) == *(_QWORD *)(v5 + 24) && (unsigned __int8)sub_1255A0(v2, v5 + 64, 1) )
        {
          *(_DWORD *)(*(_QWORD *)(a1 + 32) + 4LL) |= 0x20000u;
          ++*(_DWORD *)(a1 + 48);
        }
        v2 += 24;
      }
      while ( v3 != v2 );
    }
  }
  return 0;
}

