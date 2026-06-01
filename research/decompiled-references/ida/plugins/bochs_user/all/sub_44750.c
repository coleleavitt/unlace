__int64 __fastcall sub_44750(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4, __int64 a5, _QWORD *a6)
{
  __int64 (__fastcall ***v9)(_QWORD, _UNKNOWN ***); // rdi
  __int64 v10; // r13
  unsigned int v11; // ebx
  __int64 v12; // rdx
  _QWORD **v13; // rdi
  _QWORD **v14; // rbp
  _QWORD *v15; // r12
  unsigned int ***v17; // rax
  char v18; // cl
  char v19; // al
  char v20; // cl
  __int64 v23; // [rsp+18h] [rbp-80h] BYREF
  _UNKNOWN **v24; // [rsp+20h] [rbp-78h] BYREF
  _QWORD **v25; // [rsp+28h] [rbp-70h]
  __int128 v26; // [rsp+30h] [rbp-68h]
  __int64 v27; // [rsp+40h] [rbp-58h]
  unsigned __int64 v28; // [rsp+58h] [rbp-40h]

  v9 = *(__int64 (__fastcall ****)(_QWORD, _UNKNOWN ***))(a1 + 48);
  v28 = __readfsqword(0x28u);
  v26 = 0;
  v25 = nullptr;
  v27 = 0;
  v24 = &off_71690;
  v10 = (**v9)(v9, &v24);
  v11 = sub_3CC20(*(_QWORD **)(a1 + 48), a2 & 0xFFFFFFFFFFFFF000LL, (a3 + 4095) & 0xFFFFFFFFFFFFF000LL, a4, a5, &v23);
  if ( !v11 )
  {
    v17 = (unsigned int ***)sub_26200((__int64)&v24);
    if ( (unsigned __int8)sub_440A0(a1, v17) )
    {
      v18 = *(_BYTE *)(v23 + 105);
      v19 = v18 | 2;
      v20 = v18 & 0xFD;
      if ( (a4 & 1) == 0 )
        v19 = v20;
      *(_BYTE *)(v23 + 105) = v19;
    }
    if ( a6 )
      *a6 = v23;
  }
  (***(void (__fastcall ****)(_QWORD, __int64))(a1 + 48))(*(_QWORD *)(a1 + 48), v10);
  v12 = v26;
  v13 = v25;
  v24 = &off_71690;
  v14 = v25;
  if ( 8LL * (_QWORD)v26 )
  {
    do
    {
      v15 = *v14;
      if ( *v14 )
      {
        if ( v15[1] )
        {
          v15[2] = 0;
          qfree();
        }
        operator delete(v15, 0x20u);
        v13 = v25;
        v12 = v26;
      }
      ++v14;
    }
    while ( v14 != &v13[v12] );
  }
  if ( v13 )
  {
    *(_QWORD *)&v26 = 0;
    qfree();
  }
  else
  {
    v27 = 0;
  }
  return v11;
}

