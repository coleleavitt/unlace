__int64 __fastcall sub_135730(__int64 a1)
{
  bool v1; // zf
  __int64 v3; // rax
  _DWORD *v4; // rax
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // r8
  __m128i v8; // xmm0
  _QWORD *v9; // r12
  int v10; // ebx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 *v13; // r13
  __int64 v14; // r8
  __int64 v15; // r9
  _DWORD *v16; // rax
  int v17; // eax
  unsigned int v18; // esi
  int v19; // esi
  __int64 v21; // rdx
  unsigned __int64 v22; // rcx
  _QWORD *v23; // rdx
  _QWORD *v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // rdx
  _QWORD *v27; // rdi
  unsigned __int64 v28; // rsi
  unsigned __int64 **v29; // rax
  _DWORD *v30; // [rsp+10h] [rbp-138h]
  int v31; // [rsp+20h] [rbp-128h]
  int v32; // [rsp+24h] [rbp-124h]
  _QWORD *v33; // [rsp+28h] [rbp-120h]
  char v34; // [rsp+30h] [rbp-118h]
  int v35; // [rsp+34h] [rbp-114h]
  unsigned __int64 *v36; // [rsp+38h] [rbp-110h]
  unsigned int v37; // [rsp+40h] [rbp-108h]
  int v38; // [rsp+44h] [rbp-104h]
  int v39; // [rsp+48h] [rbp-100h]
  int v40; // [rsp+4Ch] [rbp-FCh]
  __m128i v41; // [rsp+50h] [rbp-F8h] BYREF
  _QWORD v42[2]; // [rsp+60h] [rbp-E8h] BYREF
  __int64 v43[2]; // [rsp+70h] [rbp-D8h] BYREF
  __int64 v44; // [rsp+80h] [rbp-C8h] BYREF
  __int128 v45; // [rsp+88h] [rbp-C0h]
  __int64 v46[2]; // [rsp+A0h] [rbp-A8h] BYREF
  __int64 v47; // [rsp+B0h] [rbp-98h] BYREF
  __int128 v48; // [rsp+B8h] [rbp-90h]
  __int64 v49; // [rsp+D0h] [rbp-78h] BYREF
  __int128 v50; // [rsp+D8h] [rbp-70h] BYREF
  __m128i v51; // [rsp+E8h] [rbp-60h]
  unsigned __int64 v52; // [rsp+F8h] [rbp-50h]
  char v53; // [rsp+100h] [rbp-48h]
  unsigned __int64 v54; // [rsp+108h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 440) == 0;
  v54 = __readfsqword(0x28u);
  if ( !v1 )
  {
    v38 = 0;
    v36 = nullptr;
    v37 = 0;
    v40 = 2 * *(unsigned __int8 *)(*(_QWORD *)(a1 + 1496) + 130LL);
    v3 = 0;
    while ( 1 )
    {
      v4 = (_DWORD *)(*(_QWORD *)(a1 + 432) + 104 * v3);
      v30 = v4;
      if ( !v4[23] && v4[22] == v40 && ((*v4 - 2) & 0xFFFFFFFD) != 0 )
        break;
LABEL_36:
      v3 = ++v38;
      if ( (unsigned __int64)v38 >= *(_QWORD *)(a1 + 440) )
        return v37;
    }
    if ( !v36 )
    {
      v29 = (unsigned __int64 **)sub_10C420(*(_QWORD *)(a1 + 784), 0);
      if ( !v29 )
      {
        if ( !under_debugger )
          sub_37DDE0(50433);
LABEL_80:
        BUG();
      }
      v36 = *v29;
    }
    v5 = *(_DWORD *)(a1 + 440);
    v43[0] = 0;
    v35 = v5;
    v43[1] = 0;
    v44 = 0;
    v45 = 0;
    sub_1BED00(v30, a1, v43, 0);
    v41 = (__m128i)0xFFFFFFFFFFFFFFFFLL;
    sub_1BEA90(v30, &v41, 1, v6, v7);
    v39 = v30[22];
    v32 = v39 >> 1;
    if ( v39 <= 0 )
    {
LABEL_33:
      if ( !v44 )
        goto LABEL_35;
      goto LABEL_34;
    }
    v31 = 0;
    v33 = nullptr;
    v34 = 2;
    while ( !v31 )
    {
      v8 = _mm_load_si128(&v41);
      v49 = 0;
      v52 = 0xFFFFFFFF00000001LL;
      v53 = 1;
      v50 = 0;
      v51 = v8;
      v33 = sub_FFCE0(v36, (__int64)&v49);
      if ( v49 )
      {
        *(_QWORD *)&v50 = 0;
        qfree();
      }
      if ( v33 == (_QWORD *)*v36 )
        goto LABEL_33;
      v9 = v33 + 3;
LABEL_14:
      if ( v9[1] )
      {
        v10 = 0;
        v11 = 0;
        do
        {
          while ( 1 )
          {
            v12 = *(unsigned int *)(*v9 + 4 * v11);
            if ( (unsigned int)v12 >= *(_DWORD *)(a1 + 64) )
            {
              if ( !under_debugger )
                sub_37DDE0(52719);
              goto LABEL_80;
            }
            v13 = *(__int64 **)(*(_QWORD *)(a1 + 528) + 8 * v12);
            if ( !sub_A55E0((__int64)v13, v43, v13[6], 0, 0) )
            {
              v16 = (_DWORD *)v13[7];
              if ( v16 )
              {
                if ( (unsigned int)(*v16 - 42) <= 0xA )
                  break;
              }
            }
LABEL_16:
            v11 = ++v10;
            if ( (unsigned __int64)v10 >= v9[1] )
              goto LABEL_32;
          }
          v46[0] = 0;
          v46[1] = 0;
          v47 = 0;
          v48 = 0;
          v17 = *v30;
          if ( (unsigned int)(*v30 - 3) > 1 )
          {
            v21 = *(_QWORD *)(*(_QWORD *)(a1 + 1496) + 24LL);
            v42[0] = *(_QWORD *)(v21 + 16) & (*(_QWORD *)(a1 + 1440) + *((_QWORD *)v30 + 1) + v31);
            v42[1] = v32;
            sub_311AB0(&v47, v42, v21, v30, v14, v15);
            goto LABEL_26;
          }
          v18 = v30[2];
          if ( v31 )
          {
            if ( v17 == 4 )
            {
              v19 = HIWORD(v18);
              goto LABEL_25;
            }
          }
          else if ( v17 == 4 )
          {
            v18 = (unsigned __int16)v18;
          }
          v19 = v31 + v18;
LABEL_25:
          sub_5FB00(v46, v19, v32);
LABEL_26:
          sub_1201C0((__int64)&v49, (__int64)v13, v13[7], 0);
          sub_60380(&v49, v43);
          sub_312FC0((char *)&v50 + 8, &v44);
          if ( (unsigned __int8)sub_604A0(&v49, v46) && (unsigned __int8)sub_312E40(&v47, (char *)&v50 + 8) )
          {
            v37 += (unsigned __int8)sub_10F650(v13, v13[7], v34);
            if ( v35 != *(_QWORD *)(a1 + 440) )
            {
              if ( *((_QWORD *)&v50 + 1) )
              {
                v51.m128i_i64[0] = 0;
                qfree();
              }
              qfree();
              if ( v47 )
              {
                *(_QWORD *)&v48 = 0;
                qfree();
              }
              qfree();
              if ( !v44 )
              {
LABEL_35:
                qfree();
                goto LABEL_36;
              }
LABEL_34:
              *(_QWORD *)&v45 = 0;
              qfree();
              goto LABEL_35;
            }
            if ( *((_QWORD *)&v50 + 1) )
            {
              v51.m128i_i64[0] = 0;
              qfree();
            }
            qfree();
            if ( v47 )
            {
              *(_QWORD *)&v48 = 0;
              qfree();
            }
            qfree();
            goto LABEL_16;
          }
          if ( *((_QWORD *)&v50 + 1) )
          {
            v51.m128i_i64[0] = 0;
            qfree();
          }
          qfree();
          if ( v47 )
          {
            *(_QWORD *)&v48 = 0;
            qfree();
          }
          ++v10;
          qfree();
          v11 = v10;
        }
        while ( (unsigned __int64)v10 < v9[1] );
      }
LABEL_32:
      v34 = 3;
      v31 += v32;
      if ( v39 <= v31 )
        goto LABEL_33;
    }
    v22 = *v36;
    if ( (*v33 & 2) != 0 )
    {
      v25 = v33;
      if ( (_QWORD *)v22 == v33 )
      {
        if ( !v44 )
          goto LABEL_35;
        goto LABEL_34;
      }
      goto LABEL_54;
    }
    v23 = (_QWORD *)v33[2];
    if ( (*(_BYTE *)v23 & 2) != 0 )
    {
      v24 = (_QWORD *)(*v33 & 0xFFFFFFFFFFFFFFFCLL);
      v26 = *v24;
      if ( (*v24 & 2) == 0 && (_QWORD *)v24[2] == v33 )
      {
        while ( 1 )
        {
          v27 = v24;
          v28 = v26 & 0xFFFFFFFFFFFFFFFCLL;
          v26 = *(_QWORD *)(v26 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v26 & 2) != 0 )
            break;
          v24 = (_QWORD *)v28;
          if ( *(_QWORD **)(v28 + 16) != v27 )
            goto LABEL_52;
        }
        v33 = (_QWORD *)v28;
LABEL_53:
        v25 = v33;
        if ( v33 == (_QWORD *)v22 )
          goto LABEL_33;
LABEL_54:
        v9 = v25 + 3;
        if ( v41.m128i_i8[8] != *((_BYTE *)v25 + 56) || v41.m128i_i64[0] + v31 != v25[6] )
          goto LABEL_32;
        goto LABEL_14;
      }
    }
    else
    {
      do
      {
        v24 = v23;
        v23 = (_QWORD *)v23[1];
      }
      while ( (*(_BYTE *)v23 & 2) == 0 );
    }
LABEL_52:
    v33 = v24;
    goto LABEL_53;
  }
  return 0;
}

