__int64 __fastcall sub_209470(_QWORD *a1, unsigned __int64 a2, __int64 a3, unsigned __int8 a4)
{
  int v5; // eax
  __int64 v6; // r13
  __int64 v7; // rdx
  __int64 v8; // rax
  unsigned int v9; // r15d
  __int64 v10; // r13
  __int64 v11; // r12
  _QWORD *v12; // rax
  unsigned __int64 v13; // rsi
  int v14; // eax
  __int64 result; // rax
  bool v16; // dl
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // r13
  __int64 v20; // [rsp+8h] [rbp-98h]
  unsigned int v21; // [rsp+8h] [rbp-98h]
  __int64 *v22; // [rsp+10h] [rbp-90h]
  unsigned int v25; // [rsp+28h] [rbp-78h]
  __m128i v26; // [rsp+30h] [rbp-70h] BYREF
  int v27; // [rsp+40h] [rbp-60h]
  int v28; // [rsp+44h] [rbp-5Ch]
  _QWORD v29[10]; // [rsp+50h] [rbp-50h] BYREF

  v29[3] = __readfsqword(0x28u);
  v5 = sub_1C2F40(*(_DWORD **)(a2 + 8));
  v6 = v5;
  if ( v5 != -1 )
  {
    v17 = sub_1C3000(*(_DWORD **)(a2 + 8), *(_DWORD *)(a2 + 4));
    if ( (unsigned __int8)sub_1EFD70(a1[1], v6, v17 - (int)v6) )
      return 1;
  }
  v7 = a1[1];
  v8 = *(int *)(a1[9] + 44LL);
  v9 = *(_DWORD *)(a1[9] + 44LL);
  v10 = 104 * v8;
  v11 = 104 * v8 + *(_QWORD *)(v7 + 432);
  if ( (!*(_BYTE *)(v7 + 320) || (*(_BYTE *)(v11 + 25) & 1) == 0)
    && (unsigned __int8)sub_1C3800(
                          *(int **)(a2 + 8),
                          *(_DWORD *)(a2 + 4),
                          104 * v8 + *(_QWORD *)(v7 + 432),
                          *(_DWORD *)(v11 + 88),
                          &v26) )
  {
    if ( v28 )
    {
      if ( !under_debugger )
        sub_3835A0(52867);
      BUG();
    }
    v12 = sub_1FC0D0(*(_QWORD ***)(a1[1] + 800LL), a2);
    if ( v12 )
    {
      v13 = *((int *)v12 + 4);
      v14 = *(_DWORD *)(*(_QWORD *)(a1[1] + 432LL) + 104 * v13 + 24);
      if ( (v14 & 0x2000000) != 0 && (v14 & 0x400) == 0 )
        goto LABEL_9;
      return 1;
    }
    if ( *(_DWORD *)(v11 + 92) && a4 || (unsigned __int8)sub_206F80(a1, a2, -1, a4) )
    {
      v22 = (__int64 *)(a1[1] + 432LL);
      v18 = *(_QWORD *)(v11 + 16);
      LODWORD(v29[0]) = 0;
      v20 = v18;
      copy_argloc();
      v29[2] = v20;
      v21 = sub_1F0900(v22, (__int64)v29);
      cleanup_argloc();
      v13 = v21;
      if ( v21 != -1 && *(_DWORD *)(a1[9] + 44LL) != v21 )
      {
        if ( *(_DWORD *)(*(_QWORD *)(a1[1] + 432LL) + 104LL * (int)v21 + 88) >= *(_DWORD *)(a2 + 4) )
          goto LABEL_9;
        *(_QWORD *)(v11 + 16) = *(_QWORD *)(a1[4] + 24LL) + a4;
      }
      LODWORD(v29[0]) = 0;
      copy_argloc();
      copy_argloc();
      if ( !sub_1EFCB0(v11, *(_QWORD *)(a1[1] + 1504LL), (_BYTE *)(*(_QWORD *)(a2 + 8) + 48LL), 1) )
      {
        copy_argloc();
        cleanup_argloc();
        goto LABEL_14;
      }
      v19 = *(_QWORD *)(a1[1] + 432LL) + v10;
      *(_DWORD *)(v19 + 24) |= 0x2000000u;
      cleanup_argloc();
      v13 = v9;
LABEL_9:
      sub_2076F0((__int64)a1, (_QWORD *)v13, v27);
      v29[0] = 0;
      copy_tinfo_t();
      v25 = sub_208DA0(a2, *(int *)(a1[9] + 44LL), a3, *(__m128i **)(*(_QWORD *)(a3 + 8) + 800LL), a4, 0, v29);
      clear_tinfo_t();
      return v25;
    }
  }
LABEL_14:
  v16 = sub_206E40((__int64)a1, (_BYTE *)a2, a3, 0);
  result = 3;
  if ( !v16 )
  {
    sub_1F4970(a1[1], -1, v11);
    *(_DWORD *)(v11 + 24) |= 0x400u;
    return 1;
  }
  return result;
}

