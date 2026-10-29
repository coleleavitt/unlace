__int64 __fastcall sub_232200(_QWORD *a1, unsigned __int64 a2, int a3, _QWORD *a4, char a5, __m128 a6, __m128 a7)
{
  int v8; // r13d
  unsigned __int64 v9; // r12
  _QWORD *v10; // rbx
  int v11; // r13d
  __int64 v12; // rbx
  _DWORD *v13; // r15
  int v14; // r8d
  int v15; // r15d
  __int64 v16; // rdi
  int v17; // eax
  unsigned int v18; // eax
  _DWORD *v19; // r11
  _QWORD *v20; // rdi
  char v21; // al
  char v22; // dl
  unsigned int v23; // eax
  unsigned __int64 v25; // rcx
  int v26; // ecx
  __int64 *v27; // rax
  __int64 v28; // rdx
  __int64 *v29; // rsi
  unsigned __int64 v30; // rcx
  int v31; // [rsp+8h] [rbp-98h]
  _DWORD *v32; // [rsp+8h] [rbp-98h]
  int v33; // [rsp+10h] [rbp-90h]
  int v34; // [rsp+10h] [rbp-90h]
  unsigned __int64 v36; // [rsp+18h] [rbp-88h]
  unsigned int v37; // [rsp+18h] [rbp-88h]
  __int64 v38; // [rsp+18h] [rbp-88h]
  int v39; // [rsp+28h] [rbp-78h] BYREF
  int v40; // [rsp+2Ch] [rbp-74h] BYREF
  __int64 v41; // [rsp+30h] [rbp-70h] BYREF
  int v42; // [rsp+38h] [rbp-68h] BYREF
  _QWORD *v43; // [rsp+40h] [rbp-60h]
  int *v44; // [rsp+48h] [rbp-58h]
  int *v45; // [rsp+50h] [rbp-50h]
  __int64 v46; // [rsp+58h] [rbp-48h]
  unsigned __int64 v47; // [rsp+68h] [rbp-38h]

  v8 = a3;
  v9 = a2;
  v10 = a1;
  v47 = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_228B40((__int64)a1, a2, a3, 1u, *(double *)a6.m128_u64) )
    return 0;
  if ( !a4 || !(unsigned __int8)*a4 || v8 != get_tinfo_size() )
    a4 = nullptr;
  if ( a1[55] )
  {
    v31 = v8;
    v11 = 0;
    v12 = 0;
    v33 = -1;
    v36 = 0;
    do
    {
      v13 = (_DWORD *)(v12 + a1[54]);
      if ( (unsigned int)(*v13 - 3) > 1 )
      {
        v14 = v13[22];
        if ( v14 > v11 )
        {
          if ( (unsigned int)sub_1C36B0((__int64)v13, a1[187], a2, 1, v14, nullptr, *(double *)a6.m128_u64, nullptr) )
          {
            v11 = v13[22];
            v33 = v36;
          }
        }
      }
      ++v36;
      v12 += 104;
    }
    while ( v36 < a1[55] );
    v15 = v33;
    v10 = a1;
    v42 = 0;
    v43 = nullptr;
    v8 = v31;
    v44 = &v42;
    v45 = &v42;
    v46 = 0;
    if ( v33 == -1 )
      goto LABEL_17;
    v16 = a1[54] + 104LL * v33;
    if ( *(_DWORD *)v16 != 1 )
    {
      if ( *(_DWORD *)v16 == 2 )
      {
        v17 = sub_1C36B0(v16, v10[187], a2, v31, *(_DWORD *)(v16 + 88), &v39, *(double *)a6.m128_u64, &v40);
        if ( v40 < 0 || v31 > v17 )
          goto LABEL_39;
        goto LABEL_17;
      }
      if ( !under_debugger )
        sub_383060(0xC757u, *(double *)a6.m128_u64);
LABEL_73:
      BUG();
    }
    if ( !v31
      || (v25 = *(_QWORD *)(v16 + 8), v38 = v25, *(_DWORD *)(v16 + 88))
      && a2 >= v25
      && *(int *)(v16 + 88) + v25 - 1 >= a2 + v31 - 1 )
    {
LABEL_17:
      v34 = -1;
      goto LABEL_18;
    }
    v26 = v31 + a2 - v25;
    v34 = v26;
    if ( v31 != v26 )
      a4 = nullptr;
    if ( !(unsigned __int8)sub_22D6C0((__int64)v10, &v41, v15, v26, a4, *(double *)a6.m128_u64) )
      goto LABEL_39;
    if ( (__int64)(a2 - v38) < 0 )
    {
      if ( !under_debugger )
        sub_383060(0xC491u, *(double *)a6.m128_u64);
      goto LABEL_73;
    }
    v8 = a2 - v38 + v31;
    if ( (*((_BYTE *)v10 + 2) & 4) != 0
      && v46
      && sub_1CFD50(v10, v38, *(double *)a6.m128_u64) >= 0
      && !(unsigned __int8)sub_1EEA60((unsigned __int8 *)v10) )
    {
      if ( !under_debugger )
        sub_383060(0xC787u, *(double *)a6.m128_u64);
      goto LABEL_73;
    }
    v9 = v38;
  }
  else
  {
    v42 = 0;
    v15 = -1;
    v43 = nullptr;
    v44 = &v42;
    v45 = &v42;
    v46 = 0;
    v34 = -1;
  }
LABEL_18:
  v18 = sub_2309F0((__int64)v10, v9, v8, a4, a5, nullptr);
  v37 = v18;
  if ( v18 )
  {
    if ( v18 - 1 > 1 )
    {
LABEL_39:
      v37 = 0;
      goto LABEL_27;
    }
    *(_DWORD *)v10 |= 0x8000000u;
    if ( v34 == -1 )
      goto LABEL_27;
    if ( (a5 & 1) == 0 )
      goto LABEL_27;
    v19 = (_DWORD *)(v10[54] + 104LL * v15);
    if ( *v19 != 1 )
      goto LABEL_27;
  }
  else if ( v34 == -1 || (a5 & 1) == 0 || (v19 = (_DWORD *)(v10[54] + 104LL * v15), *v19 != 1) )
  {
    v23 = *(_DWORD *)v10;
    goto LABEL_44;
  }
  v20 = *(_QWORD **)(v10[187] + 872LL);
  if ( v20 )
  {
    v32 = v19;
    v21 = sub_208530(v20, v15, v34, *(double *)a6.m128_u64);
    v19 = v32;
    if ( !v21 )
      goto LABEL_39;
  }
  v22 = sub_232090((__int64)v10, (__int64)&v41, (__int64)v19, v34, a4, a5, a6, a7);
  v23 = *(_DWORD *)v10 & 0xFFDFFFFF;
  if ( !v22 )
  {
    *(_DWORD *)v10 = v23;
    if ( v37 )
      goto LABEL_27;
LABEL_44:
    if ( (v23 & 0x10000) == 0 && (unsigned int)sub_228FE0(v10 + 54, v10[188], v9, v8, *(double *)a6.m128_u64) == -1 )
    {
      v27 = (__int64 *)v10[102];
      if ( v27 )
      {
        v28 = 24;
        v29 = (__int64 *)(*v27 & 0xFFFFFFFFFFFFFFFCLL);
        if ( v29 )
        {
          while ( (*(_BYTE *)v29 & 2) == 0 )
          {
            while ( 1 )
            {
              v30 = v29[3];
              v28 = (__int64)(v29 + 3);
              if ( v9 >= v30 )
                break;
              v29 = (__int64 *)v29[1];
              if ( (*(_BYTE *)v29 & 2) != 0 )
                goto LABEL_45;
            }
            if ( v30 >= v9 )
            {
              if ( v29 == v27 )
                break;
              goto LABEL_62;
            }
            v29 = (__int64 *)v29[2];
          }
        }
        else
        {
LABEL_62:
          if ( (unsigned __int64)v8 < *(_QWORD *)(v28 + 8) )
            sub_22ED60((unsigned __int64 **)v10 + 102, v29);
        }
      }
    }
LABEL_45:
    v37 = -1;
    goto LABEL_27;
  }
  *(_DWORD *)v10 = v23;
  v37 = 2;
LABEL_27:
  sub_227050(v43);
  return v37;
}

