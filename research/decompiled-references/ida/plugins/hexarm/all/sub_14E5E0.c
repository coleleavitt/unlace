__int64 __fastcall sub_14E5E0(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rdx
  _DWORD *v5; // r12
  char v6; // r13
  char v7; // al

  if ( *(_BYTE *)a2 != 4 )
  {
    v2 = *(_QWORD **)(a1 + 56);
    v3 = &v2[*(_QWORD *)(a1 + 64)];
    if ( v2 != v3 )
    {
      while ( *v2 != a2 )
      {
        if ( v3 == ++v2 )
          return 0;
      }
      if ( v2 != v3 )
        goto LABEL_7;
    }
    return 0;
  }
  v5 = *(_DWORD **)(a2 + 8);
  if ( (unsigned int)(*v5 - 12) > 1 )
    return 0;
  v6 = sub_14E5E0(a1, v5 + 8);
  v7 = sub_14E5E0(a1, v5 + 12);
  if ( v6 || v7 )
  {
LABEL_7:
    *(_WORD *)(a2 + 2) = 0;
    return 1;
  }
  return 0;
}

