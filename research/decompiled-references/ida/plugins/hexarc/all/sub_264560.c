__int64 __fastcall sub_264560(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v7; // r12
  __int64 *v10; // r15
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rsi
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rsi
  int v20; // edi
  __int64 v21; // rsi
  __int64 v22; // r14
  __int64 *v23; // r15
  __int64 v24; // rax
  __int64 *v25; // rdx
  __int64 v26; // rax
  unsigned __int64 v27; // rax
  __int64 v28; // r8
  __int64 v29; // r12
  __int64 v30; // rax
  __int64 v31; // r13
  __int64 v32; // rsi
  int v33; // edx
  __int64 v34; // rax
  __int64 v35; // rsi
  __int64 v36; // rax
  __int64 v37; // [rsp+8h] [rbp-40h]

  v7 = a4;
  if ( !a4 )
  {
LABEL_62:
    if ( !under_debugger )
      sub_37B760(50195);
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
        v10 = (__int64 *)a2[4];
        if ( *((_DWORD *)v10 + 2) != 61 )
          goto LABEL_6;
        v27 = sub_24E6B0((__int64 *)v10[3]);
        if ( v27 > 0x1F )
          goto LABEL_6;
        v28 = v7 << v27;
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) + 24LL) != 8 && v28 != (int)v28 )
          goto LABEL_6;
        v29 = *a2;
        if ( *a2 == -1 )
        {
          v29 = *v10;
          if ( *v10 == -1 )
            v29 = a3;
        }
        v30 = *(_QWORD *)(a1 + 64);
        v31 = v10[3];
        v32 = *(_QWORD *)(a1 + 56);
        if ( *(_QWORD *)(a1 + 72) < (unsigned __int64)(v30 + 1) )
        {
          v37 = v28;
          v36 = qvector_reserve();
          v28 = v37;
          *(_QWORD *)(a1 + 56) = v36;
          v32 = v36;
          v30 = *(_QWORD *)(a1 + 64);
        }
        v33 = *(char *)(v31 + 12);
        v34 = v32 + 32 * v30;
        *(_QWORD *)v34 = a2[3];
        *(_QWORD *)(v34 + 8) = v29;
        *(_DWORD *)(v34 + 16) = v33;
        *(_QWORD *)(v34 + 24) = v28;
        ++*(_QWORD *)(a1 + 64);
        return 1;
      case '#':
        v22 = *a2;
        if ( *a2 == -1 )
          v22 = a3;
        if ( !(unsigned __int8)sub_264560(a1, a2[3], v22, v7, 0) )
          return 0;
        goto LABEL_32;
      case '$':
        if ( *(_DWORD *)(a2[4] + 8) != 61 )
          goto LABEL_6;
        v22 = *a2;
        if ( *a2 == -1 )
          v22 = a3;
        if ( !(unsigned __int8)sub_264560(a1, a2[3], v22, v7, 0) )
          return 0;
        v7 = -v7;
LABEL_32:
        a2 = (__int64 *)a2[4];
        a3 = v22;
        if ( !v7 )
          goto LABEL_62;
        a5 = 0;
        continue;
      case '%':
        v23 = (__int64 *)a2[3];
        if ( *((_DWORD *)v23 + 2) != 61 )
        {
          v23 = (__int64 *)a2[4];
          if ( *((_DWORD *)v23 + 2) != 61 )
            goto LABEL_6;
        }
        if ( !v23 )
          goto LABEL_6;
        v24 = v7 * sub_24E6B0((__int64 *)v23[3]);
        if ( !v24 || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) + 24LL) != 8 && v24 != (int)v24 )
          goto LABEL_6;
        if ( *a2 == -1 )
        {
          if ( *v23 != -1 )
            a3 = *v23;
        }
        else
        {
          a3 = *a2;
        }
        v25 = (__int64 *)a2[3];
        if ( v25 == v23 )
          v25 = (__int64 *)a2[4];
        v7 = v24;
        a2 = v25;
        a5 = *(char *)(v23[3] + 12);
        continue;
      case '/':
        v26 = *a2;
        v7 = -v7;
        a2 = (__int64 *)a2[3];
        if ( v26 != -1 )
          a3 = v26;
        goto LABEL_4;
      case '=':
        v16 = v7 * sub_24E6B0((__int64 *)a2[3]);
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) + 24LL) != 8 && v16 != (int)v16 )
          goto LABEL_6;
        v17 = *a2;
        if ( *a2 == -1 )
          v17 = a3;
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 24LL) + 24LL) == 8 )
        {
          v18 = 0x7FFFFFFFFFFFFFFFLL;
        }
        else
        {
          v18 = 0x7FFFFFFF;
          v19 = -v16;
          if ( v16 > 0 )
            v19 = v16;
          if ( v19 > 0x7FFFFFFF )
            return 0;
        }
        v20 = *(char *)(a2[3] + 12);
        if ( v16 < 0 )
        {
          v35 = *(_QWORD *)(a1 + 96);
          if ( v35 <= v16 + v18 )
          {
            *(_QWORD *)(a1 + 96) = v35 - v16;
            goto LABEL_21;
          }
          return 0;
        }
        v21 = *(_QWORD *)(a1 + 88);
        if ( v21 > v18 - v16 )
          return 0;
        *(_QWORD *)(a1 + 88) = v16 + v21;
LABEL_21:
        if ( *(_QWORD *)(a1 + 104) == -1 )
        {
          *(_QWORD *)(a1 + 104) = v17;
          *(_DWORD *)(a1 + 112) = v20;
        }
        return 1;
      default:
LABEL_6:
        v11 = *(_QWORD *)(a1 + 64);
        v12 = *(_QWORD *)(a1 + 56);
        if ( *(_QWORD *)(a1 + 72) < (unsigned __int64)(v11 + 1) )
        {
          v15 = qvector_reserve();
          *(_QWORD *)(a1 + 56) = v15;
          v12 = v15;
          v11 = *(_QWORD *)(a1 + 64);
        }
        v13 = 32 * v11 + v12;
        *(_QWORD *)v13 = a2;
        *(_QWORD *)(v13 + 8) = a3;
        *(_DWORD *)(v13 + 16) = a5;
        *(_QWORD *)(v13 + 24) = v7;
        ++*(_QWORD *)(a1 + 64);
        return 1;
    }
  }
}

