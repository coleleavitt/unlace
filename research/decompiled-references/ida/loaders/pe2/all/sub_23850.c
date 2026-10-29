__int64 __fastcall sub_23850(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned int v6; // edx
  _BYTE *v7; // r9
  unsigned __int16 *v8; // rdx
  __int64 i; // rax
  unsigned __int8 v10; // di
  int v11; // esi

  v6 = *(_DWORD *)(a2 + 4);
  if ( a3 >= v6 )
  {
    sub_70E0((__int64)"decode_row: Out of bounds: %u (table has %u rows).\n", a3, v6);
    return 0;
  }
  else
  {
    v7 = *(_BYTE **)(a2 + 32);
    v8 = (unsigned __int16 *)(*(_QWORD *)(a2 + 24) + a3 * *(unsigned __int8 *)(a2 + 8));
    if ( *v7 != 0x8A )
    {
      for ( i = 0; v7[i] != 0x8A; ++i )
      {
        v10 = *(_BYTE *)(a2 + i + 9);
        switch ( v10 )
        {
          case 2u:
            v11 = *v8++;
            break;
          case 4u:
            v11 = *(_DWORD *)v8;
            v8 += 2;
            break;
          case 1u:
            v11 = *(unsigned __int8 *)v8;
            v8 = (unsigned __int16 *)((char *)v8 + 1);
            break;
          default:
            sub_70E0((__int64)"Invalid column size: %d.\n", v10);
            return 0;
        }
        *(_DWORD *)(a4 + 4 * i) = v11;
      }
    }
    return 1;
  }
}

