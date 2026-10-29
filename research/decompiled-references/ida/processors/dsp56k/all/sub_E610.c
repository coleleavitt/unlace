__int64 __fastcall sub_E610(__int64 a1, __int64 a2, int a3)
{
  int v4; // eax
  int v5; // edx
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // ebx
  __int64 v9; // rax
  __int64 v11; // rax
  int v12; // ebx
  __int64 v13; // rax
  bool v14; // zf
  __int64 v15; // rax
  int v16; // ebx
  __int64 v17; // rax
  __int64 v18; // rdx
  int v19; // ebx
  __int64 v20; // rax

  v4 = a3 & 0x40;
  v5 = a3 & 0x3F | 0x40;
  if ( (a3 & 0x80u) == 0 )
  {
    v6 = *(_QWORD *)(a1 + 248);
    if ( v4 )
    {
      *(_BYTE *)(v6 + 1) = 1;
      v7 = *(_QWORD *)(a1 + 248);
      v8 = (a3 >> 8) & 3;
      if ( v8 == 2 )
      {
        *(_WORD *)(v7 + 6) = 6;
        v9 = *(_QWORD *)(a1 + 248) + 40LL;
      }
      else if ( v8 == 3 )
      {
        *(_WORD *)(v7 + 6) = 10;
        v9 = *(_QWORD *)(a1 + 248) + 40LL;
      }
      else
      {
        if ( v8 == 1 )
          *(_WORD *)(v7 + 6) = 5;
        else
          *(_WORD *)(v7 + 6) = 4;
        v9 = *(_QWORD *)(a1 + 248) + 40LL;
      }
      *(_QWORD *)(a1 + 248) = v9;
      *(_BYTE *)(v9 + 33) |= 0x20u;
    }
    else
    {
      *(_BYTE *)(v6 + 1) = 1;
      v11 = *(_QWORD *)(a1 + 248);
      v12 = (a3 >> 10) & 3;
      if ( v12 == 2 )
      {
        *(_WORD *)(v11 + 6) = 6;
        v13 = *(_QWORD *)(a1 + 248) + 40LL;
      }
      else if ( v12 == 3 )
      {
        *(_WORD *)(v11 + 6) = 10;
        v13 = *(_QWORD *)(a1 + 248) + 40LL;
      }
      else
      {
        if ( v12 == 1 )
          *(_WORD *)(v11 + 6) = 2;
        else
          *(_WORD *)(v11 + 6) = 1;
        v13 = *(_QWORD *)(a1 + 248) + 40LL;
      }
      *(_QWORD *)(a1 + 248) = v13;
      *(_BYTE *)(v13 + 33) |= 0x10u;
    }
    sub_E200(a1, a2, v5);
    return 1;
  }
  v14 = v4 == 0;
  v15 = *(_QWORD *)(a1 + 248);
  if ( !v14 )
  {
    *(_BYTE *)(v15 + 33) |= 0x20u;
    v19 = (a3 >> 8) & 3;
    sub_E200(a1, a2, v5);
    v20 = *(_QWORD *)(a1 + 248);
    *(_QWORD *)(a1 + 248) = v20 + 40;
    *(_BYTE *)(v20 + 41) = 1;
    v18 = *(_QWORD *)(a1 + 248);
    if ( v19 != 2 )
    {
      if ( v19 == 3 )
        goto LABEL_31;
      *(_WORD *)(v18 + 6) = (v19 == 1) + 4;
      return 1;
    }
LABEL_23:
    *(_WORD *)(v18 + 6) = 6;
    return 1;
  }
  *(_BYTE *)(v15 + 33) |= 0x10u;
  v16 = (a3 >> 10) & 3;
  sub_E200(a1, a2, v5);
  v17 = *(_QWORD *)(a1 + 248);
  *(_QWORD *)(a1 + 248) = v17 + 40;
  *(_BYTE *)(v17 + 41) = 1;
  v18 = *(_QWORD *)(a1 + 248);
  if ( v16 == 2 )
    goto LABEL_23;
  if ( v16 == 3 )
  {
LABEL_31:
    *(_WORD *)(v18 + 6) = 10;
    return 1;
  }
  *(_WORD *)(v18 + 6) = (v16 == 1) + 1;
  return 1;
}

