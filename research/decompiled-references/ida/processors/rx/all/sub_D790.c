__int64 __fastcall sub_D790(
        __int64 a1,
        __int64 *a2,
        _QWORD *a3,
        int a4,
        __int64 a5,
        __int64 a6,
        char a7,
        int a8,
        __int64 a9,
        __int16 a10,
        int a11,
        __int64 a12,
        __int64 a13,
        int a14,
        int a15,
        int a16,
        __int64 a17)
{
  _QWORD **v19; // rbx
  unsigned int v20; // ebp
  _QWORD **v21; // rbx
  void *v22; // rdi
  void *v24; // rdi
  __int64 v25; // rax
  __int64 v26; // [rsp+0h] [rbp-E8h] BYREF
  __m128i v27; // [rsp+8h] [rbp-E0h]
  char v28; // [rsp+18h] [rbp-D0h]
  int v29; // [rsp+1Ch] [rbp-CCh]
  __int128 v30; // [rsp+20h] [rbp-C8h]
  __int64 v31; // [rsp+30h] [rbp-B8h]
  __int64 v32; // [rsp+38h] [rbp-B0h]
  int v33; // [rsp+40h] [rbp-A8h]
  int v34; // [rsp+50h] [rbp-98h] BYREF
  void *v35; // [rsp+58h] [rbp-90h]
  int *v36; // [rsp+60h] [rbp-88h]
  int *v37; // [rsp+68h] [rbp-80h]
  __int64 v38; // [rsp+70h] [rbp-78h]
  int v39; // [rsp+80h] [rbp-68h] BYREF
  void *v40; // [rsp+88h] [rbp-60h]
  int *v41; // [rsp+90h] [rbp-58h]
  int *v42; // [rsp+98h] [rbp-50h]
  __int64 v43; // [rsp+A0h] [rbp-48h]
  char v44; // [rsp+A8h] [rbp-40h] BYREF
  unsigned __int64 v45; // [rsp+B8h] [rbp-30h]

  v45 = __readfsqword(0x28u);
  v28 = 0;
  v36 = &v34;
  v37 = &v34;
  v27 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v44, (__m128i)(unsigned __int64)&v26);
  v26 = a9;
  v29 = 0;
  v31 = a9;
  v32 = -1;
  v33 = 0;
  v34 = 0;
  v35 = nullptr;
  v38 = 0;
  v39 = 0;
  v40 = nullptr;
  v41 = &v39;
  v42 = &v39;
  v30 = 0;
  v43 = 0;
  *(_QWORD *)&v30 = get_func();
  if ( !(_QWORD)v30 )
  {
    v25 = getseg();
    *((_QWORD *)&v30 + 1) = v25;
    if ( !v25 )
    {
      if ( under_debugger )
        BUG();
      interr();
LABEL_23:
      a4 = HIWORD(a12);
      goto LABEL_4;
    }
  }
  while ( 1 )
  {
LABEL_4:
    if ( !(unsigned int)sub_CF20((__int64)&v26) || (int)decode_insn() <= 0 )
    {
LABEL_17:
      v19 = (_QWORD **)v40;
      v20 = 0;
      if ( !v40 )
        goto LABEL_14;
      goto LABEL_18;
    }
    if ( a10 == 68 && BYTE1(a17) == 1 && a4 == HIWORD(a17) )
    {
      if ( BYTE1(a12) == 1 )
        goto LABEL_23;
      if ( BYTE1(a12) == 5 )
        break;
    }
    if ( (unsigned __int8)sub_8370(a1, (__int64)&a7, a4) )
      goto LABEL_17;
  }
  *a2 = a13 & *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
  if ( a3 )
    *a3 = a9;
  v19 = (_QWORD **)v40;
  v20 = 1;
  if ( v40 )
  {
    do
    {
LABEL_18:
      sub_BC50(v19[3]);
      v24 = v19;
      v19 = (_QWORD **)v19[2];
      operator delete(v24, 0x30u);
    }
    while ( v19 );
  }
LABEL_14:
  v21 = (_QWORD **)v35;
  if ( v35 )
  {
    do
    {
      sub_BE20(v21[3]);
      v22 = v21;
      v21 = (_QWORD **)v21[2];
      operator delete(v22, 0x30u);
    }
    while ( v21 );
  }
  return v20;
}

