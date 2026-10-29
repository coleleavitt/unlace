__int64 __fastcall sub_3F58B0(__int64 a1, const __m128i *a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rsi
  unsigned __int8 v7; // al
  __int128 v8; // rdi
  _DWORD *v9; // rax
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // rax
  _BYTE *v13; // r9
  __int128 v14; // rdi
  __int64 v15; // rax
  int v16; // esi
  __int64 v17; // r15
  unsigned __int8 v18; // al
  __int128 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rdx
  char v22; // al
  int v23; // r9d
  unsigned __int8 v24; // [rsp+Fh] [rbp-D1h]
  __int64 v25; // [rsp+10h] [rbp-D0h]
  __int64 v26; // [rsp+10h] [rbp-D0h]
  _BYTE *v27; // [rsp+10h] [rbp-D0h]
  unsigned __int8 *v28; // [rsp+20h] [rbp-C0h]
  unsigned __int8 v30; // [rsp+28h] [rbp-B8h]
  unsigned __int8 v31; // [rsp+28h] [rbp-B8h]
  _DWORD *v32; // [rsp+38h] [rbp-A8h] BYREF
  char v33[8]; // [rsp+40h] [rbp-A0h] BYREF
  _BYTE *v34; // [rsp+48h] [rbp-98h]
  __int64 v35[2]; // [rsp+50h] [rbp-90h] BYREF
  __int64 v36; // [rsp+60h] [rbp-80h] BYREF
  __int128 v37; // [rsp+68h] [rbp-78h]
  __int64 v38[2]; // [rsp+80h] [rbp-60h] BYREF
  __int64 *v39; // [rsp+90h] [rbp-50h] BYREF
  __int128 v40; // [rsp+98h] [rbp-48h]
  unsigned __int64 v41; // [rsp+A8h] [rbp-38h]

  v41 = __readfsqword(0x28u);
  result = 0;
  if ( *(_BYTE *)(a3 + 32) == 4 )
  {
    v4 = *(_QWORD *)(a3 + 40);
    if ( *(_DWORD *)v4 == 10 && *(_DWORD *)(a3 + 36) == *(unsigned __int8 *)(a2[30].m128i_i64[0] + 130) )
    {
      sub_120000((__int64)v33, (unsigned __int8 *)(v4 + 32));
      if ( v33[0] == 4 )
      {
        v28 = (unsigned __int8 *)(a3 + 64);
        sub_120000((__int64)v38, (unsigned __int8 *)(a3 + 64));
        sub_1292D0((__int16 *)v38, a1, 1);
        v32 = *(_DWORD **)(a3 + 8);
        if ( v32
          && (*(_QWORD *)&v8 = a2,
              *((_QWORD *)&v8 + 1) = v38,
              v9 = (_DWORD *)sub_126B80(v8, (__int64 *)&v32, 0, 3),
              (v10 = (__int64)v9) != 0)
          && v32 == v9
          && *v9 == 12 )
        {
          sub_119360((__int64)v38);
          if ( *(_BYTE *)(v10 + 32) != 4 )
            goto LABEL_6;
          v11 = *(_QWORD *)(v10 + 40);
          if ( *(_DWORD *)v11 != 7 )
            goto LABEL_6;
          if ( *(_BYTE *)(v11 + 32) == 4 )
          {
            v12 = *(_QWORD *)(v11 + 40);
            if ( *(_DWORD *)v12 != 11 )
              goto LABEL_6;
            if ( *(_BYTE *)(v12 + 32) != 4 )
              goto LABEL_6;
            v13 = *(_BYTE **)(v12 + 40);
            if ( !v13 )
              goto LABEL_6;
          }
          else
          {
            *(_QWORD *)&v19 = a2;
            *((_QWORD *)&v19 + 1) = v11 + 32;
            v32 = (_DWORD *)v10;
            v26 = v11 + 32;
            v20 = sub_125A00(v19, (__int64)&v32, 0);
            if ( !v20 )
              goto LABEL_6;
            if ( v32 != (_DWORD *)v20 )
              goto LABEL_6;
            v21 = v26;
            v27 = (_BYTE *)v20;
            v22 = sub_12C7B0(a2, v10, v21, v20, v20 + 64);
            v13 = v27;
            if ( !v22 )
              goto LABEL_6;
          }
          if ( sub_12CBE0(a1, a2, a3, v34, (__int64)v13, v13, 0) && *(_BYTE *)(v10 + 48) == 1 )
          {
            *(_QWORD *)&v14 = a2;
            *((_QWORD *)&v14 + 1) = v10 + 48;
            v32 = (_DWORD *)v10;
            v15 = sub_125A00(v14, (__int64)&v32, 0);
            v25 = v15;
            if ( v15 )
            {
              if ( *(_DWORD *)v15 == 9 && *(_BYTE *)(v15 + 32) == 1 )
              {
                v16 = *(_DWORD *)(a1 + 488);
                if ( v16 == *(_DWORD *)(v15 + 40) )
                {
                  v35[0] = 0;
                  v35[1] = 0;
                  v36 = 0;
                  v38[0] = 0;
                  v38[1] = 0;
                  v37 = 0;
                  sub_60440(v38, v16, 1);
                  v39 = nullptr;
                  v40 = 0;
                  sub_60840(v35, v38);
                  sub_312B30(&v36, &v39);
                  if ( v39 )
                  {
                    *(_QWORD *)&v40 = 0;
                    qfree();
                  }
                  qfree();
                  v17 = sub_125710((__int64)a2, v35, v25, 0, nullptr, 0, 0x101u);
                  if ( v17
                    && *(_DWORD *)v17 == 33
                    && sub_122120((unsigned __int8 *)(v17 + 32), a3 + 32, 0)
                    && (unsigned __int8)sub_11C340((char *)(v17 + 48), v38, 0)
                    && !v38[0]
                    && (v24 = sub_1294F0(a2[4].m128i_i64[0], (__int64)v28, v10 + 64, 0, 0, v23)) != 0 )
                  {
                    sub_120000((__int64)v38, v28);
                    sub_1537B0((__int64)a2, *(_QWORD *)(a3 + 8), (__int64)v38, *(_QWORD *)(v10 + 8), v10 + 64, 1);
                    sub_118FD0((char *)(a3 + 32), v33);
                    sub_118FD0((char *)v28, (char *)v38);
                    sub_119B60(v10);
                    sub_119360((__int64)v38);
                    v18 = v24;
                  }
                  else
                  {
                    v18 = 0;
                  }
                  v31 = v18;
                  sub_90100((__int64)v35);
                  v7 = v31;
                  goto LABEL_7;
                }
              }
            }
          }
        }
        else
        {
          sub_119360((__int64)v38);
        }
      }
LABEL_6:
      v7 = 0;
LABEL_7:
      v30 = v7;
      sub_119360((__int64)v33);
      return v30;
    }
  }
  return result;
}

