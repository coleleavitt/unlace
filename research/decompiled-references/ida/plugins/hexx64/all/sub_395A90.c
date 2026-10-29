__int64 __fastcall sub_395A90(
        __int64 a1,
        __int64 a2,
        double a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __m128i a8,
        double a9)
{
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  _QWORD *v12; // rbp
  __int64 func; // rax
  __int64 *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rax
  double v19; // xmm0_8
  __int64 *v20; // rdx
  __int64 v21; // [rsp+8h] [rbp-50h] BYREF
  __int64 v22; // [rsp+10h] [rbp-48h] BYREF
  int v23; // [rsp+18h] [rbp-40h] BYREF
  __int64 v24; // [rsp+20h] [rbp-38h]
  __int64 v25; // [rsp+28h] [rbp-30h]
  __int64 v26; // [rsp+30h] [rbp-28h]
  unsigned __int64 v27; // [rsp+38h] [rbp-20h]

  v9 = *(_QWORD *)(a1 + 24);
  v10 = *(_QWORD *)(a1 + 128);
  v27 = __readfsqword(0x28u);
  *(_QWORD *)(v10 + 1344) = v9;
  v11 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(v10 + 1352) = v11;
  if ( !(_DWORD)a2 )
  {
    v12 = *(_QWORD **)(a1 + 24);
    if ( !v12 || (*(_BYTE *)a1 & 1) == 0 )
      return v27 - __readfsqword(0x28u);
    if ( v12[1] )
    {
      func = get_func();
      v11 = 0xFFFFFFFFLL;
      v12[1] = func;
      v12 = *(_QWORD **)(a1 + 24);
      v22 = 0xFFFFFFFFLL;
      v15 = (__int64 *)v12[1];
      v23 = 0;
      v26 = -1;
      if ( v15 )
      {
        v16 = *v15;
        v24 = v16;
LABEL_11:
        v25 = v16;
        v17 = *(_QWORD *)(a1 + 8);
        if ( v17 )
        {
          v19 = ((double (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(
                  56,
                  v17,
                  0,
                  (char *)&v22 + 4,
                  &v23,
                  callui);
          if ( v18 )
            LODWORD(v22) = *(_DWORD *)(v18 + 12);
        }
        else
        {
          v19 = ((double (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(
                  11,
                  &v21,
                  v11,
                  a5,
                  a6,
                  callui);
          if ( v21 != -1 )
            v24 = v21;
        }
        sub_3948E0((__int64)&v22, 6, a1, 0, v19, a7, a8, a9);
        return v27 - __readfsqword(0x28u);
      }
    }
    else
    {
      v23 = 0;
      v26 = -1;
      v22 = 0xFFFFFFFFLL;
    }
    if ( v12[3] )
    {
      v20 = (__int64 *)v12[2];
      v16 = *v20;
      v11 = v20[1];
      v24 = v16;
      v26 = v11;
    }
    else
    {
      v24 = -1;
      v16 = -1;
    }
    goto LABEL_11;
  }
  if ( (_DWORD)a2 == 1 )
    return sub_3901D0(a1, a2, v11, a5);
  if ( (_DWORD)a2 != 2 )
  {
    if ( !under_debugger )
      sub_383060(0xCDC3u, a3);
    BUG();
  }
  return sub_38F620(a1, 0);
}

