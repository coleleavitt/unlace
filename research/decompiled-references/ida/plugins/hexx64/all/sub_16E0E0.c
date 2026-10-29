__int64 __fastcall sub_16E0E0(_QWORD *a1, __int64 a2, __m128i a3, __m128 a4)
{
  _DWORD *v4; // r13
  unsigned int v5; // r15d
  __int64 v7; // rax
  __int64 v8; // r14
  _DWORD *v9; // rax
  unsigned __int8 *v10; // rax
  unsigned __int8 *v11; // r11
  int v12; // eax
  int v13; // edx
  __int64 v14; // r13
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rax
  char v19; // al
  unsigned __int8 *v20; // r11
  __int64 v21; // r13
  __int64 v22; // [rsp+10h] [rbp-88h]
  unsigned __int8 *v23; // [rsp+18h] [rbp-80h]
  unsigned __int8 *v24; // [rsp+18h] [rbp-80h]
  unsigned __int8 *v25; // [rsp+18h] [rbp-80h]
  unsigned __int8 *v26; // [rsp+20h] [rbp-78h]
  __int64 v27; // [rsp+28h] [rbp-70h]
  _DWORD *v28; // [rsp+30h] [rbp-68h] BYREF
  __int64 v29; // [rsp+38h] [rbp-60h] BYREF
  __int64 v30[11]; // [rsp+40h] [rbp-58h] BYREF

  v30[3] = __readfsqword(0x28u);
  v4 = (_DWORD *)a1[7];
  if ( *v4 != 44 )
    return 0;
  v7 = sub_1229A0(*(_QWORD *)(a2 + 48));
  v8 = v7;
  if ( !v7 )
    return 0;
  if ( *(_DWORD *)v7 != 4 )
    return 0;
  v9 = *(_DWORD **)(v7 + 8);
  if ( v9 )
  {
    if ( *v9 != 55 )
      return 0;
  }
  v5 = sub_11FD80((char *)(v8 + 32), v30, 0);
  if ( !(_BYTE)v5 )
    return 0;
  if ( v30[0] != 1 )
    return 0;
  v28 = v4;
  v10 = (unsigned __int8 *)sub_129440((__int64)a1, v8 + 64, (__int64)&v28, 1, *(double *)a3.m128i_i64, a4);
  v11 = v10;
  if ( !v10 )
    return 0;
  v12 = *(_DWORD *)v10;
  if ( (unsigned int)(v12 - 12) > 1 )
    return 0;
  v13 = *((_DWORD *)v11 + 17);
  if ( v13 != *(_DWORD *)(v8 + 68) || v13 != v4[9] )
    return 0;
  v22 = *(_QWORD *)(a1[60] + 112LL);
  if ( v12 != 13 )
  {
    v23 = v11;
    if ( (unsigned __int8)sub_11FD80((char *)(a1[7] + 48LL), &v29, 1) )
    {
      if ( sub_1255D0(v23 + 32, v22, (__int64)(v4 + 8), 0, *(double *)a3.m128i_i64) )
      {
        v14 = v29;
        if ( (unsigned __int8)sub_11FD80((char *)v23 + 48, v30, 1) )
        {
          if ( !(v30[0] + v14) )
            goto LABEL_19;
        }
      }
    }
    return 0;
  }
  v24 = v11;
  v27 = (__int64)(v4 + 8);
  v26 = v11 + 32;
  v19 = sub_1255D0(v11 + 32, v22, (__int64)(v4 + 8), 0, *(double *)a3.m128i_i64);
  v20 = v24;
  if ( !v19 )
  {
    v21 = (__int64)(v4 + 12);
LABEL_23:
    v25 = v20;
    if ( sub_1255D0(v26, v22, v21, 0, *(double *)a3.m128i_i64)
      && sub_1255D0(v25 + 48, v22, v27, 0, *(double *)a3.m128i_i64) )
    {
      goto LABEL_19;
    }
    return 0;
  }
  v21 = (__int64)(v4 + 12);
  if ( !sub_1255D0(v24 + 48, v22, v21, 0, *(double *)a3.m128i_i64) )
  {
    v20 = v24;
    goto LABEL_23;
  }
LABEL_19:
  sub_123A40((__int64)v30, (unsigned __int8 *)(v8 + 64), v15, v16);
  v17 = a1[8];
  v18 = *(unsigned int *)(a1[7] + 72LL);
  if ( (unsigned int)v18 >= *(_DWORD *)(v17 + 64) )
    sub_167AF0(*(double *)a3.m128i_i64);
  sub_167DA0((__int64)a1, a2, *(_QWORD *)(*(_QWORD *)(v17 + 528) + 8 * v18), 32, (__int64)v30, v8, a3);
  sub_11CDA0((__int64)v30);
  sub_66FA0(a1[8], 1);
  return v5;
}

