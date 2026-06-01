__int64 __fastcall sub_9AF40(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rax
  _DWORD *v4; // rbx
  __int64 v6; // rdi
  int v7; // r9d
  __int64 v8; // rbx
  _DWORD *v9; // rax
  __int64 v10; // r15
  unsigned __int8 v11; // al
  __int64 v12; // rax
  unsigned int v13; // r9d
  int v14; // edx
  __int64 v15; // r11
  unsigned __int8 v16; // al
  unsigned __int8 v17; // al
  __int64 v18; // [rsp+0h] [rbp-100h]
  unsigned int v19; // [rsp+8h] [rbp-F8h]
  int v20; // [rsp+20h] [rbp-E0h]
  unsigned __int8 v21; // [rsp+28h] [rbp-D8h]
  unsigned __int8 v22; // [rsp+28h] [rbp-D8h]
  unsigned __int8 v23; // [rsp+28h] [rbp-D8h]
  int v24; // [rsp+30h] [rbp-D0h] BYREF
  int v25; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v26; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v27; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD *v28; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v29[2]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v30[2]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v31[4]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v32[2]; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v33; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v34; // [rsp+A8h] [rbp-58h]
  __int64 v35; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v36; // [rsp+C8h] [rbp-38h]

  v36 = __readfsqword(0x28u);
  v3 = (_DWORD *)sub_11C320(a2, &v26, 0);
  if ( !v3 )
    return 0;
  v4 = v3;
  if ( *v3 != 23 )
    return 0;
  if ( !(unsigned __int8)sub_152070(v3, &v24) )
    return 0;
  v27 = a2;
  v6 = sub_128E80(a1, v26, &v27, 0);
  if ( !v6 )
    return 0;
  if ( !(unsigned __int8)sub_1221F0(v6, &v25, &v28, 1) )
    return 0;
  v7 = 8 * *(_DWORD *)(v26 + 4) - v25;
  if ( v7 != v24 )
    return 0;
  v8 = (__int64)(v4 + 8);
  v28 = sub_96470(a1, &v27, v28, a2, v8, v7);
  if ( !v28 )
    return 0;
  v31[1] = a1;
  v32[0] = 0xFFFFFFFF00000000LL;
  v33 = 0xFFFFFFFF00000000LL;
  v31[0] = &off_4D64B0;
  v31[2] = 0;
  v31[3] = 0;
  v32[1] = 0;
  v35 = 0xFFFFFFFFLL;
  v34 = 0;
  v9 = (_DWORD *)sub_94F30((__int64)v31, a2, 1u);
  v10 = (__int64)v9;
  if ( v9 )
  {
    if ( (unsigned int)(*v9 - 23) <= 1 )
    {
      v20 = v24;
      if ( (unsigned __int8)sub_11F7C0(v9 + 12, v30, 1) )
      {
        if ( v20 == v30[0] )
        {
          v12 = *(_QWORD *)(a1 + 480);
          v13 = (unsigned int)v28;
          v29[1] = 0;
          v14 = *(_DWORD *)(v10 + 36);
          v15 = *(_QWORD *)(v12 + 112);
          v29[0] = 0xFFFFFFFF00000000LL;
          if ( v14 > v28[1] )
          {
            v18 = v15;
            v19 = v14;
            sub_124BC0(v29);
            if ( (unsigned __int8)sub_1311C0(v29, v18, v19, 0, 0) )
            {
              LODWORD(v15) = v18;
              v28 = v29;
              v13 = (unsigned int)v29;
              goto LABEL_17;
            }
            v28 = nullptr;
          }
          else if ( v28 )
          {
LABEL_17:
            v16 = sub_12E4C0(v15, a1, v10, (int)v10 + 32, v27, v13, 0);
            if ( v16 )
            {
              sub_123480(v30, v8);
              v17 = sub_132860(a1, a2, (unsigned int)v30, v27, (_DWORD)v28, 0);
              if ( v17 )
                v17 = sub_9A790(a1, (__int64)v31, v10, a2);
              v22 = v17;
              sub_11C7E0(v30);
              v16 = v22;
            }
            v23 = v16;
            sub_11C7E0(v29);
            v11 = v23;
            goto LABEL_12;
          }
          if ( !under_debugger )
            sub_3835A0(51880);
          BUG();
        }
      }
    }
  }
  v11 = 0;
LABEL_12:
  v21 = v11;
  v31[0] = &off_4D64B0;
  sub_11C7E0(&v33);
  sub_11C7E0(v32);
  return v21;
}

