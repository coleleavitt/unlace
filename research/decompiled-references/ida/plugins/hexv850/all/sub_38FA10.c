__int64 __fastcall sub_38FA10(__int64 a1, int a2, double a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rbp
  __int64 func; // rax
  __int64 *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 *v16; // rdx
  __int64 v17; // [rsp+8h] [rbp-50h] BYREF
  __int64 v18; // [rsp+10h] [rbp-48h] BYREF
  int v19; // [rsp+18h] [rbp-40h] BYREF
  __int64 v20; // [rsp+20h] [rbp-38h]
  __int64 v21; // [rsp+28h] [rbp-30h]
  __int64 v22; // [rsp+30h] [rbp-28h]
  unsigned __int64 v23; // [rsp+38h] [rbp-20h]

  v6 = *(_QWORD *)(a1 + 24);
  v7 = *(_QWORD *)(a1 + 128);
  v23 = __readfsqword(0x28u);
  *(_QWORD *)(v7 + 1344) = v6;
  v8 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(v7 + 1352) = v8;
  if ( !a2 )
  {
    v9 = *(_QWORD **)(a1 + 24);
    if ( !v9 || (*(_BYTE *)a1 & 1) == 0 )
      return v23 - __readfsqword(0x28u);
    if ( v9[1] )
    {
      func = get_func();
      v8 = 0xFFFFFFFFLL;
      v9[1] = func;
      v9 = *(_QWORD **)(a1 + 24);
      v18 = 0xFFFFFFFFLL;
      v12 = (__int64 *)v9[1];
      v19 = 0;
      v22 = -1;
      if ( v12 )
      {
        v13 = *v12;
        v20 = v13;
LABEL_11:
        v21 = v13;
        v14 = *(_QWORD *)(a1 + 8);
        if ( v14 )
        {
          v15 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(
                  56,
                  v14,
                  0,
                  (char *)&v18 + 4,
                  &v19,
                  callui);
          if ( v15 )
            LODWORD(v18) = *(_DWORD *)(v15 + 12);
        }
        else
        {
          ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(11, &v17, v8, a5, a6, callui);
          if ( v17 != -1 )
            v20 = v17;
        }
        sub_38E860((__int64)&v18, 6u, a1, 0);
        return v23 - __readfsqword(0x28u);
      }
    }
    else
    {
      v19 = 0;
      v22 = -1;
      v18 = 0xFFFFFFFFLL;
    }
    if ( v9[3] )
    {
      v16 = (__int64 *)v9[2];
      v13 = *v16;
      v8 = v16[1];
      v20 = v13;
      v22 = v8;
    }
    else
    {
      v20 = -1;
      v13 = -1;
    }
    goto LABEL_11;
  }
  if ( a2 == 1 )
    return sub_38A150(a1);
  if ( a2 != 2 )
  {
    if ( !under_debugger )
      sub_37CFE0(0xCDC3u, a3);
    BUG();
  }
  return sub_3895A0(a1, 0, v8);
}

