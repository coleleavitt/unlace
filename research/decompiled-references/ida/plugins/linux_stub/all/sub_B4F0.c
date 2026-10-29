__int64 __fastcall sub_B4F0(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  bool v9; // cc
  const char *v10; // rbp
  size_t v11; // r12
  __int64 v12; // rax
  _BYTE *v13; // r10
  size_t v14; // rax
  size_t v15; // r9
  __int64 v16; // r11
  unsigned __int64 v17; // r8
  size_t v18; // r9
  unsigned __int64 v19; // r10
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rax
  struct _Unwind_Exception *v25; // rbx
  __int64 v26; // [rsp+8h] [rbp-B0h]
  __int64 v27; // [rsp+10h] [rbp-A8h]
  __int64 v28; // [rsp+18h] [rbp-A0h]
  __int64 v29; // [rsp+20h] [rbp-98h]
  unsigned int v30; // [rsp+2Ch] [rbp-8Ch]
  void *src; // [rsp+30h] [rbp-88h]
  size_t v32; // [rsp+38h] [rbp-80h]
  __int64 v33; // [rsp+40h] [rbp-78h]
  _BYTE *v34; // [rsp+48h] [rbp-70h]
  __int64 v35; // [rsp+50h] [rbp-68h]
  __int128 v36; // [rsp+58h] [rbp-60h]
  _BYTE v37[5]; // [rsp+73h] [rbp-45h] BYREF
  unsigned __int64 v38; // [rsp+78h] [rbp-40h]

  v9 = a1[133] <= 1u;
  v26 = a2;
  v27 = a3;
  v28 = a4;
  v29 = a5;
  v30 = a6;
  v38 = __readfsqword(0x28u);
  if ( v9 )
    return sub_1FB40(a1, v26, v27, v28, v29, v30, a7, a8, a9);
  v10 = (const char *)a1[132];
  v35 = 0;
  v36 = 0;
  if ( v10 )
  {
    v11 = strlen(v10);
    if ( HIDWORD(v11) )
    {
      if ( !under_debugger )
      {
        v25 = (struct _Unwind_Exception *)interr();
        _Unwind_Resume(v25);
      }
      BUG();
    }
  }
  else
  {
    v11 = 0;
    v10 = "";
  }
  src = v37;
  v12 = pack_dd();
  v13 = v37;
  v14 = v12 - (_QWORD)v37;
  v15 = v14;
  if ( v14 )
  {
    v16 = v36;
    v17 = v36 + v14;
    if ( __CFADD__((_QWORD)v36, v14) )
    {
      if ( (unsigned __int64)v36 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v36 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v36 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_9:
        memcpy((void *)(v16 + v35), v13, v15);
        goto LABEL_10;
      }
      v17 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v21 = v35;
    v22 = v36;
    if ( *((_QWORD *)&v36 + 1) < v17 )
    {
      v34 = src;
      v32 = v15;
      src = (void *)v17;
      v35 = qvector_reserve();
      v21 = v35;
      v13 = v34;
      v22 = v36;
      v16 = v36;
      v15 = v32;
      v17 = (unsigned __int64)src;
    }
    v34 = v13;
    v33 = v16;
    v32 = v15;
    src = (void *)v17;
    memset((void *)(v21 + v22), 0, v17 - v22);
    v15 = v32;
    v16 = v33;
    v13 = v34;
    *(_QWORD *)&v36 = src;
    goto LABEL_9;
  }
LABEL_10:
  if ( v11 )
  {
    v18 = v36;
    v19 = v11 + v36;
    if ( __CFADD__(v11, (_QWORD)v36) )
    {
      if ( (unsigned __int64)v36 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v36 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v36 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_15:
        memcpy((void *)(v18 + v35), v10, v11);
        goto LABEL_16;
      }
      v19 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v23 = v35;
    v24 = v36;
    if ( *((_QWORD *)&v36 + 1) < v19 )
    {
      src = (void *)v19;
      v35 = qvector_reserve();
      v23 = v35;
      v18 = v36;
      v24 = v36;
      v19 = (unsigned __int64)src;
    }
    v32 = v18;
    src = (void *)v19;
    memset((void *)(v23 + v24), 0, v19 - v24);
    v18 = v32;
    *(_QWORD *)&v36 = src;
    goto LABEL_15;
  }
LABEL_16:
  src = a1 + 108;
  if ( !(unsigned int)sub_25BD0(a1 + 108, 1, v35, v36, 0, 0) )
    sub_B430((__int64)src, (__int64)"libunwind: error while sending path to remote debugger\n");
  if ( v35 )
  {
    *(_QWORD *)&v36 = 0;
    qfree();
  }
  return sub_1FB40(a1, v26, v27, v28, v29, v30, a7, a8, a9);
}

