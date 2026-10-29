__int64 __fastcall sub_116E30(__int64 a1, __int64 a2)
{
  if ( *(_BYTE *)a2 != 4 )
    return 0;
  *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL) = *(_QWORD *)(a2 + 8);
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 16LL))(*(_QWORD *)(a1 + 48));
}

