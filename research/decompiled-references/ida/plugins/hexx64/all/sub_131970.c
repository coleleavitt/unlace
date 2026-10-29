__int64 __fastcall sub_131970(
        const __m128i *a1,
        __int64 a2,
        int *a3,
        __int64 a4,
        unsigned int *a5,
        int a6,
        __m128i a7,
        __m128 a8,
        char a9)
{
  int v9; // r11d
  __int64 v10; // r15
  __int64 v11; // r13
  int *v14; // rbx
  __int64 v15; // r14
  __int64 v16; // rax
  int v17; // edx
  __int64 v18; // rdi
  unsigned int *v19; // r8
  __int64 v20; // rdx
  char v21; // al
  __int64 v22; // rax
  char v24; // al
  unsigned __int64 *v25; // rdi
  int v26; // edx
  unsigned __int64 *v27; // rax
  char v28; // cl
  unsigned __int64 *v29; // rsi
  unsigned int *v30; // r8
  unsigned int *v31; // r8
  unsigned int *v32; // r8
  unsigned __int64 *v33; // rdx
  unsigned int *v35; // [rsp+0h] [rbp-88h]
  char v37; // [rsp+Ch] [rbp-7Ch]
  unsigned __int64 *v38[2]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v39; // [rsp+30h] [rbp-58h]
  __int64 v40; // [rsp+38h] [rbp-50h]
  unsigned __int64 v41; // [rsp+48h] [rbp-40h]

  v9 = a6;
  v10 = a4;
  v11 = a2;
  v14 = a3;
  v15 = a1[30].m128i_i64[0];
  v16 = *a5;
  v41 = __readfsqword(0x28u);
  v17 = *a3;
  v18 = *(_QWORD *)(v15 + 112);
  if ( (_DWORD)v16 == v17 )
  {
    switch ( v16 )
    {
      case 2LL:
        if ( !(unsigned __int8)sub_12EA80(v18, a1, a2, (__int64)(v14 + 8), a4, (__int64)(a5 + 8), a7, a8, 0) )
          return 0;
        if ( (unsigned __int8)sub_12FCD0(v18, v38, a1, v10, (__int64)(a5 + 12), a2, a7, a8, (char *)v14 + 48) )
        {
          v25 = v38[0];
          v26 = v14[17];
          v27 = (unsigned __int64 *)(int)a5[17];
          v28 = *(_BYTE *)(v15 + 145);
          if ( a6 != 1 )
          {
            if ( a6 != 2 )
            {
              v29 = nullptr;
              if ( v28 )
                return v29 == v25;
              goto LABEL_32;
            }
            goto LABEL_79;
          }
          v29 = nullptr;
          if ( !v28 )
            return v29 == v25;
        }
        else
        {
          if ( !(unsigned __int8)sub_12EA80(v18, a1, a2, (__int64)(v14 + 12), v10, (__int64)(a5 + 12), a7, a8, 0) )
            return 0;
          v26 = v14[17];
          v27 = (unsigned __int64 *)(int)a5[17];
          v28 = *(_BYTE *)(v15 + 145);
          if ( a6 == 1 )
          {
            if ( !v28 )
              return 1;
            v25 = nullptr;
          }
          else
          {
            if ( a6 == 2 )
            {
              v25 = nullptr;
LABEL_79:
              v33 = (unsigned __int64 *)-v26;
              if ( !v28 )
                v27 = v33;
              v29 = v27;
              return v29 == v25;
            }
            if ( v28 )
              return 1;
            v25 = nullptr;
          }
        }
LABEL_32:
        v29 = (unsigned __int64 *)((int)v27 - v26);
        return v29 == v25;
      case 4LL:
      case 6LL:
      case 7LL:
        goto LABEL_10;
      case 5LL:
        if ( !a9 )
          return 0;
        goto LABEL_10;
      case 10LL:
        if ( a6 == 1 )
          return sub_12EA80(v18, a1, a2, (__int64)(v14 + 8), a4, (__int64)(a5 + 8), a7, a8, 0);
        if ( a6 != 2 )
        {
          v19 = a5 + 8;
          v20 = (__int64)(v14 + 8);
          goto LABEL_41;
        }
        v19 = a5 + 8;
        v20 = (__int64)(v14 + 8);
        if ( v14[9] == 2 * v14[17] )
          goto LABEL_8;
        return 0;
      case 12LL:
      case 14LL:
        v37 = 1;
        goto LABEL_43;
      case 13LL:
      case 15LL:
      case 16LL:
      case 17LL:
      case 18LL:
        v37 = 0;
LABEL_43:
        if ( a9 )
          goto LABEL_44;
        return 0;
      case 19LL:
      case 20LL:
      case 21LL:
        v37 = 1;
LABEL_44:
        v35 = a5 + 8;
        if ( a6 == 1 )
        {
          if ( (unsigned __int8)sub_1321C0(a1, a2, (__int64)(v14 + 8), a4, (__int64)v35) )
          {
            if ( (unsigned __int8)sub_1321C0(a1, a2, (__int64)(v14 + 12), v10, (__int64)(a5 + 12)) )
              goto LABEL_13;
            v32 = a5 + 12;
            if ( !v37 )
              return 0;
          }
          else
          {
            v32 = a5 + 12;
            if ( !v37 )
              return 0;
          }
          if ( !(unsigned __int8)sub_1321C0(a1, a2, (__int64)(v14 + 8), v10, (__int64)v32) )
            return 0;
          v21 = sub_1321C0(a1, a2, (__int64)(v14 + 12), v10, (__int64)v35);
        }
        else
        {
          if ( a6 != 2 )
          {
            if ( (unsigned __int8)sub_1301F0(a1, a2, (__int64)(v14 + 8), a4, (__int64)(a5 + 8), a7, a8) )
            {
              if ( (unsigned __int8)sub_1301F0(a1, a2, (__int64)(v14 + 12), v10, (__int64)(a5 + 12), a7, a8) )
                goto LABEL_13;
              v30 = a5 + 12;
              if ( !v37 )
                return 0;
            }
            else
            {
              v30 = a5 + 12;
              if ( !v37 )
                return 0;
            }
            if ( !(unsigned __int8)sub_1301F0(a1, a2, (__int64)(v14 + 8), v10, (__int64)v30, a7, a8) )
              return 0;
            v21 = sub_1301F0(a1, a2, (__int64)(v14 + 12), v10, (__int64)v35, a7, a8);
            goto LABEL_12;
          }
          if ( (unsigned __int8)sub_130BC0(a1, a2, (__int64)(v14 + 8), a4, (__int64)v35, 1, a7, a8) )
          {
            if ( (unsigned __int8)sub_130BC0(a1, a2, (__int64)(v14 + 12), v10, (__int64)(a5 + 12), 1, a7, a8) )
              goto LABEL_13;
            if ( !v37 )
              return 0;
            v31 = a5 + 12;
          }
          else
          {
            v31 = a5 + 12;
            if ( !v37 )
              return 0;
          }
          if ( !(unsigned __int8)sub_130BC0(a1, a2, (__int64)(v14 + 8), v10, (__int64)v31, 1, a7, a8) )
            return 0;
          v21 = sub_130BC0(a1, a2, (__int64)(v14 + 12), v10, (__int64)v35, 1, a7, a8);
        }
        goto LABEL_12;
      case 22LL:
      case 23LL:
      case 24LL:
        if ( !a9 )
          return 0;
        v24 = sub_12EA80(v18, a1, a2, (__int64)(v14 + 12), a4, (__int64)(a5 + 12), a7, a8, 0);
        v9 = a6;
        if ( !v24 )
          return 0;
LABEL_10:
        v19 = a5 + 8;
        v20 = (__int64)(v14 + 8);
        if ( v9 != 1 )
          goto LABEL_7;
        v21 = sub_1321C0(a1, a2, v20, v10, (__int64)v19);
        goto LABEL_12;
      case 63LL:
      case 64LL:
        goto LABEL_4;
      default:
        return 0;
    }
  }
  if ( (_DWORD)v16 != 63 || v17 != 64 )
    return 0;
LABEL_4:
  if ( !a9 )
    return 0;
  if ( a6 != 1 )
  {
    v19 = a5 + 8;
    v20 = (__int64)(v14 + 8);
LABEL_7:
    if ( v9 == 2 )
LABEL_8:
      v21 = sub_130BC0(a1, a2, v20, v10, (__int64)v19, 1, a7, a8);
    else
LABEL_41:
      v21 = sub_1301F0(a1, a2, v20, v10, (__int64)v19, a7, a8);
LABEL_12:
    if ( v21 )
    {
LABEL_13:
      if ( a2 != v10 )
      {
        if ( v10 )
        {
          v22 = *(_QWORD *)(v10 + 8);
          if ( v22 )
          {
            while ( a2 != v22 )
            {
              v22 = *(_QWORD *)(v22 + 8);
              if ( !v22 )
                goto LABEL_18;
            }
            v11 = v10;
            v14 = (int *)a5;
            v10 = v22;
          }
        }
LABEL_18:
        sub_124680((__int64)v38, (__int64)a1, (__int64)v14, 1, *(double *)a7.m128i_i64, a8);
        if ( sub_A9AA0((__int64)a1, v38, *(_QWORD *)(v11 + 8), v10, 1u) )
        {
          if ( v39 )
          {
            v40 = 0;
            qfree(v39);
          }
          qfree((__int64)v38[0]);
          return 0;
        }
        if ( v39 )
        {
          v40 = 0;
          qfree(v39);
        }
        qfree((__int64)v38[0]);
      }
      return 1;
    }
    return 0;
  }
  return sub_12EA80(v18, a1, a2, (__int64)(v14 + 8), a4, (__int64)(a5 + 8), a7, a8, 0);
}

