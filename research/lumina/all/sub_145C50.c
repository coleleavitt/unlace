__int64 __fastcall sub_145C50(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 result; // rax
  __int64 v8; // rsi
  bool v9; // dl
  __int64 v10; // r12
  __int64 v11; // rsi
  __int64 *v12; // rax
  __int64 *v13; // r14
  int v14; // r15d
  int v15; // eax
  __int64 v16; // rbx
  __int64 *v17; // r13
  __int64 *v18; // rbx
  __int64 v19; // rsi
  int v20; // eax
  bool v21; // bl
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // rsi
  __int64 v25; // rdx
  int *v26; // rsi
  __int64 v27; // [rsp+8h] [rbp-90h]
  bool v28; // [rsp+17h] [rbp-81h]
  unsigned int v29; // [rsp+18h] [rbp-80h]
  __int64 v30; // [rsp+18h] [rbp-80h]
  __int64 v31; // [rsp+20h] [rbp-78h] BYREF
  __int128 v32; // [rsp+28h] [rbp-70h]
  __int128 v33; // [rsp+38h] [rbp-60h]
  __int128 v34; // [rsp+48h] [rbp-50h]
  unsigned __int64 v35; // [rsp+58h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 352);
  v2 = *(_QWORD *)a1;
  v35 = __readfsqword(0x28u);
  v32 = 0;
  v27 = v2;
  v31 = a1;
  v33 = 0;
  v34 = 0;
  v3 = *(_QWORD *)(v1 + 48);
  v4 = -1048576;
  v5 = *(_QWORD *)(v2 + 32);
  if ( v3 )
    v4 = 32LL * (int)sub_CFB20(v2, v3);
  v6 = sub_CA640(v27, *(unsigned __int8 **)(v1 + 8), *(_BYTE **)(v5 + v4));
  *(_QWORD *)(a1 + 168) = v6;
  *(_BYTE *)(a1 + 212) = *(_BYTE *)(v1 + 16);
  if ( !v6 || (result = sub_136CC0(a1, v6), !(_DWORD)result) )
  {
    v8 = *(_QWORD *)(v1 + 24);
    if ( v8 )
    {
      result = sub_E45E0((__int64)&v31, v8);
      v9 = (_DWORD)result == 0;
    }
    else
    {
      v9 = 1;
      result = 0;
    }
    v10 = *(_QWORD *)(v1 + 56);
    v28 = v9 && v10 != 0;
    if ( v28 )
    {
      while ( 1 )
      {
        v11 = *(_QWORD *)(v10 + 16);
        if ( v11 )
        {
          sub_CFDC0(a1, v11, (__int64)&v31);
          if ( *(_DWORD *)(a1 + 48) )
          {
            result = *(unsigned int *)(a1 + 24);
            if ( (_DWORD)result )
              return result;
          }
        }
        if ( *(_QWORD *)(v10 + 24) )
          break;
        v21 = v28;
        result = 0;
LABEL_20:
        v10 = *(_QWORD *)(v10 + 80);
        if ( !v10 || !v21 )
          return result;
      }
      v12 = sub_E5870((__int64 *)a1, v10);
      v13 = v12;
      if ( !v12 )
        return 7;
      v14 = 0;
      if ( *(int *)v12 <= 0 )
        goto LABEL_17;
      while ( 1 )
      {
        while ( 1 )
        {
          v15 = *(_DWORD *)(a1 + 52);
          v16 = 13LL * v14;
          v17 = &v13[v16 + 1];
          v18 = &v13[v16];
          *(_DWORD *)(a1 + 52) = v15 + 1;
          v19 = v18[6];
          *((_DWORD *)v18 + 18) = v15;
          if ( !v19 )
            break;
          sub_CFDC0(a1, v19, 0);
          sub_11EFD0(a1, v17);
          v20 = v14++ - 1;
          sub_CFDC0(a1, *(_QWORD *)(*(_QWORD *)(v10 + 32) + 104LL * v20 + 48), 0);
          if ( v14 >= *(_DWORD *)v13 )
            goto LABEL_17;
        }
        v23 = sub_144470((__int64 *)a1, 0, (__int64)v17, 0.0);
        v18[5] = v23;
        if ( !v23 )
        {
          v22 = 1;
          v21 = 0;
          goto LABEL_19;
        }
        ++*(_DWORD *)(v23 + 44);
        ++v14;
        v22 = sub_136CC0(a1, v18[5]);
        if ( *(_DWORD *)v13 <= v14 )
          break;
        if ( v22 )
          goto LABEL_28;
      }
      if ( !v22 )
      {
LABEL_17:
        if ( *(_BYTE *)(v27 + 103) )
        {
          v21 = 0;
          v22 = 7;
LABEL_19:
          v29 = v22;
          *(_QWORD *)&v32 = 0;
          sub_D8260(v27, v13);
          result = v29;
          goto LABEL_20;
        }
        v24 = *(_QWORD *)(v10 + 40);
        *(_QWORD *)&v32 = v13;
        if ( !v24 || (v22 = sub_E45E0((__int64)&v31, v24)) == 0 )
        {
          v22 = sub_E46F0(&v31, *(int **)(v10 + 48));
          v25 = *(_QWORD *)(v10 + 64);
          v21 = v22 == 0;
          if ( v25 && !v22 )
          {
            *((_QWORD *)&v32 + 1) = *(_QWORD *)(v10 + 64);
            LODWORD(v34) = 512;
            v26 = *(int **)v25;
            *(_QWORD *)(v25 + 64) = v13;
            v30 = v25;
            v22 = sub_E46F0(&v31, v26);
            if ( !v22 )
            {
              v22 = sub_E46F0(&v31, *(int **)(v30 + 16));
              if ( !v22 )
              {
                v22 = sub_E45E0((__int64)&v31, *(_QWORD *)(v30 + 24));
                if ( !v22 )
                  v22 = sub_E45E0((__int64)&v31, *(_QWORD *)(v30 + 8));
              }
            }
            LODWORD(v34) = 0;
            v21 = v22 == 0;
          }
          goto LABEL_19;
        }
      }
LABEL_28:
      v21 = 0;
      goto LABEL_19;
    }
  }
  return result;
}
