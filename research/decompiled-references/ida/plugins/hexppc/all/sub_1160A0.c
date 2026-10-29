__int64 __fastcall sub_1160A0(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v7; // r14
  __int64 v8; // r8
  unsigned int v9; // r15d
  __int64 v10; // r9
  int v11; // r10d
  int v12; // r11d
  int v13; // eax
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // r13
  __int64 v18; // r8
  char v19; // al
  __int64 v20; // [rsp+10h] [rbp-88h]
  unsigned int v21; // [rsp+10h] [rbp-88h]
  __int64 v22; // [rsp+18h] [rbp-80h]
  int v23; // [rsp+18h] [rbp-80h]
  int v24; // [rsp+18h] [rbp-80h]
  int v25; // [rsp+18h] [rbp-80h]
  int v26; // [rsp+18h] [rbp-80h]
  __int64 v27; // [rsp+20h] [rbp-78h]
  int v28; // [rsp+2Ch] [rbp-6Ch]
  int v29; // [rsp+2Ch] [rbp-6Ch]
  int v30; // [rsp+34h] [rbp-64h] BYREF
  __int64 v31; // [rsp+38h] [rbp-60h] BYREF
  _QWORD v32[11]; // [rsp+40h] [rbp-58h] BYREF

  v32[3] = __readfsqword(0x28u);
  if ( a1 )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
    if ( (unsigned __int8)sub_14EBF0(a3, &v30) )
    {
      if ( 8 * *(_DWORD *)(a3 + 36) > v30 )
      {
        v31 = a2;
        v20 = a3 + 32;
        v8 = sub_125A00(a1, a3 + 32, &v31, 0);
        if ( v8 )
        {
          if ( *(_DWORD *)(v8 + 68) >= *(_DWORD *)(a3 + 36) )
          {
            v9 = *(_DWORD *)v8;
            if ( *(_DWORD *)v8 == 11 && *(_BYTE *)(v8 + 32) == 4 )
              v8 = *(_QWORD *)(v8 + 40);
            else
              v9 = 0;
            v32[1] = 0;
            v32[0] = 0xFFFFFFFF00000000LL;
            if ( (unsigned __int64)v30 > 0x3F )
            {
              v27 = 0;
              v10 = -1;
            }
            else
            {
              v27 = 1LL << v30;
              v10 = (1LL << v30) - 1;
            }
            v22 = v8;
            if ( !sub_115F50(v7, (__int64)v32, a1, v31, (int *)v8, v10) )
              goto LABEL_13;
            v11 = *(_DWORD *)(v22 + 68);
            v12 = HIDWORD(v32[0]);
            if ( a4 != 1 && v11 < SHIDWORD(v32[0]) )
              goto LABEL_13;
            v15 = v31;
            if ( v9 )
            {
              v9 = 11;
              if ( a2 != v31 )
                goto LABEL_18;
LABEL_31:
              v9 = 11;
              if ( v11 <= v12 )
              {
                if ( v11 >= v12 )
                {
                  v9 = 11;
                  goto LABEL_23;
                }
                goto LABEL_46;
              }
LABEL_36:
              v13 = 2;
              if ( 8 * v12 < v30 )
                goto LABEL_14;
              v26 = v11;
              sub_11CDA0(v32, v7, 8, *(_QWORD *)(a3 + 24), (unsigned int)v11);
              v11 = v26;
              goto LABEL_23;
            }
            if ( *(_DWORD *)(a3 + 36) == v11 )
            {
              if ( a2 == v31 )
              {
                if ( v11 <= SHIDWORD(v32[0]) )
                {
                  if ( v11 >= SHIDWORD(v32[0]) )
                    goto LABEL_23;
                  goto LABEL_22;
                }
                goto LABEL_36;
              }
            }
            else
            {
              v17 = v22 + 64;
              v18 = v22 + 64;
              v29 = HIDWORD(v32[0]);
              v25 = *(_DWORD *)(v22 + 68);
              v19 = sub_12C7B0(a1, a2, v20, *(_QWORD *)(v31 + 8), v18);
              v15 = v31;
              v11 = v25;
              v12 = v29;
              if ( v19 )
              {
                v9 = 11;
                if ( v31 == a2 )
                  goto LABEL_31;
              }
              else
              {
                if ( !(unsigned __int8)sub_12E780(a1, a2, v20, *(_QWORD *)(v31 + 8), v17) )
                  goto LABEL_13;
                v15 = v31;
                v11 = v25;
                v9 = 10;
                v12 = v29;
                if ( a2 == v31 )
                {
                  if ( v25 <= v29 )
                  {
                    if ( v25 >= v29 )
                      goto LABEL_23;
                    goto LABEL_46;
                  }
                  goto LABEL_36;
                }
              }
            }
LABEL_18:
            v28 = v12;
            v23 = v11;
            if ( (unsigned __int8)sub_152300(a1, v15, v32, v15, a2, 0) )
            {
              v11 = v23;
              v12 = v28;
              if ( v23 <= v28 )
              {
                if ( v23 >= v28 )
                {
LABEL_23:
                  v24 = v11;
                  *(_DWORD *)a3 = 16;
                  sub_118FD0(v20, v32);
                  sub_11CFD0(a3 + 48, v7, v27, (unsigned int)v24, *(_QWORD *)(a3 + 24), 0);
                  if ( *(_DWORD *)(a3 + 68) == v24 )
                  {
LABEL_26:
                    v13 = 1;
                    goto LABEL_14;
                  }
                  if ( *(_DWORD *)(a3 + 68) < v24 )
                  {
                    sub_127CB0(a3, v7, v9, 0xFFFFFFFFLL, 1);
                    v16 = *(_QWORD *)(a3 + 40);
                    *(_DWORD *)(a3 + 36) = v24;
                    *(_DWORD *)(v16 + 68) = v24;
                    goto LABEL_26;
                  }
                  if ( !under_debugger )
                    sub_37EEE0(51796);
LABEL_50:
                  BUG();
                }
                if ( !v9 )
                {
LABEL_22:
                  v11 = v12;
                  v9 = 10;
                  goto LABEL_23;
                }
LABEL_46:
                if ( !under_debugger )
                  sub_37EEE0(52127);
                goto LABEL_50;
              }
              goto LABEL_36;
            }
LABEL_13:
            v13 = 0;
LABEL_14:
            v21 = v13;
            sub_119360(v32);
            return v21;
          }
        }
      }
    }
  }
  return 0;
}

