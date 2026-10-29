unsigned __int64 __fastcall sub_3B03C0(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        double a4,
        double a5,
        __m128i a6,
        double a7)
{
  __int64 v7; // rbx
  const char *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // r15
  __int64 *func; // rbp
  const char *v15; // rsi
  __int64 *v16; // rsi
  __int64 *v17; // rbp
  __int64 v19; // rdx
  __int64 v20; // r13
  __int64 v21; // r15
  __int64 *v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // r13
  __int64 v27; // r15
  __int64 *v28; // rax
  __int64 v29; // rdi
  __int64 v30; // rdi
  __int64 v31; // rdi
  __int64 v33; // [rsp+8h] [rbp-B0h]
  unsigned int v35; // [rsp+1Ch] [rbp-9Ch]
  __int64 *v36; // [rsp+28h] [rbp-90h] BYREF
  const char *v37; // [rsp+30h] [rbp-88h] BYREF
  __int64 v38; // [rsp+38h] [rbp-80h]
  __int64 *v39; // [rsp+50h] [rbp-68h] BYREF
  __int64 v40; // [rsp+58h] [rbp-60h]
  __int128 v41; // [rsp+60h] [rbp-58h]
  unsigned __int64 v42; // [rsp+78h] [rbp-40h]

  v42 = __readfsqword(0x28u);
  v7 = *(_QWORD *)(a3 + 8);
  if ( !v7 )
    return v42 - __readfsqword(0x28u);
  v35 = *(_QWORD *)(a3 + 8);
  (*(void (__fastcall **)(const char **, __int64 *, _QWORD, __int64, _QWORD))(*a2 + 48))(
    &v37,
    a2,
    **(_QWORD **)a3,
    1,
    (unsigned int)v7);
  v10 = s1;
  if ( v38 )
    v10 = v37;
  sub_137260((__int64)&unk_4190BD, v10);
  if ( (int)v7 <= 0 )
  {
LABEL_37:
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))callui)(24, 10, 0, &callui);
    v31 = (__int64)v37;
    if ( v37 )
      goto LABEL_38;
    return v42 - __readfsqword(0x28u);
  }
  v11 = (unsigned int)(v7 - 1);
  v12 = 0;
  v33 = v11;
  while ( !(unsigned __int8)((__int64 (__fastcall *)(__int64))callui)(27) )
  {
    v13 = *(_QWORD *)(*(_QWORD *)a3 + 8 * v12);
    func = (__int64 *)get_func();
    if ( !func )
      goto LABEL_35;
    if ( v12 )
    {
      (*(void (__fastcall **)(__int64 **, __int64 *, __int64, _QWORD, _QWORD))(*a2 + 48))(
        &v39,
        a2,
        v13,
        (unsigned int)(v12 + 1),
        v35);
      v15 = s1;
      if ( v40 )
        v15 = (const char *)v39;
      sub_326960((__int64)&unk_4190BD, v15);
      if ( v39 )
      {
        v40 = 0;
        qfree((__int64)v39);
      }
    }
    v39 = func;
    v40 = 0;
    v41 = 0;
    sub_14CDC0((__int64 *)&v36, a1, &v39, nullptr, 1, 0.0, a5, a6, a7);
    v16 = v36;
    if ( v36 )
    {
      a2[8] = (__int64)v36;
      sub_255A80(a2, (__int64)(v16 + 2), 0, 0.0);
      v17 = v36;
      if ( v36 )
      {
        if ( (*((_DWORD *)v36 + 26))-- == 1 )
        {
          sub_258970(v17);
          v19 = v17[23];
          if ( v19 )
          {
            if ( v17[24] )
            {
              v20 = 0;
              v21 = v17[24];
              do
              {
                v22 = (__int64 *)(v19 + 24 * v20);
                v23 = *v22;
                if ( *v22 )
                {
                  v22[1] = 0;
                  qfree(v23);
                  v19 = v17[23];
                }
                ++v20;
              }
              while ( v21 != v20 );
            }
            v17[24] = 0;
            qfree(v19);
          }
          v24 = v17[20];
          if ( v24 )
          {
            v17[21] = 0;
            qfree(v24);
          }
          v25 = v17[16];
          if ( v25 )
          {
            if ( v17[17] )
            {
              v26 = 0;
              v27 = v17[17];
              do
              {
                v28 = (__int64 *)(v25 + 32 * v26);
                v29 = *v28;
                if ( *v28 )
                {
                  v28[1] = 0;
                  qfree(v29);
                  v25 = v17[16];
                }
                ++v26;
              }
              while ( v27 != v26 );
            }
            v17[17] = 0;
            qfree(v25);
          }
          sub_255050((__int64)(v17 + 2), 0.0);
          j__qfree((__int64)v17);
        }
      }
      v30 = v40;
      if ( v40 )
      {
LABEL_34:
        *(_QWORD *)&v41 = 0;
        qfree(v30);
      }
    }
    else
    {
      sub_140140(&v36);
      v30 = v40;
      if ( v40 )
        goto LABEL_34;
    }
LABEL_35:
    if ( v33 == v12 )
      goto LABEL_37;
    ++v12;
  }
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))callui)(24, 10, 0, &callui);
  v31 = (__int64)v37;
  if ( v37 )
  {
LABEL_38:
    v38 = 0;
    qfree(v31);
  }
  return v42 - __readfsqword(0x28u);
}

