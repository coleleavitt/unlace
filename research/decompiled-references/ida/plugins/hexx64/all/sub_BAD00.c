__int64 __fastcall sub_BAD00(__int64 a1, __int64 a2, double a3)
{
  _QWORD *v5; // rax
  _QWORD *v6; // rbp
  __int64 v7; // rax
  unsigned __int64 v8; // r15
  __int64 v9; // r14
  _QWORD *v10; // rax
  _QWORD *v11; // r13
  _DWORD *v12; // r15
  __int64 v13; // rax
  __int64 v14; // rsi
  unsigned __int64 *v15; // r14
  _QWORD *v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rdx
  int v27; // eax
  bool v28; // zf
  __int64 v29; // rdx
  int v30; // eax
  __int64 v31; // [rsp+18h] [rbp-60h] BYREF
  _QWORD v32[11]; // [rsp+20h] [rbp-58h] BYREF

  v32[3] = __readfsqword(0x28u);
  if ( *(_BYTE *)a2 == 14 )
  {
    v5 = sub_1FBD10(*(_QWORD ***)(*(_QWORD *)(a1 + 8) + 800LL), *(_QWORD *)(a2 + 8));
    v6 = v5;
    if ( v5 )
    {
      v7 = *v5;
      v8 = *((int *)v6 + 4);
      if ( *(_QWORD *)(v7 + 440) < v8 )
        sub_B7BC0(a3);
      v9 = *(_QWORD *)(v7 + 432);
      v10 = sub_1FBD10(*(_QWORD ***)(*(_QWORD *)(a1 + 8) + 800LL), *(_QWORD *)(a2 + 8) + 16LL);
      v11 = v10;
      if ( v10 )
      {
        if ( *((_DWORD *)v6 + 4) == *((_DWORD *)v10 + 4) )
        {
          v12 = (_DWORD *)(v9 + 104 * v8);
          if ( v12[22] >= *(_DWORD *)(a2 + 4) )
          {
            v13 = *(_QWORD *)(a1 + 8);
            v14 = *(_QWORD *)(v13 + 1496);
            v15 = *(unsigned __int64 **)(v13 + 1504);
            if ( *(_BYTE *)(v14 + 145)
              && ((unsigned int)(*v12 - 3) > 1 || sub_11CC50(*(unsigned __int8 **)(a2 + 8), v14)) )
            {
              v16 = v6;
              v6 = v11;
              v11 = v16;
            }
            v17 = *(_QWORD *)(a2 + 8);
            if ( v11[1] == v6[1] + *(int *)(v17 + 4) )
            {
              v32[1] = 0;
              v32[0] = 0xFFFFFFFF00000000LL;
              if ( *v12 == 2 )
              {
                v31 = 0;
                copy_tinfo_t();
                sub_11D150((__int64)v32, *(_QWORD *)(a1 + 8), (const char *)&unk_418793, &v31, v12);
                clear_tinfo_t();
                if ( !(unsigned __int8)sub_126980((__int64)v32, *((_DWORD *)v6 + 2), *(_DWORD *)(a2 + 4), 0) )
                {
LABEL_22:
                  sub_11CDA0((__int64)v32);
                  return 0;
                }
                v26 = *(_QWORD *)(a1 + 16);
                v27 = *(_DWORD *)(v26 + 24);
                BYTE1(v27) &= ~2u;
                LOBYTE(v27) = v27 | 0x80;
                v28 = LOBYTE(v32[0]) == 15;
                *(_DWORD *)(v26 + 24) = v27;
                if ( !v28 || (get_tinfo_property() & 0x2F) != 0xD )
                {
LABEL_20:
                  sub_11CA10((char *)a2, (char *)v32);
                  v25 = *(_QWORD *)(a1 + 32);
                  ++*(_DWORD *)(a1 + 44);
                  if ( (unsigned int)(*(_DWORD *)v25 - 8) <= 1
                    && (unsigned __int8)sub_127420(v25 + 32, (__int64)v15, (unsigned __int8 *)(v25 + 64), v24) )
                  {
                    v29 = *(_QWORD *)(a1 + 16);
                    v30 = *(_DWORD *)(v29 + 24);
                    BYTE1(v30) &= ~2u;
                    LOBYTE(v30) = v30 | 0x80;
                    *(_DWORD *)(v29 + 24) = v30;
                  }
                  *(_BYTE *)(a1 + 40) = 1;
                  goto LABEL_22;
                }
              }
              else
              {
                if ( (*v12 & 0xFFFFFFFD) != 1 )
                  goto LABEL_22;
                sub_125180((__int64)v32, (unsigned __int8 *)v17);
                if ( !(unsigned __int8)sub_121A00((__int64)v32, v17, v18, v19, v20)
                  || !(unsigned __int8)sub_121A00(*(_QWORD *)(a2 + 8) + 16LL, v17, v21, v22, v23)
                  || LOBYTE(v32[0]) != *(_BYTE *)(*(_QWORD *)(a2 + 8) + 16LL) )
                {
                  if ( !under_debugger )
                    sub_383060(0xCACAu, a3);
                  BUG();
                }
                if ( !(unsigned __int8)sub_131830((__int64)v32, v15, 0x80u) )
                  goto LABEL_22;
                if ( (*(_BYTE *)(a2 + 1) & 2) == 0 )
                  goto LABEL_20;
              }
              BYTE1(v32[0]) |= 2u;
              goto LABEL_20;
            }
          }
        }
      }
    }
  }
  return 0;
}

