__int64 __fastcall sub_45130(__int64 a1, __int64 a2, double a3, double a4, double a5)
{
  __m128i v5; // xmm0
  __int64 v6; // rdi
  const void *v8; // rbx
  __m128i v9; // xmm1
  __int64 v10; // r9
  __int64 v11; // r9
  __int64 v12; // rcx
  unsigned int v13; // eax
  const void *v14; // r14
  __int64 v15; // rax
  unsigned int v16; // eax
  unsigned int v17; // ecx
  int v18; // eax
  unsigned int v19; // ecx
  __m128i v20; // [rsp+0h] [rbp-128h] BYREF
  __int64 v21; // [rsp+10h] [rbp-118h] BYREF
  __int64 v22; // [rsp+18h] [rbp-110h] BYREF
  __int128 v23; // [rsp+20h] [rbp-108h] BYREF
  __int64 v24; // [rsp+30h] [rbp-F8h]
  const void *v25; // [rsp+40h] [rbp-E8h] BYREF
  __m128i v26; // [rsp+48h] [rbp-E0h] BYREF
  _BYTE v27[4]; // [rsp+60h] [rbp-C8h] BYREF
  __m128i v28; // [rsp+64h] [rbp-C4h] BYREF
  int v29; // [rsp+74h] [rbp-B4h]
  __int64 v30; // [rsp+80h] [rbp-A8h] BYREF
  __int128 v31; // [rsp+88h] [rbp-A0h]
  const void *v32; // [rsp+98h] [rbp-90h]
  __m128i v33; // [rsp+A0h] [rbp-88h]
  __m128i v34; // [rsp+B0h] [rbp-78h]
  __int64 v35; // [rsp+C0h] [rbp-68h]
  __int64 v36; // [rsp+C8h] [rbp-60h]
  __int128 v37; // [rsp+D0h] [rbp-58h]
  __int64 v38; // [rsp+E0h] [rbp-48h]
  __int64 v39; // [rsp+E8h] [rbp-40h]
  unsigned int v40; // [rsp+F0h] [rbp-38h]
  unsigned __int64 v41; // [rsp+F8h] [rbp-30h]

  v41 = __readfsqword(0x28u);
  if ( a2 != 4 )
  {
    v5.m128i_i64[0] = 0;
    v30 = 0;
    v32 = nullptr;
    v35 = 0;
    v36 = 0;
    v38 = -1;
    v39 = 0;
    v40 = 18;
    v31 = 0;
    v33 = 0;
    v34 = 0;
    v37 = 0;
    if ( (unsigned int)getinf(5) == 11 || (unsigned __int8)is_miniidb() )
      v40 |= 0x10u;
    netnode_check(&v21, "$ PE header", 0, 0);
    netnode_valobj(v21, a1 + 144, 248);
    if ( (_DWORD)a2 == 1 )
    {
      netnode_check(&v23, "$ PE header", 0, 0);
      netnode_qsupstr(v23, &v30, -9, 83);
      if ( (unsigned __int64)v31 > 1 )
      {
        sub_28600((__int64)&v25);
        v14 = v25;
        v25 = nullptr;
        v5 = _mm_loadu_si128(&v26);
        v26 = 0;
        if ( v32 )
        {
          v20 = v5;
          v33.m128i_i64[0] = 0;
          qfree(v32);
          v5 = _mm_load_si128(&v20);
          v32 = v14;
          v33 = v5;
          if ( v25 )
          {
            v26.m128i_i64[0] = 0;
            qfree(v25);
          }
        }
        else
        {
          v32 = v14;
          v33 = v5;
        }
        v38 = netnode_altval(v23, -2, 65);
        v15 = (v40 >> 1) & 1;
        if ( (v40 & 0x10) != 0 )
          v15 = (v40 >> 1) & 1 | 2LL;
        v25 = (const void *)v15;
        if ( (unsigned int)sub_29A80() == 1 )
        {
          v16 = v40 & 0xFFFFFFFD;
          if ( ((unsigned __int8)v25 & 1) != 0 )
            v16 = v40 | 2;
          v17 = v16;
          v18 = v16 | 0x10;
          v19 = v17 & 0xFFFFFFEF;
          if ( ((unsigned __int8)v25 & 2) == 0 )
            v18 = v19;
          v40 = v18;
          goto LABEL_32;
        }
      }
    }
    else if ( (_DWORD)a2 == 3 )
    {
      *(_QWORD *)&v23 = -1;
      netnode_check(&v23, "$ pdb", 0, 1);
      v38 = netnode_altval(v23, 0, 65);
      if ( v38 )
      {
        v5.m128i_i64[0] = 0;
        v25 = nullptr;
        v26 = 0;
        netnode_qsupstr(v23, &v25, 0, 83);
        if ( v26.m128i_i64[0] > 1uLL )
        {
          sub_291E0(&v30, v25);
          v40 |= 2u;
          v12 = netnode_altval(v23, 2, 65);
          v13 = v40 & 0xFFFFFFEF;
          if ( !v12 )
            v13 = v40 | 0x10;
          v40 = v13;
          if ( v25 )
          {
            v26.m128i_i64[0] = 0;
            qfree(v25);
          }
          goto LABEL_32;
        }
        sub_244A0();
        if ( v25 )
        {
          v26.m128i_i64[0] = 0;
          qfree(v25);
        }
      }
      else
      {
        sub_244A0();
      }
      v25 = nullptr;
      netnode_supset(v23, 0, &v25, 8, 65);
    }
    else if ( !(_DWORD)a2 && (unsigned __int8)sub_29B50((__int64)&v30) )
    {
LABEL_32:
      netnode_check(&v22, "$ PE header", 0, 0);
      *(_QWORD *)&v23 = 24;
      if ( netnode_getblob(v22, v27, &v23, 0, 115, v10, v20.m128i_i64[0], v20.m128i_i64[1]) && (_QWORD)v23 == 24 )
      {
        v5 = _mm_loadu_si128(&v28);
        LODWORD(v35) = 0;
        HIDWORD(v35) = v29;
        v34 = v5;
      }
      else
      {
        *(_QWORD *)&v23 = 16;
        if ( netnode_getblob(v22, &v25, &v23, 0, 110, v11, v20.m128i_i64[0], v20.m128i_i64[1]) && (_QWORD)v23 == 16 )
          v35 = v26.m128i_i64[0];
        else
          HIDWORD(v35) = -1;
      }
      sub_44010(a1, (__int64)&v30, *(double *)v5.m128i_i64, 0.0, a5);
    }
    if ( v36 )
    {
      *(_QWORD *)&v37 = 0;
      qfree(v36);
    }
    if ( v32 )
    {
      v33.m128i_i64[0] = 0;
      qfree(v32);
    }
    v6 = v30;
    if ( !v30 )
      return 1;
    goto LABEL_12;
  }
  v23 = 0;
  v24 = 0;
  netnode_check(&v22, "$ dbg_params", 0, 0);
  if ( netnode_supval(v22, 0, &v23, 24, 83) != 24 )
  {
    if ( !under_debugger )
      interr(30583);
    BUG();
  }
  if ( (_QWORD)v23 && *(_DWORD *)v23 )
  {
    if ( *((_QWORD *)&v23 + 1) == -1 )
      *((_QWORD *)&v23 + 1) = 0;
    v30 = 0;
    v32 = nullptr;
    v35 = 0;
    v36 = 0;
    v38 = -1;
    v39 = 0;
    v40 = 18;
    v31 = 0;
    v33 = 0;
    v34 = 0;
    v37 = 0;
    sub_28600((__int64)&v25);
    v8 = v25;
    v25 = nullptr;
    v9 = _mm_loadu_si128(&v26);
    v26 = 0;
    if ( v32 )
    {
      v20 = v9;
      v33.m128i_i64[0] = 0;
      qfree(v32);
      v9 = _mm_load_si128(&v20);
      v32 = v8;
      v33 = v9;
      if ( v25 )
      {
        v26.m128i_i64[0] = 0;
        qfree(v25);
      }
    }
    else
    {
      v32 = v8;
      v33 = v9;
    }
    v40 |= 8u;
    v38 = *((_QWORD *)&v23 + 1);
    v39 = v23;
    sub_44010(a1, (__int64)&v30, 0.0, *(double *)v9.m128i_i64, a5);
    if ( v36 )
    {
      *(_QWORD *)&v37 = 0;
      qfree(v36);
    }
    if ( v32 )
    {
      v33.m128i_i64[0] = 0;
      qfree(v32);
    }
    v6 = v30;
    if ( !v30 )
      return 1;
LABEL_12:
    *(_QWORD *)&v31 = 0;
    qfree(v6);
    return 1;
  }
  return 0;
}

