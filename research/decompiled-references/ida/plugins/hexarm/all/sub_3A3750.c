bool __fastcall sub_3A3750(__int64 a1, _BYTE *a2)
{
  __int64 v3; // rsi
  bool result; // al

  v3 = *(_QWORD *)(a1 + 32);
  result = 0;
  if ( v3 != 1 && *(int *)(v3 + 8) <= 69 )
  {
    copy_tinfo_t();
    return *a2 != 0;
  }
  return result;
}

