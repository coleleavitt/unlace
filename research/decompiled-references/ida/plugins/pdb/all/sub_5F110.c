__int64 __fastcall sub_5F110(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // edx

  v2 = *(_DWORD *)(a1 + 64);
  if ( v2 == -1 )
    return 1;
  else
    return sub_55B00(*(_QWORD **)(a1 + 8), a2, v2);
}

