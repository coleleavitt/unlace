__int64 __fastcall sub_106C0(__int64 a1, int a2)
{
  if ( *(_QWORD *)(a1 + 8LL * a2 + 384) != -1 && *(_BYTE *)(a1 + 896) != 10 )
    op_offset();
  if ( *(_QWORD *)(a1 + 8LL * (*(_DWORD *)(a1 + 904) - 1) + 384) != -1 )
    *(_QWORD *)(*(_QWORD *)(a1 + 376) + 16LL) = -*(_QWORD *)(*(_QWORD *)(a1 + 376) + 16LL);
  return 1;
}

