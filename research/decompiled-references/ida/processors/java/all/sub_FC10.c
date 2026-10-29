__int64 __fastcall sub_FC10(_QWORD *a1, __int64 a2)
{
  unsigned __int8 v2; // r13
  char v3; // r12
  __int64 result; // rax
  char *v5; // rax
  char v6; // r12
  char v7; // dl

  v2 = 0;
  if ( *(_BYTE *)(a2 + 154) )
  {
    if ( a1[4] )
    {
      v5 = strrchr((const char *)a1[3], 1);
      if ( v5 )
      {
        v6 = v5[1];
        if ( v6 )
        {
          if ( !strchr(v5 + 2, 2) )
          {
            v2 = v6;
            (*(void (__fastcall **)(_QWORD *))(*a1 + 72LL))(a1);
          }
        }
      }
    }
  }
  v3 = 0;
  (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 92);
  if ( *(_DWORD *)(a2 + 164) )
    v3 = *(_BYTE *)(a2 + 169) ^ 1;
  if ( !*(_BYTE *)(get_module_data((unsigned int)dword_2D4F4) + 154) || (v7 = sub_FA40(a1, v3), result = 0, !v7) )
  {
    *(_DWORD *)(a2 + 164) = 0;
    if ( v2 )
      (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 64LL))(a1, v2);
    *(_QWORD *)(a2 + 184) = (a1[4] == 0) + a1[4] - 1LL;
    return *(unsigned int *)(a2 + 160);
  }
  return result;
}

