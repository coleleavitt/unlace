__int64 __fastcall sub_97B50(__int64 a1, const __m128i *a2, __int64 a3, unsigned __int8 *a4, double a5)
{
  unsigned int v6; // r13d
  char *v10; // r15
  char *v11; // r14
  __int128 v12; // rdi
  __int128 v13; // rdi
  __int128 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rax
  int *v17; // r10
  __int64 v18; // r11
  int v19; // eax
  unsigned int *v20; // r9
  __int64 v21; // rsi
  int *v22; // [rsp+8h] [rbp-E8h]
  __int64 v23; // [rsp+10h] [rbp-E0h]
  __int64 v24; // [rsp+20h] [rbp-D0h]
  unsigned int *v25; // [rsp+20h] [rbp-D0h]
  __int64 v27; // [rsp+30h] [rbp-C0h] BYREF
  __int64 v28; // [rsp+38h] [rbp-B8h] BYREF
  _QWORD v29[2]; // [rsp+40h] [rbp-B0h] BYREF
  _QWORD v30[2]; // [rsp+50h] [rbp-A0h] BYREF
  char v31[8]; // [rsp+60h] [rbp-90h] BYREF
  __int128 v32; // [rsp+68h] [rbp-88h]
  _QWORD v33[2]; // [rsp+80h] [rbp-70h] BYREF
  _QWORD v34[2]; // [rsp+90h] [rbp-60h] BYREF
  _QWORD v35[10]; // [rsp+A0h] [rbp-50h] BYREF

  v35[3] = __readfsqword(0x28u);
  if ( !a3 || *(_DWORD *)a4 != 19 || *((_DWORD *)a4 + 17) >= *(_DWORD *)(a1 + 88) )
    return 0;
  v10 = (char *)(a4 + 32);
  v11 = (char *)(a4 + 48);
  if ( !(unsigned __int8)sub_130BC0(a2, a3, (__int64)(a4 + 32), a3, (__int64)(a4 + 48), 0) )
  {
    if ( (unsigned __int8)sub_130BC0(a2, a3, (__int64)v11, a3, (__int64)v10, 0) )
    {
      *(_QWORD *)&v12 = a2;
      *((_QWORD *)&v12 + 1) = a3;
      if ( (unsigned __int8)sub_132E20(v12, (__int64)v11, a3, (__int64)v10, 8u) )
      {
        *(_DWORD *)a4 = 4;
        sub_11CA10(v10, v11);
        goto LABEL_12;
      }
    }
LABEL_15:
    v27 = a3;
    *((_QWORD *)&v14 + 1) = v10;
    v28 = a3;
    v6 = (unsigned int)a2;
    *(_QWORD *)&v14 = a2;
    v15 = sub_129440(v14, (__int64)&v27, 1);
    *(_QWORD *)&v14 = a2;
    *((_QWORD *)&v14 + 1) = v11;
    v24 = v15;
    v16 = sub_129440(v14, (__int64)&v28, 1);
    v17 = (int *)v24;
    v18 = v16;
    LOBYTE(v6) = v16 == 0 || v24 == 0;
    if ( !(_BYTE)v6 )
    {
      v19 = *(_DWORD *)v24;
      if ( *(_DWORD *)v24 == 11 )
      {
        if ( *(_BYTE *)(v24 + 32) != 4 )
          return 0;
        v17 = *(int **)(v24 + 40);
        v21 = v18;
        v19 = *v17;
        v20 = (unsigned int *)v17;
      }
      else if ( *(_DWORD *)v18 == 11 )
      {
        if ( *(_BYTE *)(v18 + 32) != 4 )
          return 0;
        v18 = *(_QWORD *)(v18 + 40);
        v21 = v24;
        v20 = (unsigned int *)v18;
      }
      else
      {
        v20 = nullptr;
        v21 = 0;
      }
      if ( v19 == 21 && *(_DWORD *)v18 == 21 )
      {
        v29[1] = 0;
        v29[0] = 0xFFFFFFFF00000000LL;
        v30[0] = 0xFFFFFFFF00000000LL;
        v30[1] = 0;
        v25 = v20;
        if ( v20 )
        {
          v33[0] = 0xFFFFFFFF00000000LL;
          v34[0] = 0xFFFFFFFF00000000LL;
          v35[0] = 0xFFFFFFFF00000000LL;
          v33[1] = 0;
          v34[1] = 0;
          v35[1] = 0;
          v32 = 0;
          sub_1253A0((__int64)v31, v21);
          if ( !(unsigned __int8)sub_1221A0((__int64)v31, a1, 2 * HIDWORD(v33[0]), 272, 1)
            || !sub_125B90((unsigned __int8 *)v31, a1, v25, 0) )
          {
            sub_11CDA0((__int64)v35);
            sub_11CDA0((__int64)v34);
            sub_11CDA0((__int64)v33);
            sub_11CDA0((__int64)v30);
            goto LABEL_27;
          }
          sub_11CA10((char *)v29, (char *)v33);
          sub_11CA10((char *)v30, (char *)v34);
          sub_11CDA0((__int64)v35);
          sub_11CDA0((__int64)v34);
          sub_11CDA0((__int64)v33);
        }
        else
        {
          v22 = (int *)v18;
          v23 = (__int64)v17;
          if ( !(unsigned __int8)sub_A9580((__int64)a2, v27, v17, v28, v18, (__int64)v29, (__int64)v30, 0)
            && !(unsigned __int8)sub_A9580((__int64)a2, v28, v22, v27, v23, (__int64)v29, (__int64)v30, 0) )
          {
            goto LABEL_26;
          }
        }
        sub_11CA10(v10, (char *)v29);
        sub_11CA10(v11, (char *)v30);
        sub_12AB50(a4 + 64, a1, *((_DWORD *)a4 + 9), 1);
        *(_DWORD *)a4 = 13;
        v6 = 1;
LABEL_26:
        sub_11CDA0((__int64)v30);
LABEL_27:
        sub_11CDA0((__int64)v29);
        return v6;
      }
    }
    return 0;
  }
  *(_QWORD *)&v13 = a2;
  *((_QWORD *)&v13 + 1) = a3;
  if ( !(unsigned __int8)sub_132E20(v13, (__int64)v10, a3, (__int64)v11, 8u) )
    goto LABEL_15;
  *(_DWORD *)a4 = 4;
LABEL_12:
  sub_11CDA0((__int64)v11);
  v6 = sub_12AB50(a4 + 64, *(_QWORD *)(a2[30].m128i_i64[0] + 112), *((_DWORD *)a4 + 9), 1);
  if ( !(_BYTE)v6 )
  {
    if ( !under_debugger )
      sub_383060(0xC355u, a5);
    BUG();
  }
  return v6;
}

