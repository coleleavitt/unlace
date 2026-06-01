unsigned __int64 __fastcall sub_16F140(__int64 a1, __int64 a2)
{
  int v2; // eax
  int v3; // ecx
  unsigned __int64 result; // rax
  bool v5; // al

  v2 = *(_DWORD *)(a2 + 4);
  v3 = *(_DWORD *)(a2 + 68);
  if ( (v2 & 0x10) != 0 )
  {
    if ( *(_DWORD *)(a2 + 36) == v3 )
    {
      v5 = sub_11EBC0((unsigned int *)a2);
      v3 = *(_DWORD *)(a2 + 68);
      if ( v5 )
        goto LABEL_4;
      v2 = *(_DWORD *)(a2 + 4);
    }
    *(_DWORD *)(a2 + 4) = v2 & 0xFFFFFFEF;
  }
LABEL_4:
  sub_1278E0(a2 + 32, a1, *(_QWORD *)(a2 + 24), v3);
  result = sub_119360(a2 + 48);
  *(_DWORD *)a2 = 4;
  return result;
}

