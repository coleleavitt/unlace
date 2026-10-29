__int64 *__fastcall sub_185BD0(__int64 a1, __int64 a2, __int64 a3, char a4, int a5, int a6, double a7, __m128 a8)
{
  bool v10; // zf
  __int64 *i; // rbx
  int v12; // r8d
  int v13; // r9d
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  char v18; // al
  unsigned __int64 *v19; // rdi
  char v20; // al
  __int64 v21; // rax
  int v22; // [rsp+10h] [rbp-128h]
  __int64 v24; // [rsp+18h] [rbp-120h]
  __int64 v25; // [rsp+28h] [rbp-110h]
  _QWORD v26[2]; // [rsp+30h] [rbp-108h] BYREF
  __int64 v27[2]; // [rsp+40h] [rbp-F8h] BYREF
  __int64 v28; // [rsp+50h] [rbp-E8h] BYREF
  __int128 v29; // [rsp+58h] [rbp-E0h]
  __int64 v30[2]; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v31; // [rsp+80h] [rbp-B8h] BYREF
  __int128 v32; // [rsp+88h] [rbp-B0h]
  __int64 v33[2]; // [rsp+A0h] [rbp-98h] BYREF
  __int64 *v34; // [rsp+B0h] [rbp-88h] BYREF
  __int64 v35; // [rsp+B8h] [rbp-80h]
  __int64 v36; // [rsp+D0h] [rbp-68h] BYREF
  int v37; // [rsp+D8h] [rbp-60h]
  unsigned __int64 *v38; // [rsp+E0h] [rbp-58h] BYREF
  __int64 v39; // [rsp+E8h] [rbp-50h]
  unsigned __int64 v40; // [rsp+F8h] [rbp-40h]

  v40 = __readfsqword(0x28u);
  v10 = *(_BYTE *)a3 == 4;
  v29 = 0;
  v27[0] = 0;
  v27[1] = 0;
  v28 = 0;
  if ( v10 )
    sub_123EA0(a1, v27, *(_QWORD *)(a3 + 8) + 48LL, 0, 0xFFFF0000, 0.0);
  else
    sub_127FE0(a1, v27, a3, 0, a5, a6, 0.0, a8);
  v25 = *(_QWORD *)(a1 + 64);
  v24 = *(_QWORD *)(v25 + 1504);
  v22 = 0;
  for ( i = (__int64 *)sub_1229A0(*(_QWORD *)(a2 + 8)); ; i = (__int64 *)sub_1229D0(*(_QWORD *)(a2 + 16)) )
  {
    v30[0] = 0;
    v30[1] = 0;
    v31 = 0;
    v32 = 0;
    if ( i )
      break;
LABEL_24:
    qfree((__int64)i);
    if ( v22 == 1 )
    {
      i = nullptr;
      goto LABEL_26;
    }
    v22 = 1;
  }
  while ( 1 )
  {
    v26[1] = 0;
    v26[0] = 0xFFFFFFFF00000000LL;
    sub_127A20((__int64)v33, a1, (__int64)i, 1, v12, v13, 0.0, a8);
    if ( (unsigned __int8)sub_184280((unsigned __int64)v26, a1, (__int64)i, 0, a4, (__m128i)0LL, a8) )
      break;
    if ( *(_BYTE *)a3 != 4 )
      goto LABEL_12;
    sub_124680((__int64)&v36, a1, (__int64)i, 1, 0.0, a8);
    if ( (unsigned __int8)sub_64780(&v36, v27) )
    {
      v19 = v38;
      if ( !v38 )
        goto LABEL_35;
      goto LABEL_34;
    }
    v20 = sub_318470(&v38, (__int64)&v28);
    v19 = v38;
    if ( v20 )
    {
      if ( !v38 )
      {
LABEL_35:
        qfree(v36);
LABEL_18:
        if ( v34 )
        {
          v35 = 0;
          qfree((__int64)v34);
        }
        qfree(v33[0]);
        sub_11CDA0((__int64)v26);
LABEL_21:
        if ( v31 )
        {
          *(_QWORD *)&v32 = 0;
          qfree(v31);
        }
        i = (__int64 *)v30[0];
        goto LABEL_24;
      }
LABEL_34:
      v39 = 0;
      qfree((__int64)v19);
      goto LABEL_35;
    }
    if ( v38 )
    {
      v39 = 0;
      qfree((__int64)v38);
    }
    qfree(v36);
LABEL_16:
    if ( *(_BYTE *)a3 == 4 )
    {
      if ( (unsigned __int8)sub_64780(v33, v27) )
        goto LABEL_18;
      v18 = sub_318470((unsigned __int64 **)&v34, (__int64)&v28);
LABEL_30:
      if ( v18 )
        goto LABEL_18;
      goto LABEL_13;
    }
LABEL_12:
    sub_64280(v30, v33, 0.0);
    sub_316CB0(&v31, &v34, v15, v16);
    if ( (unsigned __int8)sub_64820(v27, v30) )
    {
      v18 = sub_317F40(&v31, (__int64)&v28);
      goto LABEL_30;
    }
LABEL_13:
    if ( v22 )
      v14 = sub_1229D0(i[2]);
    else
      v14 = sub_1229A0(i[1]);
    i = (__int64 *)v14;
    if ( v34 )
    {
      v35 = 0;
      qfree((__int64)v34);
    }
    qfree(v33[0]);
    sub_11CDA0((__int64)v26);
    if ( !i )
      goto LABEL_21;
  }
  if ( (unsigned int)sub_183400(v24, a3, (__int64)v26, (__m128i)0LL, a8) == -1 )
    goto LABEL_16;
  if ( (unsigned __int8)sub_64780(v33, v30) )
    goto LABEL_18;
  if ( (unsigned __int8)sub_318470((unsigned __int64 **)&v34, (__int64)&v31) )
    goto LABEL_18;
  if ( *(_QWORD *)(*(_QWORD *)(v25 + 1344) + 8LL) )
  {
    v21 = i[3];
    v37 = 0;
    v36 = v21;
    if ( (sub_137670(v25, (__int64)&v36) & 7) != 0 )
      goto LABEL_18;
  }
  if ( v34 )
  {
    v35 = 0;
    qfree((__int64)v34);
  }
  qfree(v33[0]);
  sub_11CDA0((__int64)v26);
  if ( v31 )
  {
    *(_QWORD *)&v32 = 0;
    qfree(v31);
  }
  qfree(v30[0]);
LABEL_26:
  if ( v28 )
  {
    *(_QWORD *)&v29 = 0;
    qfree(v28);
  }
  qfree(v27[0]);
  return i;
}

