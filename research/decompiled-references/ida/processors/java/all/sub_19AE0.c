__int64 __fastcall sub_19AE0(__int64 a1, unsigned int a2)
{
  unsigned int v2; // eax

  v2 = *(_DWORD *)(a1 + 33376);
  if ( v2 < a2 )
    sub_19240();
  *(_DWORD *)(a1 + 33376) = v2 - a2;
  return qfseek(*(_QWORD *)(a1 + 33312), a2, 1);
}

