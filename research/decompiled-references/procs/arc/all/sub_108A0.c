__int64 __fastcall sub_108A0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  int v5; // r14d
  int v8; // ecx
  unsigned __int64 v9; // rdx
  unsigned int v10; // eax
  __int64 v11; // r15
  unsigned int v12; // ebp
  __int64 v13; // r10
  int v14; // eax
  char v15; // al
  __int64 v17; // r14
  __int64 v18; // rdx
  unsigned __int16 v19; // ax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // r13
  __int64 v25; // rdx
  __int64 v26; // rdx
  bool v27; // zf
  __int64 v28; // rax
  int v29; // ecx
  unsigned __int64 v30; // rdx
  char v31; // al
  __int64 dword; // rax
  int v33; // eax
  __int64 v34; // [rsp+0h] [rbp-B8h]
  __int64 v35; // [rsp+8h] [rbp-B0h]
  __m128i si128; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v37; // [rsp+20h] [rbp-98h]
  __int128 v38; // [rsp+28h] [rbp-90h]
  __int16 v39; // [rsp+38h] [rbp-80h]
  __m128i v40; // [rsp+40h] [rbp-78h] BYREF
  __int64 v41; // [rsp+50h] [rbp-68h]
  __int128 v42; // [rsp+58h] [rbp-60h]
  __int16 v43; // [rsp+68h] [rbp-50h]
  unsigned __int64 v44; // [rsp+78h] [rbp-40h]

  v5 = a5 + 1;
  v44 = __readfsqword(0x28u);
  v39 = 0;
  v8 = *(unsigned __int16 *)(a3 + 6);
  v38 = 0;
  v9 = *(_QWORD *)(a2 + 16);
  v37 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_1F660);
  v10 = sub_FBC0(a1, a2, v9, v8, &si128, a5 + 1);
  v11 = v37;
  v12 = v10;
  if ( !(_BYTE)v10 )
    goto LABEL_5;
  v13 = si128.m128i_i64[0];
  v43 = 0;
  v14 = *(_DWORD *)(a2 + 28);
  v42 = 0;
  v40.m128i_i64[1] = -1;
  if ( (v14 & 0x18) == 0x10 )
  {
    v17 = 0;
    v18 = 0;
  }
  else
  {
    v15 = *(_BYTE *)(a3 + 1);
    if ( v15 != 3 )
    {
      if ( v15 != 4 )
      {
LABEL_5:
        v12 = 0;
        goto LABEL_6;
      }
      v17 = 0;
      v18 = *(int *)(a3 + 16);
      v19 = *(_WORD *)(a2 + 24);
      if ( !*(_BYTE *)(a3 + 32) )
        goto LABEL_21;
LABEL_11:
      if ( v19 == 139 )
        goto LABEL_52;
      if ( v19 > 0x8Bu )
      {
        if ( v19 != 140 && (unsigned __int16)(v19 - 308) > 1u )
          goto LABEL_27;
      }
      else
      {
        if ( v19 == 3 )
          goto LABEL_16;
        if ( v19 != 138 )
        {
          if ( v19 != 1 )
            goto LABEL_27;
LABEL_16:
          v20 = *(_DWORD *)(a2 + 28);
          if ( (~(_BYTE)v20 & 0x18) != 0 )
            goto LABEL_27;
          v21 = v20 & 6;
          if ( v21 != 4 )
          {
            if ( v21 )
              goto LABEL_27;
            goto LABEL_19;
          }
LABEL_52:
          v13 *= 2;
          goto LABEL_27;
        }
      }
LABEL_19:
      v13 *= 4;
      goto LABEL_27;
    }
    v29 = *(char *)(a3 + 32);
    v30 = *(_QWORD *)(a2 + 16);
    v35 = si128.m128i_i64[0];
    v40.m128i_i64[0] = 0;
    v41 = 0;
    v31 = sub_FBC0(a1, a2, v30, v29, &v40, v5);
    v17 = v41;
    v18 = v40.m128i_i64[0];
    v13 = v35;
    if ( !v31 )
    {
      if ( v41 )
        qfree(v41);
      goto LABEL_5;
    }
  }
  v19 = *(_WORD *)(a2 + 24);
  if ( *(_BYTE *)(a3 + 32) )
    goto LABEL_11;
LABEL_21:
  if ( v19 == 139 )
    goto LABEL_51;
  if ( v19 > 0x8Bu )
  {
    if ( v19 == 140 || (unsigned __int16)(v19 - 308) <= 1u )
      goto LABEL_44;
    goto LABEL_27;
  }
  if ( v19 != 3 )
  {
    if ( v19 == 138 )
    {
LABEL_44:
      v18 *= 4;
      goto LABEL_27;
    }
    if ( v19 != 1 )
      goto LABEL_27;
  }
  v22 = *(_DWORD *)(a2 + 28);
  if ( (~(_BYTE)v22 & 0x18) != 0 )
    goto LABEL_27;
  v33 = v22 & 6;
  if ( v33 == 4 )
  {
LABEL_51:
    v18 *= 2;
    goto LABEL_27;
  }
  if ( !v33 )
    goto LABEL_44;
LABEL_27:
  v23 = v13 + v18 + 16LL * *(_QWORD *)a2;
  v24 = (unsigned int)v23;
  v25 = *(_QWORD *)(*(_QWORD *)(*a1 + 32) + 16LL);
  if ( v23 != v25 )
  {
    v26 = (unsigned int)v23 & (unsigned int)v25;
    v27 = v23 == -1;
    v28 = 0xFFFFFFFFLL;
    if ( !v27 )
      v28 = v26;
    v24 = v28;
  }
  if ( *(_BYTE *)(a3 + 5) != 2 || !(unsigned __int8)sub_B8D0(v24) )
  {
    if ( v17 )
    {
      qfree(v17);
      if ( !a4 )
        goto LABEL_6;
    }
    else if ( !a4 )
    {
      goto LABEL_6;
    }
    *(_QWORD *)a4 = 0xFFFFFFFFLL;
LABEL_35:
    *(_QWORD *)(a4 + 8) = v24;
    *(_BYTE *)(a4 + 40) = *(_BYTE *)a3;
    goto LABEL_6;
  }
  dword = (unsigned int)get_dword(v24);
  if ( v17 )
  {
    v34 = (unsigned int)dword;
    qfree(v17);
    dword = v34;
    if ( a4 )
    {
LABEL_50:
      *(_QWORD *)a4 = dword;
      *(_BYTE *)(a4 + 41) = *(_BYTE *)(a4 + 41) & 0xFC | 1;
      goto LABEL_35;
    }
  }
  else if ( a4 )
  {
    goto LABEL_50;
  }
LABEL_6:
  if ( v11 )
    qfree(v11);
  return v12;
}
