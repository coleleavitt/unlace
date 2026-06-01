__int64 __fastcall sub_117370(__int64 a1)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)(a1 + 32);
  if ( (unsigned int)(*(_DWORD *)v1 - 56) > 1 || *(_BYTE *)(v1 + 32) == 11 && !*(_BYTE *)(a1 + 48) )
    return 0;
  *(_QWORD *)(a1 + 40) = v1;
  return 1;
}

