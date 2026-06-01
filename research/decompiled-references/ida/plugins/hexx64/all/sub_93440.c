__int64 __fastcall sub_93440(__int128 a1, __int64 a2, _BYTE *a3, char a4)
{
  __int64 v4; // r13
  _QWORD *v7; // rbx
  int *v8; // r15
  __int128 v10; // rdi
  int *v11; // rax
  __int64 v12; // rdi
  int v13; // eax
  __int64 v14; // rbx
  unsigned __int8 *v15; // rsi
  int *v16; // rax
  int v17; // eax
  int v18; // edx
  _DWORD *v20; // rsi
  _QWORD v21[9]; // [rsp+0h] [rbp-48h] BYREF

  v4 = a1;
  v7 = *((_QWORD **)&a1 + 1);
  v8 = **((int ***)&a1 + 1);
  v21[1] = __readfsqword(0x28u);
  v21[0] = 0;
  if ( *v8 != 5 && !a4 )
    goto LABEL_3;
  *((_QWORD *)&a1 + 1) = v8 + 8;
  v16 = (int *)sub_129440(a1, (__int64)v7, 0);
  v12 = (__int64)v16;
  if ( v16 )
  {
    v17 = *v16;
    v18 = *v8;
    switch ( v17 )
    {
      case 9:
        if ( v18 == 5 )
          goto LABEL_8;
        goto LABEL_3;
      case 12:
        if ( v18 != 5 )
          goto LABEL_3;
        v12 = sub_11C8E0(v12, v21, 9);
        if ( v12 )
          goto LABEL_8;
        break;
      case 5:
        if ( v18 == 5 )
          return 0;
        v15 = (unsigned __int8 *)(v8 + 12);
        v12 = sub_11C8E0(v12, nullptr, 9);
        if ( v12 )
        {
LABEL_17:
          v21[0] = v15;
          v14 = v12 + 32;
          *a3 = 0;
          if ( *(_BYTE *)(v12 + 32) == 4 && **(_DWORD **)(v12 + 40) == 6 )
          {
            *a3 = 1;
            v14 = *(_QWORD *)(v12 + 40) + 32LL;
          }
          goto LABEL_10;
        }
        break;
    }
  }
  if ( *v8 == 5 )
    return 0;
LABEL_3:
  *v7 = v8;
  *(_QWORD *)&v10 = v4;
  *((_QWORD *)&v10 + 1) = v8 + 12;
  v11 = (int *)sub_129440(v10, (__int64)v7, 0);
  v12 = (__int64)v11;
  if ( !v11 )
    return 0;
  v13 = *v11;
  if ( v13 == 9 )
  {
    if ( !a4 )
      goto LABEL_8;
    if ( *((_BYTE *)v8 + 32) == 4 )
    {
      v20 = *((_DWORD **)v8 + 5);
      if ( *v20 == 5 )
      {
        v15 = (unsigned __int8 *)(v20 + 8);
        goto LABEL_17;
      }
    }
    return 0;
  }
  if ( v13 != 12 )
    return 0;
  if ( a4 )
    return 0;
  v12 = sub_11C8E0(v12, v21, 9);
  if ( !v12 )
    return 0;
LABEL_8:
  *a3 = 0;
  v14 = v12 + 32;
  v15 = (unsigned __int8 *)v21[0];
  if ( *(_BYTE *)(v12 + 32) == 4 && **(_DWORD **)(v12 + 40) == 6 )
  {
    *a3 = 1;
    v14 = *(_QWORD *)(v12 + 40) + 32LL;
  }
  if ( v15 )
LABEL_10:
    sub_125180(a2, v15);
  return v14;
}

