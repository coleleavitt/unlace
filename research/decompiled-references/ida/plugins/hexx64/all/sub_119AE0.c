__int64 __fastcall sub_119AE0(__int128 a1, __int64 a2, char a3, double a4)
{
  __int64 v4; // r12
  __int64 v7; // r14
  __int64 v8; // r8
  int v9; // r15d
  __int64 v10; // r9
  int v11; // r10d
  int v12; // r11d
  int v13; // eax
  __int64 v15; // rax
  __int64 v16; // r13
  __int64 v17; // r8
  char v18; // al
  char *v19; // [rsp+10h] [rbp-88h]
  unsigned int v20; // [rsp+10h] [rbp-88h]
  __int64 v21; // [rsp+18h] [rbp-80h]
  int v22; // [rsp+18h] [rbp-80h]
  int v23; // [rsp+18h] [rbp-80h]
  int v24; // [rsp+18h] [rbp-80h]
  int v25; // [rsp+18h] [rbp-80h]
  __int64 v26; // [rsp+20h] [rbp-78h]
  int v27; // [rsp+2Ch] [rbp-6Ch]
  int v28; // [rsp+2Ch] [rbp-6Ch]
  int v29; // [rsp+34h] [rbp-64h] BYREF
  __int64 v30; // [rsp+38h] [rbp-60h] BYREF
  _QWORD v31[11]; // [rsp+40h] [rbp-58h] BYREF

  v31[3] = __readfsqword(0x28u);
  if ( (_QWORD)a1 )
  {
    v4 = *((_QWORD *)&a1 + 1);
    v7 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
    if ( (unsigned __int8)sub_152630(a2, &v29) )
    {
      if ( 8 * *(_DWORD *)(a2 + 36) > v29 )
      {
        *((_QWORD *)&a1 + 1) = a2 + 32;
        v30 = v4;
        v19 = (char *)(a2 + 32);
        v8 = sub_129440(a1, (__int64)&v30, 0);
        if ( v8 )
        {
          if ( *(_DWORD *)(v8 + 68) >= *(_DWORD *)(a2 + 36) )
          {
            v9 = *(_DWORD *)v8;
            if ( *(_DWORD *)v8 == 11 && *(_BYTE *)(v8 + 32) == 4 )
              v8 = *(_QWORD *)(v8 + 40);
            else
              v9 = 0;
            v31[1] = 0;
            v31[0] = 0xFFFFFFFF00000000LL;
            if ( (unsigned __int64)v29 > 0x3F )
            {
              v26 = 0;
              v10 = -1;
            }
            else
            {
              v26 = 1LL << v29;
              v10 = (1LL << v29) - 1;
            }
            v21 = v8;
            if ( !sub_119990(v7, (unsigned __int64)v31, (const __m128i *)a1, v30, (int *)v8, v10) )
              goto LABEL_13;
            v11 = *(_DWORD *)(v21 + 68);
            v12 = HIDWORD(v31[0]);
            if ( a3 != 1 && v11 < SHIDWORD(v31[0]) )
              goto LABEL_13;
            *((_QWORD *)&a1 + 1) = v30;
            if ( v9 )
            {
              v9 = 11;
              if ( v4 != v30 )
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
              if ( 8 * v12 < v29 )
                goto LABEL_14;
              v25 = v11;
              sub_1207E0((char *)v31, v7, 8, *(_QWORD *)(a2 + 24), v11);
              v11 = v25;
              goto LABEL_23;
            }
            if ( *(_DWORD *)(a2 + 36) == v11 )
            {
              if ( v4 == v30 )
              {
                if ( v11 <= SHIDWORD(v31[0]) )
                {
                  if ( v11 >= SHIDWORD(v31[0]) )
                    goto LABEL_23;
                  goto LABEL_22;
                }
                goto LABEL_36;
              }
            }
            else
            {
              v16 = v21 + 64;
              v17 = v21 + 64;
              v28 = HIDWORD(v31[0]);
              v24 = *(_DWORD *)(v21 + 68);
              v18 = sub_1301F0((const __m128i *)a1, v4, (__int64)v19, *(_QWORD *)(v30 + 8), v17);
              *((_QWORD *)&a1 + 1) = v30;
              v11 = v24;
              v12 = v28;
              if ( v18 )
              {
                v9 = 11;
                if ( v30 == v4 )
                  goto LABEL_31;
              }
              else
              {
                if ( !(unsigned __int8)sub_1321C0((const __m128i *)a1, v4, (__int64)v19, *(_QWORD *)(v30 + 8), v16) )
                  goto LABEL_13;
                *((_QWORD *)&a1 + 1) = v30;
                v11 = v24;
                v9 = 10;
                v12 = v28;
                if ( v4 == v30 )
                {
                  if ( v24 <= v28 )
                  {
                    if ( v24 >= v28 )
                      goto LABEL_23;
                    goto LABEL_46;
                  }
                  goto LABEL_36;
                }
              }
            }
LABEL_18:
            v27 = v12;
            v22 = v11;
            if ( (unsigned __int8)sub_155D40(a1, (__int64)v31, *((__int64 *)&a1 + 1), v4, 0) )
            {
              v11 = v22;
              v12 = v27;
              if ( v22 <= v27 )
              {
                if ( v22 >= v27 )
                {
LABEL_23:
                  v23 = v11;
                  *(_DWORD *)a2 = 16;
                  sub_11CA10(v19, (char *)v31);
                  sub_120A10(a2 + 48, v7, v26, v23, *(_QWORD *)(a2 + 24), 0);
                  if ( *(_DWORD *)(a2 + 68) == v23 )
                  {
LABEL_26:
                    v13 = 1;
                    goto LABEL_14;
                  }
                  if ( *(_DWORD *)(a2 + 68) < v23 )
                  {
                    sub_12B6F0(a2, v7, v9, -1, 1);
                    v15 = *(_QWORD *)(a2 + 40);
                    *(_DWORD *)(a2 + 36) = v23;
                    *(_DWORD *)(v15 + 68) = v23;
                    goto LABEL_26;
                  }
                  if ( !under_debugger )
                    sub_383060(0xCA54u, a4);
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
                  sub_383060(0xCB9Fu, a4);
                goto LABEL_50;
              }
              goto LABEL_36;
            }
LABEL_13:
            v13 = 0;
LABEL_14:
            v20 = v13;
            sub_11CDA0((__int64)v31);
            return v20;
          }
        }
      }
    }
  }
  return 0;
}

