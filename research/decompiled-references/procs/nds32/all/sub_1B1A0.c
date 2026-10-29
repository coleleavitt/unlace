__int64 __fastcall sub_1B1A0(__int64 a1, __int64 a2, unsigned __int8 a3, double a4, double a5, __m128 a6)
{
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD **v13; // rbx
  unsigned int v14; // ebp
  void *v15; // rdi
  int v17; // [rsp+4h] [rbp-B4h] BYREF
  int *v18; // [rsp+8h] [rbp-B0h] BYREF
  _QWORD v19[2]; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v20; // [rsp+20h] [rbp-98h]
  __int128 v21; // [rsp+28h] [rbp-90h]
  int v22; // [rsp+38h] [rbp-80h]
  __int64 v23; // [rsp+40h] [rbp-78h]
  __int128 v24; // [rsp+48h] [rbp-70h]
  __int64 v25; // [rsp+58h] [rbp-60h] BYREF
  int v26; // [rsp+60h] [rbp-58h] BYREF
  void *v27; // [rsp+68h] [rbp-50h]
  int *v28; // [rsp+70h] [rbp-48h]
  int *v29; // [rsp+78h] [rbp-40h]
  __int64 v30; // [rsp+80h] [rbp-38h]
  __int64 v31; // [rsp+88h] [rbp-30h]
  __int64 v32; // [rsp+90h] [rbp-28h]
  unsigned __int64 v33; // [rsp+98h] [rbp-20h]

  v33 = __readfsqword(0x28u);
  if ( a2 )
  {
    v19[0] = a1;
    v19[1] = a2;
    v28 = &v26;
    v20 = 0;
    v22 = 0;
    v23 = 0;
    v26 = 0;
    v27 = nullptr;
    v29 = &v26;
    v30 = 0;
    v31 = 0;
    v32 = -1;
    v17 = 31;
    v18 = &v17;
    v21 = 0;
    v24 = 0;
    *(_QWORD *)(sub_18740(&v25, (__int64)&v26, &v18) + 40) = 0;
    v7 = a3;
    v10 = sub_1AA80((__int64)v19, a3, 0.0, a5, a6, v8, v9);
    v13 = (_QWORD **)v27;
    v14 = v10;
    if ( v27 )
    {
      do
      {
        sub_188C0(v13[3]);
        v15 = v13;
        v13 = (_QWORD **)v13[2];
        v7 = 48;
        operator delete(v15, 0x30u);
      }
      while ( v13 );
    }
    if ( v23 )
    {
      *(_QWORD *)&v24 = 0;
      qfree(v23, v7, v11, v12);
    }
    if ( v20 )
    {
      *(_QWORD *)&v21 = 0;
      qfree(v20, v7, v11, v12);
    }
  }
  else
  {
    return 0;
  }
  return v14;
}
