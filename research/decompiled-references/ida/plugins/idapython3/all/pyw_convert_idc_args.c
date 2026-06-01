__int64 __fastcall pyw_convert_idc_args(__int64 a1, const char *a2, __int64 *a3, unsigned int a4, __int64 *a5)
{
  __int64 v7; // rbx
  __int64 v8; // r12
  __int64 *v9; // rdi
  __int64 v10; // r14
  __int64 *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 *v16; // rdi
  __int64 v17; // rax
  unsigned __int64 v18; // r12
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 **v25; // r15
  __int64 v26; // r12
  _QWORD *v27; // r13
  __int64 *v28; // rdi
  __int64 *v29; // rdi
  bool v30; // cf
  __int64 v31; // rax
  __int64 v32; // rax
  unsigned int v33; // ebx
  __int64 v35; // rax
  unsigned __int64 v36; // rbx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __m128i *v41; // rsi
  __m128i si128; // xmm0
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // r14
  __int64 **v49; // r15
  __int64 v50; // r13
  __int64 v51; // rbx
  _QWORD *v52; // r12
  __int64 *v53; // rdi
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // [rsp+0h] [rbp-88h]
  int v59; // [rsp+10h] [rbp-78h]
  __int64 *v60; // [rsp+20h] [rbp-68h]
  __int64 v61; // [rsp+28h] [rbp-60h]
  __int64 v62; // [rsp+30h] [rbp-58h]
  _QWORD v64[9]; // [rsp+40h] [rbp-48h] BYREF

  v7 = 0;
  v59 = (int)a2;
  v64[1] = __readfsqword(0x28u);
  v8 = a3[1];
  if ( v8 )
  {
    do
    {
      v9 = *(__int64 **)(*a3 + 8 * v7);
      if ( v9 )
      {
        if ( *v9 <= 0 )
          goto LABEL_79;
        (*(void (**)(void))(qword_24798 + 984))();
      }
      ++v7;
    }
    while ( v8 != v7 );
  }
  a3[1] = 0;
  if ( (a4 & 1) != 0 )
  {
    v60 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD))(qword_24798 + 904))((int)a2);
    if ( !v60 )
    {
      if ( a5 )
      {
        v41 = (__m128i *)*a5;
        if ( (unsigned __int64)a5[2] <= 0x30 )
        {
          v56 = qvector_reserve();
          *a5 = v56;
          v41 = (__m128i *)v56;
        }
        si128 = _mm_load_si128((const __m128i *)&xmmword_1D940);
        a5[1] = 49;
        *v41 = si128;
        v41[1] = _mm_load_si128((const __m128i *)&xmmword_1D950);
        v41[2] = _mm_load_si128((const __m128i *)&xmmword_1D960);
        *(_BYTE *)(*a5 + 48) = 0;
      }
      return 0;
    }
    v16 = v60;
    (*(void (__fastcall **)(__int64 *))(qword_24798 + 1008))(v60);
    if ( *v60 <= 0 )
    {
      sub_6C20((__int64)v60, (int)a2, v19, v20, v21, v22, v57);
      goto LABEL_84;
    }
    (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v60);
    if ( (int)a2 <= 0 )
    {
LABEL_51:
      (*(void (__fastcall **)(__int64 *))(qword_24798 + 1008))(v60);
      v35 = a3[1];
      v36 = a3[2];
      if ( v36 < v35 + 1 )
        goto LABEL_60;
      *(_QWORD *)(*a3 + 8 * v35) = v60;
      goto LABEL_53;
    }
  }
  else
  {
    v60 = nullptr;
    if ( (int)a2 <= 0 )
      return 1;
  }
  v57 = a1;
  v10 = 0;
  do
  {
    a2 = (const char *)v64;
    v64[0] = 0;
    if ( (int)idcvar_to_pyvar(v57, v64, a4) <= 0 )
    {
      if ( a5 )
      {
        a2 = "arg#%d has wrong type %d";
        sub_14130(a5);
      }
      v16 = (__int64 *)v64[0];
      if ( !v64[0] )
        goto LABEL_44;
      if ( *(__int64 *)v64[0] > 0 )
      {
        (*(void (**)(void))(qword_24798 + 984))();
LABEL_44:
        v33 = 0;
        goto LABEL_45;
      }
LABEL_84:
      sub_6C20((__int64)v16, (int)a2, v12, v13, v14, v15, v57);
LABEL_85:
      sub_6C20((__int64)v16, (int)a2, v44, v45, v46, v47, v57);
      goto LABEL_86;
    }
    v11 = (__int64 *)v64[0];
    if ( (a4 & 1) == 0 )
    {
      if ( v64[0] )
      {
        (*(void (__fastcall **)(_QWORD))(qword_24798 + 1008))(v64[0]);
        v17 = a3[1];
        v18 = a3[2];
        if ( v18 >= v17 + 1 )
        {
          *(_QWORD *)(*a3 + 8 * v17) = v11;
LABEL_21:
          (*(void (__fastcall **)(__int64 *))(qword_24798 + 1008))(v11);
          ++a3[1];
          if ( *v11 <= 0 )
            goto LABEL_81;
          (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v11);
          goto LABEL_12;
        }
      }
      else
      {
        v32 = a3[1];
        v18 = a3[2];
        if ( v18 >= v32 + 1 )
        {
          v12 = *a3;
          *(_QWORD *)(*a3 + 8 * v32) = 0;
LABEL_36:
          ++a3[1];
          goto LABEL_12;
        }
      }
      LODWORD(a2) = 0;
      v23 = qvector_reserve();
      v24 = a3[2];
      v25 = (__int64 **)*a3;
      a3[2] = v18;
      v61 = v23;
      v62 = v24;
      v26 = a3[1] - 1;
      if ( v26 >= 0 )
      {
        v27 = (_QWORD *)v23;
        do
        {
          v28 = *v25;
          *v27 = *v25;
          if ( v28 )
            (*(void (__fastcall **)(__int64 *, _QWORD))(qword_24798 + 1008))(v28, 0);
          v29 = *v25;
          if ( *v25 )
          {
            if ( *v29 <= 0 )
            {
              if ( !under_debugger )
              {
                interr();
LABEL_75:
                if ( !under_debugger )
                {
                  interr();
                  goto LABEL_77;
                }
              }
LABEL_88:
              BUG();
            }
            (*(void (__fastcall **)(__int64 *, _QWORD))(qword_24798 + 984))(v29, 0);
          }
          ++v25;
          ++v27;
          v30 = v26-- == 0;
        }
        while ( !v30 );
      }
      qfree();
      v13 = v61;
      a3[2] = v62;
      v31 = a3[1];
      *a3 = v61;
      *(_QWORD *)(v61 + 8 * v31) = v11;
      if ( !v11 )
        goto LABEL_36;
      goto LABEL_21;
    }
    if ( v64[0] )
    {
      (*(void (__fastcall **)(_QWORD))(qword_24798 + 1008))(v64[0]);
      v11 = (__int64 *)v64[0];
    }
    LODWORD(a2) = v10;
    if ( (*(unsigned int (__fastcall **)(__int64 *, __int64, __int64 *))(qword_24798 + 912))(v60, v10, v11) )
    {
LABEL_77:
      if ( under_debugger )
        goto LABEL_88;
      interr();
LABEL_79:
      if ( under_debugger )
        goto LABEL_88;
      interr();
LABEL_81:
      if ( !under_debugger )
        interr();
      goto LABEL_88;
    }
LABEL_12:
    v16 = (__int64 *)v64[0];
    if ( v64[0] )
    {
      if ( *(__int64 *)v64[0] <= 0 )
        goto LABEL_75;
      (*(void (**)(void))(qword_24798 + 984))();
    }
    v57 += 32;
    ++v10;
  }
  while ( v59 > (int)v10 );
  v33 = 1;
  if ( (a4 & 1) == 0 )
  {
LABEL_45:
    if ( !v60 )
      return v33;
    goto LABEL_46;
  }
  if ( v60 )
    goto LABEL_51;
  v55 = a3[1];
  v36 = a3[2];
  if ( v36 >= v55 + 1 )
  {
    *(_QWORD *)(*a3 + 8 * v55) = 0;
    goto LABEL_69;
  }
LABEL_60:
  LODWORD(a2) = 0;
  v43 = qvector_reserve();
  v48 = a3[2];
  v49 = (__int64 **)*a3;
  a3[2] = v36;
  v50 = v43;
  v51 = a3[1] - 1;
  if ( v51 >= 0 )
  {
    v52 = (_QWORD *)v43;
    do
    {
      v53 = *v49;
      *v52 = *v49;
      if ( v53 )
        (*(void (__fastcall **)(__int64 *, _QWORD))(qword_24798 + 1008))(v53, 0);
      v16 = *v49;
      if ( *v49 )
      {
        if ( *v16 <= 0 )
          goto LABEL_85;
        (*(void (__fastcall **)(__int64 *, _QWORD))(qword_24798 + 984))(v16, 0);
      }
      ++v49;
      ++v52;
      v30 = v51-- == 0;
    }
    while ( !v30 );
  }
  qfree();
  v54 = a3[1];
  *a3 = v50;
  a3[2] = v48;
  *(_QWORD *)(v50 + 8 * v54) = v60;
  if ( v60 )
  {
LABEL_53:
    (*(void (__fastcall **)(__int64 *))(qword_24798 + 1008))(v60);
    ++a3[1];
    if ( *v60 <= 0 )
      sub_6C20((__int64)v60, (int)a2, v37, v38, v39, v40, v57);
    v16 = v60;
    v33 = 1;
    (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v60);
LABEL_46:
    if ( *v60 > 0 )
    {
      (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v60);
      return v33;
    }
LABEL_86:
    sub_6C20((__int64)v16, (int)a2, v12, v13, v14, v15, v57);
  }
LABEL_69:
  ++a3[1];
  return 1;
}

