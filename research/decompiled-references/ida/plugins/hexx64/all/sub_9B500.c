__int64 __fastcall sub_9B500(__int128 a1)
{
  __int128 v1; // kr00_16
  _DWORD *v2; // rax
  _DWORD *v3; // rbx
  int v5; // r9d
  unsigned __int8 *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // r15
  unsigned __int8 v9; // al
  __int64 v10; // rax
  unsigned __int8 *v11; // r9
  signed int v12; // edx
  __int64 v13; // r11
  unsigned __int8 v14; // al
  unsigned __int8 v15; // al
  __int128 v16; // rdi
  __int64 v17; // [rsp-10h] [rbp-110h]
  __int64 v18; // [rsp-8h] [rbp-108h]
  unsigned __int64 *v19; // [rsp+0h] [rbp-100h]
  unsigned int v20; // [rsp+8h] [rbp-F8h]
  unsigned __int8 *v21; // [rsp+10h] [rbp-F0h]
  int v22; // [rsp+20h] [rbp-E0h]
  unsigned __int8 v23; // [rsp+28h] [rbp-D8h]
  unsigned __int8 v24; // [rsp+28h] [rbp-D8h]
  unsigned __int8 v25; // [rsp+28h] [rbp-D8h]
  int v26; // [rsp+30h] [rbp-D0h] BYREF
  int v27; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v28; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v29; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int8 *v30; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v31[2]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int8 v32[16]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v33[4]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v34[2]; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v35; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v36; // [rsp+A8h] [rbp-58h]
  __int64 v37; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v38; // [rsp+C8h] [rbp-38h]

  v1 = a1;
  v38 = __readfsqword(0x28u);
  v2 = (_DWORD *)sub_11C8E0(*((__int64 *)&a1 + 1), &v28, 0);
  if ( !v2 )
    return 0;
  v3 = v2;
  if ( *v2 != 23 )
    return 0;
  if ( !(unsigned __int8)sub_152630((__int64)v2, &v26) )
    return 0;
  *((_QWORD *)&a1 + 1) = v28;
  v29 = *((_QWORD *)&v1 + 1);
  *(_QWORD *)&a1 = sub_129440(a1, (__int64)&v29, 0);
  if ( !(_QWORD)a1 )
    return 0;
  if ( !(unsigned __int8)sub_1227B0((int *)a1, &v27, &v30, 1) )
    return 0;
  v5 = 8 * *(_DWORD *)(v28 + 4) - v27;
  if ( v5 != v26 )
    return 0;
  v6 = (unsigned __int8 *)(v3 + 8);
  v30 = (unsigned __int8 *)sub_96A30((const __m128i *)v1, &v29, v30, *((__int64 *)&v1 + 1), (__int64)v6, v5);
  if ( !v30 )
    return 0;
  v33[1] = v1;
  v34[0] = 0xFFFFFFFF00000000LL;
  v35 = 0xFFFFFFFF00000000LL;
  v33[0] = &off_4DBDF0;
  v33[2] = 0;
  v33[3] = 0;
  v34[1] = 0;
  v37 = 0xFFFFFFFFLL;
  v36 = 0;
  v7 = sub_954F0((__int64)v33, *((__int64 *)&v1 + 1), 1);
  v8 = v7;
  if ( v7 )
  {
    if ( (unsigned int)(*(_DWORD *)v7 - 23) <= 1 )
    {
      v21 = (unsigned __int8 *)(v7 + 48);
      v22 = v26;
      if ( (unsigned __int8)sub_11FD80((char *)(v7 + 48), v32, 1u) )
      {
        if ( v22 == *(_QWORD *)v32 )
        {
          v10 = *(_QWORD *)(v1 + 480);
          v11 = v30;
          v31[1] = 0;
          v12 = *(_DWORD *)(v8 + 36);
          v13 = *(_QWORD *)(v10 + 112);
          v31[0] = 0xFFFFFFFF00000000LL;
          if ( v12 > *((_DWORD *)v30 + 1) )
          {
            v19 = (unsigned __int64 *)v13;
            v20 = v12;
            sub_125180((__int64)v31, v30);
            if ( sub_131780((__int64)v31, v19, v20, 0, 0) )
            {
              v13 = (__int64)v19;
              v30 = (unsigned __int8 *)v31;
              v11 = (unsigned __int8 *)v31;
              goto LABEL_17;
            }
            v30 = nullptr;
          }
          else if ( v30 )
          {
LABEL_17:
            v14 = sub_12EA80(v13, (const __m128i *)v1, v8, v8 + 32, v29, (__int64)v11, 0);
            if ( v14 )
            {
              sub_123A40((__int64)v32, v6, v17, v18);
              v15 = sub_132E20(v1, (__int64)v32, v29, (__int64)v30, 0);
              if ( v15 )
              {
                *((_QWORD *)&v16 + 1) = v33;
                *(_QWORD *)&v16 = v1;
                v15 = sub_9AD50(v16, v8, *((__int64 *)&v1 + 1), v32, v21);
              }
              v24 = v15;
              sub_11CDA0((__int64)v32);
              v14 = v24;
            }
            v25 = v14;
            sub_11CDA0((__int64)v31);
            v9 = v25;
            goto LABEL_12;
          }
          if ( !under_debugger )
            sub_383060(0xCAA8u, 0.0);
          BUG();
        }
      }
    }
  }
  v9 = 0;
LABEL_12:
  v23 = v9;
  v33[0] = &off_4DBDF0;
  sub_11CDA0((__int64)&v35);
  sub_11CDA0((__int64)v34);
  return v23;
}

