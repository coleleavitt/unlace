__int64 __fastcall sub_103E40(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, double a6)
{
  __int64 v8; // rsi
  __int64 v9; // r9
  unsigned __int8 *v10; // rbx
  char *v11; // rsi
  char v13; // al
  unsigned int v14; // eax
  __int64 v15; // rdi
  __int64 v16; // rsi
  bool v17; // zf
  const void *v18; // r13
  unsigned int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  char v24; // al
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned int v29; // edx
  __int64 *v30; // [rsp+0h] [rbp-B8h] BYREF
  _BYTE *v31; // [rsp+8h] [rbp-B0h]
  __int64 v32; // [rsp+10h] [rbp-A8h]
  __int64 v33; // [rsp+18h] [rbp-A0h]
  __int16 v34; // [rsp+20h] [rbp-98h]
  _BYTE v35[150]; // [rsp+22h] [rbp-96h] BYREF

  v8 = *(unsigned int *)(a1 + 16);
  v9 = *(_QWORD *)(a1 + 56);
  *(_QWORD *)&v35[102] = __readfsqword(0x28u);
  v10 = (unsigned __int8 *)(v9 + 16 * v8);
  switch ( a3 )
  {
    case 0LL:
      if ( !(_DWORD)v8 )
        return 0;
      v13 = *(_BYTE *)(a1 + 24);
      if ( v13 == 7 )
        goto LABEL_18;
      if ( v13 != 6 )
        return 0;
      v14 = *(_DWORD *)(a1 + 8);
      if ( !*(_BYTE *)(a1 + 25) )
        goto LABEL_14;
      if ( v14 )
      {
        v14 = *(_DWORD *)(v9 + 16LL * *(unsigned int *)(*(_QWORD *)(a1 + 72) + 4 * v8) + 8);
LABEL_14:
        v15 = *a2;
        v16 = v14;
        if ( (*(_WORD *)(v15 + 20) & 0x9000) == 0 )
          goto LABEL_27;
        goto LABEL_15;
      }
      break;
    case 1LL:
      if ( (v10[1] & 0x40) != 0 )
        v10 += 16;
      goto LABEL_18;
    case 2LL:
      if ( (v10[1] & 0x40) != 0 )
        v10 += 16;
      sub_F48B0((__int64)a2, *(&off_23AB40 + *v10), -1, 1u, nullptr, v9);
      return 0;
    case 3LL:
      if ( (v10[1] & 0x40) != 0 )
        v10 += 16;
      if ( *v10 <= 5u )
LABEL_18:
        sub_103630((__int64)v10, (__int64)a2, (_BYTE *)(unsigned int)a3, a4, a5, v9, a6);
      return 0;
    case 4LL:
      v15 = *a2;
      v16 = ((v10[1] & 0x40) != 0) + v8;
      if ( (*(_WORD *)(v15 + 20) & 0x9000) == 0 )
        goto LABEL_27;
      goto LABEL_15;
    case 5LL:
      if ( (unsigned int)v8 <= *(_DWORD *)(a1 + 12) || !*(_BYTE *)(a1 + 25) )
        return 0;
      v15 = *a2;
      v16 = *(unsigned int *)(*(_QWORD *)(a1 + 72) + 4 * v8);
      if ( (*(_WORD *)(v15 + 20) & 0x9000) != 0 )
      {
LABEL_15:
        sub_C9430(v15, v16, (unsigned int)a3, a4, a5, v9);
      }
      else
      {
LABEL_27:
        *(_QWORD *)v15 = v16;
        *(_WORD *)(v15 + 20) = 4;
      }
      break;
    case 6LL:
      v17 = *(_BYTE *)(a1 + 25) == 0;
      v30 = a2;
      v32 = 100;
      v33 = 0;
      v34 = 1;
      v31 = v35;
      if ( v17 )
      {
        v18 = *(const void **)(a1 + 40);
        if ( v18 )
        {
          v19 = strlen(*(const char **)(a1 + 40));
          if ( v19 )
          {
            v8 = (__int64)v18;
            sub_102C40(&v30, v18, v19);
          }
        }
        else
        {
          v8 = 36;
          sub_102750(&v30, 36);
        }
        v24 = *(_BYTE *)(a1 + 24);
        if ( v24 == 6 )
        {
          v8 = (__int64)&v30;
          sub_103BF0(30, &v30, "[%d]", *(_DWORD *)(a1 + 8));
        }
        else if ( v24 == 7 )
        {
          v8 = *((unsigned int *)v10 + 1);
          sub_103D10(&v30, v8, *((_QWORD *)v10 + 1));
        }
      }
      else
      {
        v29 = v8;
        v8 = (__int64)&v30;
        sub_103D90(a1, &v30, v29);
      }
      if ( !HIBYTE(v34) )
        sub_F4BA0((__int64)&v30, v8, v20, v21, v22, v23);
      return 0;
    case 7LL:
      if ( !*(_BYTE *)(a1 + 25) )
        goto LABEL_3;
      v30 = a2;
      v32 = 100;
      v33 = 0;
      v31 = v35;
      v34 = 1;
      sub_103D90(a1, &v30, *(_DWORD *)(*(_QWORD *)(a1 + 72) + 4 * v8));
      if ( !HIBYTE(v34) )
        sub_F4BA0((__int64)&v30, (__int64)&v30, v25, v26, v27, v28);
      break;
    case 8LL:
      sub_F48B0((__int64)a2, *(_QWORD **)(a1 + 64), -1, 1u, nullptr, v9);
      return 0;
    default:
LABEL_3:
      v11 = *(char **)(a1 + 40);
      if ( !v11 )
        v11 = "$";
      sub_F48B0((__int64)a2, v11, -1, 1u, nullptr, v9);
      break;
  }
  return 0;
}
