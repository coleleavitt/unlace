__int64 __fastcall sub_A9580(__int128 a1, unsigned __int8 *a2, __int64 a3, __int64 a4, __int64 a5, char *a6, char a7)
{
  unsigned int v8; // r15d
  char *v10; // r15
  char v13; // al
  __int64 v14; // r10
  char v15; // al
  __int64 v16; // r10
  char v17; // al
  __int64 v18; // r10
  char *v19; // rax
  char v20; // al
  char v21; // al
  char v22; // al
  char v23; // al
  char *v24; // rax
  char v25; // al
  char v26; // al
  char *v27; // rax
  unsigned __int8 *v28; // [rsp+8h] [rbp-70h]
  char *v29; // [rsp+10h] [rbp-68h]
  __int64 v30; // [rsp+18h] [rbp-60h]
  __int64 v32; // [rsp+20h] [rbp-58h]
  int v33; // [rsp+20h] [rbp-58h]
  int v34; // [rsp+20h] [rbp-58h]
  __int64 v35; // [rsp+30h] [rbp-48h]
  __int64 v36; // [rsp+30h] [rbp-48h]
  __int64 v37; // [rsp+30h] [rbp-48h]
  char *v38; // [rsp+38h] [rbp-40h]
  char *v39; // [rsp+38h] [rbp-40h]

  if ( *(_DWORD *)a4 != *(_DWORD *)a2 )
    return 0;
  v10 = (char *)(a4 + 32);
  v30 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
  v29 = (char *)(a4 + 48);
  switch ( *(_DWORD *)a2 )
  {
    case 5:
    case 7:
    case 0x16:
      v34 = *(_DWORD *)a2;
      v28 = a2 + 32;
      if ( !(unsigned __int8)sub_130BC0((const __m128i *)a1, *((__int64 *)&a1 + 1), (__int64)(a2 + 32), a3, a4 + 32, 1)
        || v34 == 22 && !sub_125B60(a2 + 48, (__int64)v29, 0) )
      {
        return 0;
      }
      goto LABEL_26;
    case 0xC:
    case 0xD:
    case 0xE:
      if ( !(unsigned __int8)sub_130BC0(
                               (const __m128i *)a1,
                               *((__int64 *)&a1 + 1),
                               (__int64)(a2 + 48),
                               a3,
                               (__int64)v29,
                               1) )
        return 0;
      v28 = a2 + 32;
      v33 = 1;
      if ( !(unsigned __int8)sub_130BC0(
                               (const __m128i *)a1,
                               *((__int64 *)&a1 + 1),
                               (__int64)(a2 + 32),
                               a3,
                               (__int64)v10,
                               1) )
        return 0;
      goto LABEL_19;
    case 0x13:
    case 0x14:
    case 0x15:
      v28 = a2 + 32;
      v13 = sub_130BC0((const __m128i *)a1, *((__int64 *)&a1 + 1), (__int64)(a2 + 32), a3, a4 + 32, 1);
      v14 = a4;
      if ( v13 )
      {
        v33 = 1;
      }
      else
      {
        if ( *(_BYTE *)(a4 + 32) != 4 )
          goto LABEL_7;
        v21 = sub_30D8F0(
                *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL),
                a1,
                a3,
                *(_DWORD **)(a4 + 40),
                *((__int64 *)&a1 + 1),
                (__int64)v28);
        v14 = a4;
        if ( !v21 )
          goto LABEL_7;
        v33 = 2;
      }
      v36 = v14;
      v39 = (char *)(a2 + 48);
      if ( (unsigned __int8)sub_130BC0(
                              (const __m128i *)a1,
                              *((__int64 *)&a1 + 1),
                              (__int64)(a2 + 48),
                              a3,
                              (__int64)v29,
                              1) )
        goto LABEL_26;
      v14 = v36;
      if ( (a7 & 2) != 0 )
      {
        v22 = sub_11FD80(v39, nullptr, 1u);
        v14 = v36;
        if ( v22 )
        {
          v23 = sub_11FD80(v29, nullptr, 1u);
          v14 = v36;
          if ( v23 )
          {
LABEL_43:
            v33 = 3;
            goto LABEL_19;
          }
        }
      }
      if ( v33 != 2
        || *(_BYTE *)(v14 + 48) != 4
        || (v37 = v14,
            v20 = sub_30D8F0(
                    *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL),
                    a1,
                    a3,
                    *(_DWORD **)(v14 + 56),
                    *((__int64 *)&a1 + 1),
                    (__int64)v39),
            v14 = v37,
            !v20) )
      {
LABEL_7:
        v32 = v14;
        v15 = sub_130BC0((const __m128i *)a1, *((__int64 *)&a1 + 1), (__int64)v28, a3, (__int64)v29, 1);
        v16 = v32;
        if ( v15 )
        {
          v33 = 1;
        }
        else
        {
          if ( *(_BYTE *)(v32 + 48) != 4 )
            return 0;
          v17 = sub_30D8F0(
                  *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL),
                  a1,
                  a3,
                  *(_DWORD **)(v32 + 56),
                  *((__int64 *)&a1 + 1),
                  (__int64)v28);
          v16 = v32;
          if ( !v17 )
            return 0;
          v33 = 2;
        }
        v35 = v16;
        v38 = (char *)(a2 + 48);
        if ( !(unsigned __int8)sub_130BC0(
                                 (const __m128i *)a1,
                                 *((__int64 *)&a1 + 1),
                                 (__int64)(a2 + 48),
                                 a3,
                                 (__int64)v10,
                                 1) )
        {
          v18 = v35;
          if ( (a7 & 2) == 0
            || (v25 = sub_11FD80(v38, nullptr, 1u), v18 = v35, !v25)
            || (v26 = sub_11FD80(v10, nullptr, 1u), v18 = v35, !v26) )
          {
            if ( v33 != 2
              || *(_BYTE *)(v18 + 32) != 4
              || !sub_30D8F0(
                    *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL),
                    a1,
                    a3,
                    *(_DWORD **)(v18 + 40),
                    *((__int64 *)&a1 + 1),
                    (__int64)v38) )
            {
              return 0;
            }
            v19 = v10;
            v10 = v29;
            v29 = v19;
            goto LABEL_19;
          }
          v27 = v10;
          v10 = v29;
          v29 = v27;
          goto LABEL_43;
        }
        v24 = v10;
        v10 = v29;
        v29 = v24;
LABEL_26:
        v33 = 1;
      }
LABEL_19:
      sub_125180(a5, v28);
      v8 = sub_132E20(a1, a5, a3, (__int64)v10, 4u);
      if ( !(_BYTE)v8 )
        return 0;
      if ( a2[48] )
      {
        sub_125180((__int64)a6, a2 + 48);
        if ( v33 == 2 )
        {
          sub_1207E0(a6, v30, 8, *(_QWORD *)(*((_QWORD *)&a1 + 1) + 24LL), *(_DWORD *)(a5 + 4));
        }
        else
        {
          if ( v33 != 3 )
            return sub_132E20(a1, (__int64)a6, a3, (__int64)v29, 4u);
          sub_1571F0(a1, *((__int64 *)&a1 + 1), (__int64)a6, a3, (__int64)v29, 0);
        }
      }
      return v8;
    default:
      return 0;
  }
}

