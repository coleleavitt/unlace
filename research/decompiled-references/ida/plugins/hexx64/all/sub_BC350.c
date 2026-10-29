char __fastcall sub_BC350(_QWORD *a1, unsigned __int8 *a2, unsigned __int8 *a3, double a4)
{
  __int64 v4; // r12
  __int64 v5; // r13
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  __int64 v13; // r9
  unsigned __int8 *v14; // r9
  __int64 v15; // rdx
  __int64 v16; // r13
  unsigned __int8 *v18; // rdx
  _QWORD *v19; // rdx
  _QWORD *v20; // rsi
  int v21; // r9d
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rax
  _QWORD *v25; // r12
  _QWORD *v26; // rbx
  int v27; // r13d
  __int64 v28; // rax
  __int64 v29; // rax
  int v30; // r13d
  __int64 v31; // rsi
  char v32; // [rsp+8h] [rbp-50h]
  unsigned __int8 v33[4]; // [rsp+10h] [rbp-48h] BYREF
  int v34; // [rsp+14h] [rbp-44h]
  unsigned __int64 v35; // [rsp+28h] [rbp-30h]
  unsigned __int8 *v36; // [rsp+38h] [rbp-20h]
  unsigned __int8 *v37; // [rsp+40h] [rbp-18h]
  __int64 v38; // [rsp+48h] [rbp-10h]
  __int64 v39; // [rsp+50h] [rbp-8h]

  v35 = __readfsqword(0x28u);
LABEL_2:
  v8 = *a2;
  v9 = *a3;
  if ( (_BYTE)v9 == (_BYTE)v8 )
  {
    while ( 2 )
    {
      if ( *((_DWORD *)a2 + 1) == *((_DWORD *)a3 + 1) )
      {
        switch ( v8 )
        {
          case 0LL:
            return 1;
          case 1LL:
            return *((_DWORD *)a2 + 2) == *((_DWORD *)a3 + 2);
          case 2LL:
            return *(_QWORD *)(*((_QWORD *)a2 + 1) + 16LL) == *(_QWORD *)(*((_QWORD *)a3 + 1) + 16LL);
          case 3LL:
          case 11LL:
            return strcmp(*((const char **)a2 + 1), *((const char **)a3 + 1)) == 0;
          case 4LL:
            return sub_BC1C0(a1, *((unsigned __int8 **)a2 + 1), *((_QWORD *)a3 + 1), 0);
          case 5LL:
          case 6LL:
            return *((_QWORD *)a2 + 1) == *((_QWORD *)a3 + 1);
          case 7LL:
            return *(_DWORD *)(a1[2] + 4LL * *((int *)a2 + 2)) == *((_DWORD *)a3 + 2);
          case 8LL:
            v19 = *((_QWORD **)a3 + 1);
            v20 = *((_QWORD **)a2 + 1);
            v24 = v20[4];
            if ( v19[4] != v24 )
              return 0;
            v39 = v5;
            v38 = v4;
            v25 = v20;
            v37 = a3;
            v36 = a2;
            v26 = v19;
            if ( v24 )
            {
              v27 = 0;
              v28 = 0;
              while ( sub_BC350(a1, (unsigned __int8 *)(v20[3] + 80 * v28), (unsigned __int8 *)(80 * v28 + v26[3])) )
              {
                v28 = ++v27;
                if ( (unsigned __int64)v27 >= v20[4] )
                  goto LABEL_54;
              }
            }
            else
            {
LABEL_54:
              v29 = v20[7];
              if ( v26[7] == v29 )
              {
                v30 = 0;
                v31 = 0;
                if ( !v29 )
                  return 1;
                while ( sub_BC350(a1, (unsigned __int8 *)(v25[6] + 16 * v31), (unsigned __int8 *)(16 * v31 + v26[6])) )
                {
                  v31 = ++v30;
                  if ( (unsigned __int64)v30 >= v25[7] )
                    return 1;
                }
              }
            }
            return 0;
          case 9LL:
            goto LABEL_5;
          case 10LL:
            v18 = *((unsigned __int8 **)a3 + 1);
            a2 = *((unsigned __int8 **)a2 + 1);
            if ( *((_QWORD *)a2 + 2) != *((_QWORD *)v18 + 2) )
              return 0;
            a3 = *((unsigned __int8 **)a3 + 1);
            v8 = *a2;
            v9 = *v18;
            if ( (_BYTE)v8 == (_BYTE)v9 )
              continue;
            goto LABEL_3;
          case 13LL:
            return (unsigned int)ecmp() == 0;
          case 14LL:
            if ( !sub_BC350(a1, *((unsigned __int8 **)a2 + 1), *((unsigned __int8 **)a3 + 1)) )
              return 0;
            a3 = (unsigned __int8 *)(*((_QWORD *)a3 + 1) + 16LL);
            a2 = (unsigned __int8 *)(*((_QWORD *)a2 + 1) + 16LL);
            goto LABEL_2;
          default:
            if ( !under_debugger )
              sub_383060(0xC37Au, a4);
            goto LABEL_62;
        }
      }
      return 0;
    }
  }
LABEL_3:
  if ( (_BYTE)v8 != 9 || *((_DWORD *)a2 + 1) != *((_DWORD *)a3 + 1) )
    return 0;
LABEL_5:
  v10 = *((_QWORD *)a2 + 1);
  v11 = a1[40];
  v12 = *(int *)(v10 + 16);
  if ( v12 >= *(_QWORD *)(v11 + 1936) )
    goto LABEL_65;
  v21 = *(_DWORD *)(*(_QWORD *)(v11 + 1928) + 4 * v12);
  if ( (v21 & 1) != 0 )
  {
    if ( (_BYTE)v9 != 2 )
      return 0;
    goto LABEL_9;
  }
  if ( (v21 & 2) != 0 )
  {
    if ( (_BYTE)v9 == 2 )
      return 0;
  }
  else
  {
LABEL_65:
    if ( (int)v12 >= *(_DWORD *)(v11 + 1528) )
    {
      if ( (unsigned __int8)v9 > 0xAu )
        return 0;
      v13 = 1638;
      if ( !_bittest64(&v13, v9) )
        return 0;
    }
  }
LABEL_9:
  v14 = *(unsigned __int8 **)(a1[8] + 8 * v12);
  v15 = *(_QWORD *)(v10 + 8);
  if ( !v14 )
  {
    if ( !v15 )
      return sub_BC080(a1, *(_DWORD *)(v10 + 16), a3);
    if ( a1[41] )
    {
      if ( !under_debugger )
        sub_383060(0xC70Bu, a4);
LABEL_62:
      BUG();
    }
    return 0;
  }
  v16 = *(_QWORD *)(v11 + 1504);
  if ( !v15 )
    return sub_1255D0(v14, v16, (__int64)a3, 9);
  sub_123A40((__int64)v33, *(unsigned __int8 **)(a1[8] + 8 * v12), v15, v12);
  v23 = *(_QWORD *)(*((_QWORD *)a2 + 1) + 8LL);
  if ( (v34 == -1 || v34 > v23) && (unsigned __int8)sub_126F10((unsigned __int64)v33, v16, v23, v22) )
  {
    v32 = sub_1255D0(v33, v16, (__int64)a3, 9);
    sub_11CDA0((__int64)v33);
    return v32;
  }
  else
  {
    sub_11CDA0((__int64)v33);
    return 0;
  }
}

