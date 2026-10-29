__int64 __fastcall sub_44B20(__int64 a1, unsigned __int64 a2, __int64 *a3)
{
  __int64 (__fastcall ***v4)(_QWORD, _UNKNOWN ***); // rdi
  __int64 v6; // r13
  unsigned int v7; // r12d
  __int64 v8; // rdx
  _QWORD **v9; // rdi
  _QWORD **v10; // rbx
  _QWORD *v11; // rbp
  unsigned int ***v13; // rax
  _UNKNOWN **v14; // [rsp+0h] [rbp-78h] BYREF
  _QWORD **v15; // [rsp+8h] [rbp-70h]
  __int128 v16; // [rsp+10h] [rbp-68h]
  __int64 v17; // [rsp+20h] [rbp-58h]
  unsigned __int64 v18; // [rsp+38h] [rbp-40h]

  v4 = *(__int64 (__fastcall ****)(_QWORD, _UNKNOWN ***))(a1 + 48);
  v18 = __readfsqword(0x28u);
  v16 = 0;
  v15 = nullptr;
  v14 = &off_71690;
  v17 = 0;
  v6 = (**v4)(v4, &v14);
  *a3 = (*a3 + 4095) & 0xFFFFFFFFFFFFF000LL;
  v7 = sub_3B7C0(*(_QWORD *)(a1 + 48), a2, a3);
  if ( !v7 )
  {
    v13 = (unsigned int ***)sub_26200((__int64)&v14);
    sub_440A0(a1, v13);
  }
  (***(void (__fastcall ****)(_QWORD, __int64))(a1 + 48))(*(_QWORD *)(a1 + 48), v6);
  v8 = v16;
  v9 = v15;
  v14 = &off_71690;
  v10 = v15;
  if ( 8LL * (_QWORD)v16 )
  {
    do
    {
      v11 = *v10;
      if ( *v10 )
      {
        if ( v11[1] )
        {
          v11[2] = 0;
          qfree();
        }
        operator delete(v11, 0x20u);
        v9 = v15;
        v8 = v16;
      }
      ++v10;
    }
    while ( v10 != &v9[v8] );
  }
  if ( v9 )
  {
    *(_QWORD *)&v16 = 0;
    qfree();
  }
  else
  {
    v17 = 0;
  }
  return v7;
}

