__int64 __fastcall sub_13D410(__int64 a1, __int64 a2, unsigned int a3, double a4, __m128 a5)
{
  __int64 v5; // rax
  __int64 v7; // rcx
  unsigned int v8; // ebp
  __int64 v10; // rdi
  __int64 v11; // r13
  __int64 v12; // r12
  _QWORD *v13; // rbx
  __int64 v14; // rdi
  __int64 v15; // rdi
  _QWORD *v16; // [rsp+8h] [rbp-C0h]
  __int64 v17[2]; // [rsp+10h] [rbp-B8h] BYREF
  __int64 (__fastcall **v18)(); // [rsp+20h] [rbp-A8h] BYREF
  char v19; // [rsp+28h] [rbp-A0h]
  __int64 v20; // [rsp+30h] [rbp-98h]
  __int128 v21; // [rsp+38h] [rbp-90h]
  __int128 v22; // [rsp+48h] [rbp-80h]
  __int64 v23; // [rsp+58h] [rbp-70h]
  int v24; // [rsp+60h] [rbp-68h]
  __int64 v25; // [rsp+68h] [rbp-60h]
  __int128 v26; // [rsp+70h] [rbp-58h]
  int v27; // [rsp+80h] [rbp-48h]
  unsigned __int64 v28; // [rsp+88h] [rbp-40h]

  v5 = *(_QWORD *)(a1 + 1496);
  v28 = __readfsqword(0x28u);
  *(_QWORD *)(v5 + 1344) = a1;
  *(_QWORD *)(*(_QWORD *)(a1 + 1496) + 1352LL) = 0;
  sub_1AED00(a1);
  v8 = sub_373100(a1, a2, a3, v7, a4);
  if ( !v8 )
  {
    v19 = 0;
    v21 = 0;
    v18 = off_4DD9D8;
    v20 = 0;
    v23 = 0;
    v25 = 0;
    v27 = 0;
    v24 = 64;
    v17[0] = 0;
    v17[1] = 0;
    v22 = 0;
    v26 = 0;
    v8 = sub_1D60C0(a1, (__int64)&v18, v17, a3);
    if ( !v8 )
    {
      v8 = sub_381200(a1, (__int64)&v18, (__int64)v17);
      if ( !v8 )
      {
        v16 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 1504) + 16LL))(
                          *(_QWORD *)(a1 + 1504),
                          a1);
        v8 = sub_1DF1C0(a1, v16, (__int64)&v18, v17, a3);
        if ( v16 )
          (*(void (__fastcall **)(_QWORD *))(*v16 + 8LL))(v16);
        if ( !v8 )
          v8 = sub_1382E0(a1, 0.0, a5);
      }
    }
    qfree(v17[0]);
    v10 = v25;
    v18 = off_4DD9D8;
    if ( v25 )
    {
      v11 = v26;
      if ( (_QWORD)v26 )
      {
        v12 = 0;
        do
        {
          v13 = (_QWORD *)(v10 + (v12 << 6));
          v14 = v13[5];
          if ( v14 )
          {
            v13[6] = 0;
            qfree(v14);
          }
          v15 = v13[2];
          if ( v15 )
          {
            v13[3] = 0;
            qfree(v15);
          }
          ++v12;
          v10 = v25;
        }
        while ( v11 != v12 );
      }
      *(_QWORD *)&v26 = 0;
      qfree(v10);
    }
    if ( v20 )
    {
      *(_QWORD *)&v21 = 0;
      qfree(v20);
    }
  }
  return v8;
}

