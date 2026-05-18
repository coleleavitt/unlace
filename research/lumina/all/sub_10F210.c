__int64 __fastcall sub_10F210(__int64 a1)
{
  unsigned __int8 v1; // r12
  unsigned int v2; // ebp
  unsigned int v4; // r12d

  v1 = *(_BYTE *)(a1 + 21);
  if ( v1 != 6 )
  {
    v2 = 0;
    if ( v1 > 1u )
    {
      if ( *(_QWORD *)(a1 + 296) )
      {
        v2 = *(_DWORD *)(a1 + 48);
        if ( v2 )
        {
          sub_D66C0(a1, *(unsigned __int8 *)(a1 + 24), 0);
        }
        else if ( *(int *)(a1 + 128) >= 0 )
        {
          v4 = sub_10E540(a1, (int *)((char *)&dword_0 + 2), -1);
          v2 = sub_D66C0(a1, *(unsigned __int8 *)(a1 + 24), 0);
          if ( v4 )
            v2 = v4;
        }
        else
        {
          v2 = sub_D66C0(a1, *(unsigned __int8 *)(a1 + 24), 0);
        }
        goto LABEL_6;
      }
      if ( **(_QWORD **)(a1 + 80) )
      {
        if ( v1 == 2 )
          v2 = sub_D66C0(a1, 0, 0);
        else
          v2 = sub_10EB60((__int64 *)a1, 0);
        goto LABEL_6;
      }
      v2 = sub_D66C0(a1, 0, 0);
      if ( *(_BYTE *)(a1 + 19) || v1 == 2 )
      {
LABEL_6:
        if ( (unsigned __int8)v2 == 13 || (unsigned __int8)v2 == 10 )
          sub_CC130(a1, v2);
        return v2;
      }
      *(_DWORD *)(a1 + 48) = 4;
      *(_BYTE *)(a1 + 21) = 6;
      *(_QWORD *)(a1 + 272) = sub_C3690;
    }
    return v2;
  }
  return *(unsigned int *)(a1 + 48);
}
