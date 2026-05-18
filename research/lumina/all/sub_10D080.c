__int64 __fastcall sub_10D080(__int64 a1, unsigned int *a2)
{
  char v4; // si
  __int64 v5; // rax
  char v6; // si
  unsigned int v7; // ecx
  __int64 v8; // rax
  unsigned int v9; // edx
  unsigned int v10; // ebx
  int v11; // ebp
  unsigned int v12; // r12d
  unsigned int *v13; // rdi
  unsigned int v14; // r14d
  int v16; // eax
  bool v17; // al
  bool v18; // cl
  __int64 v19; // rax
  int v20; // edx
  unsigned int v21; // ebp
  __int64 v22; // rax
  int v23; // [rsp+8h] [rbp-50h]
  int v24; // [rsp+Ch] [rbp-4Ch]
  __int64 v25[9]; // [rsp+10h] [rbp-48h] BYREF

  v4 = *(_BYTE *)(a1 + 25);
  v25[1] = __readfsqword(0x28u);
  v5 = *(unsigned int *)(a1 + 184);
  v6 = v4 | 4;
  *(_BYTE *)(a1 + 25) = v6;
  v7 = *a2;
  v8 = v5 / *(_QWORD *)(a1 + 200);
  v9 = *(_DWORD *)(a1 + 32);
  v24 = -(int)v8 & (*a2 - 1);
  v10 = v24 + 1;
  if ( *a2 <= v9 )
  {
    v11 = v9 - v24;
    if ( v9 >= v24 + (int)v8 )
      v11 = v8;
    if ( v11 > 0 )
      goto LABEL_3;
LABEL_24:
    v14 = 0;
    goto LABEL_10;
  }
  v11 = v7 - v24;
  if ( (int)(v7 - v24) <= 0 )
    goto LABEL_24;
LABEL_3:
  v12 = v24 + 1;
  v23 = 0;
  while ( 1 )
  {
    if ( v12 != v7 && (v13 = *(unsigned int **)(a1 + 64)) != nullptr && sub_CBAC0(v13, v12) )
    {
      v19 = sub_CC270((__int64 *)(a1 + 288), v12);
      v25[0] = v19;
      if ( !v19 )
      {
LABEL_20:
        v17 = 1;
        v14 = 0;
        goto LABEL_14;
      }
      v20 = 1;
      if ( (*(_BYTE *)(v19 + 52) & 8) == 0 )
        v20 = v23;
      v14 = 0;
      v23 = v20;
      sub_C36A0(v19);
      v17 = 1;
    }
    else
    {
      if ( *(_DWORD *)(a1 + 192) == v12 )
        goto LABEL_20;
      v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *, _QWORD))(a1 + 272))(a1, v12, v25, 0);
      if ( v14 )
        goto LABEL_9;
      v14 = sub_10CEA0(v25[0], v12);
      v16 = 1;
      if ( (*(_BYTE *)(v25[0] + 52) & 8) == 0 )
        v16 = v23;
      v23 = v16;
      sub_C36A0(v25[0]);
      v17 = v14 == 0;
    }
LABEL_14:
    v18 = v11 > (int)(v12 - v24);
    ++v12;
    if ( !v17 || !v18 )
      break;
    v7 = *a2;
  }
  if ( (v23 & 1) != 0 && v17 )
  {
    v21 = v10 + v11;
    do
    {
      v22 = sub_CC270((__int64 *)(a1 + 288), v10);
      if ( v22 )
      {
        *(_WORD *)(v22 + 52) |= 8u;
        sub_C36A0(v22);
      }
      ++v10;
    }
    while ( v21 != v10 );
  }
LABEL_9:
  v6 = *(_BYTE *)(a1 + 25);
LABEL_10:
  *(_BYTE *)(a1 + 25) = v6 & 0xFB;
  return v14;
}
