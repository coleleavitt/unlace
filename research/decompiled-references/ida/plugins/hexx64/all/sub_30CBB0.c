__int64 __fastcall sub_30CBB0(__int128 a1, __int64 *a2, __int64 a3, __m128i a4, __m128 a5)
{
  unsigned int v7; // eax
  unsigned int v8; // r15d
  char v9; // al
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned int *v12; // r14
  char v13; // al
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  unsigned int v23; // eax
  __int64 v24; // rax
  int v25; // r9d
  int v26; // [rsp+Ch] [rbp-6Ch]
  __int64 v27; // [rsp+10h] [rbp-68h] BYREF
  __int64 v28; // [rsp+18h] [rbp-60h] BYREF
  _QWORD v29[11]; // [rsp+20h] [rbp-58h] BYREF

  v29[3] = __readfsqword(0x28u);
  v7 = sub_11FD80(*((char **)&a1 + 1), &v27, 1);
  if ( (_BYTE)v7 )
  {
    v24 = *(_QWORD *)(*((_QWORD *)&a1 + 1) + 8LL);
    v25 = *(_DWORD *)(v24 + 8);
    v27 = (v27 >> 63) | 1;
    sub_120A10(*((__int64 *)&a1 + 1), (unsigned __int64 *)a1, v27, 1, *(_QWORD *)v24, v25);
    return 1;
  }
  v8 = v7;
  v9 = **((_BYTE **)&a1 + 1);
  if ( **((_BYTE **)&a1 + 1) == 14 )
  {
    v29[1] = 0;
    v29[0] = 0xFFFFFFFF00000000LL;
    sub_11CA10((char *)v29, (char *)(*(_QWORD *)(*((_QWORD *)&a1 + 1) + 8LL) + 16LL));
    sub_11CA10(*((char **)&a1 + 1), (char *)v29);
    sub_30CBB0(a1, a2, a3);
    sub_11CDA0((__int64)v29);
    return 1;
  }
  v28 = *a2;
  if ( a3 )
  {
    v10 = sub_129440(a3, *((__int64 *)&a1 + 1), (__int64)&v28, 0, *(double *)a4.m128i_i64, a5);
    v12 = (unsigned int *)v10;
    if ( !v10 )
      return v8;
    v13 = *(_BYTE *)(v10 + 64);
    if ( v13 == 8 )
      return v8;
    if ( v13 && !sub_152650((__int64)(v12 + 16), (unsigned __int64 *)a1, *((__int64 *)&a1 + 1), v11, a4) )
    {
      if ( (signed int)v12[17] <= *(_DWORD *)(*((_QWORD *)&a1 + 1) + 4LL) || *v12 != 8 )
        return v8;
      sub_123A40((__int64)v29, (unsigned __int8 *)v12 + 64, v14, v15);
      if ( !(unsigned __int8)sub_1272B0((__int64)v29, (unsigned __int64 *)a1, v12[9], 0, *(double *)a4.m128i_i64)
        || !sub_152650((__int64)v29, (unsigned __int64 *)a1, *((__int64 *)&a1 + 1), v16, a4) )
      {
        goto LABEL_11;
      }
      sub_11CDA0((__int64)v29);
    }
  }
  else
  {
    if ( v9 != 4 )
      return v8;
    v12 = *(unsigned int **)(*((_QWORD *)&a1 + 1) + 8LL);
  }
  v18 = *v12;
  if ( (unsigned int)v18 > 0x29 )
    return v8;
  if ( (unsigned int)v18 <= 7 )
  {
    if ( (_DWORD)v18 == 7 )
    {
      v26 = 1;
      v22 = v28;
      goto LABEL_26;
    }
    if ( (_DWORD)v18 == 4 )
      goto LABEL_36;
    if ( (_DWORD)v18 != 6 )
      return v8;
LABEL_39:
    v22 = v28;
LABEL_40:
    *a2 = v22;
    sub_120A10(*((__int64 *)&a1 + 1), (unsigned __int64 *)a1, 1, 1, *((_QWORD *)v12 + 3), 0);
    return 1;
  }
  v19 = 1LL << v18;
  if ( ((1LL << v18) & 0x3FFE0800200LL) != 0 )
    goto LABEL_39;
  if ( (v19 & 0x1000900) != 0 )
  {
LABEL_36:
    v26 = 0;
    v22 = v28;
    goto LABEL_26;
  }
  if ( (v19 & 0x380000) != 0 )
  {
    v20 = sub_11C8A0((__int64)v12, v29);
    if ( v20 )
    {
      v21 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v20 + 8) + 16LL), *(_DWORD *)(v20 + 4), 1);
      v22 = v28;
      v27 = v21;
      v18 = *v12;
      if ( (_DWORD)v18 != 19 )
      {
        if ( (_DWORD)v18 != 20 )
        {
          if ( v21 >= 0 )
            goto LABEL_25;
          v26 = 1;
          if ( (_DWORD)v18 != 21 )
            goto LABEL_25;
LABEL_26:
          *a2 = v22;
          sub_123A40((__int64)v29, (unsigned __int8 *)v12 + 32, v22, v18);
          sub_11CA10(*((char **)&a1 + 1), (char *)v29);
          v23 = sub_30CBB0(a1, a2, a3);
          v8 = v23;
          if ( v26 == 1 )
          {
            if ( !(_BYTE)v23 && *v12 == 7 )
            {
              sub_11CA10(*((char **)&a1 + 1), (char *)v29);
              goto LABEL_11;
            }
            sub_1207E0(
              *((char **)&a1 + 1),
              (unsigned __int64 *)a1,
              7,
              *((_QWORD *)v12 + 3),
              *(_DWORD *)(*((_QWORD *)&a1 + 1) + 4LL),
              a4);
          }
          v8 = 1;
LABEL_11:
          sub_11CDA0((__int64)v29);
          return v8;
        }
        if ( v21 <= 0 )
        {
LABEL_25:
          v26 = 0;
          goto LABEL_26;
        }
        goto LABEL_40;
      }
      if ( v21 >= 0 )
        goto LABEL_25;
      *a2 = v28;
      sub_120A10(*((__int64 *)&a1 + 1), (unsigned __int64 *)a1, -1, 1, *((_QWORD *)v12 + 3), 0);
      return 1;
    }
  }
  return v8;
}

