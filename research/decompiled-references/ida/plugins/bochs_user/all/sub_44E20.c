__int64 __fastcall sub_44E20(
        __int64 a1,
        double *a2,
        __int64 a3,
        int a4,
        unsigned __int16 a5,
        unsigned __int8 a6,
        __int64 a7,
        _QWORD *a8)
{
  __int64 (__fastcall ***v11)(_QWORD, _UNKNOWN ***); // rdi
  unsigned int v12; // ebx
  __int64 v13; // rdx
  _QWORD **v14; // rdi
  _QWORD **v15; // r15
  _QWORD *v16; // r12
  unsigned int ***v18; // rax
  __int64 v21; // [rsp+20h] [rbp-90h]
  __int64 v22; // [rsp+38h] [rbp-78h] BYREF
  _UNKNOWN **v23; // [rsp+40h] [rbp-70h] BYREF
  _QWORD **v24; // [rsp+48h] [rbp-68h]
  __int128 v25; // [rsp+50h] [rbp-60h]
  __int64 v26; // [rsp+60h] [rbp-50h]
  unsigned __int64 v27; // [rsp+78h] [rbp-38h]

  v11 = *(__int64 (__fastcall ****)(_QWORD, _UNKNOWN ***))(a1 + 48);
  v27 = __readfsqword(0x28u);
  v23 = &off_71690;
  v24 = nullptr;
  v26 = 0;
  v25 = 0;
  v21 = (**v11)(v11, &v23);
  v12 = sub_3C370(*(_QWORD *)(a1 + 48), a2, (a3 + 4095) & 0xFFFFFFFFFFFFF000LL, a4, a5, a6, a7, &v22, 0);
  if ( !v12 )
  {
    if ( a4 == 64 || (v18 = (unsigned int ***)sub_26200((__int64)&v23), !(unsigned __int8)sub_440A0(a1, v18)) )
    {
      if ( !a8 )
        goto LABEL_5;
    }
    else
    {
      *(_BYTE *)(v22 + 105) = (a5 & 1) == 0 ? 4 : 6;
      if ( !a8 )
        goto LABEL_5;
    }
    *a8 = v22;
  }
LABEL_5:
  (***(void (__fastcall ****)(_QWORD, __int64))(a1 + 48))(*(_QWORD *)(a1 + 48), v21);
  v13 = v25;
  v14 = v24;
  v23 = &off_71690;
  v15 = v24;
  if ( 8LL * (_QWORD)v25 )
  {
    do
    {
      v16 = *v15;
      if ( *v15 )
      {
        if ( v16[1] )
        {
          v16[2] = 0;
          qfree();
        }
        operator delete(v16, 0x20u);
        v14 = v24;
        v13 = v25;
      }
      ++v15;
    }
    while ( v15 != &v14[v13] );
  }
  if ( v14 )
  {
    *(_QWORD *)&v25 = 0;
    qfree();
  }
  else
  {
    v26 = 0;
  }
  return v12;
}

