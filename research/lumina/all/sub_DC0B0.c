__int64 *__fastcall sub_DC0B0(__int64 a1)
{
  __int64 *v1; // rbp
  int v2; // eax

  v1 = sub_DBFF0(*(_QWORD *)a1, (unsigned int)(*(_DWORD *)(a1 + 24) + 1));
  if ( v1 )
  {
    memcpy(v1, *(const void **)(a1 + 8), (unsigned int)(*(_DWORD *)(a1 + 24) + 1));
    *(_QWORD *)(a1 + 8) = v1;
    *(_BYTE *)(a1 + 29) |= 4u;
    return v1;
  }
  else
  {
    v2 = *(_DWORD *)(a1 + 20);
    *(_BYTE *)(a1 + 28) = 7;
    if ( v2 )
      sub_C92E0(a1);
    *(_QWORD *)(a1 + 8) = 0;
    return nullptr;
  }
}
