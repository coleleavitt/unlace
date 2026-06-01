__int64 __fastcall sub_28E00(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // edx
  int v3; // ecx
  char v5; // cl
  unsigned __int64 v6; // rax
  __int64 v7; // rax

  v1 = *(_QWORD *)(a1 + 24);
  v2 = 0;
  if ( *(_DWORD *)v1 == 4 )
  {
    v3 = *(_DWORD *)(v1 + 68);
    if ( v3 == 8 )
    {
      v5 = *(_BYTE *)(v1 + 32);
      if ( v5 == 10 )
      {
        v7 = *(_QWORD *)(v1 + 40);
        if ( *(_BYTE *)v7 != 6 )
          return v2;
        *(_DWORD *)(a1 + 36) = 0;
        *(_QWORD *)(a1 + 40) = *(_QWORD *)(v7 + 8);
        return 1;
      }
      if ( v5 == 2 )
      {
        v6 = *(_QWORD *)(*(_QWORD *)(v1 + 40) + 16LL);
        if ( v6 > 1 )
        {
          *(_DWORD *)(a1 + 36) = 0;
          *(_QWORD *)(a1 + 40) = v6;
          return 1;
        }
LABEL_11:
        *(_DWORD *)(a1 + 36) = 1;
        *(_DWORD *)(a1 + 48) = v6;
        return 1;
      }
    }
    else if ( v3 == 4 && *(_BYTE *)(v1 + 32) == 2 )
    {
      v6 = *(_QWORD *)(*(_QWORD *)(v1 + 40) + 16LL);
      if ( v6 <= 1 )
        goto LABEL_11;
    }
  }
  return v2;
}
