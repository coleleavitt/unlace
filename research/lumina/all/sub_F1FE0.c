unsigned __int64 __fastcall sub_F1FE0(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // r13
  int *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // r14
  int v11; // ebp
  int v12; // r12d
  int *v13; // rax
  char *v14; // rsi
  __int64 v15; // rdx
  _QWORD *v16; // rax
  int v17; // esi
  __int64 v18; // r12
  int v19; // ebp
  char *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  char *v23; // rcx
  __int64 v24; // [rsp+8h] [rbp-90h]
  __int64 v25; // [rsp+10h] [rbp-88h]
  __int64 v26; // [rsp+18h] [rbp-80h]
  _QWORD v27[7]; // [rsp+20h] [rbp-78h] BYREF
  unsigned __int64 v28; // [rsp+58h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 291) || *(_BYTE *)(a1 + 28) )
    return __readfsqword(0x28u) ^ v28;
  while ( a2[10] )
    a2 = (_QWORD *)a2[10];
  v7 = *(_QWORD *)a1;
  v8 = (int *)a2[4];
  v9 = a2[5];
  *(_BYTE *)(a1 + 28) = 1;
  v10 = *(_QWORD *)(a1 + 16);
  v25 = v9;
  v24 = *(_QWORD *)(v7 + 48) & 0x44LL;
  v26 = *(_QWORD *)(v7 + 48) & 4LL;
  sub_DE530(v10, *v8, a3, a4, a5, a6);
  if ( *v8 > 0 )
  {
    v11 = 0;
    while ( 1 )
    {
      v12 = v11 + 1;
      v13 = &v8[6 * v11];
      v14 = *((char **)v13 + 2);
      v15 = *((_QWORD *)v13 + 1);
      if ( v14 )
      {
        if ( (*((_BYTE *)v13 + 25) & 3) == 0 )
        {
          if ( !*(_BYTE *)(*(_QWORD *)v10 + 103LL) )
            sub_F1A30(v10, v11, 0, v14, (__int64 (__fastcall *)(__int64))0xFFFFFFFFFFFFFFFFLL);
          goto LABEL_10;
        }
        if ( !v24 || *(_BYTE *)v15 != 0xA7 )
        {
          v16 = sub_DC720(v7, v14);
          goto LABEL_16;
        }
LABEL_25:
        v21 = *(__int16 *)(v15 + 48);
        v22 = *(_QWORD *)(v15 + 64);
        if ( (int)v21 >= 0 || (v21 = *(__int16 *)(v22 + 52), (int)v21 >= 0) )
          v23 = *(char **)(*(_QWORD *)(v22 + 8) + 16 * v21);
        else
          v23 = "rowid";
        if ( v26 )
        {
          v16 = (_QWORD *)sub_E8280(v7, "%s.%s", *(const char **)v22, v23);
          if ( !*(_BYTE *)(*(_QWORD *)v10 + 103LL) )
            goto LABEL_17;
        }
        else if ( !*(_BYTE *)(*(_QWORD *)v10 + 103LL) )
        {
          sub_F1A30(v10, v11, 0, v23, (__int64 (__fastcall *)(__int64))0xFFFFFFFFFFFFFFFFLL);
        }
LABEL_10:
        ++v11;
        if ( *v8 <= v12 )
          break;
      }
      else
      {
        if ( v24 && *(_BYTE *)v15 == 0xA7 )
          goto LABEL_25;
        v16 = (_QWORD *)sub_E8280(v7, "column%d", v12);
LABEL_16:
        if ( *(_BYTE *)(*(_QWORD *)v10 + 103LL) )
          goto LABEL_10;
LABEL_17:
        v17 = v11++;
        sub_F1A30(v10, v17, 0, v16, sub_D42A0);
        if ( *v8 <= v12 )
          break;
      }
    }
  }
  v27[0] = a1;
  v27[3] = 0;
  v18 = *(_QWORD *)(a1 + 16);
  v27[1] = v25;
  if ( *v8 > 0 )
  {
    v19 = 0;
    do
    {
      v20 = (char *)sub_D4CC0(v27, *(_QWORD *)&v8[6 * v19 + 2]);
      if ( !*(_BYTE *)(*(_QWORD *)v18 + 103LL) )
        sub_F1A30(v18, v19, 1, v20, (__int64 (__fastcall *)(__int64))0xFFFFFFFFFFFFFFFFLL);
      ++v19;
    }
    while ( v19 < *v8 );
  }
  return __readfsqword(0x28u) ^ v28;
}
