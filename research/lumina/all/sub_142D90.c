__int64 __fastcall sub_142D90(
        __int64 a1,
        __int64 a2,
        unsigned int (__fastcall *a3)(__int64, _QWORD, __int64 *, __int64 *),
        __int64 a4,
        __int64 **a5,
        double a6)
{
  char *v8; // rbp
  __int64 i; // rdx
  char *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdi
  bool v14; // zf
  unsigned int v15; // eax
  __m128i *v16; // rdi
  unsigned int v17; // ebp
  int v18; // r13d
  __int64 *v19; // rbx
  unsigned int v20; // eax
  unsigned int v21; // r14d
  __int64 *v22; // rdi
  unsigned int v23; // r13d
  bool v24; // bl
  unsigned int v25; // ebx
  __int64 *v26; // rax
  __int64 *v27; // r14
  unsigned int v28; // r13d
  __int64 v29; // rax
  __int64 v30; // rsi
  __int64 v31; // rbp
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rcx
  int v37; // r8d
  int v38; // r9d
  __int64 *v39; // rax
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rdi
  __int64 *v45; // [rsp+0h] [rbp-88h]
  unsigned int v46; // [rsp+0h] [rbp-88h]
  unsigned __int16 v48; // [rsp+26h] [rbp-62h]
  char *v50; // [rsp+38h] [rbp-50h] BYREF
  __int64 *v51[9]; // [rsp+40h] [rbp-48h] BYREF

  v8 = (char *)a2;
  v51[1] = (__int64 *)__readfsqword(0x28u);
  v51[0] = nullptr;
  if ( !(unsigned int)sub_EA7B0(a1) )
  {
    v25 = 21;
    sub_E8BB0(
      0x15u,
      "%s at line %d of [%.10s]",
      "misuse",
      129092,
      "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
    return v25;
  }
  v13 = *(_QWORD *)(a1 + 24);
  if ( !a2 )
    v8 = "";
  if ( v13 )
    xmmword_241500(v13);
  v14 = *(_QWORD *)(a1 + 392) == 0;
  *(_DWORD *)(a1 + 80) = 0;
  if ( v14 )
  {
    *(_DWORD *)(a1 + 84) = -1;
  }
  else
  {
    a2 = 0;
    sub_CA220((__int64 *)a1, 0, i, (__int64)v10, v11, v12);
  }
  while ( 2 )
  {
    if ( *v8 )
    {
      a2 = (__int64)v8;
      while ( 1 )
      {
        v51[0] = nullptr;
        v15 = sub_15AEA0(a1, a2, 0xFFFFFFFFLL, v51, &v50);
        if ( v15 )
          goto LABEL_23;
        v16 = (__m128i *)v51[0];
        if ( v51[0] )
          break;
        a2 = (__int64)v50;
        if ( !*v50 )
        {
          v23 = 0;
          v24 = 0;
          goto LABEL_25;
        }
      }
      v17 = 0;
      v18 = 0;
      v45 = nullptr;
      v19 = nullptr;
      while ( 1 )
      {
        v20 = sub_141DB0(v16, a2, a6);
        v21 = v20;
        if ( !a3 )
        {
          if ( v20 != 100 )
            goto LABEL_18;
          goto LABEL_32;
        }
        if ( v20 != 100 )
          break;
        if ( !v18 )
          goto LABEL_42;
        v26 = &v19[v17];
        v45 = v26;
        if ( v17 )
          goto LABEL_35;
LABEL_67:
        *v26 = 0;
        a2 = v17;
        if ( a3(a4, v17, v45, v19) )
          goto LABEL_49;
        v18 = 1;
LABEL_32:
        v16 = (__m128i *)v51[0];
      }
      if ( v20 != 101 || v18 || (*(_BYTE *)(a1 + 49) & 1) == 0 )
        goto LABEL_18;
LABEL_42:
      if ( v51[0] )
      {
        v48 = *((_WORD *)v51[0] + 96);
        a2 = 8LL * (2 * v48 + 1);
        v19 = sub_DBFF0(a1, a2);
        if ( !v19 )
          goto LABEL_70;
        if ( v48 )
        {
          v31 = 0;
          do
          {
            v19[v31] = sub_EE1A0((__int64)v51[0], v31, 0, 0, v11, v12, a6);
            ++v31;
          }
          while ( (unsigned int)v48 - 1 + 1LL != v31 );
          v17 = v48;
          if ( v21 == 100 )
          {
            v45 = &v19[v48];
LABEL_35:
            v27 = v45;
            v28 = 0;
            while ( 1 )
            {
              v29 = sub_EDF30(v51[0], v28, i, (__int64)v10, v11, v12, a6);
              *v27 = v29;
              if ( !v29 )
              {
                v30 = v28;
                if ( (unsigned int)sub_D4430(v51[0], v28, i, (__int64)v10, v11, v12) != 5 )
                  break;
              }
              ++v28;
              ++v27;
              if ( (int)v28 >= (int)v17 )
              {
                v26 = &v45[v28];
                goto LABEL_67;
              }
            }
            v23 = 100;
            if ( !*(_BYTE *)(a1 + 103) && !*(_BYTE *)(a1 + 104) )
              sub_DBE60(a1);
            goto LABEL_50;
          }
LABEL_48:
          a2 = v17;
          if ( a3(a4, v17, v45, v19) )
          {
LABEL_49:
            v23 = 4;
            sub_11E630((__int64)v51[0], a2, i, (__int64)v10, v11, v12);
            *(_DWORD *)(a1 + 80) = 4;
            v30 = 4;
            v51[0] = nullptr;
            sub_CA220((__int64 *)a1, 4, v32, v33, v34, v35);
LABEL_50:
            if ( v51[0] )
              sub_11E630((__int64)v51[0], v30, i, (__int64)v10, v11, v12);
            if ( v19 )
              sub_C9250(a1, v19);
            goto LABEL_54;
          }
LABEL_18:
          v15 = sub_11E630((__int64)v51[0], a2, i, (__int64)v10, v11, v12);
          v8 = v50;
          v51[0] = nullptr;
          v10 = byte_1BEF00;
          for ( i = (unsigned __int8)*v50; (byte_1BEF00[i] & 1) != 0; v10 = byte_1BEF00 )
            i = (unsigned __int8)*++v8;
          if ( v19 )
          {
            a2 = (__int64)v19;
            v46 = v15;
            sub_C9250(a1, v19);
            v15 = v46;
          }
          if ( !v15 )
            continue;
LABEL_23:
          v22 = v51[0];
          v23 = v15;
          v24 = 1;
          if ( v51[0] )
          {
LABEL_24:
            sub_11E630((__int64)v22, a2, i, (__int64)v10, v11, v12);
            goto LABEL_25;
          }
          goto LABEL_54;
        }
      }
      else
      {
        a2 = 8;
        v19 = sub_DBFF0(a1, 8);
        if ( !v19 )
        {
LABEL_70:
          v24 = v21 != 0;
          goto LABEL_71;
        }
      }
      if ( v21 != 100 )
      {
        v17 = 0;
        goto LABEL_48;
      }
      v26 = v19;
      v45 = v19;
      v17 = 0;
      goto LABEL_67;
    }
    break;
  }
  v24 = 0;
  v21 = 0;
LABEL_71:
  v22 = v51[0];
  v23 = v21;
  if ( v51[0] )
    goto LABEL_24;
LABEL_25:
  if ( *(_BYTE *)(a1 + 103) || v24 )
  {
LABEL_54:
    a2 = v23;
    v25 = sub_D42C0(a1, v23, i, (__int64)v10, v11, v12);
    if ( v25 && a5 )
    {
      a2 = (__int64)sub_EEFB0(a1, v23, i, a6, v36, v37, v38);
      v39 = sub_DC720(0, (const char *)a2);
      *a5 = v39;
      if ( !v39 )
      {
        *(_DWORD *)(a1 + 80) = 7;
        a2 = 7;
        sub_CA220((__int64 *)a1, 7, i, v40, v41, v42);
        v25 = 7;
      }
      goto LABEL_58;
    }
  }
  else
  {
    v25 = 0;
  }
  if ( a5 )
    *a5 = nullptr;
LABEL_58:
  v43 = *(_QWORD *)(a1 + 24);
  if ( v43 )
    xmmword_241510(v43, a2, i);
  return v25;
}
