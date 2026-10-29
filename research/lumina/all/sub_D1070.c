unsigned __int64 __fastcall sub_D1070(__int64 a1, int *a2, unsigned __int8 *a3)
{
  unsigned __int8 v5; // dl
  __int64 v6; // rcx
  int v7; // ebp
  _BYTE *v8; // r12
  int v9; // esi
  unsigned __int8 *v10; // rbx
  unsigned __int8 v11; // al
  int v12; // r8d
  unsigned __int8 *v13; // rax
  int v14; // esi
  unsigned __int64 result; // rax
  __int64 v16; // [rsp+8h] [rbp-50h]
  int v17; // [rsp+14h] [rbp-44h] BYREF
  unsigned __int64 v18; // [rsp+18h] [rbp-40h]

  v5 = *a3;
  v6 = *a2;
  v18 = __readfsqword(0x28u);
  v7 = v6;
  v8 = (_BYTE *)(a1 + v6);
  if ( !v5 || (byte_1BEF00[v5] & 6) == 0 && v5 != 95 )
    goto LABEL_9;
  v9 = 0;
  do
  {
    v10 = &a3[++v9];
    v11 = *v10;
  }
  while ( *v10 && ((byte_1BEF00[v11] & 6) != 0 || v11 == 95) );
  if ( (byte_1BEF00[v5] & 4) != 0 )
  {
LABEL_9:
    *v8 = 34;
    v5 = *a3;
    v6 = ++v7;
    v12 = 1;
    v8 = (_BYTE *)(a1 + v7);
    if ( !*a3 )
    {
LABEL_17:
      ++v7;
      *v8 = 34;
      v8 = (_BYTE *)(a1 + v7);
      goto LABEL_16;
    }
    goto LABEL_10;
  }
  v17 = 59;
  if ( v9 <= 1 )
  {
    if ( v11 || !v9 )
      goto LABEL_9;
  }
  else
  {
    v16 = v6;
    sub_D0F40(a3, v9, &v17);
    v6 = v16;
    if ( v17 != 59 || *v10 )
      goto LABEL_9;
    v5 = *a3;
    if ( !*a3 )
      goto LABEL_16;
  }
  v12 = 0;
LABEL_10:
  v13 = a3;
  v14 = 0;
  while ( 1 )
  {
    *(_BYTE *)(a1 + v6) = v5;
    v8 = (_BYTE *)(a1 + v7 + 1);
    if ( *v13 == 34 )
      break;
    ++v14;
    ++v7;
    v13 = &a3[v14];
    v5 = *v13;
    if ( !*v13 )
      goto LABEL_15;
LABEL_12:
    v6 = v7;
  }
  ++v14;
  *v8 = 34;
  v7 += 2;
  v13 = &a3[v14];
  v8 = (_BYTE *)(a1 + v7);
  v5 = *v13;
  if ( *v13 )
    goto LABEL_12;
LABEL_15:
  if ( v12 )
    goto LABEL_17;
LABEL_16:
  result = __readfsqword(0x28u) ^ v18;
  *v8 = 0;
  *a2 = v7;
  return result;
}
