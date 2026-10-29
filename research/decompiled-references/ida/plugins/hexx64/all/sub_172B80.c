unsigned __int64 __fastcall sub_172B80(unsigned __int64 *a1, __int64 a2, __m128i a3)
{
  int v3; // eax
  int v4; // ecx
  unsigned __int64 result; // rax
  bool v6; // al

  v3 = *(_DWORD *)(a2 + 4);
  v4 = *(_DWORD *)(a2 + 68);
  if ( (v3 & 0x10) != 0 )
  {
    if ( *(_DWORD *)(a2 + 36) == v4 )
    {
      v6 = sub_122600((unsigned int *)a2);
      v4 = *(_DWORD *)(a2 + 68);
      if ( v6 )
        goto LABEL_4;
      v3 = *(_DWORD *)(a2 + 4);
    }
    *(_DWORD *)(a2 + 4) = v3 & 0xFFFFFFEF;
  }
LABEL_4:
  sub_12B320(a2 + 32, a1, *(_QWORD *)(a2 + 24), v4, a3);
  result = sub_11CDA0(a2 + 48);
  *(_DWORD *)a2 = 4;
  return result;
}

