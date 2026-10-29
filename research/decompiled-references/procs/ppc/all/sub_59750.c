bool __fastcall sub_59750(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // eax
  __int16 v8; // dx
  bool result; // al
  int v10; // edx
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  bool v13; // bl
  int v14; // eax
  char v15; // dl
  __int64 v16; // rax
  unsigned __int16 v17; // ax
  __int16 v18; // dx
  char v19; // al
  char v20; // cl
  char v21; // dl
  __int64 v22; // rsi
  __int16 v23; // cx
  __int16 v24; // cx
  __int16 v25; // dx
  __int64 v26; // rsi
  char v27; // al

  v6 = *(_DWORD *)a3;
  if ( *(int *)a3 >= 0 && (unsigned __int16)v6 == 0xFFFF )
  {
    v10 = *(_DWORD *)(a4 + 28);
    if ( (v10 & 8) != 0 && (v10 & 0x300) == 0 )
    {
      v11 = *(unsigned int *)(*(_QWORD *)(a1 + 8) + 288LL);
      if ( (unsigned int)v11 <= 9 )
      {
        v12 = 790;
        if ( _bittest64(&v12, v11) )
        {
          v13 = (v6 & 0x60000000) != 0x40000000;
          v14 = sub_349B0();
          *(_BYTE *)(a1 + 113) = 4;
          *(_WORD *)(a1 + 118) = 1;
          *(_QWORD *)(a1 + 128) = v14;
          v15 = 7;
          *(_BYTE *)(a1 + 117) = 5 * v13 + 2;
          *(_QWORD *)(a2 + 8) = a1 + 112;
          v16 = *(_QWORD *)(a1 + 8);
          *(_BYTE *)(a1 + 153) = 1;
          *(_WORD *)(a1 + 158) = 2;
          if ( *(_DWORD *)(*(_QWORD *)(v16 + 32) + 24LL) == 4 )
            v15 = 2;
          *(_BYTE *)(a1 + 157) = v15;
          *(_QWORD *)(a2 + 16) = a1 + 152;
          *(_BYTE *)(a2 + 24) = (*(_BYTE *)(a3 + 3) & 0x10) != 0;
          return 1;
        }
      }
    }
  }
  v8 = sub_35120(a4);
  if ( v8 == -1 )
  {
    v17 = *(_WORD *)(a4 + 24);
    v18 = *(_WORD *)(a4 + 86);
    if ( v17 <= 0x133u )
    {
      if ( v17 > 0x131u )
      {
        v25 = 281;
        *(_QWORD *)(a2 + 8) = a4 + 40;
        v26 = *(_QWORD *)(a1 + 8);
        v27 = *(_BYTE *)(a4 + 45);
        if ( *(_WORD *)(a4 + 24) == 306 )
          v25 = 280;
        *(_BYTE *)(a1 + 113) = 1;
        *(_WORD *)(a1 + 118) = v25;
        if ( v27 == -1 )
        {
          v27 = 7;
          if ( *(_DWORD *)(*(_QWORD *)(v26 + 32) + 24LL) == 4 )
            v27 = 2;
        }
        *(_BYTE *)(a1 + 117) = v27;
        *(_QWORD *)(a2 + 16) = a1 + 112;
        return 1;
      }
      if ( v17 != 48 )
      {
        if ( v17 > 0x30u )
        {
          if ( v17 == 281 )
          {
            *(_QWORD *)(a2 + 8) = a4 + 40;
            *(_QWORD *)(a2 + 16) = a4 + 80;
            return 1;
          }
          if ( (unsigned __int16)(v17 - 292) <= 1u )
          {
            v21 = *(_BYTE *)(a4 + 85);
            v22 = *(_QWORD *)(a1 + 8);
            *(_BYTE *)(a1 + 113) = 1;
            *(_WORD *)(a1 + 118) = (v17 != 292) + 280;
            if ( v21 == -1 )
            {
              v21 = 7;
              if ( *(_DWORD *)(*(_QWORD *)(v22 + 32) + 24LL) == 4 )
                v21 = 2;
            }
            *(_BYTE *)(a1 + 117) = v21;
            *(_QWORD *)(a2 + 8) = a1 + 112;
            *(_QWORD *)(a2 + 16) = a4 + 80;
            return 1;
          }
        }
        else
        {
          if ( v17 == 46 )
          {
            if ( !*(_BYTE *)(a4 + 81) )
              v18 = *(_WORD *)(a4 + 46);
            v19 = 1;
            v20 = 0;
            goto LABEL_34;
          }
          if ( v17 == 47 )
          {
            if ( !*(_BYTE *)(a4 + 81) )
              v18 = *(_WORD *)(a4 + 46);
            v19 = 1;
            v20 = 1;
            goto LABEL_34;
          }
        }
        return 0;
      }
      v19 = 1;
      v20 = 2;
LABEL_34:
      *(_BYTE *)(a2 + 24) = v19;
      *(_QWORD *)(a2 + 8) = a4 + 40;
      *(_BYTE *)(a1 + 113) = 1;
      *(_WORD *)(a1 + 118) = v18;
      *(_BYTE *)(a1 + 117) = v20;
      *(_QWORD *)(a2 + 16) = a1 + 112;
      return 1;
    }
    if ( v17 == 1177 )
    {
      v18 = *(_WORD *)(a4 + 46);
      v19 = 0;
      v20 = 1;
      goto LABEL_34;
    }
    if ( v17 > 0x499u )
    {
      if ( v17 != 1193 )
        return 0;
      v24 = *(_WORD *)(a4 + 126);
      if ( v24 != 48 )
      {
        if ( v24 != 56 )
        {
          result = 0;
          if ( v24 != 32 )
            return result;
          v20 = 2;
          v19 = 0;
          goto LABEL_34;
        }
        goto LABEL_42;
      }
    }
    else
    {
      if ( v17 != 346 )
      {
        if ( v17 != 1176 )
          return 0;
        v18 = *(_WORD *)(a4 + 46);
        v19 = 0;
        v20 = 0;
        goto LABEL_34;
      }
      v23 = *(_WORD *)(a4 + 126);
      if ( v23 != 16 )
      {
        result = 0;
        if ( v23 != 24 )
          return result;
LABEL_42:
        v20 = 0;
        v19 = 0;
        goto LABEL_34;
      }
    }
    v20 = 1;
    v19 = 0;
    goto LABEL_34;
  }
  result = 0;
  if ( (v8 & 0x7F00) != 0 )
  {
    result = (HIBYTE(v8) & 0x7F) == 8 || (unsigned __int8)((HIBYTE(v8) & 0x7F) - 1) <= 2u;
    if ( result )
    {
      result = 0;
      if ( (v8 & 8) == 0 )
      {
        result = *(_WORD *)(a4 + 46) <= 0x1Fu || (unsigned __int16)(*(_WORD *)(a4 + 46) - 280) <= 1u;
        if ( result )
        {
          result = 0;
          if ( (v8 & 2) == 0 )
          {
            if ( (v8 & 1) != 0 )
            {
              *(_QWORD *)(a2 + 8) = a4 + 80;
              *(_QWORD *)(a2 + 16) = a4 + 40;
            }
            else
            {
              *(_QWORD *)(a2 + 8) = a4 + 40;
              *(_QWORD *)(a2 + 16) = a4 + 80;
              *(_BYTE *)(a2 + 24) = sub_592C0(*(unsigned __int16 *)(a4 + 24));
            }
            return 1;
          }
        }
      }
    }
  }
  return result;
}
