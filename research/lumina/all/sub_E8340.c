__int64 __fastcall sub_E8340(
        __int64 a1,
        const char **a2,
        __int64 a3,
        __int64 (__fastcall *a4)(__int64, _QWORD, _QWORD, const char *, __int64, const char **),
        __int64 *a5)
{
  __int64 v7; // rbx
  unsigned int v9; // eax
  __int64 v10; // rax
  const char *v11; // rsi
  unsigned int v12; // r14d
  _QWORD *v13; // rax
  __int64 v14; // r15
  __int64 v15; // rsi
  __int64 v16; // rax
  const char *v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  bool v21; // cc
  __int64 v22; // r12
  const char *v23; // rax
  unsigned __int8 *v24; // rbp
  int v25; // eax
  unsigned __int8 *v26; // r15
  __int64 v27; // r14
  __int64 v28; // r11
  unsigned __int8 v29; // al
  int v30; // esi
  int v31; // eax
  unsigned __int8 v32; // cl
  __int64 v33; // rdx
  __int64 v34; // rax
  const char *v35; // rdi
  unsigned int v37; // [rsp+0h] [rbp-A8h]
  unsigned __int16 v39; // [rsp+8h] [rbp-A0h]
  __int64 *v40; // [rsp+10h] [rbp-98h]
  const char *v41; // [rsp+18h] [rbp-90h]
  int v42; // [rsp+18h] [rbp-90h]
  const char *v43; // [rsp+38h] [rbp-70h] BYREF
  _QWORD v44[2]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v45; // [rsp+50h] [rbp-58h]
  int v46; // [rsp+58h] [rbp-50h]
  unsigned __int64 v47; // [rsp+68h] [rbp-40h]

  v7 = a1;
  v47 = __readfsqword(0x28u);
  v9 = *((_DWORD *)a2 + 16);
  v43 = nullptr;
  v37 = v9;
  v10 = *(_QWORD *)(a1 + 560);
  if ( v10 )
  {
    if ( a2 == *(const char ***)(v10 + 8) )
    {
LABEL_43:
      v12 = 6;
      *a5 = sub_E8280(a1, "vtable constructor called recursively: %s", *a2);
      return v12;
    }
    while ( 1 )
    {
      v10 = *(_QWORD *)(v10 + 16);
      if ( !v10 )
        break;
      if ( *(const char ***)(v10 + 8) == a2 )
        goto LABEL_43;
    }
  }
  v11 = *a2;
  v12 = 7;
  v41 = a2[9];
  v40 = sub_DC720(a1, v11);
  if ( v40 )
  {
    v13 = sub_D2260(0x30u, (__int64)v11);
    v14 = (__int64)v13;
    if ( v13 )
    {
      *v13 = a1;
      v13[1] = a3;
      *((_BYTE *)v13 + 29) = 1;
      v15 = (__int64)a2[12];
      v16 = -1048576;
      if ( v15 )
        v16 = 32LL * (int)sub_CFB20(a1, v15);
      v17 = a2[9];
      v18 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + v16);
      v44[0] = v14;
      *((_QWORD *)v17 + 1) = v18;
      v19 = *(_QWORD *)(a1 + 560);
      v44[1] = a2;
      v46 = 0;
      v45 = v19;
      *(_QWORD *)(a1 + 560) = v44;
      v12 = a4(a1, *(_QWORD *)(a3 + 24), v37, v41, v14 + 16, &v43);
      *(_QWORD *)(a1 + 560) = v45;
      if ( v12 == 7 )
      {
        if ( !*(_BYTE *)(a1 + 103) && !*(_BYTE *)(a1 + 104) )
          sub_DBE60(a1);
      }
      else if ( !v12 )
      {
        v20 = *(_QWORD *)(v14 + 16);
        if ( v20 )
        {
          *(_QWORD *)(v20 + 16) = 0;
          *(_OWORD *)v20 = 0;
          **(_QWORD **)(v14 + 16) = *(_QWORD *)a3;
          ++*(_DWORD *)(a3 + 16);
          *(_DWORD *)(v14 + 24) = 1;
          if ( v46 )
          {
            *(_QWORD *)(v14 + 40) = a2[10];
            v21 = *((_WORD *)a2 + 27) <= 0;
            a2[10] = (const char *)v14;
            if ( !v21 )
            {
              v22 = 0;
              v39 = 0;
              do
              {
                v23 = (const char *)sub_D4C70((__int64)&a2[1][16 * v22], (size_t)"");
                v24 = (unsigned __int8 *)v23;
                if ( !v23 )
                  goto LABEL_48;
                v25 = strlen(v23) & 0x3FFFFFFF;
                v42 = v25;
                if ( !v25 )
                  goto LABEL_48;
                v26 = v24;
                v27 = 0;
                v28 = (unsigned int)(v25 - 1) + 1LL;
                while ( 1 )
                {
                  if ( v26
                    && !(unsigned int)sub_CA590((unsigned __int8 *)"hidden", v26, 6)
                    && (!v27 || *(v26 - 1) == 32) )
                  {
                    v29 = v26[6];
                    if ( (v29 & 0xDF) == 0 )
                      break;
                  }
                  ++v27;
                  ++v26;
                  if ( v28 == v27 )
                    goto LABEL_48;
                }
                if ( v42 > (int)v27 )
                {
                  v30 = (v29 != 0) + 6;
                  if ( v42 >= v30 + (int)v27 )
                  {
                    v31 = v27;
                    do
                    {
                      v32 = v24[v30 + v31];
                      v33 = v31++;
                      v24[v33] = v32;
                    }
                    while ( v42 >= v31 + v30 );
                  }
                  if ( !*v26 && (_DWORD)v27 )
                    v24[v27 - 1] = 0;
                  v39 = 1024;
                  *(_WORD *)&a2[1][16 * v22 + 14] |= 2u;
                  *((_DWORD *)a2 + 12) |= 2u;
                }
                else
                {
LABEL_48:
                  *((_DWORD *)a2 + 12) |= v39;
                }
                ++v22;
              }
              while ( *((__int16 *)a2 + 27) > (int)v22 );
              v12 = 0;
              v7 = a1;
            }
          }
          else
          {
            v12 = 1;
            *a5 = sub_E8280(a1, "vtable constructor did not declare schema: %s", *a2);
            sub_D00D0(v14);
          }
        }
        goto LABEL_41;
      }
      if ( v43 )
      {
        v34 = sub_E8280(a1, "%s", v43);
        v35 = v43;
        *a5 = v34;
        sub_C91C0((__int64)v35, (__int64)"%s");
      }
      else
      {
        *a5 = sub_E8280(a1, "vtable constructor failed: %s", (const char *)v40);
      }
      sub_C9250(v7, (_QWORD *)v14);
LABEL_41:
      sub_C9250(v7, v40);
      return v12;
    }
    if ( !*(_BYTE *)(a1 + 103) && !*(_BYTE *)(a1 + 104) )
      sub_DBE60(a1);
    v12 = 7;
    sub_C9250(a1, v40);
  }
  return v12;
}
