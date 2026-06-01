__int64 __fastcall sub_6D10(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // ecx
  unsigned int v6; // edx
  __int64 v7; // rcx
  __int64 v8; // rdx

  if ( a2 != 18 )
  {
    if ( a2 != 30 )
      return 0;
    v5 = *(_DWORD *)a3;
    if ( *(_DWORD *)a3 > 0x2Fu )
    {
      v7 = *(_QWORD *)(a3 + 8) + 8LL;
      *(_QWORD *)(a3 + 8) = v7;
    }
    else
    {
      *(_DWORD *)a3 = v5 + 8;
      if ( v5 + 8 <= 0x2F )
      {
        *(_DWORD *)a3 = v5 + 16;
        if ( v5 + 16 <= 0x2F )
        {
          *(_DWORD *)a3 = v5 + 24;
LABEL_8:
          ea2node();
          ea2node();
          netnode_altshift();
          return 0;
        }
        v8 = *(_QWORD *)(a3 + 8);
LABEL_15:
        *(_QWORD *)(a3 + 8) = v8 + 8;
        goto LABEL_8;
      }
      v7 = *(_QWORD *)(a3 + 8);
    }
    v8 = v7 + 8;
    *(_QWORD *)(a3 + 8) = v7 + 8;
    goto LABEL_15;
  }
  v6 = *(_DWORD *)a3;
  if ( v6 > 0x2F )
    *(_QWORD *)(a3 + 8) += 8LL;
  else
    *(_DWORD *)a3 = v6 + 8;
  get_segm_class();
  return 0;
}

