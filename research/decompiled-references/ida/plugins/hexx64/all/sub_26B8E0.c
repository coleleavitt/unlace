__int64 __fastcall sub_26B8E0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, int a5, double a6)
{
  __int64 v8; // r12
  __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rsi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rsi
  int v21; // edi
  __int64 v22; // rsi
  __int64 v23; // r14
  __int64 v24; // r15
  __int64 v25; // rax
  __int64 *v26; // rdx
  __int64 v27; // rax
  unsigned __int64 v28; // rax
  __int64 v29; // r8
  __int64 v30; // r12
  __int64 v31; // rax
  __int64 v32; // r13
  __int64 v33; // rsi
  int v34; // edx
  __int64 v35; // rax
  __int64 v36; // rsi
  __int64 v37; // rax
  __int64 v38; // [rsp+8h] [rbp-40h]

  v8 = a4;
  if ( !a4 )
  {
LABEL_62:
    if ( !under_debugger )
      sub_383060(0xC413u, a6);
    BUG();
  }
  while ( 2 )
  {
    if ( *(_QWORD *)(a1 + 128) == -1 )
      *(_QWORD *)(a1 + 128) = *a2;
LABEL_4:
    switch ( *((_DWORD *)a2 + 2) )
    {
      case '"':
        v11 = a2[4];
        if ( *(_DWORD *)(v11 + 8) != 61 )
          goto LABEL_6;
        v28 = sub_255A30(*(__int64 **)(v11 + 24));
        if ( v28 > 0x1F )
          goto LABEL_6;
        v29 = v8 << v28;
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) + 24LL) != 8 && v29 != (int)v29 )
          goto LABEL_6;
        v30 = *a2;
        if ( *a2 == -1 )
        {
          v30 = *(_QWORD *)v11;
          if ( *(_QWORD *)v11 == -1 )
            v30 = a3;
        }
        v31 = *(_QWORD *)(a1 + 64);
        v32 = *(_QWORD *)(v11 + 24);
        v33 = *(_QWORD *)(a1 + 56);
        if ( *(_QWORD *)(a1 + 72) < (unsigned __int64)(v31 + 1) )
        {
          v38 = v29;
          v37 = qvector_reserve(a1 + 56, v33, v31 + 1, 32);
          v29 = v38;
          *(_QWORD *)(a1 + 56) = v37;
          v33 = v37;
          v31 = *(_QWORD *)(a1 + 64);
        }
        v34 = *(char *)(v32 + 12);
        v35 = v33 + 32 * v31;
        *(_QWORD *)v35 = a2[3];
        *(_QWORD *)(v35 + 8) = v30;
        *(_DWORD *)(v35 + 16) = v34;
        *(_QWORD *)(v35 + 24) = v29;
        ++*(_QWORD *)(a1 + 64);
        return 1;
      case '#':
        v23 = *a2;
        if ( *a2 == -1 )
          v23 = a3;
        if ( !(unsigned __int8)sub_26B8E0(a1, (__int64 *)a2[3], v23, v8, 0) )
          return 0;
        goto LABEL_32;
      case '$':
        if ( *(_DWORD *)(a2[4] + 8) != 61 )
          goto LABEL_6;
        v23 = *a2;
        if ( *a2 == -1 )
          v23 = a3;
        if ( !(unsigned __int8)sub_26B8E0(a1, (__int64 *)a2[3], v23, v8, 0) )
          return 0;
        v8 = -v8;
LABEL_32:
        a2 = (__int64 *)a2[4];
        a3 = v23;
        if ( !v8 )
          goto LABEL_62;
        a5 = 0;
        continue;
      case '%':
        v24 = a2[3];
        if ( *(_DWORD *)(v24 + 8) != 61 )
        {
          v24 = a2[4];
          if ( *(_DWORD *)(v24 + 8) != 61 )
            goto LABEL_6;
        }
        if ( !v24 )
          goto LABEL_6;
        v25 = v8 * sub_255A30(*(__int64 **)(v24 + 24));
        if ( !v25 || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) + 24LL) != 8 && v25 != (int)v25 )
          goto LABEL_6;
        if ( *a2 == -1 )
        {
          if ( *(_QWORD *)v24 != -1 )
            a3 = *(_QWORD *)v24;
        }
        else
        {
          a3 = *a2;
        }
        v26 = (__int64 *)a2[3];
        if ( v26 == (__int64 *)v24 )
          v26 = (__int64 *)a2[4];
        v8 = v25;
        a2 = v26;
        a5 = *(char *)(*(_QWORD *)(v24 + 24) + 12LL);
        continue;
      case '/':
        v27 = *a2;
        v8 = -v8;
        a2 = (__int64 *)a2[3];
        if ( v27 != -1 )
          a3 = v27;
        goto LABEL_4;
      case '=':
        v17 = v8 * sub_255A30((__int64 *)a2[3]);
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) + 24LL) != 8 && v17 != (int)v17 )
          goto LABEL_6;
        v18 = *a2;
        if ( *a2 == -1 )
          v18 = a3;
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 24LL) + 24LL) == 8 )
        {
          v19 = 0x7FFFFFFFFFFFFFFFLL;
        }
        else
        {
          v19 = 0x7FFFFFFF;
          v20 = -v17;
          if ( v17 > 0 )
            v20 = v17;
          if ( v20 > 0x7FFFFFFF )
            return 0;
        }
        v21 = *(char *)(a2[3] + 12);
        if ( v17 < 0 )
        {
          v36 = *(_QWORD *)(a1 + 96);
          if ( v36 <= v17 + v19 )
          {
            *(_QWORD *)(a1 + 96) = v36 - v17;
            goto LABEL_21;
          }
          return 0;
        }
        v22 = *(_QWORD *)(a1 + 88);
        if ( v22 > v19 - v17 )
          return 0;
        *(_QWORD *)(a1 + 88) = v17 + v22;
LABEL_21:
        if ( *(_QWORD *)(a1 + 104) == -1 )
        {
          *(_QWORD *)(a1 + 104) = v18;
          *(_DWORD *)(a1 + 112) = v21;
        }
        return 1;
      default:
LABEL_6:
        v12 = *(_QWORD *)(a1 + 64);
        v13 = *(_QWORD *)(a1 + 56);
        if ( *(_QWORD *)(a1 + 72) < (unsigned __int64)(v12 + 1) )
        {
          v16 = qvector_reserve(a1 + 56, v13, v12 + 1, 32);
          *(_QWORD *)(a1 + 56) = v16;
          v13 = v16;
          v12 = *(_QWORD *)(a1 + 64);
        }
        v14 = 32 * v12 + v13;
        *(_QWORD *)v14 = a2;
        *(_QWORD *)(v14 + 8) = a3;
        *(_DWORD *)(v14 + 16) = a5;
        *(_QWORD *)(v14 + 24) = v8;
        ++*(_QWORD *)(a1 + 64);
        return 1;
    }
  }
}

