__int64 __fastcall sub_28D10(__int64 a1)
{
  __int16 v1; // ax
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rax
  int v5; // ecx

  if ( *(_BYTE *)(*(_QWORD *)(a1 + 864) + 1LL) )
  {
    v1 = *(_WORD *)(a1 + 40);
    if ( v1 == 1746 )
    {
      if ( (unsigned __int8)same_value_jpt(a1, a1 + 56, 0) )
      {
        *(_WORD *)(*(_QWORD *)(a1 + 376) + 4LL) = *(_QWORD *)(a1 + 104);
        v2 = *(_QWORD *)(a1 + 376);
        v3 = *(_QWORD *)(a1 + 152) + 16LL * *(_QWORD *)(a1 + 16);
        goto LABEL_8;
      }
    }
    else if ( v1 == 1750 && (unsigned __int8)same_value_jpt(a1, a1 + 56, 0) )
    {
      *(_WORD *)(*(_QWORD *)(a1 + 376) + 4LL) = *(_QWORD *)(a1 + 104);
      v2 = *(_QWORD *)(a1 + 376);
      v3 = *(_QWORD *)(a1 + 32) + *(unsigned __int16 *)(a1 + 42);
LABEL_8:
      *(_QWORD *)(v2 + 24) = v3;
      v4 = *(_QWORD *)(a1 + 376);
      v5 = *(unsigned __int16 *)(a1 + 62);
      *(_BYTE *)(v4 + 68) = *(_BYTE *)(a1 + 61);
      *(_DWORD *)(v4 + 64) = v5;
      return 1;
    }
  }
  else
  {
    *(_BYTE *)(a1 + 792) = 1;
  }
  return 0;
}

