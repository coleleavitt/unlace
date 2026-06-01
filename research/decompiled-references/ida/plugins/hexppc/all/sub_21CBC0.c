__int64 __fastcall sub_21CBC0(__m128i *a1, __int64 a2, _QWORD *a3, unsigned int *a4, int a5)
{
  __int64 v8; // rdi
  __int64 v9; // r14
  __m128i v10; // xmm0
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // r9d
  unsigned __int64 v16; // rdx
  unsigned int *v17; // rax
  __int32 v18; // eax
  int v19; // edx
  int v20; // esi
  __int64 v21; // rdx
  char *v22; // rax
  __int64 v23; // rcx
  char *v24; // r13
  unsigned int v25; // r15d
  __int64 v27; // rax
  int v28; // edx
  int v29; // esi
  __int64 v30; // r13
  __int64 *v31; // r14
  _QWORD *v32; // r13
  __int64 that; // rax
  unsigned int v34; // eax
  __int64 v35; // rax
  int v36; // edx
  int v37; // esi
  _DWORD *v38; // r14
  __int64 v39; // [rsp-10h] [rbp-110h]
  __int64 v40; // [rsp+0h] [rbp-100h]
  unsigned int v41; // [rsp+8h] [rbp-F8h]
  unsigned int v42; // [rsp+8h] [rbp-F8h]
  __int64 v43; // [rsp+8h] [rbp-F8h]
  __m128i v44; // [rsp+10h] [rbp-F0h] BYREF
  __int64 *v45; // [rsp+20h] [rbp-E0h]
  int v46; // [rsp+28h] [rbp-D8h]
  int v47; // [rsp+2Ch] [rbp-D4h]
  __int64 *v48; // [rsp+30h] [rbp-D0h]
  unsigned int *v49; // [rsp+38h] [rbp-C8h]
  __int64 v50[2]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v51[4]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v52[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v53; // [rsp+80h] [rbp-80h]
  __int128 v54; // [rsp+88h] [rbp-78h]
  __int64 (__fastcall **v55)(); // [rsp+A0h] [rbp-60h] BYREF
  _QWORD *v56; // [rsp+A8h] [rbp-58h]
  __int64 v57; // [rsp+B0h] [rbp-50h] BYREF
  __m128i v58; // [rsp+B8h] [rbp-48h] BYREF
  unsigned __int64 v59; // [rsp+C8h] [rbp-38h]

  v47 = a5;
  v59 = __readfsqword(0x28u);
  v49 = a4;
  sub_123FE0((__int64)v50, (__int64)a3, (__int64)a4, 1);
  v45 = (__int64 *)&v55;
  sub_123FE0((__int64)&v55, (__int64)a3, (__int64)v49, 256);
  v48 = &a1[1].m128i_i64[1];
  sub_60E90(&a1[1].m128i_i64[1], (__int64 *)&v55);
  v8 = a1[2].m128i_i64[1];
  v9 = v57;
  v57 = 0;
  v10 = _mm_loadu_si128(&v58);
  v58 = 0;
  if ( v8 )
  {
    a1[3].m128i_i64[0] = 0;
    v44 = v10;
    qfree();
    v11 = v57;
    a1[2].m128i_i64[1] = v9;
    a1[3] = _mm_load_si128(&v44);
    if ( v11 )
    {
      v58.m128i_i64[0] = 0;
      qfree();
    }
  }
  else
  {
    a1[2].m128i_i64[1] = v9;
    a1[3] = v10;
  }
  qfree();
  sub_60C00(v50, v48, v12, v13, v14, v15);
  v44.m128i_i64[0] = (__int64)&a1[2].m128i_i64[1];
  sub_313AE0(v51, &a1[2].m128i_u64[1]);
  if ( a1[2].m128i_i64[1] )
  {
    a1[3].m128i_i64[0] = 0;
    qfree();
    a1[2].m128i_i64[1] = 0;
    a1[3].m128i_i64[1] = 0;
  }
  if ( sub_60EF0(v50, a1->m128i_i32[0]) )
    goto LABEL_36;
  if ( !a1[4].m128i_i8[0] || v47 == 1 )
    goto LABEL_9;
  v28 = a1->m128i_i32[2];
  v29 = a1->m128i_i32[1];
  v55 = nullptr;
  v56 = nullptr;
  sub_60440(v45, v29, v28);
  v57 = 0;
  v58 = 0;
  if ( (unsigned __int8)sub_60D40(v50, v45) )
  {
    if ( !v57 )
    {
LABEL_43:
      qfree();
      a1[4].m128i_i8[0] = 0;
      goto LABEL_9;
    }
LABEL_42:
    v58.m128i_i64[0] = 0;
    qfree();
    goto LABEL_43;
  }
  if ( (unsigned __int8)sub_3142F0(v51, &v57) )
  {
    if ( !v57 )
      goto LABEL_43;
    goto LABEL_42;
  }
  if ( v57 )
  {
    v58.m128i_i64[0] = 0;
    qfree();
  }
  qfree();
LABEL_9:
  if ( *(_BYTE *)(a2 + 32) != 1 )
    sub_2180A0();
  if ( a1->m128i_i32[0] == *(_DWORD *)(a2 + 24) )
  {
    v32 = (_QWORD *)a1[1].m128i_i64[0];
    if ( (unsigned __int8)sub_60DE0(v32, v48) )
    {
      if ( (unsigned __int8)sub_313DC0(v44.m128i_i64[0], v32 + 2) )
        goto LABEL_56;
    }
  }
  v16 = *v49;
  if ( (_DWORD)v16 == 61 )
  {
    if ( !sub_60EF0(v48, a1->m128i_i32[0]) )
    {
      v16 = *v49;
      goto LABEL_12;
    }
LABEL_36:
    v25 = 0;
    goto LABEL_32;
  }
LABEL_12:
  if ( (unsigned int)(v16 - 8) > 1 )
  {
LABEL_37:
    if ( (unsigned int)v16 <= 0x29 )
    {
      v27 = 0x3FF60000040LL;
      if ( _bittest64(&v27, v16) )
        goto LABEL_31;
    }
  }
  else
  {
    v17 = v49;
    while ( *((_BYTE *)v17 + 32) == 4 )
    {
      v17 = *((unsigned int **)v17 + 5);
      v16 = *v17;
      if ( (unsigned int)(v16 - 8) > 1 )
        goto LABEL_37;
    }
  }
  if ( !a1[4].m128i_i8[0] )
  {
LABEL_29:
    if ( (unsigned int)sub_610E0((__int64)v48) == 1 && *v49 == 19 )
    {
      v30 = *((_QWORD *)v49 + 2);
      if ( v30 )
      {
        if ( *(_BYTE *)(v30 + 64) == 1 && v49[18] == *(_DWORD *)(v30 + 72) )
        {
          if ( sub_11AE80(*((unsigned int **)v49 + 2)) )
          {
            v31 = v45;
            sub_123FE0((__int64)v45, (__int64)a3, v30, 256);
            sub_218390(v48, (__int64)v31);
            sub_90100((__int64)v31);
            if ( a1[2].m128i_i64[1] )
            {
              a1[3].m128i_i64[0] = 0;
              qfree();
              a1[2].m128i_i64[1] = 0;
              a1[3].m128i_i64[1] = 0;
            }
          }
        }
      }
    }
    if ( v47 == 1 && a1[4].m128i_i8[0] && 2 * a1->m128i_i32[2] == (unsigned int)sub_610E0((__int64)v48) )
    {
LABEL_56:
      v25 = 1;
      goto LABEL_32;
    }
LABEL_31:
    v25 = 3;
    goto LABEL_32;
  }
  v46 = sub_60F20(v48, 0);
  v18 = a1->m128i_i32[0];
  v19 = a1->m128i_i32[2];
  v20 = a1->m128i_i32[1];
  v52[0] = 0;
  v44.m128i_i32[0] = v18;
  v52[1] = 0;
  sub_60440(v52, v20, v19);
  v21 = a3[7];
  v53 = 0;
  v54 = 0;
  v22 = (char *)sub_125710((__int64)a3, v52, v21, 0, nullptr, 0, 0x101u);
  v24 = v22;
  if ( v22 && *(_DWORD *)v22 != 61 )
  {
    if ( v47 != 1 )
    {
      v40 = *(_QWORD *)(a3[60] + 112LL);
      v41 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, __int64))(*(_QWORD *)v40 + 176LL))(
              v40,
              a1->m128i_u32[1],
              a1->m128i_u32[2],
              v23,
              v39);
      if ( v41 != -1 )
      {
        that = next_that();
        if ( (unsigned __int8)sub_32A5F0(v45, v40, v41, a3[5], that, a3[5]) )
        {
          if ( !*(_BYTE *)(a3[60] + 145LL) )
            goto LABEL_25;
          v34 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v40 + 176LL))(
                  v40,
                  a1->m128i_u32[0],
                  a1->m128i_u32[2]);
          if ( v34 == -1
            || (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, __int64 (__fastcall **)()))(*(_QWORD *)v40 + 240LL))(
                 v40,
                 v34,
                 v55) != 1 )
          {
            goto LABEL_25;
          }
        }
      }
      if ( (v47 & 2) == 0 )
      {
LABEL_22:
        if ( (*(_DWORD *)v24 == 4 || *(_DWORD *)v24 == 67 && *((_DWORD *)v24 + 9) == *((_DWORD *)v24 + 17))
          && (unsigned __int8)sub_11C340(v24 + 32, v45, 0)
          && !v55 )
        {
          goto LABEL_65;
        }
        if ( (a1->m128i_i8[12] & 4) == 0 )
        {
          v35 = a3[7];
          v36 = a1->m128i_i32[2];
          v55 = nullptr;
          v37 = a1->m128i_i32[0];
          v56 = nullptr;
          v43 = v35;
          sub_60440(v45, v37, v36);
          v57 = 0;
          v58 = 0;
          v38 = (_DWORD *)sub_125710((__int64)a3, v45, v43, 0, nullptr, 0, 0x101u);
          if ( v57 )
          {
            v58.m128i_i64[0] = 0;
            qfree();
          }
          qfree();
          if ( v38 )
          {
            if ( *v38 == *(_DWORD *)v24 && (unsigned int)(*v38 - 12) <= 1 )
            {
LABEL_81:
              v25 = 2;
              goto LABEL_61;
            }
          }
        }
LABEL_25:
        if ( v44.m128i_i32[0] == v46 )
        {
LABEL_26:
          if ( v53 )
          {
            *(_QWORD *)&v54 = 0;
            qfree();
          }
          qfree();
          goto LABEL_29;
        }
LABEL_64:
        a1[4].m128i_i8[0] = 0;
        goto LABEL_65;
      }
      v42 = (unsigned __int8)(*(_BYTE *)(a3[60] + 145LL) ^ (v44.m128i_i32[0] != v46)) | 0xE;
      if ( (unsigned __int8)sub_A7C90((__int64)a3, v49, (int)v49 + 64, v42) )
        goto LABEL_81;
      v56 = a3;
      v58.m128i_i16[0] = 257;
      v57 = v42;
      v55 = off_4CC8E0;
      v58.m128i_i8[2] = 0;
      if ( !(unsigned __int8)sub_A6F70((__int64)v45, (__int64)v49) )
      {
        if ( v58.m128i_i8[2] && (a1->m128i_i8[12] & 4) == 0 )
          goto LABEL_81;
        goto LABEL_22;
      }
    }
LABEL_65:
    v25 = 1;
    goto LABEL_61;
  }
  if ( v44.m128i_i32[0] == v46 )
    goto LABEL_26;
  v25 = 0;
  if ( v47 != 1 )
    goto LABEL_64;
LABEL_61:
  if ( v53 )
  {
    *(_QWORD *)&v54 = 0;
    qfree();
  }
  qfree();
LABEL_32:
  if ( v51[0] )
  {
    v51[1] = 0;
    qfree();
  }
  qfree();
  return v25;
}

