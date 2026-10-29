__int64 __fastcall sub_680A0(__int64 a1)
{
  int v1; // eax
  int v3; // r10d
  int v4; // ebx
  int v5; // ebp
  unsigned int v6; // ecx
  int v7; // r11d
  int v8; // r9d
  int v9; // edi
  int v10; // esi
  int v11; // eax
  int v12; // r8d
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rcx
  char v19; // al
  int v20; // eax
  int v21; // r8d
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v26; // rcx
  char v27; // al
  int v29; // eax
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rcx
  char v36; // al
  int v37; // eax
  int v38; // r8d
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rcx
  char v43; // al
  char v44; // al
  char v45; // al

  v1 = *(_DWORD *)(a1 + 16);
  if ( (v1 & 0x40) == 0 )
  {
    v3 = (v1 >> 13) & 7;
    v4 = (v1 >> 17) & 7;
    v5 = (v1 >> 1) & 7;
    v6 = (v1 >> 7) & 1;
    v7 = (v1 >> 5) & 1;
    v8 = (v1 >> 12) & 1;
    v9 = BYTE2(v1) & 1;
    if ( (~v1 & 0x700000) != 0 )
    {
      v10 = (v1 >> 20) & 7;
      if ( (v1 & 1) == 0 )
      {
        if ( !v6 )
        {
          v11 = v1 >> 28;
          v12 = v11 & 1;
          if ( (v8 & v11) == 0 )
          {
            v13 = *(_QWORD *)(a1 + 8);
            *(_WORD *)(v13 + 46) = 2 * v3;
            *(_BYTE *)(v13 + 41) = 1;
            *(_BYTE *)(v13 + 45) = 2;
            v14 = *(_QWORD *)(a1 + 8);
            *(_WORD *)(v14 + 86) = 2 * v10 + 1;
            *(_BYTE *)(v14 + 81) = 1;
            *(_BYTE *)(v14 + 85) = 2;
            v15 = *(_QWORD *)(a1 + 8);
            *(_WORD *)(v15 + 126) = v4 + 45;
            *(_BYTE *)(v15 + 121) = 1;
            *(_BYTE *)(v15 + 125) = 8;
            v16 = *(_QWORD *)(a1 + 8);
            *(_WORD *)(v16 + 166) = v5 + 45;
            *(_BYTE *)(v16 + 161) = 1;
            v17 = v9 + 1;
            *(_BYTE *)(v16 + 165) = 8;
            v18 = *(_QWORD *)(a1 + 8);
            if ( v12 )
              v19 = byte_8E218[v17];
            else
              v19 = byte_8E21C[v17];
            if ( v19 )
            {
              *(_BYTE *)(v18 + 33) = v19 | 0x80;
              v18 = *(_QWORD *)(a1 + 8);
            }
            *(_WORD *)(v18 + 24) = word_8DBC0[2 * v7 + v8];
            return *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 26LL);
          }
          return v6;
        }
        return 0;
      }
      if ( v6 )
        return 0;
      v29 = v1 >> 28;
      v30 = v29 & 1;
      if ( (v9 & v29) != 0 )
        return v6;
      v31 = *(_QWORD *)(a1 + 8);
      *(_WORD *)(v31 + 46) = 2 * v3;
      *(_BYTE *)(v31 + 41) = 1;
      *(_BYTE *)(v31 + 45) = 2;
      v32 = *(_QWORD *)(a1 + 8);
      *(_WORD *)(v32 + 86) = 2 * v10 + 1;
      *(_BYTE *)(v32 + 81) = 1;
      *(_BYTE *)(v32 + 85) = 2;
      v33 = *(_QWORD *)(a1 + 8);
      *(_WORD *)(v33 + 126) = v4 + 45;
      *(_BYTE *)(v33 + 121) = 1;
      *(_BYTE *)(v33 + 125) = 8;
      v34 = *(_QWORD *)(a1 + 8);
      *(_BYTE *)(v34 + 161) = 1;
      *(_WORD *)(v34 + 166) = v5 + 45;
      *(_BYTE *)(v34 + 165) = 8;
      v35 = *(_QWORD *)(a1 + 8);
      if ( (_DWORD)v30 )
      {
        v36 = -121;
      }
      else
      {
        v44 = byte_8E21C[v9 + 1];
        if ( !v44 )
          goto LABEL_27;
        v36 = v44 | 0x80;
      }
      *(_BYTE *)(v35 + 33) = v36;
      v35 = *(_QWORD *)(a1 + 8);
LABEL_27:
      *(_WORD *)(v35 + 24) = word_8DBB0[4 * v30 + 2 * v7 + v8];
      return *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 26LL);
    }
    if ( (v1 & 1) == 0 )
    {
      if ( !v6 )
      {
        v20 = v1 >> 28;
        v21 = v20 & 1;
        if ( (v8 & v20) == 0 )
        {
          v22 = *(_QWORD *)(a1 + 8);
          *(_WORD *)(v22 + 46) = 2 * v3;
          *(_BYTE *)(v22 + 41) = 1;
          *(_BYTE *)(v22 + 45) = 2;
          v23 = *(_QWORD *)(a1 + 8);
          *(_WORD *)(v23 + 86) = v4 + 45;
          *(_BYTE *)(v23 + 81) = 1;
          *(_BYTE *)(v23 + 85) = 8;
          v24 = *(_QWORD *)(a1 + 8);
          *(_WORD *)(v24 + 126) = v5 + 45;
          *(_BYTE *)(v24 + 121) = 1;
          v25 = v9 + 1;
          *(_BYTE *)(v24 + 125) = 8;
          v26 = *(_QWORD *)(a1 + 8);
          if ( v21 )
            v27 = byte_8E218[v25];
          else
            v27 = byte_8E21C[v25];
          if ( v27 )
          {
            *(_BYTE *)(v26 + 33) = v27 | 0x80;
            v26 = *(_QWORD *)(a1 + 8);
          }
          *(_WORD *)(v26 + 24) = word_8DBD0[2 * v7 + v8];
          return *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 26LL);
        }
        return v6;
      }
      return 0;
    }
    if ( v6 )
      return 0;
    v37 = v1 >> 28;
    v38 = v37 & 1;
    if ( (v9 & v37) != 0 )
      return v6;
    v39 = *(_QWORD *)(a1 + 8);
    *(_WORD *)(v39 + 46) = 2 * v3;
    *(_BYTE *)(v39 + 41) = 1;
    *(_BYTE *)(v39 + 45) = 2;
    v40 = *(_QWORD *)(a1 + 8);
    *(_WORD *)(v40 + 86) = v4 + 45;
    *(_BYTE *)(v40 + 81) = 1;
    *(_BYTE *)(v40 + 85) = 8;
    v41 = *(_QWORD *)(a1 + 8);
    *(_BYTE *)(v41 + 121) = 1;
    *(_WORD *)(v41 + 126) = v5 + 45;
    *(_BYTE *)(v41 + 125) = 8;
    v42 = *(_QWORD *)(a1 + 8);
    if ( v38 )
    {
      v45 = -123;
    }
    else
    {
      v43 = byte_8E21C[v9 + 1];
      if ( !v43 )
      {
LABEL_32:
        *(_WORD *)(v42 + 24) = word_8DBC8[2 * v7 + v8];
        return *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 26LL);
      }
      v45 = v43 | 0x80;
    }
    *(_BYTE *)(v42 + 33) = v45;
    v42 = *(_QWORD *)(a1 + 8);
    goto LABEL_32;
  }
  return 0;
}
