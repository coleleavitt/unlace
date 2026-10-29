__int64 __fastcall sub_7810(
        __int64 a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __int64 v10; // r12
  const char *v11; // rcx
  const char *v12; // rdi
  unsigned int v13; // r12d
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __m128 v18; // xmm4
  __m128 v19; // xmm5
  const char *v20; // rax
  __int64 v21; // [rsp+8h] [rbp-20E0h] BYREF
  __int128 v22; // [rsp+10h] [rbp-20D8h]
  const char *v23; // [rsp+28h] [rbp-20C0h] BYREF
  __int128 v24; // [rsp+30h] [rbp-20B8h]
  __int64 v25[512]; // [rsp+48h] [rbp-20A0h] BYREF
  _BYTE v26[4096]; // [rsp+1048h] [rbp-10A0h] BYREF
  int v27; // [rsp+2048h] [rbp-A0h] BYREF
  __int64 v28; // [rsp+2050h] [rbp-98h]
  __int128 v29; // [rsp+2058h] [rbp-90h]
  __int64 v30; // [rsp+2068h] [rbp-80h]
  __int64 v31; // [rsp+2070h] [rbp-78h]
  __int128 v32; // [rsp+2078h] [rbp-70h]
  int v33; // [rsp+2088h] [rbp-60h]
  __int64 v34; // [rsp+2090h] [rbp-58h] BYREF
  __int128 v35; // [rsp+2098h] [rbp-50h]
  __int16 v36; // [rsp+20A8h] [rbp-40h]
  __int64 v37; // [rsp+20B0h] [rbp-38h]
  unsigned __int64 v38; // [rsp+20C0h] [rbp-28h]

  v38 = __readfsqword(0x28u);
  v30 = 40;
  v28 = 0;
  v31 = 0;
  v33 = 0;
  v34 = 0;
  v37 = -1;
  v29 = 0;
  v32 = 0;
  v35 = 0;
  ((void (__fastcall *)(__int64, _QWORD, _QWORD, __int64, __int64, __int64, unsigned int))callui)(
    204,
    0,
    0,
    -1,
    1,
    3,
    (unsigned int)&v21);
  v10 = v22;
  if ( !sub_55A0(v25) )
  {
    if ( getinf_buf(97, v25, 4096) )
    {
      v20 = (const char *)qbasename(v25);
      if ( v20 )
        sub_7750(&v34, (__int64)"Produced from %s", v20);
      set_file_ext(v25, 4096, v25, "sig");
    }
    v27 = 0;
    v36 = 1;
  }
  v11 = "s";
  v23 = nullptr;
  if ( v10 == 1 )
    v11 = "";
  v24 = 0;
  sub_7750(
    (__int64 *)&v23,
    (__int64)"Create .sig file\n"
             "\n"
             "%%/%%*<~F~ile        :f1:1000:60::>\n"
             "<~L~ibrary name:q2::30::>\n"
             "<##Collect functions##~A~ll:R>\n"
             "<~S~elected (%ld function%s):R>3>\n"
             "<##Collisions##~I~gnore:R>\n"
             "<Deal with ~m~anually (edit .exc file):R>4>\n"
             "<#Include only functions that have a valid, user-specified name (eg. no sub_*). Refer to \"is_uname\".#~V~a"
             "lid, user-specified names only:C>>\n"
             "\n",
    v10,
    v11);
  v12 = s1;
  if ( (_QWORD)v24 )
    v12 = v23;
  if ( (int)sub_4CF0((__int64)v12, sub_5250, v25, v25, &v34, &v27, 0.0, (char *)&v27 + 2) <= 0 )
  {
    if ( v23 )
    {
      *(_QWORD *)&v24 = 0;
      qfree(v23);
    }
LABEL_9:
    v13 = 1;
    goto LABEL_10;
  }
  sub_5760(v25);
  set_file_ext(v26, 4096, v25, "pat");
  if ( v23 )
  {
    *(_QWORD *)&v24 = 0;
    qfree(v23);
  }
  if ( qfilesize(v25)
    && (unsigned int)sub_4DC0(
                       0,
                       (__int64)"HIDECANCEL\n%s already exists.\nDo you want to overwrite it?",
                       (__int64)v25,
                       v15,
                       v16,
                       v17,
                       (__m128)0LL,
                       a3,
                       a4,
                       a5,
                       v18,
                       v19,
                       a8,
                       a9) != 1 )
  {
    goto LABEL_9;
  }
  v13 = 0;
  if ( (unsigned __int8)sub_6600(*(_QWORD *)(a1 + 16), (__int64)v25, (__int64)&v21) )
    v13 = (unsigned __int8)sub_5950(*(_QWORD *)(a1 + 16), (__int64)v25);
LABEL_10:
  if ( v21 )
  {
    *(_QWORD *)&v22 = 0;
    qfree(v21);
  }
  if ( v34 )
  {
    *(_QWORD *)&v35 = 0;
    qfree(v34);
  }
  if ( v31 )
  {
    *(_QWORD *)&v32 = 0;
    qfree(v31);
  }
  if ( v28 )
  {
    *(_QWORD *)&v29 = 0;
    qfree(v28);
  }
  return v13;
}

